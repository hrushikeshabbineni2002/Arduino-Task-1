void setup()
{
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop(){
    changeLights();
    delay(13000);
}

void changeLights(){
    // green off, yellow on for 3 seconds
    digitalWrite(11, LOW);
    digitalWrite(13, HIGH);
    delay(7000);

    // turn off yellow, then turn red on for 5 seconds
    digitalWrite(13, LOW);
    digitalWrite(9, HIGH);
    delay(2000);

    // red and yellow on for 2 seconds (red is already on though)
    digitalWrite(13, HIGH);
    delay(3000);

    // turn off red and yellow, then turn on green
    digitalWrite(9, LOW);
    digitalWrite(13, LOW);
    digitalWrite(11, HIGH);
    delay(1000);
}
