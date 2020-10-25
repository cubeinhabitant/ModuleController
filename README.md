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
|  10 |  D7         | SceneActive LED |
|  11 |  D8         |                 |
|  12 | ~D9         | Servo1          |
|  13 | ~D10        | Servo2          |
|  14 | ~D11 COPI   | Flash Memory    |
|  15 |  D12 CIPO   | Flash Memory    |
|  16 |  D13 SCK    | Flash Memory    |
|  17 | 3V3         |                 |
|  18 | AREF        |                 |
|  19 |  A0 D14     | TriggerDigital1 |
|  20 |  A1 D15     | TriggerDigital2 |
|  21 |  A2 D16     | DFPlayerMini TX |
|  22 |  A3 D17     | DFPlayerMini RX |
|  23 |  A4 D18 SDA | I2C             |
|  24 |  A5 D19 SCL | I2C             |
|  25 |  A6         |                 |
|  26 |  A7         |                 |
|  27 | 5V          |                 |
|  28 | RESET       |                 |
