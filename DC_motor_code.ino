int in4=6;
int in3=5;
int in1=4;
int in2=3;

void setup()
{
  pinMode(in4,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
}
void loop()
{
digitalWrite(6,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(4,HIGH);
   digitalWrite(3,LOW);
  delay(1000);
 
}
