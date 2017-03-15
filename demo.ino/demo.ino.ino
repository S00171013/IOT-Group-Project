/* 
 *  Pins are set to INPUT by default, it is important to 
 *  to set them as OUTPUT as such.
*/

int val, xVal, yVal;

void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

/*
 * Here we will need to check if there's any data in the serial buffer
 * if so, read the most recent byte of information and store it in input.
 * If input equals the correct integer, turn the LED on; otherwise, turn it off.
 */

void loop()
{
  // Check if enough data has been sent from computer
  if (Serial.available() > 0)
  {
    byte val = Serial.read();
    if (val == 'S')
    {
      digitalWrite(13, LOW);
    }
  }
}

/*********************************************************************************************************
  END FILE
*********************************************************************************************************/
