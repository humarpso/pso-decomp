#include "types.h"

extern "C" {

void fn_802A16A8(void* p);
s32 fn_802A16C0(void* p);
void TAdSelectTxtGC__vt2(void);

void fn_802A16A8(void* p) { *(u8*)((char*)p + 0x0) = 0; *(u8*)((char*)p + 0x1) = 0; *(s16*)((char*)p + 0x2) = 0; *(s32*)((char*)p + 0x4) = 0; }
s32 fn_802A16C0(void* p) { return *(s32*)((char*)p + 0x3e8); }
void TAdSelectTxtGC__vt2(void) {  }
int TAdSelectTxtGC__sub_802A16CC(void) { return 0; }
int TAdSelectTxtGC__vt1(void) { return 0; }

}
