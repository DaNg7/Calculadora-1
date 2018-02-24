char x;
char simbolo;
String leidos =  "";
char guardado [100]={};
int z;
int sim ;
int c;
  
       int l;
void setup() {
  Serial.begin(9600);
}

void loop() {
 
  
  if ( Serial.available() ) {
    c++;
    simbolo=Serial.read();
    leidos = leidos+ String(simbolo);
    sim = simbolo;
    guardado [c]={sim};
    Serial.println(simbolo );
    delay(1000);
  }
  
  
  
  else {
    
     if(simbolo == '+'){
     
       for( z=0 ;z<c ;z++){
       l=x + guardado [z];
       delay (1000);
        
        }
     }
     Serial.parseInt(l);
     
     
  }

}
