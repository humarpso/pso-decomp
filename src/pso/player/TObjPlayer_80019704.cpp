#include "types.h"

extern "C" {

f64 fn_803A2C8C(void);
f64 TObjPlayer__sub_80019784(void);
int get_item_field_6__10TObjPlayerFPv(void* p);
u8 TObjPlayer__sub_8001972C(void* p);
s32 TObjPlayer__sub_80019734(void* p);
int TObjPlayer__sub_801C675C(void*, int);

int get_item_field_6__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_801C675C((char*)p + 0xd04, 6); }
u8 TObjPlayer__sub_8001972C(void* p) { return *(u8*)((char*)p + 0xed); }
s32 TObjPlayer__sub_80019734(void* p) { return *(s32*)((char*)p + 0x0); }

}
