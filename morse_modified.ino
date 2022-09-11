/////
////
/*
 * 
 * 
 * 
 * 
 * 
 * 
 */
String name = " ";
int run = 0;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);

  //Serial communication is setup
  Serial.begin(9600);
  delay(500);

  //Input is acquired and stored in 'name'
  Serial.println("Enter your name: ");
  while(Serial.available() == 0){}
  name = Serial.readString();

  //Input is checked to not have any invalid character
  for(int i=0; i < name.length(); i++){
    if(isAlpha(name[i])){
      name.toUpperCase();
    }
    else{
      Serial.println("Invalid Input. Kindly input English alphabets only");
      run = 1;
      break;
    }
  }
  
}


// the loop function runs over and over again forever
void loop() {
  if(run == 1){
    exit(0);
  }
  else{
    delay(1500);
    for(int i = 0; i<name.length(); i++){
      
      switch(name[i]){
        case 'A':
          A();
          break;
        case 'B':
          B();
          break;
        case 'C':
          C();
          break;
        case 'D':
          D();
          break;
        case 'E':
          E();
          break;
        case 'F':
          F();
          break;
        case 'G':
          G();
          break;
        case 'H':
          H();
          break;
        case 'I':
          I();
          break;
        case 'J':
          J();
          break;
        case 'K':
          K();
          break;
        case 'L':
          L();
          break;
        case 'M':
          M();
          break;
        case 'N':
          N();
          break;
        case 'O':
          O();
          break;
        case 'P':
          P();
          break;
        case 'Q':
          Q();
          break;
        case 'R':
          R();
          break;
        case 'S':
          S();
          break;
        case 'T':
          T();
          break;
        case 'U':
          U();
          break;
        case 'V':
          V();
          break;
        case 'W':
          W();
          break;
        case 'X':
          X();
          break;
        case 'Y':
          Y();
          break;
        case 'Z':
          Z();
          break;
          
      }

      delay(1000);
    }
  }
  
  
  delay(10);

}

void dot(){
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(300);                       
  digitalWrite(LED_BUILTIN, LOW);    
  delay(300); // .
}

void dash(){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(600);
  digitalWrite(LED_BUILTIN, LOW);
  delay(300); // -
}

void A(){
  dot();
  dash();
}

void B(){
  dash();
  dot();
  dot();
  dot();
  
}

void C(){
  dash();
  dot();
  dash();
  dot();
}

void D(){
  dash();
  dot();
  dot();
}

void E(){
  dot();
}

void F(){
  dot();
  dot();
  dash();
  dot();
}

void G(){
  dash();
  dash();
  dot();
}

void H(){
  dot();
  dot();
  dot();
  dot();

}

void I(){
  dot();
  dot();
  
}

void J(){
  dot();
  dash();
  dash();
  dash();
  
}

void K(){
  dash();
  dot();
  dash();
  
}

void L(){
  dot();
  dash();
  dot();
  dot();
}

void M(){
  dash();
  dash();
}

void N(){
  dash();
  dot();
}

void O(){
  dash();
  dash();
  dash();
}

void P(){
  dot();
  dash();
  dash();
  dot();
}

void Q(){
  dash();
  dash();
  dot();
  dash();
}

void R(){
  dot();
  dash();
  dot();
}

void S(){
  dot();
  dot();
  dot();
}

void T(){
  dash();
}

void U(){
  dot();
  dot();
  dash();
}

void V(){
  dot();
  dot();
  dot();
  dash();
}

void W(){
  dot();
  dash();
  dash();
}

void X(){
  dash();
  dot();
  dot();
  dash();
  
}

void Y(){
  dash();
  dot();
  dash();
  dash();
}

void Z(){
  dash();
  dash();
  dot();
  dot();
}
