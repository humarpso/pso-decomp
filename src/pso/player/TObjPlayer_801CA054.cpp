#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_subobject__10TObjPlayerFi(s32 arg0);
M2C_UNK zero_vec3(s32);
M2C_UNK set_pos_z__10TObjPlayerFPvf(s32, f32);
M2C_UNK update_action_render__10TObjPlayerFPv(s32);
M2C_UNK run_action_state_phase__10TObjPlayerFisi(s32, M2C_UNK, M2C_UNK);
M2C_UNK calc_death_pose_height_offset(s32, s32);

extern f32 TObjPlayer__data_805DC360;

void init_subobject__10TObjPlayerFi(s32 arg0) {
    if (arg0 != 0) {
        run_action_state_phase__10TObjPlayerFisi(arg0, 0xF, 0);
        update_action_render__10TObjPlayerFPv(arg0);
        zero_vec3(arg0 + 0x5FC);
        calc_death_pose_height_offset(arg0 + 0x5FC, arg0);
        set_pos_z__10TObjPlayerFPvf(arg0 + 0x5FC, TObjPlayer__data_805DC360);
    }
}

}
