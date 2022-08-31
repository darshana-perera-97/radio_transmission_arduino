#include <RCSwitch.h>

RCSwitch mySwitch = RCSwicth();

void setup(){
    mySwitch.enableTransmit(10);
}

boolean b =true;
void loop(){
    if(b){
      mySwitch.send("010");  
    }
    else{
      mySwitch.send("001");  
    }
    b=!b;
    delay(100);
}