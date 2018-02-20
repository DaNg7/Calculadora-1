int x[10]={};
int y[10]={};
int z;
int d[]={} ;


void setup() {
  Serial.begin(9600); 

}

void loop() {
for (z=1;z<=10;z++)
  {   
   
    x[z]=random(0,10);
    y[z]=random(0,10); 
    d[z]=(y[z]+x[z]);
     
   
      if (d[z]%2==0)
      {
          Serial.print("\t");
          Serial.print("es par");
          Serial.print("=");
          Serial.print(d[z]);
          Serial.print("..");
          delay (1000);
     }
       else 
      {
          Serial.print("\t");
          Serial.print("es inpar");
          Serial.print("=");
          Serial.print(d[z]);
          Serial.print("..");
          delay (1000);
    
     }
  
  }
    

   
   

 
z=0;
d[z]=0;  

 
 }

  

