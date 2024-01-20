int led = 12;
int x = 0;

int button = 3;
int sinal_button = 0;

int button1 = 8;
int sinal_button1 = 0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // Inicia a comunicação serial.

  pinMode(led, OUTPUT);
  pinMode(button, INPUT_PULLUP);

  pinMode(button1, INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:
    if (Serial.available() > 0) {
    char comando = Serial.read();  // Lê o comando da porta serial

    // Verifica o comando recebido e executa a ação correspondente
    switch (comando) {
      case 'B':
        piscarLedB();
        break;
      case 'C':
      piscarLedC();
      break;
        // Adicione mais casos para outros comandos, se necessário
    }
  }
}

  void piscarLedB() {
  digitalWrite(led, HIGH);  // Liga o LED
  delay(10);
  digitalWrite(led, LOW);   // Desliga o LED
}

void piscarLedC() {
  digitalWrite(led, HIGH);  // Liga o LED
  delay(10);
  digitalWrite(led, LOW);   // Desliga o LED
}
