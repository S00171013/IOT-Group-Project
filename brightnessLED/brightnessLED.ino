void setup()
{
  Serial.begin(9600);
  pinMode(A1, OUTPUT);
}

void loop()
{
  if (Serial.available())
  {
    int input = Serial.read();
    analogWrite(A1, input);
  }
}

