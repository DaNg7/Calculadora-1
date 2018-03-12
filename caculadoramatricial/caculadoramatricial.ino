int pinf[4]={2,3,4,5};
int pinc[4]={9,8,7,6,};
int  leido=0;
int  leido2=0;
char d;
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
          char x=dat(pinc[a], pinf[k]);
           
           if (d!=x){
            Serial.print(x); 
            d=x;     
              
       }
            
        }
      }
      digitalWrite(pinc[a], HIGH);
    }
  }  






  char dat (int columna , int fila ){
   
   
   if (columna==8 && fila==5) return '2';
    
   
   
   if (columna==8 && fila==2)return  '0';
   if (columna==8 && fila==4)return '5';
   if (columna==8 && fila==3)return '8';
    
   if (columna==9 && fila==5)return '1';
   if (columna==9 && fila==2)return '*';
   if (columna==9 && fila==4)return '4';
   if (columna==9 && fila==3)return '7';

    if (columna==7 && fila==5)return '3';
   if (columna==7 && fila==2)return '#';
   if (columna==7 && fila==4)return '6';
   if (columna==7 && fila==3)return '9';

   if (columna==6 && fila==5)return 'A';;
   if (columna==6 && fila==2)return 'D';;
   if (columna==6 && fila==4)return 'B';
   if (columna==6 && fila==3)return 'C';
  
  

    }

  
