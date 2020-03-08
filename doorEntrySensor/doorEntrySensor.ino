#define button1 2
#define button2 3 

void setup() {
  //Inputs
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
}

void loop() {
  attachInterrupt(digitalPinToInterrupt(button1), easyGameInterupt1, FALLING);
  attachInterrupt(digitalPinToInterrupt(button2), easyGameInterupt2, FALLING);

  while(true){    
  }

}

void easyGameInterupt1() {
  Serial.print("Button 1 pressed \n");
}

void easyGameInterupt2() {
  Serial.print("Button 2 pressed \n");
}
