void setup() {
  // put your setup code here, to run once:

pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

//0
digitalWrite(8, LOW);
digitalWrite(9, LOW);
digitalWrite(10, LOW);
delay(1000);

//1
digitalWrite(8, HIGH);
digitalWrite(9, LOW);
digitalWrite(10, LOW);
delay(1000);

//2
digitalWrite(8, LOW);
digitalWrite(9, HIGH);
digitalWrite(10, LOW);
delay(1000);

//3
digitalWrite(8, HIGH);
digitalWrite(9, HIGH);
digitalWrite(10, LOW);
delay(1000);

//4
digitalWrite(8, LOW);
digitalWrite(9, LOW);
digitalWrite(10, HIGH);
delay(1000);

//5
digitalWrite(8, HIGH);
digitalWrite(9, LOW);
digitalWrite(10, HIGH);
delay(1000);

//6
digitalWrite(8, LOW);
digitalWrite(9, HIGH);
digitalWrite(10, HIGH);
delay(1000);

//7
digitalWrite(8, HIGH);
digitalWrite(9, HIGH);
digitalWrite(10, HIGH);
delay(1000);

}