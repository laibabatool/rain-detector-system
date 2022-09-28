const int digital_pin = 2;
const int analog_pin = A0;
const int led = 4;

int val_analogique;

void setup()
{
  pinMode(digital_pin, INPUT);
  pinMode(analog_pin, INPUT);
  pinMode(led , OUTPUT);
  Serial.begin(9600);
}

void loop()
{
if(digitalRead(digital_pin) == LOW) 
  {
    digitalWrite(led , HIGH);
    Serial.println("Digital value : wet"); 
    delay(10); 
  }
else
  {
    digitalWrite(led, LOW);
    Serial.println("Digital value : dry");
    delay(10); 
  }
val_analogique=analogRead(analog_pin); 
 Serial.print("Analog value : ");
 Serial.println(val_analogique); 
 Serial.println("");
  delay(1000);
}
