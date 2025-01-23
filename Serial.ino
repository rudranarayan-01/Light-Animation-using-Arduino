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
  
   pinMode(led1,OUTPUT);
   pinMode(led2,OUTPUT);
   pinMode(led3,OUTPUT);
   pinMode(led4,OUTPUT);
   pinMode(led5,OUTPUT);
   pinMode(led6,OUTPUT);

   pinMode(led7,OUTPUT);

   pinMode(led8,OUTPUT);
   pinMode(led9,OUTPUT);
   pinMode(led10,OUTPUT);
   pinMode(led11,OUTPUT);
   pinMode(led12,OUTPUT);
   pinMode(led13,OUTPUT);

  
}

void loop() 
{
  
  // blink_1();
  break1();
  
}

/////////////pattern 1///////////////////////////////////////////////////////////////////////////////////////////////////
void blink_1()
{
  int t=100;
  
  digitalWrite(led1,HIGH);
  delay(t);
  digitalWrite(led2,HIGH);
  delay(t);
  digitalWrite(led3,HIGH);
  delay(t);
  digitalWrite(led4,HIGH);
  delay(t);
  digitalWrite(led5,HIGH);
  delay(t);
  digitalWrite(led6,HIGH);
  delay(t);
  digitalWrite(led7,HIGH);
  delay(t);
  digitalWrite(led8,HIGH);
  delay(t);
  digitalWrite(led9,HIGH);
  delay(t);
  digitalWrite(led10,HIGH);
  delay(t);
  digitalWrite(led11,HIGH);
  delay(t);
  digitalWrite(led12,HIGH);
  delay(t);
  digitalWrite(led13,HIGH);
  delay(t);
  //////////////////////////
  
  digitalWrite(led7,LOW);
  delay(t);
  // digitalWrite(led9,LOW);
  // delay(t);
  // digitalWrite(led10,LOW);
  // delay(t);
  // digitalWrite(led11,LOW);
  // delay(t);
  // digitalWrite(led12,LOW);
  // delay(t);
  // digitalWrite(led13,LOW);
  // delay(t);

digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
digitalWrite(led3, LOW);
digitalWrite(led4, LOW);
digitalWrite(led5, LOW);
digitalWrite(led6, LOW);
digitalWrite(led7, LOW);
digitalWrite(led8, LOW);
digitalWrite(led9,LOW);
digitalWrite(led10,LOW);
digitalWrite(led11,LOW);
digitalWrite(led12,LOW);
digitalWrite(led13,LOW);


}

/// ANOTHER TRANSITION EFFECTTS

void break1()
{
  int t=100;
  
  digitalWrite(led7,HIGH);
  delay(t);

  digitalWrite(led6,HIGH);
  digitalWrite(led8,HIGH);
  delay(t);

  digitalWrite(led5,HIGH);
  digitalWrite(led9,HIGH);
  delay(t);

  digitalWrite(led4,HIGH);
  digitalWrite(led10,HIGH);
  delay(t);

  digitalWrite(led3,HIGH);
  digitalWrite(led11,HIGH);
  delay(t);

  digitalWrite(led2,HIGH);
  digitalWrite(led12,HIGH);
  delay(t);

  digitalWrite(led1,HIGH);
  digitalWrite(led13,HIGH);
  delay(t);
  
  // LOW

 

  digitalWrite(led1,LOW);
  digitalWrite(led13,LOW);
  delay(t);

  digitalWrite(led2,LOW);
  digitalWrite(led12,LOW);
  delay(t);

  digitalWrite(led3,LOW);
  digitalWrite(led11,LOW);
  delay(t);

  digitalWrite(led4,LOW);
  digitalWrite(led10,LOW);
  delay(t);

  digitalWrite(led5,LOW);
  digitalWrite(led9,LOW);
  delay(t);

  digitalWrite(led6,LOW);
  digitalWrite(led8,LOW);
  delay(t);

  

  digitalWrite(led7,LOW);
  delay(200);
 
 
digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
digitalWrite(led3, LOW);
digitalWrite(led4, LOW);
digitalWrite(led5, LOW);
digitalWrite(led6, LOW);
digitalWrite(led7, LOW);
digitalWrite(led8, LOW);
digitalWrite(led9,LOW);
digitalWrite(led10,LOW);
digitalWrite(led11,LOW);
digitalWrite(led12,LOW);
digitalWrite(led13,LOW);


}
