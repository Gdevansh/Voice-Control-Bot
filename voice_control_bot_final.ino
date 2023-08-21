#define m1 12
#define m2 7
#define m3 8
#define m4 9
#define en1 10
#define en2 11
int M1_speed=128;
int M2_speed=128;

void setup()
{
  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);
  pinMode(m3, OUTPUT);
  pinMode(m4, OUTPUT);
  pinMode(en1, OUTPUT);
  pinMode(en2, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if (Serial.available())
  {
  String voice = Serial.readString();
  Serial.println(voice);
  if(voice == "go ahead" || "forward" || "Forward" || "Go ahead" || "Go Ahead" || "move forward" || "Move forward" || "ahead" || "goahead")
  {
    digitalWrite(m1, HIGH);
    digitalWrite(m2, LOW);
    digitalWrite(m3, HIGH);
    digitalWrite(m4, LOW);
    analogWrite(en1,M1_speed);
    analogWrite(en2,M2_speed);
    
   }
   if(voice == "reverse" || "backward" || "Backward" || "Reverse" || "go back")
  {
    digitalWrite(m2, HIGH);
    digitalWrite(m1, LOW);
    digitalWrite(m4, HIGH);
    digitalWrite(m3, LOW);
    analogWrite(en1,M1_speed);
    analogWrite(en2,M2_speed);
   }
   if(voice == "go left")
  {
    digitalWrite(m1, LOW);
    digitalWrite(m2, LOW);
    digitalWrite(m3, HIGH);
    digitalWrite(m4, LOW);
    delay(500);
    digitalWrite(m1, LOW);
    digitalWrite(m2, LOW);
    digitalWrite(m3, LOW);
    digitalWrite(m4, LOW);
    delay(300);
    digitalWrite(m1, HIGH);
    digitalWrite(m2, LOW);
    digitalWrite(m3, HIGH);
    digitalWrite(m4, LOW);
    analogWrite(en1,M1_speed);
    analogWrite(en2,M2_speed);
  
   }
   if(voice == "go right")
  {
    digitalWrite(m1, HIGH);
    digitalWrite(m2, LOW);
    digitalWrite(m3, LOW);
    digitalWrite(m4, LOW);
    delay(500);
    digitalWrite(m1, LOW);
    digitalWrite(m2, LOW);
    digitalWrite(m3, LOW);
    digitalWrite(m4, LOW);
    delay(300);
    digitalWrite(m1, HIGH);
    digitalWrite(m2, LOW);
    digitalWrite(m3, HIGH);
    digitalWrite(m4, LOW);
    analogWrite(en1,M1_speed);
    analogWrite(en2,M2_speed);
   }
   if(voice == "rotate clockwise")
   {
    digitalWrite(m1, HIGH);
    digitalWrite(m2, LOW);
    digitalWrite(m3, LOW);
    digitalWrite(m4, LOW);
    analogWrite(en1,M1_speed);
    analogWrite(en2,M2_speed);
   }
   if(voice == "rotate anticlockwise") 
   {
    digitalWrite(m1, LOW);
    digitalWrite(m2, LOW);
    digitalWrite(m3, HIGH);
    digitalWrite(m4, LOW);
    analogWrite(en1,M1_speed);
    analogWrite(en2,M2_speed);
   }
  else if(voice == "brake" || "break" || "stop" || "top")
  {
    digitalWrite(m1, LOW);
    digitalWrite(m2, LOW);
    digitalWrite(m3, LOW);
    digitalWrite(m4, LOW);
  }
 }
}
