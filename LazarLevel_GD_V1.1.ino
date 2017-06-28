const int PR1 = 2;    //Photoresistor Variable
const int PR2 = 3;    //Photoresistor Variable
const int PR3 = 4;    //Photoresistor Variable
const int PR4 = 5;    //Photoresistor Variable
const int PR5 = 6;    //Photoresistor Variable

const int numSensor = 5;

const int actUp1 = 10;    //actuator up pin
const int actDown1 = 11;  //actuator down pin

int laserLevel1 = 0;  //variable declaration
int laserLevel2 = 0;  //variable declaration
int laserLevel3 = 0;  //variable declaration
int laserLevel4 = 0;  //variable declaration
int laserLevel5 = 0;  //variable declaration

void setup()
{
  Serial.begin(9600); //Serial monitoring
  
  pinMode(PR1, INPUT);  //making PR1 an Input
  pinMode(PR2, INPUT);  //making PR2 an Input
  pinMode(PR3, INPUT);  //making PR3 an Input
  pinMode(PR4, INPUT);  //making PR4 an Input
  pinMode(PR5, INPUT);  //making PR5 an Input
  
  pinMode(actUp1, OUTPUT);    //making actUp1 an Output
  pinMode(actDown1, OUTPUT);  //making actDown1 an Output
}


void loop()
{
  laserLevel1 = digitalRead(PR1); //Reading PR1 and making laserLevel equal to either 1 or 0
  laserLevel2 = digitalRead(PR2); //Reading PR2 and making laserLeve2 equal to either 1 or 0
  laserLevel3 = digitalRead(PR3); //Reading PR3 and making laserLeve3 equal to either 1 or 0
  laserLevel4 = digitalRead(PR4); //Reading PR4 and making laserLeve4 equal to either 1 or 0
  laserLevel5 = digitalRead(PR5); //Reading PR5 and making laserLeve5 equal to either 1 or 0

  Serial.println(laserLevel1);  //Command line output
  Serial.println(laserLevel2);  //Command line output
  Serial.println(laserLevel3);  //Command line output
  Serial.println(laserLevel4);  //Command line output
  Serial.println(laserLevel5);  //Command line output
  Serial.println("");           //Command line output
  
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
