// ==========================================
// CONTROL DE INTERSECCIÓN Y SEMÁFORO PEATONAL
// ==========================================

// Asignación de pines - Semáforo 1
const int sem1_Rojo = 12;
const int sem1_Amarillo = 11;
const int sem1_Verde = 10;

// Asignación de pines - Semáforo 2
const int sem2_Rojo = 9;
const int sem2_Amarillo = 8;
const int sem2_Verde = 7;

// Asignación de pines - Semáforo Peatonal
const int peat_Rojo = 6;
const int peat_Verde = 5;

// Tiempos en milisegundos (Rojo y Verde iguales, Amarillo menor)
const unsigned long t_verde = 5000;
const unsigned long t_amarillo = 2000;
const unsigned long t_peatonal = 4000;

void setup() {
  // Configuración de pines vehiculares como salida
  pinMode(sem1_Rojo, OUTPUT);
  pinMode(sem1_Amarillo, OUTPUT);
  pinMode(sem1_Verde, OUTPUT);
  
  pinMode(sem2_Rojo, OUTPUT);
  pinMode(sem2_Amarillo, OUTPUT);
  pinMode(sem2_Verde, OUTPUT);

  // Configuración de pines peatonales como salida
  pinMode(peat_Rojo, OUTPUT);
  pinMode(peat_Verde, OUTPUT);
}

void loop() {
  // ----------------------------------------
  // FASE 1: Vía 1 en Verde / Vía 2 en Rojo / Peatón en Rojo
  // ----------------------------------------
  digitalWrite(sem1_Verde, HIGH);
  digitalWrite(sem1_Amarillo, LOW);
  digitalWrite(sem1_Rojo, LOW);

  digitalWrite(sem2_Verde, LOW);
  digitalWrite(sem2_Amarillo, LOW);
  digitalWrite(sem2_Rojo, HIGH);

  digitalWrite(peat_Verde, LOW);
  digitalWrite(peat_Rojo, HIGH);
  delay(t_verde);

  // ----------------------------------------
  // FASE 2: Vía 1 en Amarillo / Vía 2 en Rojo / Peatón en Rojo
  // ----------------------------------------
  digitalWrite(sem1_Verde, LOW);
  digitalWrite(sem1_Amarillo, HIGH);
  delay(t_amarillo);
  digitalWrite(sem1_Amarillo, LOW);
  digitalWrite(sem1_Rojo, HIGH);

  // ----------------------------------------
  // FASE 3: Vía 2 en Verde / Vía 1 en Rojo / Peatón en Rojo
  // ----------------------------------------
  digitalWrite(sem2_Rojo, LOW);
  digitalWrite(sem2_Verde, HIGH);
  delay(t_verde);

  // ----------------------------------------
  // FASE 4: Vía 2 en Amarillo / Vía 1 en Rojo / Peatón en Rojo
  // ----------------------------------------
  digitalWrite(sem2_Verde, LOW);
  digitalWrite(sem2_Amarillo, HIGH);
  delay(t_amarillo);
  digitalWrite(sem2_Amarillo, LOW);
  digitalWrite(sem2_Rojo, HIGH);

  // ----------------------------------------
  // FASE 5: Cruce Peatonal Verde / Ambas vías vehiculares en Rojo
  // ----------------------------------------
  digitalWrite(peat_Rojo, LOW);
  digitalWrite(peat_Verde, HIGH);
  delay(t_peatonal);

  // Fin del ciclo: apaga verde peatonal y vuelve a empezar
  digitalWrite(peat_Verde, LOW);
  digitalWrite(peat_Rojo, HIGH);
}