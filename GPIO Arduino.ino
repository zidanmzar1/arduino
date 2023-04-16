const int button1=4; // untuk button
const int button2=13; // untuk button
const int  A=16; // lampu hijau
const int  B=17; // lampu merah

 
void setup() {
  // put your setup code here, to run once:
pinMode (button1,INPUT_PULLUP); // posisi logika 1
pinMode (button2,INPUT_PULLUP); // posisi logika 1 dan membutuhkan 0 dari button
pinMode (A,OUTPUT); // button
pinMode (B,OUTPUT); // button
Serial.begin(115200);

}


void loop() {
  // put your main code here, to run repeatedly:
int kondisiPB1 = digitalRead(button1); // manamai pengkondisian variabel
int kondisiPB2 = digitalRead(button2); // manamai pengkondisian variabel

if(kondisiPB1==LOW) // posisi mati
{
  digitalWrite(A,HIGH);
  digitalWrite(B,LOW);
  Serial.println("LED HIJAU MENYALA");
}
if(kondisiPB2==LOW)
{
 Serial.println("LED MERAH MENYALA");
 digitalWrite(A,LOW);
 digitalWrite(B,HIGH);    
}
  
}
