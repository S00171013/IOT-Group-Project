/* 
 *  Pins are set to INPUT by default, it is important to 
 *  to set them as OUTPUT as such.
*/

int val, xVal;
// int yVal;
int piezoPin = 2;

void setup()
{
  Serial.begin(9600);
  pinMode(A1, OUTPUT);
  //pinMode(A2, OUTPUT);
}

void loop()
{
  if (Serial.available())
  {
    val = Serial.read(); // Incoming value
    // If the value is the event trigger character 'S'
    if (val == 'S')
    {
      xVal = 255;
      // Add more values for more LED's
      // yVal = x;
      tone(piezoPin, 1000, 500); // Play tune
    }
    else
    {
      xVal = 0;
    }
    analogWrite(A1, xVal); // Send this value to the LED !
    //analogWrite(PIN, yVal);
  }
}

/*********************************************************************************************************
  END FILE
*********************************************************************************************************/
