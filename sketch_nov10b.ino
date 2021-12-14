
#include <SoftwareSerial.h>

// this constant won't change. It's the pin number of the sensor's output:
const int pingPin7 = 7;
const int pingPin6 = 6;
const int pingPin5 = 5;
const int pingPin4 = 4;
const int pingPin3 = 3;
const int pingPin2 = 2;

void setup() {
  // initialize serial communication:
  Serial.begin(9600);
  Serial1.begin(9600);
  
  for (int i = 0; i<25; i++) {
    Serial1.print("t");
    Serial1.print(i);
    Serial1.print(".bco=50712");
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    Serial1.write(0xFF);
  } 
}

void loop() {
  
 
  long duration7, duration6, duration5, duration4, duration3, duration2, hintenRechts, hintenMitte, hintenLinks, vorneRechts, vorneMitte, vorneLinks;

  pinMode(pingPin7, OUTPUT);
  digitalWrite(pingPin7, LOW);
  delayMicroseconds(2);
  digitalWrite(pingPin7, HIGH);
  delayMicroseconds(5);
  digitalWrite(pingPin7, LOW);

  pinMode(pingPin7, INPUT);
  duration7 = pulseIn(pingPin7, HIGH);


  pinMode(pingPin6, OUTPUT);
  digitalWrite(pingPin6, LOW);
  delayMicroseconds(2);
  digitalWrite(pingPin6, HIGH);
  delayMicroseconds(5);
  digitalWrite(pingPin6, LOW);

  pinMode(pingPin6, INPUT);
  duration6 = pulseIn(pingPin6, HIGH);


  pinMode(pingPin5, OUTPUT);
  digitalWrite(pingPin5, LOW);
  delayMicroseconds(2);
  digitalWrite(pingPin5, HIGH);
  delayMicroseconds(5);
  digitalWrite(pingPin5, LOW);

  pinMode(pingPin5, INPUT);
  duration5 = pulseIn(pingPin5, HIGH);
  
  
  pinMode(pingPin4, OUTPUT);
  digitalWrite(pingPin4, LOW);
  delayMicroseconds(2);
  digitalWrite(pingPin4, HIGH);
  delayMicroseconds(5);
  digitalWrite(pingPin4, LOW);

  pinMode(pingPin4, INPUT);
  duration4 = pulseIn(pingPin4, HIGH);


  pinMode(pingPin3, OUTPUT);
  digitalWrite(pingPin3, LOW);
  delayMicroseconds(2);
  digitalWrite(pingPin3, HIGH);
  delayMicroseconds(5);
  digitalWrite(pingPin3, LOW);

  pinMode(pingPin3, INPUT);
  duration3 = pulseIn(pingPin3, HIGH);


  pinMode(pingPin2, OUTPUT);
  digitalWrite(pingPin2, LOW);
  delayMicroseconds(2);
  digitalWrite(pingPin2, HIGH);
  delayMicroseconds(5);
  digitalWrite(pingPin2, LOW);

  pinMode(pingPin2, INPUT);
  duration2 = pulseIn(pingPin2, HIGH);

  hintenRechts = microsecondsToCentimeters(duration7);
  hintenMitte = microsecondsToCentimeters(duration6);
  hintenLinks = microsecondsToCentimeters(duration5);
  vorneRechts = microsecondsToCentimeters(duration4);
  vorneMitte = microsecondsToCentimeters(duration3);
  vorneLinks= microsecondsToCentimeters(duration2);

  if(vorneLinks<101) {
    Serial1.print("t0.bco=63077");
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    Serial1.write(0xFF);
  }
  else{
    Serial1.print("t0.bco=50712");
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    
  }
  if(vorneLinks<76) {
    Serial1.print("t1.bco=62788");
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    Serial1.write(0xFF);
  }
  else{
    Serial1.print("t1.bco=50712");
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    
  }
  if(vorneLinks<51) {
    Serial1.print("t2.bco=64355");
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    Serial1.write(0xFF);
  }
  else{
    Serial1.print("t2.bco=50712");
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    
  }
  if(vorneLinks<26) {
    Serial1.print("t3.bco=63488");
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    Serial1.write(0xFF);
  }
  else{
    Serial1.print("t3.bco=50712");
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    Serial1.write(0xFF);
  }



  if(vorneMitte<101) {
    Serial1.print("t4.bco=63077");
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    Serial1.write(0xFF);
  }
  else{
    Serial1.print("t4.bco=50712");
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    
  }
  if(vorneMitte<76) {
    Serial1.print("t5.bco=62788");
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    Serial1.write(0xFF);
  }
  else{
    Serial1.print("t5.bco=50712");
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    
  }
  if(vorneMitte<51) {
    Serial1.print("t6.bco=64355");
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    Serial1.write(0xFF);
  }
  else{
    Serial1.print("t6.bco=50712");
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    
  }
  if(vorneMitte<26) {
    Serial1.print("t7.bco=63488");
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    Serial1.write(0xFF);
  }
  else{
    Serial1.print("t7.bco=50712");
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    Serial1.write(0xFF);
  }




  if(vorneRechts<101) {
    Serial1.print("t8.bco=63077");
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    Serial1.write(0xFF);
  }
  else{
    Serial1.print("t8.bco=50712");
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    
  }
  if(vorneRechts<76) {
    Serial1.print("t9.bco=62788");
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    Serial1.write(0xFF);
  }
  else{
    Serial1.print("t9.bco=50712");
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    
  }
  if(vorneRechts<51) {
    Serial1.print("t10.bco=64355");
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    Serial1.write(0xFF);
  }
  else{
    Serial1.print("t10.bco=50712");
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    
  }
  if(vorneRechts<26) {
    Serial1.print("t11.bco=63488");
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    Serial1.write(0xFF);
  }
  else{
    Serial1.print("t11.bco=50712");
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    Serial1.write(0xFF);
  }



  if(hintenLinks<101) {
    Serial1.print("t20.bco=63077");
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    Serial1.write(0xFF);
  }
  else{
    Serial1.print("t20.bco=50712");
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    
  }
  if(hintenLinks<76) {
    Serial1.print("t21.bco=62788");
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    Serial1.write(0xFF);
  }
  else{
    Serial1.print("t21.bco=50712");
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    
  }
  if(hintenLinks<51) {
    Serial1.print("t22.bco=64355");
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    Serial1.write(0xFF);
  }
  else{
    Serial1.print("t22.bco=50712");
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    
  }
  if(hintenLinks<26) {
    Serial1.print("t23.bco=63488");
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    Serial1.write(0xFF);
  }
  else{
    Serial1.print("t23.bco=50712");
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    Serial1.write(0xFF);
  }





  if(hintenMitte<101) {
    Serial1.print("t16.bco=63077");
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    Serial1.write(0xFF);
  }
  else{
    Serial1.print("t16.bco=50712");
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    
  }
  if(hintenMitte<76) {
    Serial1.print("t17.bco=62788");
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    Serial1.write(0xFF);
  }
  else{
    Serial1.print("t17.bco=50712");
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    
  }
  if(hintenMitte<51) {
    Serial1.print("t18.bco=64355");
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    Serial1.write(0xFF);
  }
  else{
    Serial1.print("t18.bco=50712");
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    
  }
  if(hintenMitte<26) {
    Serial1.print("t19.bco=63488");
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    Serial1.write(0xFF);
  }
  else{
    Serial1.print("t19.bco=50712");
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    Serial1.write(0xFF);
  }



  if(hintenRechts<101) {
    Serial1.print("t12.bco=63077");
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    Serial1.write(0xFF);
  }
  else{
    Serial1.print("t12.bco=50712");
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    
  }
  if(hintenRechts<76) {
    Serial1.print("t13.bco=62788");
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    Serial1.write(0xFF);
  }
  else{
    Serial1.print("t13.bco=50712");
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    
  }
  if(hintenRechts<51) {
    Serial1.print("t14.bco=64355");
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    Serial1.write(0xFF);
  }
  else{
    Serial1.print("t14.bco=50712");
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    
  }
  if(hintenRechts<26) {
    Serial1.print("t15.bco=63488");
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    Serial1.write(0xFF);
  }
  else{
    Serial1.print("t15.bco=50712");
    Serial1.write(0xFF);
    Serial1.write(0xFF);
    Serial1.write(0xFF);
  }  
}

long microsecondsToInches(long microseconds) {
  return microseconds / 74 / 2;
}


long microsecondsToCentimeters(long microseconds) {
  
  return microseconds / 29 / 2;
}
