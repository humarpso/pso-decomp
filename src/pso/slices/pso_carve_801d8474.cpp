#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Obj_801D8474 { s8 a; u8 b; };

extern "C" {
s32 can_use_palette_action__10TObjPlayerFPvUcUc(u32, u8, u8);
s32 can_use_palette_action_for_entry__10TObjPlayerFPvUi(Obj_801D8474 *p, u32 obj);
}

extern "C" {

s32 TObjPlayer__sub_801D8664(s32, s16, s16);
s32 set_animation_default__10TObjPlayerFPv(s32, s16);
void *get_anim_table_entry__10TObjPlayerFPvi();
s32 TObjPlayer__sub_801D84A8(void* p);
int bswap_disp_config_field__10TObjPlayerFPv(void* p);
s32 TObjPlayer__sub_801D84F0(void* p);
int bswap_16__FPUs(void*);

s32 can_use_palette_action_for_entry__10TObjPlayerFPvUi(Obj_801D8474 *p, u32 obj) {
    return can_use_palette_action__10TObjPlayerFPvUcUc(obj, p->a, p->b);
}

}
