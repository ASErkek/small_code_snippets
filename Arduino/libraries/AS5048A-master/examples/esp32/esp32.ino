#include <Arduino.h>
#include <AS5048A.h>

AS5048A angleSensor(14,12,13,15);//SCLK, MISO, MOSI, SS

void setup()
{
	Serial.begin(19200);
	angleSensor.begin();
}

void loop()
{
	delay(1000);

	float val = angleSensor.getRotationInDegrees();
	Serial.print("\nGot rotation of: ");
	Serial.println(val);
	Serial.print("State: ");
	angleSensor.printState();
	Serial.print("Errors: ");
	Serial.println(angleSensor.getErrors());
}
