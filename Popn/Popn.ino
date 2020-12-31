#include <Joystick.h>

// Create Joystick
Joystick_ Joystick;

void setup() {
  // put your setup code here, to run once:

  // Set Range Values
  Joystick.setXAxisRange(0, 1023);
  Joystick.setYAxisRange(0, 1023);
  
  Joystick.begin();

  //Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  
  //pinMode(13, OUTPUT);
}

int lastButton0State = 0;
int lastButton1State = 0;
int lastButton2State = 0;
int lastButton3State = 0;
int lastButton4State = 0;
int lastButton5State = 0;
int lastButton6State = 0;
int lastButton7State = 0;
int lastButton8State = 0;

void loop() {
  // put your main code here, to run repeatedly:

  //int xAxis;
  //int yAxis;

  //xAxis = analogRead(A0);
  //yAxis = analogRead(A1);


  //Serial.println(xAxis);
  
  delay(1);
  //Joystick.setXAxis(1024 - xAxis);
  //Joystick.setYAxis(yAxis);

  // Read pin values
  int currentButton0State = !digitalRead(9);   //1
  if (currentButton0State != lastButton0State)
  {
    Joystick.setButton(0, currentButton0State);
    lastButton0State = currentButton0State;
  }

  int currentButton1State = !digitalRead(8);  //2
  if (currentButton1State != lastButton1State)
  {
    Joystick.setButton(1, currentButton1State);
    lastButton1State = currentButton1State;
  }

  int currentButton2State = !digitalRead(6);  //3
  if (currentButton2State != lastButton2State)
  {
    Joystick.setButton(2, currentButton2State);
    lastButton2State = currentButton2State;
  }

  int currentButton3State = !digitalRead(7); //4
  if (currentButton3State != lastButton3State)
  {
    Joystick.setButton(3, currentButton3State);
    lastButton3State = currentButton3State;
  }

  int currentButton4State = !digitalRead(10); // 5
  if (currentButton4State != lastButton4State)
  {
    Joystick.setButton(4, currentButton4State);
    lastButton4State = currentButton4State;
  }

  int currentButton5State = !digitalRead(5);  // 6
  if (currentButton5State != lastButton5State)
  {
    Joystick.setButton(5, currentButton5State);
    lastButton5State = currentButton5State;
  }

  int currentButton6State = !digitalRead(4); // 7
  if (currentButton6State != lastButton6State)
  {
    Joystick.setButton(6, currentButton6State);
    lastButton6State = currentButton6State;
  }

  int currentButton7State = !digitalRead(3); // 8 
  if (currentButton7State != lastButton7State)
  {
    Joystick.setButton(7, currentButton7State);
    lastButton7State = currentButton7State;
  }

  int currentButton8State = !digitalRead(2); // 9
  if (currentButton8State != lastButton8State)
  {
    Joystick.setButton(8, currentButton8State);
    lastButton8State = currentButton8State;
  }
 
}
