//Variabel Pin PWM
int R_PWMMKi = 2; //PWM Kanan Motor Kiri
int R_ENMKi = 22; //Enable Kanan Motor Kiri
int L_PWMMKi = 3; //PWM Kiri Motor Kiri
int L_ENMKi = 24; //Enable Kanan Motor Kiri
int R_PWMMKa = 4; //PWM Kanan Motor Kanan
int R_ENMKa = 26; //Enable Kanan Motor Kanan
int L_PWMMKa = 5; //PWM Kiri Motor Kanan
int L_ENMKa = 28; //Enable Kanan Motor Kanan

void setup() {
  // put your setup code here, to run once:
  Serial.begin(57600);
  pinMode(R_ENMKi, OUTPUT);
  pinMode(R_PWMMKi, OUTPUT);
  pinMode(L_ENMKi, OUTPUT);
  pinMode(L_PWMMKi, OUTPUT);
  pinMode(R_ENMKa, OUTPUT);
  pinMode(R_PWMMKa, OUTPUT);
  pinMode(L_ENMKa, OUTPUT);
  pinMode(L_PWMMKa, OUTPUT);
  digitalWrite(R_ENMKi, HIGH);
  digitalWrite(L_ENMKi, HIGH);
  digitalWrite(R_ENMKa, HIGH);
  digitalWrite(L_ENMKa, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0; i<=255; i=i+10){
    analogWrite(R_PWMMKi, i);
    analogWrite(R_PWMMKa, i);
    Serial.print("Nilai R_PWM Motor Kiri : ");
    Serial.println(i);
    Serial.print("Nilai R_PWM Motor Kanan : ");
    Serial.println(i);
    delay(250);
  } 
  for(int i=255; i>=0; i=i-10){
    analogWrite(R_PWMMKi, i);
    analogWrite(R_PWMMKa, i);
    Serial.print("Nilai R_PWM Motor Kiri : ");
    Serial.println(i);
    Serial.print("Nilai R_PWM Motor Kanan : ");
    Serial.println(i);
    delay(250);
  }  
  delay(1500);
    for(int i=0; i<=255; i=i+10){
    analogWrite(L_PWMMKi, i);
    analogWrite(L_PWMMKa, i);
    Serial.print("Nilai L_PWM Motor Kiri : ");
    Serial.println(i);
    Serial.print("Nilai L_PWM Motor Kanan : ");
    Serial.println(i);
    delay(250);
  } 
  for(int i=255; i>=0; i=i-10){
    analogWrite(L_PWMMKi, i);
    analogWrite(L_PWMMKa, i);
    Serial.print("Nilai L_PWM Motor Kiri : ");
    Serial.println(i);
    Serial.print("Nilai L_PWM Motor Kanan : ");
    Serial.println(i);
    delay(250);
  }  
  delay(1500);
}
