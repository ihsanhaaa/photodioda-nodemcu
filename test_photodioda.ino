

//Code for Detection of Object using IR sensor with NODEMCU

int value; // variable to store value read on digital pin 

void setup() 
{ 
pinMode(2, INPUT); // initialize digital pin 2 as an input (pin D4)
Serial.begin(9600); 
} 

void loop() 
{ 
value = digitalRead(2); // read value on pin 2 (pin D4)
Serial.println(value); // print value on serial terminal 
if(value==1)
{
  Serial.print("Kosong");
}
else
{
  Serial.print("Ada");
} 
delay(1000); // wait for 1 second 
}
