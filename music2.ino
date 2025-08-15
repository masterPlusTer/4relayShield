#define RELAY1 4
#define RELAY2 7
#define RELAY3 8
#define RELAY4 12

// Duración de notas (ms)
#define CORCHEA 250    // Nota corta
#define NEGRA 500      // Nota media
#define BLANCA 1000    // Nota larga
#define SILENCIO 150   // Pausa entre notas

void setup() {
  pinMode(RELAY1, OUTPUT);
  pinMode(RELAY2, OUTPUT);
  pinMode(RELAY3, OUTPUT);
  pinMode(RELAY4, OUTPUT);
  allOff();
}

void loop() {
  // Patrón rítmico (ejemplo: "We Will Rock You")
  playNote(RELAY1, CORCHEA);  // Bombo (corto)
  delay(SILENCIO);
  playNote(RELAY2, CORCHEA);   // Caja (corto)
  delay(SILENCIO);
  playNote(RELAY1, BLANCA);    // Bombo (largo)
  delay(SILENCIO);
  playNote(RELAY3, NEGRA);     // Hi-hat (medio)
  
  delay(1000); // Pausa entre patrones
}

void playNote(int relay, int duration) {
  digitalWrite(relay, HIGH);
  delay(duration);
  digitalWrite(relay, LOW);
}

void allOff() {
  digitalWrite(RELAY1, LOW);
  digitalWrite(RELAY2, LOW);
  digitalWrite(RELAY3, LOW);
  digitalWrite(RELAY4, LOW);
}
