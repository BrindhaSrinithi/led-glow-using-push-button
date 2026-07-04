int sw=5;
int led=4;
void setup()
{
  Serial.begin(9600);
  pinMode(sw,INPUT);
  pinMode(led,OUTPUT);
}
void loop()
{
  int value=digitalRead(sw);
  if(value==1)
  {
    digitalWrite(led,1);
    Serial.println("led on");
  }
  else
  {
    digitalWrite(led,0);
    Serial.println("led is off");
  }
  delay(1000);
  
}