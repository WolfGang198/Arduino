#define LDR A5
#define LED_1 10
#define LED_2 9
#define LED_3 8
#define limite_1 800
#define limite_2 700
#define limite_3 600
void setup()
{
  Serial.begin(9600);
  pinMode(LED_1, OUTPUT); //Define a porta do Led como saída
  pinMode(LED_2, OUTPUT);
  pinMode(LED_3, OUTPUT);
}
  void loop()
{
  int estado = analogRead(LDR);//Lê o valor fornecido pelo LDR
  Serial.println(estado);
  delay(500);
  if (estado < limite_1)
    digitalWrite(LED_1,HIGH);
  else
    digitalWrite(LED_1,LOW);
  if (estado < limite_2)
    digitalWrite(LED_2,HIGH);
  else
    digitalWrite(LED_2,LOW);  
  if (estado < limite_3)
    digitalWrite(LED_3,HIGH);
  else
    digitalWrite(LED_3,LOW);   
}
