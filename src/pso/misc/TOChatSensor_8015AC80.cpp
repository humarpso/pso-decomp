#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void check_player_proximity__12TOChatSensorFPv(u8 *arg0);
u8 TODoorAncient08__sub_80229220(int);
s32 all_parents_unqueued_for_destruction__7TObjectFv(u32);
void run_task__12TOChatSensorFv(u8 *arg0);
}

extern "C" {

void check_player_proximity__12TOChatSensorFPv(u8 *arg0);
void init_params__12TOChatSensorFPv(void *arg0);
f32 TObjPlayer__sub_80141CF8(void *, void *);
u32 TPlayerBattleCtrl4P__sub_801BA74C(void *);

extern s32 lbl_805D53A0;

void check_player_proximity__12TOChatSensorFPv(u8 *arg0) {
    u32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((void *) (lbl_805D53A0));
    if (temp_r3 != 0U) {
        if (TObjPlayer__sub_80141CF8((void *) (temp_r3 + 0x38), (void *) (arg0 + 0x38)) < M2C_FIELD(arg0, f32 *, 0x9C)) {
            M2C_FIELD(arg0, s32 *, 0xA0) = 1;
            return;
        }
        M2C_FIELD(arg0, s32 *, 0xA0) = 0;
    }
}

extern s32 *lbl_805D58D4;

void init_params__12TOChatSensorFPv(void *arg0) {
    f32 temp_f0;
    s32 temp_r5;

    M2C_FIELD(arg0, u32 *, 0x90) = (u32) M2C_FIELD(arg0, u32 *, 0x5C);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x90) >= 2U) {
        M2C_FIELD(arg0, u32 *, 0x90) = 0U;
    }
    M2C_FIELD(arg0, u32 *, 0x98) = (u32) M2C_FIELD(arg0, u32 *, 0x60);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x98) >= 2U) {
        M2C_FIELD(arg0, u32 *, 0x90) = 0U;
    }
    temp_f0 = M2C_FIELD(arg0, f32 *, 0x68);
    M2C_FIELD(arg0, f32 *, 0x9C) = (f32) (temp_f0 * temp_f0);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x90) == 0U) {
        M2C_FIELD(arg0, s32 *, 0x94) = (s32) M2C_FIELD(arg0, s32 *, 0x84);
    } else {
        M2C_FIELD(arg0, u16 *, 0x94) = (u16) M2C_FIELD(arg0, s32 *, 0x84);
        if ((u16) M2C_FIELD(arg0, u16 *, 0x94) > 0x100U) {
            M2C_FIELD(arg0, u16 *, 0x94) = 0xFFFF;
        }
    }
    M2C_FIELD(arg0, s32 *, 0xCC) = (s32) M2C_FIELD(arg0, s32 *, 0x88);
    temp_r5 = M2C_FIELD(arg0, s32 *, 0xCC);
    if ((temp_r5 != 0) && ((temp_r5 < 0) || ((s32) *lbl_805D58D4 <= temp_r5))) {
        M2C_FIELD(arg0, s32 *, 0xCC) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0xC8) = 0;
}
void run_task__12TOChatSensorFv(u8 *arg0) {
    s32 temp_r0;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x90) == 0U) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0xC8);
        switch (temp_r0) {
        case 0:
            check_player_proximity__12TOChatSensorFPv((u8 *)((void *) (arg0)));
            return;
        case 1:
            if (((u32) M2C_FIELD(arg0, u32 *, 0xC4) != 0U) && (all_parents_unqueued_for_destruction__7TObjectFv(M2C_FIELD(arg0, u32 *, 0xC4)) == 0)) {
                M2C_FIELD(arg0, u32 *, 0xC4) = 0U;
                M2C_FIELD(arg0, s32 *, 0xC8) = 0;
                return;
            }
            break;
        }
    } else {
        if (TODoorAncient08__sub_80229220((int) (M2C_FIELD(arg0, u16 *, 0x94))) == 0) {
            check_player_proximity__12TOChatSensorFPv((u8 *)((void *) (arg0)));
            return;
        }
        M2C_FIELD(arg0, s32 *, 0xA0) = 0;
    }
}

}
