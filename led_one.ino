void setup() {
  pinMode(8, OUTPUT);
  pinMode(12, INPUT);
  pinMode(7, OUTPUT);  pinMode(6, OUTPUT); // LEFT Motor
  pinMode(5, OUTPUT);  pinMode(4, OUTPUT); // RIGHT Motor
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    char ch = Serial.read();
    if (ch == 'f') { // forward
      digitalWrite(7, 0); digitalWrite(6, 1); //ccw
      digitalWrite(5, 1); digitalWrite(4, 0); //cw
    } else if (ch == 'b') { // backward
      digitalWrite(7, 1); digitalWrite(6, 0);
      digitalWrite(5, 0); digitalWrite(4, 1);
    } else if (ch == 'l') { // left
      digitalWrite(7, 0); digitalWrite(6, 0);
      digitalWrite(5, 1); digitalWrite(4, 0);
    } else if (ch == 'r') { // right
      digitalWrite(7, 0); digitalWrite(6, 1);
      digitalWrite(5, 0); digitalWrite(4, 0);
    } else if (ch == 's') { // stop
      digitalWrite(7, 0); digitalWrite(6, 0);
      digitalWrite(5, 0); digitalWrite(4, 0);
    }
  } 
  if (digitalRead(12)==1){
    digitalWrite(7, 0); digitalWrite(6, 0);
    digitalWrite(5, 0); digitalWrite(4, 0);
  }
}



/*
   // forward
  digitalWrite(7,0); digitalWrite(6,1); //ccw
  digitalWrite(5,1); digitalWrite(4,0); //cw
  delay(1000);

  // backward
  digitalWrite(7,1); digitalWrite(6,0);
  digitalWrite(5,0); digitalWrite(4,1);
  delay(1000);

  // left
  digitalWrite(7,0); digitalWrite(6,0);
  digitalWrite(5,1); digitalWrite(4,0);
  delay(1000);

  // right
  digitalWrite(7,0); digitalWrite(6,1);
  digitalWrite(5,0); digitalWrite(4,0);
  delay(1000);

  // stop
  digitalWrite(7,0); digitalWrite(6,0);
  digitalWrite(5,0); digitalWrite(4,0);
  delay(1000);
*/


/*

   if( digitalRead(12) == 1 ){
    digitalWrite(8,1);
  } else if ( digitalRead(12) == 0){
    digitalWrite(8,0);
  }
*/


/*
   digitalWrite(8,1);
  delay(1000);
  digitalWrite(8,0);
  delay(500);
*/
