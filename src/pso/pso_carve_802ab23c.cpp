#include "types.h"

extern "C" {

void fn_802AB23C(void* p);
void fn_802AB250(void* p);
void fn_802AB260(void* p);
void fn_802AB28C(void* p);
int fn_802B0FC8(void*);
int fn_802B1004(void*);

void fn_802AB23C(void* p) { *(s32*)((char*)p + 0x3d4) = 0; *(s32*)((char*)p + 0x3d8) = 2; }
void fn_802AB250(void* p) { *(s32*)((char*)p + 0x3d4) = 0; *(s32*)((char*)p + 0x3d8) = 0; }
void fn_802AB260(void* p) { void* m = *(void**)((char*)p + 0x384); if (m) fn_802B0FC8(m); }
void fn_802AB28C(void* p) { void* m = *(void**)((char*)p + 0x384); if (m) fn_802B1004(m); }

}
