#include "types.h"

extern "C" {

s16 TObjPlayer__sub_800A7764(void* p);
s16 TObjPlayer__sub_800A776C(void* p);
int TObjPlayer__sub_800A7774(void* p);
void TObjPlayer__sub_800A77C0(void* p, u32 v);
void TObjPlayer__sub_800A77D0(void);
int VecCopy__FP3VecPC3Vec(void*);

s16 TObjPlayer__sub_800A7764(void* p) { return *(s16*)((char*)p + 0x2c8); }
s16 TObjPlayer__sub_800A776C(void* p) { return *(s16*)((char*)p + 0x2ca); }
int TObjPlayer__sub_800A7774(void* p) { return VecCopy__FP3VecPC3Vec((char*)p + 0x38); }

}
