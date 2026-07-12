#include "types.h"

extern "C" {

s32 TWindowSnapShot__sub_802A7E94(void* p);
s32 TWindowSnapShot__sub_802A7E9C(void* p);
int TWindowSnapShot__sub_802A7EA4(void);
int TWindowSnapShot__sub_802A7EAC(void);

s32 TWindowSnapShot__sub_802A7E94(void* p) { return *(s32*)((char*)p + 0x0); }
s32 TWindowSnapShot__sub_802A7E9C(void* p) { return *(s32*)((char*)p + 0x8); }
int TWindowSnapShot__sub_802A7EA4(void) { return 600; }

    extern int lbl_805D3E10;
int TWindowSnapShot__sub_802A7EAC(void) {  return lbl_805D3E10; }

}
