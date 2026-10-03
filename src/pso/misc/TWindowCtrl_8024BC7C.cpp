#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 queue_destruction__7TObjectFv(int);
u32 __nw__7TObjectFUl(int);
s32 all_parents_unqueued_for_destruction__7TObjectFv(int);
s32 is_guild_card_receive_active();
s32 TWindowCtrl__sub_8024701C(int);
s32 has_player_active_menu__11TWindowCtrlFi(void *);
s32 is_slot_visible__11TWindowCtrlFi(void *);
s32 get_flag_bit5__11TWindowCtrlFv();
u32 TWindowGetComCard__ct(int, void *);
extern s32 lbl_805D53A0;
void TWindowCtrl__sub_8024BC7C(u8 *arg0);
}

extern "C" {

void TWindowCtrl__sub_8024BC7C(u8 *arg0) {
    u32 temp_r3;
    u32 temp_r3_2;
    u32 temp_r3_3;
    u32 temp_r3_4;
    u32 var_r0;
    temp_r3 = M2C_FIELD(arg0, u32 *, 0x3C);
    if ((temp_r3 != 0U) && (all_parents_unqueued_for_destruction__7TObjectFv((int) (temp_r3)) == 0)) {
        M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
    }
    if ((is_guild_card_receive_active() == 0) || (has_player_active_menu__11TWindowCtrlFi((void *) (lbl_805D53A0)) != 0) || (is_slot_visible__11TWindowCtrlFi((void *) (lbl_805D53A0)) != 0) || (get_flag_bit5__11TWindowCtrlFv() != 0) || ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) || ((temp_r3_2 = M2C_FIELD(arg0, u32 *, 0x38), ((temp_r3_2 == 0U) == 0)) && (TWindowCtrl__sub_8024701C((int) (temp_r3_2)) != 0))) {
        temp_r3_3 = M2C_FIELD(arg0, u32 *, 0x3C);
        if (temp_r3_3 != 0U) {
            queue_destruction__7TObjectFv((int) (temp_r3_3));
            M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
        }
    } else if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) == 0U) {
        temp_r3_4 = __nw__7TObjectFUl((int) (0x2C));
        var_r0 = temp_r3_4;
        if (var_r0 != 0U) {
            var_r0 = TWindowGetComCard__ct((int) (temp_r3_4), (void *) (arg0));
        }
        M2C_FIELD(arg0, u32 *, 0x3C) = var_r0;
    }
}

}
