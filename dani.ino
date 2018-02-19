int z;
int x=0;
int y;

void setup() {
 Serial.begin(9600); 
}

void loop() {
  
  
  y= Serial.parseInt();
  x=(x+y);

  if(x>z){
  
  
    Serial.print("el valor es ");
  Serial.print("\t");
  Serial.print(x);
    z=x;


  
}  

}
