int pinf[4]={2,3,4,5};
int pinc[4]={9,8,7,6,};
int  leido=0;
char d;
int valores[100]={};
char teclaPrecionada=0;
int conteo =1;
String W;

char vectorCaracteres[5] = {'1','2','1','5','6'};

void setup() {
  Serial.begin(9600);
  for(int i=0;i<4;i++){
    pinMode(pinc[i],OUTPUT);
    pinMode(pinf[i],INPUT_PULLUP);
    digitalWrite(pinc[i], HIGH);
 }
 
}

void loop() {
  teclaPrecionada = 0;
  for(int a=0;a<4;a++){
    digitalWrite(pinc[a], LOW);
        
    for(int k=0;k<4;k++){
      leido=digitalRead(pinf[k]);
    
      if (leido==LOW ){
          teclaPrecionada=1;
          char x=dat(pinc[a], pinf[k]);
           
           if (d!=x){
            if (x=='A'){
           int sumas=sumarStack();     
            Serial.print("el resultado es =");
            Serial.println(sumas);
            
            }
            else{
              Serial.print( x );
             d =  x;
             W=String(d);
             conteo++;
             valores[conteo] =W.toInt() ;   
              
            }
           }
           
           delay(100);       
       }        
    }
    
    digitalWrite(pinc[a], HIGH);
    
  }
  if(!teclaPrecionada){
    d="";
  
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

   if (columna==6 && fila==5) return 'A';
   if (columna==6 && fila==2)return 'D';
   if (columna==6 && fila==4)return 'B';
   if (columna==6 && fila==3)return 'C';
   
   return "";
  
}




int transformarvalor (){
    
}


int sumarStack() {
  int suma = 0;
  for(unsigned int i=0;i<=conteo;i++){
    suma = suma + valores[i];
  
  }
     
  valores[0] = suma;
  conteo=1;
 
  return suma;
}


