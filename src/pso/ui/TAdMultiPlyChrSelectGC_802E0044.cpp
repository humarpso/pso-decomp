#include "types.h"

extern "C" {

s32 TAdMultiPlyChrSelectGC__sub_802E0044(void* p);
int TAdMultiPlyChrSelectGC__sub_802E004C(void);
s32 TAdMultiPlyChrSelectGC__sub_802E0054(void* p);
void TAdMultiPlyChrSelectGC__sub_802E005C(int a0, int a1);

s32 TAdMultiPlyChrSelectGC__sub_802E0044(void* p) { return *(s32*)((char*)p + 0x4e8); }

    extern int lbl_805D67E4;
int TAdMultiPlyChrSelectGC__sub_802E004C(void) {  return lbl_805D67E4; }

s32 TAdMultiPlyChrSelectGC__sub_802E0054(void* p) { return *(s32*)((char*)p + 0x4f8); }

    extern int TAdMultiPlyChrSelectGC__data_805D67DC;
void TAdMultiPlyChrSelectGC__sub_802E005C(int a0, int a1) { TAdMultiPlyChrSelectGC__data_805D67DC = a1; }

}
