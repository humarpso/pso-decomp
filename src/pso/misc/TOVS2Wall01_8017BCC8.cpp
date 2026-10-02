#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init__11TOVS2Wall01Fi(s32 arg0);
f32 take_hit__11TOVS2Wall01FPvUi(u8 *arg0, u32 arg1);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, s32, M2C_UNK, M2C_UNK);
M2C_UNK TOVS2Wall01__sub_8017BAFC(void *, M2C_UNK);
M2C_UNK TOVS2Wall01__sub_8017BC10(s32, s32);
M2C_UNK spawn_particle_effect(void *, M2C_UNK);
s32 is_locally_controlled__10TObjPlayerFPv(u32);
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(s32, M2C_UNK, M2C_UNK);
u16 obj_getField1c(u32);

void init__11TOVS2Wall01Fi(s32 arg0) {
    s32 var_r31;

    clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 1);
    var_r31 = 7;
    do {
        TOVS2Wall01__sub_8017BC10(arg0, var_r31);
        var_r31 += 1;
    } while (var_r31 <= 0xF);
    spawn_particle_effect((void *)(arg0 + 0x38), (M2C_UNK)(0x45));
    spawn_particle_effect((void *)(arg0 + 0x38), (M2C_UNK)(0x46));
    TBoss3Volopt__sub_8022675C(0x4004BC05, arg0 + 0x38, 0, 0);
}

extern const f32 lbl_805DBAA8;

f32 take_hit__11TOVS2Wall01FPvUi(u8 *arg0, u32 arg1) {
    u32 var_r31;

    var_r31 = 0U;
    obj_getField1c(arg1);
    if (obj_getField1c(arg1) < 4U) {
        var_r31 = arg1;
    }
    if ((var_r31 != 0U) && (is_locally_controlled__10TObjPlayerFPv(var_r31) == 1)) {
        M2C_FIELD(arg0, s32 *, 0x33C) = (s32) (M2C_FIELD(arg0, s32 *, 0x33C) - 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x33C) <= 0) {
            M2C_FIELD(arg0, s32 *, 0x33C) = 0;
            TOVS2Wall01__sub_8017BAFC(arg0, 1);
        } else {
            TOVS2Wall01__sub_8017BAFC(arg0, 0);
        }
        spawn_particle_effect((void *)(arg0 + 0x38), (M2C_UNK)(0x1D0));
        spawn_particle_effect((void *)(arg0 + 0x38), (M2C_UNK)(1));
    }
    return lbl_805DBAA8;
}

}
