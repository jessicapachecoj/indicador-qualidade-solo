const int sensorPin = A0;       // Pino do sensor de umidade
const int ledSeco = 2;          // LED vermelho (solo seco)
const int ledUmido = 3;         // LED amarelo (solo úmido)
const int ledIdeal = 4;         // LED verde (solo ideal)
const int buzzerPin = 5;        // Pino do buzzer
const int motorPin = 6;         // Pino do motor (bomba de água)

int umidade;                    

void setup() {
  // Configura os pinos dos LEDs como saída
  pinMode(ledSeco, OUTPUT);
  pinMode(ledUmido, OUTPUT);
  pinMode(ledIdeal, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(motorPin, OUTPUT);
  
  Serial.begin(9600);           // Inicia comunicação serial com o monitor
}

void loop() {
  // Lê o valor do sensor (0 a 1023)
  umidade = analogRead(sensorPin);

  // Exibe o valor no monitor serial
  Serial.print("Umidade: ");
  Serial.println(umidade);

  // Acionar os LEDs, o buzzer e o motor
  if (umidade < 300) {          // Solo seco
    digitalWrite(ledSeco, HIGH);
    digitalWrite(ledUmido, LOW);
    digitalWrite(ledIdeal, LOW);
    tone(buzzerPin, 1000);      // Ativa o buzzer
    digitalWrite(motorPin, HIGH); // Liga a bomba de água
  } else if (umidade >= 300 && umidade < 700) { // Solo úmido
    digitalWrite(ledSeco, LOW);
    digitalWrite(ledUmido, HIGH);
    digitalWrite(ledIdeal, LOW);
    noTone(buzzerPin);          // Desativa o buzzer
    digitalWrite(motorPin, LOW); // Desliga a bomba de água
  } else {                      // Solo ideal
    digitalWrite(ledSeco, LOW);
    digitalWrite(ledUmido, LOW);
    digitalWrite(ledIdeal, HIGH);
    noTone(buzzerPin);          // Desativa o buzzer
    digitalWrite(motorPin, LOW); // Desliga a bomba de água
  }

  // Aguarda 1 segundo antes de ler novamente
  delay(1000);
}