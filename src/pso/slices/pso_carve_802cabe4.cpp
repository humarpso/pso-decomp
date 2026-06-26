#include "types.h"

extern "C" {

int fn_802CB03C(void*);
void TObjEneMe1GiGueBarrier__sub_802CABE4(void* p);
void TObjEneMe1GiGueBarrier__sub_802CABF4(void* p);
s32 TObjEneMe1GiGueBarrier__sub_802CAC40(void* p);
s32 TObjEneMe1GiGueBarrier__sub_802CAC48(void* p);

void TObjEneMe1GiGueBarrier__sub_802CABE4(void* p) { *(u32*)((char*)p + 0x388) &= 0xfff7ffff; }
void TObjEneMe1GiGueBarrier__sub_802CABF4(void* p) { *(u32*)((char*)p + 0x388) |= 0x80000; }
int fn_802CAC04(void) { return 0; }
s32 TObjEneMe1GiGueBarrier__sub_802CAC40(void* p) { return *(s32*)((char*)p + 0x44c); }
s32 TObjEneMe1GiGueBarrier__sub_802CAC48(void* p) { return *(s32*)((char*)p + 0x60); }
void* TObjEneMe1GiGueBarrier__sub_802CAC50(void* p) { fn_802CB03C(p); return (char*)p + 0x3b4; }

}
