int buttonApin = 8;
int buttonBpin = 9;
int buttonCpin = 10;
int buttonDpin = 11;

#define BLUE 2
#define GREEN 4
#define RED 3
const int ledPin = 13;//the led attach to

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buttonApin, INPUT_PULLUP);  
  pinMode(buttonBpin, INPUT_PULLUP);
  pinMode(buttonCpin, INPUT_PULLUP);  
  pinMode(buttonDpin, INPUT_PULLUP);

  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);

  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(buttonApin) == LOW){
    digitalWrite(ledPin,HIGH);
    Serial.println(1);
  }
  if(digitalRead(buttonBpin) == LOW){
    digitalWrite(ledPin,LOW);
    Serial.println(2);
  }
  if(digitalRead(buttonCpin) == LOW){
    digitalWrite(ledPin,HIGH);
    Serial.println(3);
  }
  if(digitalRead(buttonDpin) == LOW){
    digitalWrite(ledPin,LOW);
    Serial.println(4);
  }

  switch (Serial.read())
  {
    case 'R':
    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, LOW); 
    break;
    case 'G':
    digitalWrite(RED, LOW);
    digitalWrite(GREEN, HIGH);
    digitalWrite(BLUE, LOW); 
    break;
    case 'B':
    digitalWrite(RED, LOW);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, HIGH);
    break;
  } 
}
