int led = 9;

void setup() {
  // put your setup code here, to run once:

  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) {
    char commando = Serial.read();
    if (commando == 'L') {
      digitalWrite(led, HIGH);
    }
    else if (commando == 'R') {
    digitalWrite(led, LOW);
    }
  }
}
