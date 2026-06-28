#include "types.h"

extern "C" {

s32 TAdRicoRing__sub_8001BEE8(s32, s32);
int fn_80121200(void*);
int TObjBoss2Tunnel__sub_803D929C(void*, void*);
void fn_80129130(void* p);
void fn_80129124(void* p);

void fn_801290A0(u32 arg0) {
    if (arg0 != 0U) {
        TAdRicoRing__sub_8001BEE8(arg0 + 0x1FC, 2);
    }
}
int fn_801290D0(void) { return 0; }
int fn_80129118(void) { return 0; }
void fn_80129124(void* p) { *(s32*)((char*)p + 0x1fc) = 0; }
void fn_80129130(void* p) { if (fn_80121200(p) == 0) { TObjBoss2Tunnel__sub_803D929C((void*)0, *(void**)((char*)p + 0x1fc)); } }

}
