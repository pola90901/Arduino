int d;
int distance;
void setup() {
  pinMode(6,OUTPUT); //trig
  
  pinMode(3,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);

  
  pinMode(7,INPUT);//echo
  Serial.begin(9600);
}

void loop() {
  digitalWrite(6,LOW);
  delayMicroseconds(2);
  digitalWrite(6,HIGH);
  delayMicroseconds(10);
  digitalWrite(6,LOW);
  d=pulseIn(7,HIGH);
  distance=d*0.034/2;
if(distance>20)
{
  digitalWrite(8,LOW);
digitalWrite(2,LOW);
digitalWrite(3,HIGH);
digitalWrite(4,LOW);
digitalWrite(5,HIGH);

}
else
{

digitalWrite(3,LOW);
digitalWrite(2,LOW);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
delay(100);


digitalWrite(2,HIGH);
digitalWrite(3,LOW);
digitalWrite(4,HIGH);
digitalWrite(5,LOW);
delay(700);

digitalWrite(2,LOW);
digitalWrite(3,HIGH);
digitalWrite(4,HIGH);
digitalWrite(5,LOW);
delay(1000);
  }     
}
