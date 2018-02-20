int myStrings =  (43, DEC);
int Z;
void setup(){
Z++;
Serial.begin(9600);

}


void loop(){

   Serial.println(myStrings[Z]);
   delay(1000);
   }

