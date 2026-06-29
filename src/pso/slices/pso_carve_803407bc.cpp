#include "types.h"

extern "C" {

int fn_80246258(void*);
int fn_8024664C(void*);
s32 TWindowDD__sub_80340820(void* p);
void TWindowDD__sub_80340910(void* p);

void fn_803407BC(void* p) { fn_8024664C(p); fn_80246258(p); }
int TWindowDD__sub_803407F0(void) { return 0; }
s32 TWindowDD__sub_80340820(void* p) { return *(s32*)((char*)p + 0x68); }
int TWindowDD__sub_80340828(void) { return 0; }
void TWindowDD__sub_80340910(void* p) { *(s32*)((char*)p + 0x60) = 1; }
int TWindowDD__sub_8034091C(void) { return 0; }

}
