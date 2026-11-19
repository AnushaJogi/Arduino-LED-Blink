
const int LED_IN=13;
void setup()
{
  pinMode(LED_IN, OUTPUT);
}

void loop()
{
  digitalWrite(LED_IN, HIGH);
  delay(500);
  digitalWrite(LED_IN, LOW);
  delay(500);
}