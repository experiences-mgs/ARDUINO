#include "analog.h"
void analog::analogWriteSignal(int pin,long val,float tempRead,int bitset,String mode,float tempstop){
if(mode=="notemporail"){
for(int z=bitset;0<z;z--){
int bit=bitRead(val,z);
if(bit==1){
digitalWrite(pin,HIGH);

}
if(bit==0){
digitalWrite(pin,LOW);

}
else{

}
delay(tempRead);
};
}//notemporail
if(mode=="temporail"){
for(int z=bitset;-1<z;z--){
if(z>-1){
int bit=bitRead(val,z);
if(bit==1){
digitalWrite(pin,HIGH);

}
if(bit==0){
digitalWrite(pin,LOW);

}
else{

}
delay(tempRead);
}
if(z==-1){
delay(tempstop);
}
};

}//temporail


};