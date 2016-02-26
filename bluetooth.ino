     int ledpin=13;
int state;
int flag=0;            
void setup()
{
  Serial.begin(9600);
  pinMode(ledpin,OUTPUT);
}
void loop()
{
  if(Serial.available()>0)
  {
    state=Serial.read();
    flag=0;
  }
  if(state=='1')
  {
    digitalWrite(ledpin,HIGH);
    if(flag==0)
    {
      Serial.println("LED is on");
      flag=1;
    }
  }
    if(state=='0')
    {
      digitalWrite(ledpin,LOW);
      if(flag==0)
      {
        Serial.println("LED is off");
        flag=0;
      }
    }
  
}
