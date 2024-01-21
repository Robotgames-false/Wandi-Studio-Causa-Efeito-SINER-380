int button1 = 12;
int button1_sinal = 0;

int button2 = 3;
int button2_sinal = 0;

int led = 9;

void setup() {
  
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);

}

void loop() {

  if(Serial.available() > 0){
    String obaaa = Serial.readString();
    if(obaaa == "Yes"){
      digitalWrite(led, HIGH);
      delay(100);
    }
  }
  // put your main code here, to run repeatedly:
   /*
  button1_sinal = digitalRead(button1);

  button2_sinal = digitalRead(button2);

  if (button1_sinal == LOW) {
    digitalWrite(led, HIGH);
    Serial.println("Botao1 Pressionado");
  }
  else {
  digitalWrite(led, LOW);
  }

  if (button2_sinal == LOW) {
  digitalWrite(led, HIGH);
  Serial.println("Botao2 Pressionado");
  }
  else{
    digitalWrite(led, LOW);
  }
 */
}
