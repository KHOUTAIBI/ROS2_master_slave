import tkinter as tk
from tkinter import ttk, messagebox
import serial
import threading
import time



class SerialInterface:
    def __init__(self, port='/dev/ttyACM1', baudrate=115_200, callback=None):
        self.port = port
        self.baudrate = baudrate
        self.ser = None
        self.running = True
        self.callback = callback  # Función para manejar los datos recibidos
        self.connect()

    def connect(self):
        try:
            # Define the serial port connection
            self.ser = serial.Serial(self.port, self.baudrate, timeout=1)
        except serial.SerialException:
            self.ser = None

    def is_connected(self):
        # Check if the serial port is open
        return self.ser is not None and self.ser.is_open

    def send_data(self, data):
        if self.is_connected():
            # Send the data to the serial port adding a newline as a delimiter
            self.ser.write((data + '\n').encode('utf-8'))

    def read_data(self):
        while self.running and self.is_connected():
            # Check if there is data available to read (data > 0)
            if self.ser.in_waiting > 0:
                # Read the incoming data from the serial port
                data = self.ser.readline().decode('utf-8').strip()
                if data:
                    try:
                        # Parse the incoming data as a vector of floats
                        # Using a for method to remove the curly braces, split by commas, convert to float and store in a list
                        vector = [float(x) for x in data.strip('{}').split(',')]
                        # Call the callback function to update GUI
                        if self.callback:
                            self.callback(vector)
                    except ValueError:
                        if self.callback:
                            self.callback(["Invalid data received"])
            time.sleep(0.0001)

    def stop(self):
        self.running = False
        if self.is_connected():
            self.ser.close()

    def stop_reading(self):
        self.reading = False

class App:
    def __init__(self, root, serial_interface):
        self.serial_interface = serial_interface
        self.root = root
        self.root.title("Serial Communication Interface")

        # Connection status label
        self.connection_status_label = tk.Label(root, text="Checking connection...")
        self.connection_status_label.grid(row=0, column=0, columnspan=2, pady=5)

        # Input fields
        self.modo_control_label = tk.Label(root, text="Modo Control:")
        self.modo_control_label.grid(row=1, column=0)
        self.modo_control_entry = tk.Entry(root)
        self.modo_control_entry.grid(row=1, column=1)

        self.setpoint_label = tk.Label(root, text="Setpoint:")
        self.setpoint_label.grid(row=2, column=0)
        self.setpoint_entry = tk.Entry(root)
        self.setpoint_entry.grid(row=2, column=1)

        self.kp_label = tk.Label(root, text="KP:")
        self.kp_label.grid(row=3, column=0)
        self.kp_entry = tk.Entry(root)
        self.kp_entry.grid(row=3, column=1)

        self.pwm_label = tk.Label(root, text="PWM:")
        self.pwm_label.grid(row=4, column=0)
        self.pwm_entry = tk.Entry(root)
        self.pwm_entry.grid(row=4, column=1)

        # Buttons arranged in pairs
        self.send_button = ttk.Button(root, text="Start Sending", command=self.start_sending)
        self.send_button.grid(row=5, column=0)

        self.stop_button = ttk.Button(root, text="Stop Sending", command=self.stop_sending)
        self.stop_button.grid(row=5, column=1)

        self.start_reading_button = ttk.Button(root, text="Start Reading", command=self.start_reading)
        self.start_reading_button.grid(row=6, column=0)

        self.stop_reading_button = ttk.Button(root, text="Stop Reading", command=self.stop_reading)
        self.stop_reading_button.grid(row=6, column=1)

        # Labels and text fields for displaying received data
        data_names = ["Encoder", "Velocity", "AccX", "AccY", "AccZ", "GyroX", "GyroY", "GyroZ"]
        self.data_labels = []
        self.data_entries = []
        for i, name in enumerate(data_names):
            label = tk.Label(root, text=name + ":")
            label.grid(row=7 + i, column=0)
            self.data_labels.append(label)

            entry = tk.Entry(root)
            entry.grid(row=7 + i, column=1)
            self.data_entries.append(entry)

        self.sending = False

        # Start a thread to monitor the connection status
        threading.Thread(target=self.check_connection_status, daemon=True).start()

    def start_sending(self):
        if not self.serial_interface.is_connected():
            messagebox.showerror("Error", "Serial port not connected.")
            return

        self.sending = True
        threading.Thread(target=self.send_data_periodically, daemon=True).start()

    def stop_sending(self):
        self.sending = False

    def start_reading(self):
        if not self.serial_interface.is_connected():
            messagebox.showerror("Error", "Serial port not connected.")
            return

        self.serial_interface.callback = self.update_output_text  # Set callback to update GUI
        threading.Thread(target=self.serial_interface.read_data, daemon=True).start()

    def stop_reading(self):
        self.serial_interface.stop_reading()

    def send_data_periodically(self):
        while self.sending:
            modo_control = self.modo_control_entry.get()
            setpoint = self.setpoint_entry.get()
            kp = self.kp_entry.get()
            pwm = self.pwm_entry.get()
            
            # Send the data as a string with the format {modo_control,setpoint,kp,pwm}
            data = f"{{{modo_control},{setpoint},{kp},{pwm}}}"
            self.serial_interface.send_data(data)
            time.sleep(0.1)

    def update_output_text(self, data):
        if isinstance(data, list) and len(data) == len(self.data_entries):
            for i, value in enumerate(data):
                self.data_entries[i].delete(0, tk.END)
                self.data_entries[i].insert(0, str(value))
        elif isinstance(data, list) and data[0] == "Invalid data received":
            print("ErrorData")
            #messagebox.showwarning("Warning", data[0])

    def check_connection_status(self):
        while True:
            if self.serial_interface.is_connected():
                self.connection_status_label.config(text="Connected", fg="green")
            else:
                self.connection_status_label.config(text="Disconnected", fg="red")
                self.serial_interface.connect()  # Try to reconnect if disconnected
            time.sleep(1)

if __name__ == "__main__":
    serial_interface = SerialInterface(port='/dev/ttyACM0', baudrate=115_200)
    root = tk.Tk()
    app = App(root, serial_interface)
    root.mainloop()
    serial_interface.stop()

