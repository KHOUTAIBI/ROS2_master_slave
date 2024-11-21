from setuptools import setup

package_name = 'stm_station'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
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
            'stm_control_node_master_slave = stm_station.stm_control_node_master_slave:main'
        ],
    },
)
