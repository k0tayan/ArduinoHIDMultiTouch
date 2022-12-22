#ifndef Touch_h
#define Touch_h

#include "HID.h"

#if !defined(_USING_HID)

#warning "Using legacy HID core (non pluggable)"

#else

class MultiTouch {
public:
  MultiTouch(void);
  void send(void);
  void setFinger(uint8_t identifier, int16_t x, int16_t y);
  void releaseFinger(uint8_t finger);
};
extern MultiTouch multiTouch;

#endif
#endif