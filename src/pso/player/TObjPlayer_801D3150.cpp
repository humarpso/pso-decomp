#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_anim_action__10TObjPlayerFPvi(u8 *arg0, s32 arg1);
M2C_UNK TObjPlayer__sub_8001BED8(void *, int);
M2C_UNK check_status_flag_128__10TObjPlayerFPv(void *);
f32 TObjPlayer__sub_801D9004(void *);

void apply_anim_action__10TObjPlayerFPvi(u8 *arg0, s32 arg1) {
    TObjPlayer__sub_8001BED8((void *) (arg0 + 0xC), (int) (2));
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) TObjPlayer__sub_801D9004((void *) (arg1));
    check_status_flag_128__10TObjPlayerFPv((void *) (arg1));
}

}
