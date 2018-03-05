int pinf[4]={2,3,4,5};
int pinc[4]={9,8,7,6,};
int  leido=0;

  void setup() {
  Serial.begin(9600);
  for(int i=0;i<3;i++){
    pinMode(pinc[i],OUTPUT);
    pinMode(pinf[i],INPUT_PULLUP);
 }
}

  void loop() {
  for(int a=0;a<3;a++){
    digitalWrite(pinc[a], LOW);
    for(int k=0;k<3;k++){
      leido=digitalRead(pinf[k]);
      if (leido==LOW){
         dat(pinc[a],pinf[k]);

        }
      }
    }
  }  






  int dat (int columna , int fila ){

   if (columna==8 && fila==4)Serial.print(1);
   if (columna==8 && fila==3)Serial.print(4);
   if (columna==8 && fila==2)Serial.print(7);
    


    }

  
