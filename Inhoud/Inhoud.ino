float pi = 3.14;
float diameter = 0;
float height = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()

{
  Serial.println("wat is de diameter?");
  while (Serial.available() == 0)
  {
    Serial.read();  
  }
  diameter = Serial.parseInt();
  Serial.println("wat is de hoogte?");
  while (Serial.available() == 0)
  {
    Serial.read();  
  }
  height=Serial.parseInt();
  //calculate volume cilindre
  float volume = pi * (diameter / 2) * (diameter / 2) * height;
  Serial.println("Inhoud van een cilinder ================");
  Serial.print ("hoogte ");
  Serial.print (height);
  Serial.print (" diameter, ");
  Serial.print (diameter);
  Serial.print (" de inhoud is ");
  Serial.print (volume);
  Serial.println ("cm3");

}
