#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void play_action_23_with_temp_state__10TObjPlayerFPv(u8 *arg0);
void update_invincible_blink__10TObjPlayerFPv(void *arg0);
f32 TBoss8Dragon__sub_803D64C0(s32);
u8 get_slot_count__14TItemProShieldFPv();
M2C_UNK TObjPlayer__sub_80120908();
M2C_UNK TObjPlayer__sub_80120BBC(void *, int);
M2C_UNK set_status_flags__10TObjPlayerFPvUi(void *, M2C_UNK);

void play_action_23_with_temp_state__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_r31;

    temp_r31 = M2C_FIELD(arg0, s32 *, 0xF4);
    TObjPlayer__sub_80120908();
    M2C_FIELD(arg0, s32 *, 0xF4) = (s32) M2C_FIELD(arg0, s32 *, 0x188);
    TObjPlayer__sub_80120BBC(arg0, 0x23);
    M2C_FIELD(arg0, s32 *, 0xF4) = temp_r31;
}

extern f32 lbl_805DF0A8;

void update_invincible_blink__10TObjPlayerFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1F8) > 0) {
        if (get_slot_count__14TItemProShieldFPv() == 1) {
            M2C_FIELD(arg0, s32 *, 0x1F8) = (s32) (M2C_FIELD(arg0, s32 *, 0x1F8) - 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x1F8) == 0) {
                set_status_flags__10TObjPlayerFPvUi(arg0, 0x800);
            }
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x200) = (s32) (M2C_FIELD(arg0, s32 *, 0x200) + 0xB6);
        M2C_FIELD(arg0, s32 *, 0x1FC) = (s32) (lbl_805DF0A8 * TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0x200)));
    }
}

}
