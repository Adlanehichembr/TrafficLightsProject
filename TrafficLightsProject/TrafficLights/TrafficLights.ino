int First_Red = 13;
int First_Yellow = 12;
int First_Green = 11;
int Second_Red = 10;
int Second_Yellow = 9;
int Second_Green = 8;

void setup(){
    pinMode(First_Red, OUTPUT);
    pinMode(First_Yellow, OUTPUT);
    pinMode(First_Green, OUTPUT);
    pinMode(Second_Red, OUTPUT);
    pinMode(Second_Yellow, OUTPUT);
    pinMode(Second_Green, OUTPUT);
}
void loop(){
    changeLights();
      delay(5000);
}

void changeLights(){
  digitalWrite(Second_Red, LOW);
    // green off, yellow on for 3 seconds
    digitalWrite(First_Green, LOW);
    digitalWrite(First_Yellow, LOW);
    digitalWrite(First_Red, HIGH);
    digitalWrite(Second_Green, HIGH);
    delay(5000);
    digitalWrite(Second_Green, HIGH);
    delay(3000);
    digitalWrite(Second_Green, LOW);
    digitalWrite(First_Yellow, LOW);
    digitalWrite(First_Red, LOW);
    digitalWrite(Second_Yellow, HIGH);
    digitalWrite(First_Red, HIGH);
    delay(8000);
    digitalWrite(First_Red, LOW);
    digitalWrite(Second_Yellow, LOW);
    digitalWrite(Second_Red, HIGH);
    digitalWrite(First_Green, HIGH);
    delay(3000); 
    digitalWrite(First_Green, HIGH);
    delay(8000);
    digitalWrite(First_Green, LOW);
    digitalWrite(First_Yellow, HIGH);
    delay(3000);

}
    
