int ledPin = 3;
int ledPin2 = 5;
int buttonPin = 7;


void setup() {
  pinMode(ledPin,OUTPUT);
  pinMode(ledPin2,OUTPUT);
  pinMode(buttonPin,INPUT);

}

void loop() {
 if (digitalRead(buttonPin)==HIGH){
  checkButton();
 }

}


void checkButton(){
digitalWrite(ledPin,HIGH);
 digitalWrite(ledPin2,HIGH);
 delay(500);
 digitalWrite(ledPin,LOW);
 digitalWrite(ledPin2,LOW);
 delay(500);
}