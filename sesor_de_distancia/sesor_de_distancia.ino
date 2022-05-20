#include <Ultrasonic.h>

#define LDR A5
#define LED_1 10
#define LED_2 9
#define LED_3 8
//#define limite_1 70
//#define limite_2 50
//#define limite_3 30

Ultrasonic ultrassom(7,6); // define o nome do sensor(ultrassom)
//e onde esta ligado o trig(7) e o echo(6) respectivamente
long distancia;
// Esta função "setup" roda uma vez quando a placa e ligada ou resetada
 void setup() {
 Serial.begin(9600); //Habilita Comunicação Serial a uma taxa de 9600 bauds.
  pinMode(LED_1, OUTPUT); //Define a porta do Led como saída
  pinMode(LED_2, OUTPUT);
  pinMode(LED_3, OUTPUT);
 }
// Função que se repete infinitamente quando a placa é ligada

 void loop()
 {
   distancia = ultrassom.Ranging(CM);// ultrassom.Ranging(CM) retorna a distancia em
                                     // centímetros(CM) ou polegadas(INC)
   Serial.print(distancia); //imprime o valor da variável distancia
   Serial.println("cm");
   delay(100);

//    int estado = analogRead(LDR);//Lê o valor fornecido pelo LDR
//  Serial.println(estado);
  delay(250);
  if (distancia < 20)
    digitalWrite(LED_1,HIGH);
  else
    digitalWrite(LED_1,LOW);
  if (distancia < 15)
    digitalWrite(LED_2,HIGH);
  else
    digitalWrite(LED_2,LOW);  
  if (distancia < 10)
    digitalWrite(LED_3,HIGH);
  else
    digitalWrite(LED_3,LOW);
 }
