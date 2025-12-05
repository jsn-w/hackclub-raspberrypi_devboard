# hackclub-raspberrypi_devboard
The hackclub-raspberrypi_devboard is a custom development board designed to be simple and easy to use, similar to an Arduino, but build with a RaspberryPi microcontroller.
There are many features, such as compatibility with USB-C, supports breadboard pitch, and works with different software (Arduino, CircuitPython, etc).

# Features, materials
- 29 GPIO pins (4 of them are also ADC)
- Voltage Regulator
- 12 MHz crystal oscillator
- External flash chip

# Schematic!
<img width="2044" height="1364" alt="image" src="https://github.com/user-attachments/assets/e6a9e59f-d3f4-489d-be0a-d1fcc3abd500" />

# PCB
The PCB was made within KiCad and has two layers, where the top and bottom layer both connect to GND. It would be beneficial to have a four layer PCB instead of two since the routings would be done easier by setting adding another power plane for 3.3V or VCC.
<img height="500" alt="image" src="https://github.com/user-attachments/assets/2f389f00-357c-4886-9f3f-8985830dc8f4" /><img height="500" alt="image" src="https://github.com/user-attachments/assets/5078b818-c2b5-45cb-8216-cb93ab40465e" />

<p>There are currently errors for the flash chip since it was imported. The pads are too close to each other but I couldn't find a way to edit them.</p>
<img width="300" alt="image" src="https://github.com/user-attachments/assets/88b714c7-edf2-4f40-820b-19657d19666b" />

# Materials Used
- 1x USB_C_Receptacle_USB2.0_14P
- 1x MCP1700x-330xxTT
- 1x W25Q16JVUXIQ_TR
- 1x Crystal_SMD_3225
- 2x 01x20 pin connector
- 1x 01x03 pin connector
Capacitors
- 11x 100nF
- 2x  1uF
- 2x  10uF
- 2x  33pF
Resistors
- 4x 1.5k
- 1x 1k
- 2x 27
