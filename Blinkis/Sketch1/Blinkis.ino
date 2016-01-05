/*
 Name:		Sketch1.ino
 Created:	1/5/2016 7:53:54 PM
 Author:	Egil
*/

// the setup function runs once when you press reset or power the board
void setup() {
	Serial.begin(9600);
}

// the loop function runs over and over again until power down or reset
void loop() {
	Serial.println("Hello world!");
	delay(2000);
}
