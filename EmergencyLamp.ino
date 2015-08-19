// Program to read from LDR and display the inverse of volt in LED intensity

#define LED 9
#define LDR 0
int val = 0;
void setup()
{
}

void loop()
{
  val = analogRead( LDR );
  int nDuty;
  if( 255 - (( val / 5 ) * 255 ) > 200 )
  {
    nDuty = 255;
  }
  else
  {
    nDuty = 0;
  }
  analogWrite( LED, nDuty );
}
