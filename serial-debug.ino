// Simple sketch to turn an Arduino-compatible device into a
//  USB-to-serial bridge.

// Note that there is no need to include *any* Serial functions
//  *at all*. Doing so would only serve to override the
//  pinMode() commands. The baud rate will be set by the
//  computer when the serial program connects to the bridge
//  device.

void setup()
{
  // Make the RX/TX lines inputs, so they don't contend with
  //  the lines on the pcDuino and cause data issues or damage.
  pinMode(0, INPUT);
  pinMode(1, INPUT);
}

void loop()
{
  // Nothing here, because we don't *need* anything here.
}
