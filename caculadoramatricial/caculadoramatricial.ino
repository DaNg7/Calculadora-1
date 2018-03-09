int pinf[4]={2,3,4,5};
int pinc[4]={9,8,7,6,};
int  leido=0;
int  leido2=0;
char x []={};
  void setup() {
  Serial.begin(9600);
  for(int i=0;i<4;i++){
    pinMode(pinc[i],OUTPUT);
    pinMode(pinf[i],INPUT_PULLUP);
    digitalWrite(pinc[i], HIGH);
 }
 
}

  void loop() {
  for(int a=0;a<4;a++){
    digitalWrite(pinc[a], LOW);
    for(int k=0;k<4;k++){
      leido=digitalRead(pinf[k]);
    
      if (leido==LOW ){
          leido2=digitalRead(pinf[k]);
         if (leido2==HIGH){
             Serial.print (dat(pinc[a],pinf[k]));   
              
       }
            
        }
      }
      digitalWrite(pinc[a], HIGH);
    }
  }  






  char dat (int columna , int fila ){
   if (columna==8 && fila==5) return '2';
    
   

    }

  
