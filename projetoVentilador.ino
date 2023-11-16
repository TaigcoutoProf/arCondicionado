// Definir os pinos
const int pinVentoinha = 9; // Pino para controlar a ventoinha
const int duracaoLigada = 10 * 1000 * 60; // 10 minutos em milissegundos
const int duracaoDesligada = 5 * 1000 * 60; // 5 minutos em milissegundos

void setup() {
  // Configurar o pino da ventoinha como saída
  pinMode(pinVentoinha, OUTPUT);
}

void loop() {
  // Ligar a ventoinha
  digitalWrite(pinVentoinha, HIGH);
  delay(duracaoLigada);

  // Desligar a ventoinha
  digitalWrite(pinVentoinha, LOW);
  delay(duracaoDesligada);
}