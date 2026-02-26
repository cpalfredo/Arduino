int gas = 0;

void setup() {

Serial.begin(9600);
pinMode(A0, INPUT);
pinMode(2, OUTPUT);
pinMode(3,OUTPUT);
pinMode(4, OUTPUT);
}

void loop() {
 gas = analogRead(A0);
 Serial.println(gas);

if (gas > 650){ 

  digitalWrite(3,HIGH);
  digitalWrite(2,LOW);

  digitalWrite(4,HIGH);
  delay(1000);
  digitalWrite(4,LOW);
  delay(1000);
  
}
else {

  digitalWrite(3,LOW);
  digitalWrite(2,HIGH);
  digitalWrite(4,LOW);
}
Serial.println(gas);
}
