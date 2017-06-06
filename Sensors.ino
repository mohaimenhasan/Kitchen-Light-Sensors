// Light Sensors to detect the luminosity of light 
// during the day

//Prepared by: 

// Name = Mohaimen Khan
// Date = June 6, 2017

//Used for kitchen cabinet
//Green = Day Light
//Yellow = Dusk/ Dawn 
//Red = Nigh 
int sensorPin = 0;
int RedPin = 9;
int GreenPin = 8;
int YellowPin = 10;
void setup() {
  // put your setup code here, to run once:
  analogReference(DEFAULT);
  pinMode(RedPin, OUTPUT);
  pinMode(GreenPin, OUTPUT);
  pinMode(YellowPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = analogRead(sensorPin);
  if (val <= 150) 
  {
    digitalWrite(RedPin,HIGH);
    digitalWrite(GreenPin, LOW);
    digitalWrite(YellowPin, LOW);
  }
  else if (val > 150 and val <= 300)
  {
    digitalWrite(RedPin, LOW);
    digitalWrite(GreenPin, LOW);
    digitalWrite(YellowPin, HIGH);
  }
  else 
  {
    digitalWrite(RedPin, LOW);
    digitalWrite(GreenPin, HIGH);
    digitalWrite(YellowPin, LOW);
  }
 
}
