int numero1=3;
int columna1=7;
int  leido;

void setup() {
Serial.begin(9600);
pinMode(numero1,INPUT);
pinMode(columna1,OUTPUT);
}

void loop() {
 numero1 = HIGH;
 leido=digitalRead(columna1);
if (leido==HIGH){

 Serial.print("hay  un numero");
  
}
}
