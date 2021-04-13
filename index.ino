int value = 0;
int value_1 = 0;
int value_2 = 0;

void setup()
{

  Serial.begin(115200);

}

void loop()
{
  value = hallRead();
  delay(1000);
  value_1 = hallRead();
  delay(1000);
  value_2 = hallRead();
  delay(1000);
  int result = value + value_1 + value_2;
  if (result > 5)
  {
    Serial.println("1");

  }
  else
  {
    Serial.println("0");

  }

}
