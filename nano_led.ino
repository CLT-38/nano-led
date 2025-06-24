/*
  Programme pour faire clignoter la LED en CLT morse sur l'Arduino Nano
  C = -.-. (long-court-long-court)
  L = .-.. (court-long-court-court)
  T = - (long)
  La LED est connectée à la broche 13 (LED_BUILTIN)
*/

void setup() {
  // Initialise la broche de la LED en sortie
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // C - signal long-court-long-court (-.-.)
  digitalWrite(LED_BUILTIN, HIGH);
  delay(600);  // Signal long
  digitalWrite(LED_BUILTIN, LOW);
  delay(200);  // Pause entre signaux
  
  digitalWrite(LED_BUILTIN, HIGH);
  delay(200);  // Signal court
  digitalWrite(LED_BUILTIN, LOW);
  delay(200);  // Pause entre signaux
  
  digitalWrite(LED_BUILTIN, HIGH);
  delay(600);  // Signal long
  digitalWrite(LED_BUILTIN, LOW);
  delay(200);  // Pause entre signaux
  
  digitalWrite(LED_BUILTIN, HIGH);
  delay(200);  // Signal court
  digitalWrite(LED_BUILTIN, LOW);
  delay(400);  // Pause entre lettres
  
  // L - signal court-long-court-court (.-..)
  digitalWrite(LED_BUILTIN, HIGH);
  delay(200);  // Signal court
  digitalWrite(LED_BUILTIN, LOW);
  delay(200);  // Pause entre signaux
  
  digitalWrite(LED_BUILTIN, HIGH);
  delay(600);  // Signal long
  digitalWrite(LED_BUILTIN, LOW);
  delay(200);  // Pause entre signaux
  
  digitalWrite(LED_BUILTIN, HIGH);
  delay(200);  // Signal court
  digitalWrite(LED_BUILTIN, LOW);
  delay(200);  // Pause entre signaux
  
  digitalWrite(LED_BUILTIN, HIGH);
  delay(200);  // Signal court
  digitalWrite(LED_BUILTIN, LOW);
  delay(400);  // Pause entre lettres
  
  // T - signal long (-)
  digitalWrite(LED_BUILTIN, HIGH);
  delay(600);  // Signal long
  digitalWrite(LED_BUILTIN, LOW);
  
  delay(2000);  // Pause longue avant de répéter CLT
}
