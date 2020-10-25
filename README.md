# ModuleController
Module based prop controller

The prop controller is composed of a custom PCB with 2 optoisolated inputs,
2 12V solid state outputs, 2 servo outputs, and an I2C output compatible
with STEMMA QT and Qwiic.

The "module" part of the controller comes from the custom PCB providing
a headers for plugging in an Arduino Nano compatible board and a DF Player
Mini.

# Arduino Nano pinout

| Pin | Function    | Usage           |
|-----|-------------|-----------------|
|   1 | D1/TX       |                 |
|   2 | D0/RX       |                 |
|   3 | RESET       |                 |
|   4 | GND         |                 |
|   5 |  D2         |                 |
|   6 | ~D3         |                 |
|   7 |  D4         | Flash Memory CS |
|   8 | ~D5         | DataOutput1PWM  |
|   9 | ~D6         | DataOutput2PWM  |
|  10 |  D7         |                 |
|  11 |  D8         |                 |
|  12 | ~D9         | Servo1          |
|  13 | ~D10        | Servo2          |
|  14 | ~D11 COPI   | Flash Memory    |
|  15 |  D12 CIPO   | Flash Memory    |
|  16 |  D13 SCK    | Flash Memory    |
|  17 | 3V3         |                 |
|  18 | AREF        |                 |
|  19 |  D14 A0     | TriggerDigital1 |
|  20 |  D15 A1     | TriggerDigital2 |
|  21 |  D16 A2     | DFPlayerMini TX |
|  22 |  D17 A3     | DFPlayerMini RX |
|  23 |  D18 A4 SDA | I2C             |
|  24 |  D19 A5 SCL | I2C             |
|  25 |  D20 A6     | ~~SceneActive LED~~ |
|  26 |  D21 A7     |                 |
|  27 | 5V          |                 |
|  28 | RESET       |                 |
