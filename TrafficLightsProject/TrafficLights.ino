int red = 13;
int yellow = 12;
int green = 11;

int red1=10;
int yellow1=9;
int green1=8;


void setup(){
    pinMode(red, OUTPUT);
    pinMode(yellow, OUTPUT);
    pinMode(green, OUTPUT);
        pinMode(red1, OUTPUT);
    pinMode(yellow1, OUTPUT);
    pinMode(green1, OUTPUT);

}

void loop(){
    changeLights();
      delay(5000);
}

void changeLights(){
  digitalWrite(red1,LOW);
    // green off, yellow on for 3 seconds
    digitalWrite(green, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(red, HIGH);
    digitalWrite(green1, HIGH);
    delay(5000);
    digitalWrite(green1, HIGH);
    delay(3000);
    digitalWrite(green1,LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(red, LOW);
    digitalWrite(yellow1,HIGH);
    digitalWrite(red, HIGH);
    delay(8000);
    digitalWrite(red,LOW);
    digitalWrite(yellow1,LOW);
    digitalWrite(red1,HIGH);
    digitalWrite(green,HIGH);
    delay(3000); 
    digitalWrite(green,HIGH);
    delay(8000);
    digitalWrite(green, LOW);
    digitalWrite(yellow, HIGH);
    delay(3000);


        
        


}
    
