/* 
 *  Pins are set to INPUT by default, it is important to 
 *  to set them as OUTPUT as such.
*/

int val, xVal;
// int yVal;

void setup()
{
  Serial.begin(9600);
  pinMode(A1, OUTPUT);
  //pinMode(A2, OUTPUT);
}

void loop()
{
  analogWrite(A1, 0);
  // Check if enough data has been sent from computer
  
  
}

/*********************************************************************************************************
  END FILE
*********************************************************************************************************/
