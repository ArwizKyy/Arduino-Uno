int echo=2;
int trig=3;
void setup() {
  // put your setup code here, to run once:
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  int durasi;
  durasi = pulseIn(echo,HIGH);
  int jarak;
  jarak = durasi*0.034/2;
  Serial.println(jarak);
}
