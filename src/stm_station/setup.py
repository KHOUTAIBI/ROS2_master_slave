from setuptools import setup
import os
from glob import glob

package_name = 'stm_station'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),                  # Add ament resource index file for the package
        ('share/' + package_name, ['package.xml']),         # Add the package.xml file to provide metadata about the package
        (os.path.join('share', package_name, 'launch'),     
        glob('launch/*.py')),                               # Add all Python launch files from the launch/ directory
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='iliass',
    maintainer_email='iliass@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'stm_serial_node = stm_station.stm_serial_node:main',
            'stm_serial_node_pub_sub = stm_station.stm_serial_node_pub_sub:main',
            'stm_control_node_poscontrol = stm_station.stm_control_node_poscontrol:main',
            'stm_control_node_master_slave = stm_station.stm_control_node_master_slave:main',
            'stm_node_slave=stm_station.stm_node_slave:main',
            'stm_control_node_master_slave_impedance_control = stm_station.stm_control_node_master_slave_impedance_control:main'
        ],
    },
)
