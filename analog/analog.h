#ifndef ANALOG_H
#define ANALOG_H
#include <arduino.h>
class analog {
public:
void analogWriteSignal(int pin,long val,float tempRead,int bitset,String mode,float tempstop);
};
#endif