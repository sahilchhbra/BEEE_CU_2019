void setup()

{

  Serial.begin(9600);

  pinMode(analogIN, INPUT);

  pinMode(Trigger, OUTPUT);

}
void loop() {

  int value = analogRead(analogIN);

  Serial.println(value);

if (value < 692)

  {

    digitalWrite(Trigger, HIGH);

    Serial.println(“lamp is ON”);

  }

  else {

    digitalWrite(Trigger, LOW);

    Serial.println(“lamp is OFF”);

  }

 }