int redPin = 0;
int greenPin = 1;
int bluePin = 4;

int ledLevel = 0;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  digitalWrite(redPin, HIGH);
  
  for (int i = 0; i < 360; ++i) {
    float x = float(i) / 180 * PI;
    ledLevel = 127 * (sin(x) + 1);
    
    analogWrite(greenPin, ledLevel);
    analogWrite(bluePin, ledLevel);
    
    delay(10);
  }
}
