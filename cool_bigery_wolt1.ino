
int sensorValue=0;
void setup()
{
pinMode(5, OUTPUT);
pinMode(2 , INPUT);
}

void loop()
{
sensorValue = analogRead(2);
digitalWrite(5, HIGH);
delay(sensorValue);
digitalWrite(5, LOW);
delay(sensorValue);
}