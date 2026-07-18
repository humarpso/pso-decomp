#include "types.h"

extern "C" {

s32 get_size__15TWindowSnapShotFPv(void* p);
s32 get_field_8__15TWindowSnapShotFPv(void* p);
int get_height__15TWindowSnapShotFv(void);
int TWindowSnapShot__sub_802A7EAC(void);

s32 get_size__15TWindowSnapShotFPv(void* p) { return *(s32*)((char*)p + 0x0); }
s32 get_field_8__15TWindowSnapShotFPv(void* p) { return *(s32*)((char*)p + 0x8); }
int get_height__15TWindowSnapShotFv(void) { return 600; }

    extern int lbl_805D3E10;
int TWindowSnapShot__sub_802A7EAC(void) {  return lbl_805D3E10; }

}
