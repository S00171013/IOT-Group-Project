/* 
 *  Pins are set to INPUT by default, it is important to 
 *  to set them as OUTPUT as such.
*/

void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

/*
 * Here we will need to check if there's any data in the serial buffer
 * if so, read the most recent byte of information and store it in input.
 * If input equals 1, turn the LED on; otherwise, turn it off.
 */

void loop()
{
  if (Serial.available() > 0)
  {
    byte input = Serial.read();
    if (input == '1')
    {
      digitalWrite(13, HIGH);
    }
    else
    {
      digitalWrite(13, LOW);
    }
  }
}

/*********************************************************************************************************
  END FILE
*********************************************************************************************************/
