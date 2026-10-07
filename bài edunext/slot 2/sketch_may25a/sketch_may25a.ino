const int do1 = 13;
const int vang1 = 12;
const int xanh1 = 11;

const int do2 = 7;
const int vang2 = 6;
const int xanh2 = 5;

void setup() {
  pinMode (do1, OUTPUT);
  pinMode (vang1, OUTPUT);
  pinMode (xanh1, OUTPUT);

  pinMode (do2, OUTPUT);
  pinMode (vang2, OUTPUT);
  pinMode (xanh2, OUTPUT);

}

void loop() {
  digitalWrite(xanh1,HIGH);
  digitalWrite(vang1, LOW);
  digitalWrite(do1, LOW);

  digitalWrite(xanh2, LOW);
  digitalWrite(vang2, LOW);
  digitalWrite(do2, HIGH);
  delay(5000);


  digitalWrite(xanh1,LOW);
  digitalWrite(vang1, HIGH);
  digitalWrite(do1, LOW);
  delay(2000);


  digitalWrite(xanh1,LOW);
  digitalWrite(vang1, LOW);
  digitalWrite(do1, HIGH);

  digitalWrite(xanh2, HIGH);
  digitalWrite(vang2, LOW);
  digitalWrite(do2, LOW);
  delay(5000);


  digitalWrite(xanh2, LOW);
  digitalWrite(vang2, HIGH);
  digitalWrite(do2, LOW);
  delay(2000);
}
