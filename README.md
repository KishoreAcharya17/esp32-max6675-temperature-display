# ESP32 MAX6675 Temperature Display

An ESP32-based real-time temperature monitoring project using a MAX6675 K-type thermocouple and a TTGO T-Display.

The MAX6675 reads the temperature from the K-type thermocouple and sends the measurement to the ESP32. The ESP32 displays the temperature on the onboard TFT display and also sends the reading to the Serial Monitor.

## Features

- ESP32-based temperature monitoring
- MAX6675 K-type thermocouple
- TTGO T-Display with ST7789 TFT
- Real-time temperature display
- Serial Monitor temperature output
- Temperature updated every 1 second
- Temperature displayed in Celsius

## Hardware

- TTGO T-Display ESP32
- MAX6675 K-type thermocouple module
- K-type thermocouple
- USB cable
- Jumper wires

## Hardware Connections

### MAX6675 to ESP32

| MAX6675 Pin | ESP32 Pin |
|-------------|-----------|
| VCC         | 3.3V      |
| GND         | GND       |
| CS          | GPIO 26   |
| SO          | GPIO 27   |
| SCK         | GPIO 25   |

### TFT Display

The TTGO T-Display contains an onboard ST7789 TFT display.

The display backlight is controlled using:

```text
GPIO 4
