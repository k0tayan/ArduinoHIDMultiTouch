#include "MultiTouch.h"

void setup()
{
}

void loop(){
  multiTouch.setFinger(0, 8000, 8000);
  multiTouch.send();
  delay(500);
  for(int i=0; i<1; i++){
    multiTouch.releaseFinger(i);
  }
  multiTouch.send();
  delay(500);
}