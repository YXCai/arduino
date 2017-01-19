int pinMotor = 3; // Arduino's third pin is used for transistor

void setup() {
  pinMode(pinMotor, OUTPUT);
  Serial.begin(9600);
  while(!Serial)
  {
    Serial.println("Speed 0 to 255");
  }
}

void loop() {
  if (Serial.available())
  {
    int speed = Serial.parseInt();
    if (speed >= 0 && speed <= 255)
    {
      analogWrite(pinMotor, speed);
    }
  }
}
