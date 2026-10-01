#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_frame_camera_shake__10TObjPlayerFPv(void *arg0);
u8 get_slot_count__14TItemProShieldFPv(void *);
M2C_UNK TObjBoss2Tunnel__sub_803D929C(M2C_UNK, s32);
M2C_UNK rotate_matrix_x(M2C_UNK, s32);
s32 get_player_list__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_803D9624(M2C_UNK, f32, f32, f32);

extern const f32 lbl_805DAF58;

void apply_frame_camera_shake__10TObjPlayerFPv(void *arg0) {
    s32 temp_r31;
    s32 var_r30;

    temp_r31 = get_player_list__10TObjPlayerFv();
    if (get_slot_count__14TItemProShieldFPv(arg0) != 6) {
        if (temp_r31 == (s32) M2C_FIELD(arg0, s32 *, 0x21C)) {
            TObjPlayer__sub_803D9624(0, lbl_805DAF58, M2C_FIELD(arg0, f32 *, 0x224), lbl_805DAF58);
        }
        var_r30 = M2C_FIELD(arg0, s32 *, 0x220);
    } else {
        if (temp_r31 == (s32) M2C_FIELD(arg0, s32 *, 0x21C)) {
            rotate_matrix_x(0, -M2C_FIELD(arg0, s32 *, 0x220));
        }
        var_r30 = (s32) (M2C_FIELD(arg0, s32 *, 0x220) * 2) / 3;
    }
    if ((temp_r31 == (s32) M2C_FIELD(arg0, s32 *, 0x20C)) || (temp_r31 == (s32) M2C_FIELD(arg0, s32 *, 0x214))) {
        TObjBoss2Tunnel__sub_803D929C(0, var_r30);
    }
    if ((temp_r31 == (s32) M2C_FIELD(arg0, s32 *, 0x210)) || (temp_r31 == (s32) M2C_FIELD(arg0, s32 *, 0x218))) {
        TObjBoss2Tunnel__sub_803D929C(0, -var_r30);
    }
}

}
