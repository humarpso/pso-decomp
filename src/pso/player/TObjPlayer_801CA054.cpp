#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_subobject__10TObjPlayerFi(s32 arg0);
M2C_UNK TObjPlayer__sub_801BF964(s32);
M2C_UNK set_pos_z__10TObjPlayerFPvf(s32, f32);
M2C_UNK update_action_render__10TObjPlayerFPv(s32);
M2C_UNK TObjPlayer__sub_801D0BC0(s32, M2C_UNK, M2C_UNK);
M2C_UNK TObjPlayer__sub_801C58CC(s32, s32);

extern f32 TObjPlayer__data_805DC360;

void init_subobject__10TObjPlayerFi(s32 arg0) {
    if (arg0 != 0) {
        TObjPlayer__sub_801D0BC0(arg0, 0xF, 0);
        update_action_render__10TObjPlayerFPv(arg0);
        TObjPlayer__sub_801BF964(arg0 + 0x5FC);
        TObjPlayer__sub_801C58CC(arg0 + 0x5FC, arg0);
        set_pos_z__10TObjPlayerFPvf(arg0 + 0x5FC, TObjPlayer__data_805DC360);
    }
}

}
