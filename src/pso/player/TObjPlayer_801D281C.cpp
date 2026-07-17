#include "types.h"

extern "C" {

s32 get_field_4__10TObjPlayerFPv(void* p);
s16 TObjPlayer__sub_801D2824(void* p);
s16 TObjPlayer__sub_801D282C(void* p);

s32 get_field_4__10TObjPlayerFPv(void* p) { return *(s32*)((char*)p + 0x4); }
s16 TObjPlayer__sub_801D2824(void* p) { return *(s16*)((char*)p + 0x8); }
s16 TObjPlayer__sub_801D282C(void* p) { return *(s16*)((char*)p + 0x0); }

}
