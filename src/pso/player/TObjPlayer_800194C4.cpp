#include "types.h"

extern "C" {

int TObjPlayer__sub_800192DC(void*);
s16 get_model_animation_id__10TObjPlayerFPv(void* p);
s16 get_id__10TObjPlayerFPv(void* p);
s16 TObjPlayer__sub_8001944C(void* p);
s32 update_field_318__10TObjPlayerFPv(void* p);
s32 get_field_0c__10TObjPlayerFPv(void* p);
f32 get_target_value__10TObjPlayerFPv(void* p);
f32 get_pos_x__10TObjPlayerFPv(void* p);
s16 TObjPlayer__sub_800194C4(void* p);
s16 TObjPlayer__sub_800194E8(void* p);
s16 TObjPlayer__sub_800194F0(void* p);
s16 get_level__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_8001951C(void* p);
void add_flags_2e4__10TObjPlayerFPvUi(void* p, u32 v);
void TObjPlayer__sub_80019568(void* p, s16 v);

s16 TObjPlayer__sub_800194C4(void* p) { return TObjPlayer__sub_800194E8(*(void**)((char*)p + 0x318)); }
s16 TObjPlayer__sub_800194E8(void* p) { return *(s16*)((char*)p + 0x4); }
s16 TObjPlayer__sub_800194F0(void* p) { return get_level__10TObjPlayerFPv(*(void**)((char*)p + 0x318)); }
s16 get_level__10TObjPlayerFPv(void* p) { return *(s16*)((char*)p + 0x2); }
void TObjPlayer__sub_8001951C(void* p) { *(s16*)((char*)p + 0x11c) = 0; }
void add_flags_2e4__10TObjPlayerFPvUi(void* p, u32 v) { *(u32*)((char*)p + 0x2e4) |= v; }
void* init_192dc_return_self__10TObjPlayerFPv(void* p) { TObjPlayer__sub_800192DC(p); return p; }
void TObjPlayer__sub_80019568(void* p, s16 v) { *(s16*)((char*)p + 0x94) = v; }

}
