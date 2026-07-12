#include "types.h"

extern "C" {

int TObjPlayer__sub_800192DC(void*);
s16 TObjPlayer__sub_800193D0(void* p);
s16 TObjPlayer__sub_800193F4(void* p);
s16 TObjPlayer__sub_8001944C(void* p);
s32 update_field_318__10TObjPlayerFPv(void* p);
s32 TObjPlayer__sub_80019478(void* p);
f32 get_target_value__10TObjPlayerFPv(void* p);
f32 TObjPlayer__sub_800194A4(void* p);
s16 TObjPlayer__sub_800194C4(void* p);
s16 TObjPlayer__sub_800194E8(void* p);
s16 TObjPlayer__sub_800194F0(void* p);
s16 TObjPlayer__sub_80019514(void* p);
void TObjPlayer__sub_8001951C(void* p);
void TObjPlayer__sub_80019528(void* p, u32 v);
void TObjPlayer__sub_80019568(void* p, s16 v);

s16 TObjPlayer__sub_8001944C(void* p) { return *(s16*)((char*)p + 0x2d0); }
s32 update_field_318__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_80019478(*(void**)((char*)p + 0x318)); }
s32 TObjPlayer__sub_80019478(void* p) { return *(s32*)((char*)p + 0xc); }
f32 get_target_value__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_800194A4(*(void**)((char*)p + 0x318)); }
f32 TObjPlayer__sub_800194A4(void* p) { return *(f32*)((char*)p + 0x8); }

}
