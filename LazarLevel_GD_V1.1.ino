const int PR1 = 2;
const int PR2 = 3;
const int PR3 = 4;
const int PR4 = 5;
const int PR5 = 6;

const int numSensor = 5;

const int actUp1 = 10;
const int actDown1 = 11;

int laserLevel1 = 0;  //, high0 = 0, low0 = 1023;
int laserLevel2 = 0;  //, high1 = 0, low1 = 1023;
int laserLevel3 = 0;  //, high2 = 0, low2 = 1023;
int laserLevel4 = 0;  //, high3 = 0, low3 = 1023;
int laserLevel5 = 0;  //, high4 = 0, low4 = 1023;


void setup()
{
  Serial.begin(9600);
  
  pinMode(PR1, INPUT);
  pinMode(PR2, INPUT);
  pinMode(PR3, INPUT);
  pinMode(PR4, INPUT);
  pinMode(PR5, INPUT);
  
  pinMode(actUp1, OUTPUT);
  pinMode(actDown1, OUTPUT);
}


void loop()
{
  laserLevel1 = digitalRead(PR1);
  laserLevel2 = digitalRead(PR2);
  laserLevel3 = digitalRead(PR3);
  laserLevel4 = digitalRead(PR4);
  laserLevel5 = digitalRead(PR5);

  Serial.println(laserLevel1);
  Serial.println(laserLevel2);
  Serial.println(laserLevel3);
  Serial.println(laserLevel4);
  Serial.println(laserLevel5);
  Serial.println("");
  
  if (laserLevel1 == 1){
    digitalWrite(actDown1, LOW);
    digitalWrite(actUp1, HIGH);
    delay(500);
    digitalWrite(actDown1, HIGH);
    digitalWrite(actUp1, HIGH);
  }
  else if(laserLevel2 == 1){
    digitalWrite(actDown1, LOW);
    digitalWrite(actUp1, HIGH);
    delay(500);
    digitalWrite(actDown1, HIGH);
    digitalWrite(actUp1, HIGH);
  }
  else if(laserLevel3 == 1){
    digitalWrite(actDown1, HIGH);
    digitalWrite(actUp1, HIGH);
    delay(500);
    digitalWrite(actDown1, HIGH);
    digitalWrite(actUp1, HIGH);
  }
  else if(laserLevel4 == 1){
    digitalWrite(actUp1, LOW);
    digitalWrite(actDown1, HIGH);
    delay(500);
    digitalWrite(actDown1, HIGH);
    digitalWrite(actUp1, HIGH);
  }
  else if(laserLevel5 == 1){
    digitalWrite(actUp1, LOW);
    digitalWrite(actDown1, HIGH);
    delay(500);
    digitalWrite(actDown1, HIGH);
    digitalWrite(actUp1, HIGH);
  }
  else {
    digitalWrite(actUp1, HIGH);
    digitalWrite(actDown1, HIGH);
  }
  
  //delay(1000);
  //autoTune();  // have the Arduino do the work for us!

  //analogWrite(ledPin0, lightLevel0);
  //analogWrite(ledPin1, lightLevel1);
  //analogWrite(ledPin2, lightLevel2);

}

//void autoTune()
//{
//
//  while(i < numSensor){
//    
//    if (lightLevel < low0){
//    low0 = lightLevel0;
//    }
//    if (lightLevel0 > high0){
//    high0 = lightLevel0;
//    }
//  }
//
//  lightLevel0 = map(lightLevel0, low0+30, high0-30, 0, 255);
//  lightLevel0 = constrain(lightLevel0, 0, 255);
//
//  lightLevel1 = map(lightLevel1, low1+30, high1-30, 0, 255);
//  lightLevel1 = constrain(lightLevel1, 0, 255);
//
//  lightLevel2 = map(lightLevel2, low2+30, high2-30, 0, 255);
//  lightLevel2 = constrain(lightLevel2, 0, 255);
//
//  // Now we'll return to the main loop(), and send lightLevel
//  // to the LED.
//}
