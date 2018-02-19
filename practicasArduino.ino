void setup() {
  
  Serial.begin(9600);
  Serial1.begin(9600);
}

void loop() {
  // lee el puerto 0, envia por el puerto 1:
  if (Serial.available()) {
    int inByte = Serial.read();
    Serial1.print(inByte); 
  }
  // lee el puerto 1, envia por el puerto 0:
  if (Serial1.available()) {
    int inByte = Serial1.read();
    Serial.print(inByte ); 
  }


}

