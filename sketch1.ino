
void setup() {
  // put your setup code here, to run once:
pinMode(13, OUTPUT);  
pinMode(12, OUTPUT);  
pinMode(11, OUTPUT);  
pinMode(10, OUTPUT);  
pinMode(9, OUTPUT);  
}

void loop() {
/*
int i = 13;
while (i)
{
  digitalWrite(i,HIGH);
  delay(100);
  digitalWrite(i,LOW);
  i--;
  if (i < 9) {break;}
  }
  */

 digitalWrite(10,HIGH);
 delay(20000);
 digitalWrite(10,LOW);
 digitalWrite(12,HIGH);
 delay(10000);
 digitalWrite(12,LOW);
  digitalWrite(11,HIGH);
 delay(3000);
 digitalWrite(11,LOW);
 
 



}
