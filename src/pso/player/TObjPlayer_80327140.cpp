#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_80327140(int a0, void* a1);
void fire_spread_attack__10TObjPlayerFPv(void *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, s32, M2C_UNK, M2C_UNK);
s16 get_field_2b8__14TItemProShieldFPv(s32);
s32 is_mode_two_and_ready__10TObjPlayerFPv();
M2C_UNK TObjPlayer__sub_8011EB84(void *, s32, M2C_UNK, M2C_UNK);
M2C_UNK update_active_game_effect__10TObjPlayerFPv(void *);
s16 obj_getS16_32C(s32);

    extern const float lbl_805DF690;
void TObjPlayer__sub_80327140(int a0, void* a1) { *(float*)((char*)a1 + 0x3c) = lbl_805DF690; *(int*)((char*)a1 + 0x78) = 474; }

void fire_spread_attack__10TObjPlayerFPv(void *arg0) {
    s32 temp_r31;

    if (is_mode_two_and_ready__10TObjPlayerFPv() != 0) {
        temp_r31 = (s16) get_field_2b8__14TItemProShieldFPv(M2C_FIELD(arg0, s32 *, 0xF0));
        if ((s32) ((s16) obj_getS16_32C(M2C_FIELD(arg0, s32 *, 0xF0)) * 8) < temp_r31) {
            TObjPlayer__sub_8011EB84(arg0, M2C_FIELD(arg0, s32 *, 0xF0) + 0x38, 0, -0x238E);
            TObjPlayer__sub_8011EB84(arg0, M2C_FIELD(arg0, s32 *, 0xF0) + 0x38, 0, -0x11C7);
            TObjPlayer__sub_8011EB84(arg0, M2C_FIELD(arg0, s32 *, 0xF0) + 0x38, 0, 0);
            TObjPlayer__sub_8011EB84(arg0, M2C_FIELD(arg0, s32 *, 0xF0) + 0x38, 0, 0x11C7);
            TObjPlayer__sub_8011EB84(arg0, M2C_FIELD(arg0, s32 *, 0xF0) + 0x38, 0, 0x238E);
            TBoss3Volopt__sub_8022675C(0x4001A642, M2C_FIELD(arg0, s32 *, 0xF0) + 0x38, 0, 0);
            return;
        }
        update_active_game_effect__10TObjPlayerFPv(arg0);
        return;
    }
    update_active_game_effect__10TObjPlayerFPv(arg0);
}

}
