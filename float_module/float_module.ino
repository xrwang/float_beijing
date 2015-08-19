// ATMEL ATTINY85
//
// +-\/-+
// PB5 1| |8 VCC
// (AI 3) PB3 2| |7 PB2 (AI 1)
// (AI 2) PB4 3| |6 PB1 PWM
// GND 4| |5 PB0 PWM
//
//to load connect VCC to 5V and GND to GND
int REDPin = 2; // RED pin of the LED to PWM pin 4
int GREENPin = 1; // GREEN pin of the LED to PWM pin 5
int BLUEPin = 0; // BLUE pin of the LED to PWM pin 6
int sensor= 0;
void setup()
{

 //rgb led pins
 pinMode(REDPin, OUTPUT);
 pinMode(GREENPin, OUTPUT);
 pinMode(BLUEPin, OUTPUT);
 }
void loop()
{
 //sensor values
 sensor= analogRead(2);
//the threshold values will vary based on your sensor, it is best to 
//calibrate them and compare to other data. This is a
//helpful study: //http://www.staceyk.org/airSensors/sensoroutput.php
if (sensor < 100){ //turn LED green VOC

 digitalWrite(REDPin, LOW);
 digitalWrite(GREENPin, HIGH);
 digitalWrite(BLUEPin, LOW);
 }

if (500< sensor< 530){ // yellow VOC
 digitalWrite(REDPin, HIGH);
 digitalWrite(GREENPin, LOW);
 digitalWrite(BLUEPin, HIGH);
 }

 if (100< sensor< 120){ //red VOC

 digitalWrite(REDPin, HIGH);
 digitalWrite(GREENPin, LOW);
 digitalWrite(BLUEPin, LOW);
 }

 if (sensor> 120){ // pink VOC

 digitalWrite(REDPin, LOW);
 digitalWrite(GREENPin, LOW);
 digitalWrite(BLUEPin, HIGH);
 }
}

