#define L_F 4
#define L_B 5
#define R_F 6
#define R_B 7

void setup() {
  pinMode(L_F, OUTPUT);
  pinMode(L_B, OUTPUT);
  pinMode(R_F, OUTPUT);
  pinMode(R_B, OUTPUT);

  Serial.begin(115200);
}

// Movement functions
void forward() {
  digitalWrite(L_F, HIGH);
  digitalWrite(L_B, LOW);
  digitalWrite(R_F, HIGH);
  digitalWrite(R_B, LOW);
}

void backward() {
  digitalWrite(L_F, LOW);
  digitalWrite(L_B, HIGH);
  digitalWrite(R_F, LOW);
  digitalWrite(R_B, HIGH);
}

void left() {
  digitalWrite(L_F, LOW);
  digitalWrite(L_B, HIGH);
  digitalWrite(R_F, HIGH);
  digitalWrite(R_B, LOW);
}

void right() {
  digitalWrite(L_F, HIGH);
  digitalWrite(L_B, LOW);
  digitalWrite(R_F, LOW);
  digitalWrite(R_B, HIGH);
}

void stopMotors() {
  digitalWrite(L_F, LOW);
  digitalWrite(L_B, LOW);
  digitalWrite(R_F, LOW);
  digitalWrite(R_B, LOW);
}

void loop() {

  if (Serial.available()) {
    char cmd = Serial.read();

    switch (cmd) {
      case 'F': forward(); break;
      case 'B': backward(); break;
      case 'L': left(); break;
      case 'R': right(); break;
      case 'S': stopMotors(); break;
    }
  }
}