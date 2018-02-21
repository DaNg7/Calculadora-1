
int  x;
int y;
void setup() {
Serial.begin(9600);

}

void loop() {
 x=Serial.read();
 if (x!= '\n','\r')
 {
    Serial.println(" no hay salto linia ");
    delay (1000);
}
 else {

 Serial.println("  hay salto linia ");
    delay (1000); 
}
}


