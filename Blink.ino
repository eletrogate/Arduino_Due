void setup() {
  analogReadResolution(12);  // altera a resolução das entradas analógicas, que por padrão é de 10 bits (por compatibilidade com as demais placas), para 12 bits
  analogWriteResolution(12); // define a resolução da saída analógica como 12 bits
}

void loop() {
  analogWrite(DAC0, analogRead(A0)); // espelha a leitura analógica na saída DAC0
}