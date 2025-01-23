int led1 = 1;
int led2 = 2;
int led3 = 3;
int led4 = 4;
int led5 = 5;
int led6 = 6;
int led7 = 7;// yellow
int led8 = 8;
int led9 = 9;
int led10 = 10;
int led11= 11;
int led12= 12;
int led13= 13;

void setup() {
   pinMode(led9,OUTPUT);
   pinMode(led10,OUTPUT);
   pinMode(led11,OUTPUT);
   pinMode(led12,OUTPUT);
   pinMode(led13,OUTPUT);

  
}

void loop() 
{
  
  // blink_1();
  // break1();
  test1();
  
}


void test1()
{
  int t=200;
  
  digitalWrite(led11,HIGH);
  delay(t);

  digitalWrite(led12,HIGH);
  digitalWrite(led10,HIGH);
  delay(t);

  digitalWrite(led9,HIGH);
  digitalWrite(led13,HIGH);
  delay(t);

  // LOW
  digitalWrite(led9,LOW);
  digitalWrite(led13,LOW);
  delay(t);
  
  digitalWrite(led12,LOW);
  digitalWrite(led10,LOW);
  delay(t);


  digitalWrite(led11,LOW);
  delay(200);
 
 
digitalWrite(led9,LOW);
digitalWrite(led10,LOW);
digitalWrite(led11,LOW);
digitalWrite(led12,LOW);
digitalWrite(led13,LOW);


}