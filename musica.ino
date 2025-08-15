#define RELAY1 4
#define RELAY2 7
#define RELAY3 8
#define RELAY4 12

// Duración de las notas (ms)
#define NOTE_SHORT 200
#define NOTE_MEDIUM 400
#define NOTE_LONG 600

void setup() {
  pinMode(RELAY1, OUTPUT);
  pinMode(RELAY2, OUTPUT);
  pinMode(RELAY3, OUTPUT);
  pinMode(RELAY4, OUTPUT);
  allOff();
}

void loop() {
  playFurElise();  // Reproduce la melodía
  delay(2000);      // Pausa entre repeticiones
}

// Melodía simplificada de "Für Elise"
void playFurElise() {
  // Primera parte: E-D#-E-D#-E-B-D-C-A
  playNote(RELAY1, NOTE_MEDIUM);  // Nota E (Relé 1)
  playNote(RELAY2, NOTE_SHORT);   // Nota D# (Relé 2)
  playNote(RELAY1, NOTE_SHORT);   // E
  playNote(RELAY2, NOTE_SHORT);   // D#
  playNote(RELAY1, NOTE_MEDIUM);  // E
  playNote(RELAY3, NOTE_SHORT);   // B (Relé 3)
  playNote(RELAY4, NOTE_SHORT);   // D (Relé 4)
  playNote(RELAY3, NOTE_LONG);    // C (Relé 3)
}

void playNote(int relay, int duration) {
  digitalWrite(relay, HIGH);
  delay(duration);
  digitalWrite(relay, LOW);
  delay(50);  // Pequeña pausa entre notas
}

void allOff() {
  digitalWrite(RELAY1, LOW);
  digitalWrite(RELAY2, LOW);
  digitalWrite(RELAY3, LOW);
  digitalWrite(RELAY4, LOW);
}
