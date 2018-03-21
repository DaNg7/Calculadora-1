int pines[4]={2,3,4,5};
void setup() {
  for(int d;d<4;d++){
  pinMode(pines[d],OUTPUT);

  }

}

void loop() {
    for( int i =0;i<5;i++){
      digitalWrite(pines[i],HIGH);
      delay(1000);
      digitalWrite(pines[i],LOW);
    }
     for( int a=5;a>0;a--){
      digitalWrite(pines[a],HIGH);
      delay(1000);
      digitalWrite(pines[a],LOW);
    }
   
   
}
