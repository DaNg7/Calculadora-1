 int x;
char simbolo;
String leidos =  "";
int stack[100]={0};
int contStack = 0;

    
void setup() {
  Serial.begin(9600);
}

void loop() {  
  if ( Serial.available() )    {
    simbolo=Serial.read();
    leidos = leidos + String(simbolo);
  }
  else {   
     if(leidos ==  "+") {   
       Serial.println("esto es una suma, a sumar el stack!!!!");
       leidos = "";
       Serial.println( sumarStack() );
     }
     
       if (leidos=="-")
       {
         Serial.println("resultado de la resta!!!!");
         leidos = "";
         Serial.println(restarStack());       
         
       }

       
       if (leidos=="*")
       {
         Serial.println("resultado de la multiplicacion es!!!!");
         leidos = "";
         Serial.println(multiplicar());       
         
       }
      
       
     else {
          if( esNumero(leidos) ) {
            x = leidos.toInt();
            Serial.println(x);
            stack[contStack] = x;
            contStack=contStack+1;
            leidos="";
          }
          else if(leidos.length()==0) ;
          else {
            leidos="";
            Serial.println("no es un dato valido!!!");
          }
    }
  }
//  delay(500);
}

boolean esNumero(String datos) {
  if(datos.length()==0) return false;
  for(unsigned int i = 0; i < datos.length(); ++i) {
    if ( isDigit( datos.charAt(i) ) ) continue;
    else return false;
  }
  return true;
}

int sumarStack() {
  int suma = 0;
//  Serial.print("contaStack -> "); Serial.println(contStack);
  for(unsigned int i=0;i<contStack;i++){
    suma = suma + stack[i];
  }   

  stack[0] = suma;
  contStack=1;

  return suma;
}


int restarStack() {
  int resultado=0;
  int sresta = stack[0];
  for(unsigned int i=1;i<contStack;i++){
    sresta = sresta - stack[i] ;
  } 
  
  stack[0] = sresta;
  contStack=1;

  return sresta;
} 





int multiplicar() {
  
  int mult = stack[0];
  for(unsigned int i=1;i<contStack;i++){
    mult = mult * stack[i] ;
  } 
  
  stack[0] = mult;
  contStack=1;

  return mult;
}  
