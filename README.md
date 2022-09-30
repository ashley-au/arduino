# arduino-USB-to-serial

I needed this when debugging a pcDuino. Sets the RX and TX pin inputs to ensure that there's no conflict between the ATmega on the Arduino-compatible and the pcDuino. Connect the pins from the pcDuino to the headers on the Arduino-compatible board. 

Connect the pcDuino transmit pin to the TX pin on the Arduino-compatible and the pcDuino receive pin to the RX pin. The label on the Arduino-compatible headers refers to the direction of the data relative to the ATmega, not the serial bridge device.
