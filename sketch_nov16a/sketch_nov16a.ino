
int led = 9;
int x = 0;

int button = 3;
int sinal_button = 0;

int button1 = 12;
int sinal_button1 = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(button, INPUT_PULLUP);

  pinMode(button1, INPUT_PULLUP);
}

  // put your main code here, to run repeatedly:
void loop() {

  sinal_button = digitalRead(button);
  sinal_button1 = digitalRead(button1);

  if (sinal_button == LOW && sinal_button1 == HIGH) {
    digitalWrite(led, HIGH);
    Serial.println("botão1press");
  }
  else if(sinal_button1 == LOW && sinal_button == HIGH){
    digitalWrite(led, HIGH);
    Serial.println("botão2press");
  }
   else {
    digitalWrite(led, LOW);
  }


  /*
     for(int vezes = 0; vezes < 10; vezes++){
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
      delay(200);
     }

     for(int vezes = 0; vezes < 5; vezes++){
      digitalWrite(led, HIGH);
      delay(1000);
      digitalWrite(led, LOW);
      delay(1000);
     }

     while(x < 200){
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
      delay(200);

          x += 1;
     }
     */
}
