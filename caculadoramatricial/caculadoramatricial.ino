int numero1=3;
int columna1=7;


void setup() {
Serial.begin(9600);
pinMode(numero1,INPUT);
pinMode(columna1,OUTPUT);
}

void loop() {
 if (numero1==LOW){
   Serial.print("hay un uno");
 }
}
