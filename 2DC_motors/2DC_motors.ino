int Pot=A0;
int val;
void setup(){
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  
  digitalWrite(6,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(3,HIGH);
  
  val=analogRead(Pot);
  val=map(val,0,1023,0,255);
  Serial.println(val);
  analogWrite(6,val);
   
}
