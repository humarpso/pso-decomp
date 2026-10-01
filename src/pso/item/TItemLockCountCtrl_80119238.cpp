#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base_801193D8 { char pad[0x18]; };

struct VObj_801193D8 : Base_801193D8 {
    virtual void m0(s32);
};

extern "C" {
extern VObj_801193D8 *lbl_80506228[7];
void TItemLockCountCtrl__sub_801193D8(void);
extern VObj_801193D8 *lbl_80506228[7];
void *TItemLockCountCtrl__ct(void *, s32, s32, void (*)(int), void (*)(int));
void *__nw__7TObjectFUl(u32);
void TItemEquipBase__sub_80119100(int arg0);
void notify_stealth_enemies_10(int arg0);
void TItemEquipBase__sub_80119168(int arg0);
void TItemEquipBase__sub_8011919C(int arg0);
void TItemEquipBase__sub_801191D0(int arg0);
void fn_80119204(int arg0);
void TItemLockCountCtrl__sub_80119238(int arg0);
void TItemLockCountCtrl__sub_8011926C(int arg0);
void TItemLockCountCtrl__sub_801192A0(int arg0);
void TItemLockCountCtrl__sub_8011933C(int arg0);
void TItemLockCountCtrl__sub_80119370(int arg0);
void apply_battle_ctrl_effect(int arg0);
void notify_stealth_enemies_08(int arg0);
void set_battle_ctrl_flag30__18TItemLockCountCtrlFi(int arg0);
void TItemLockCountCtrl__sub_80119444(void);
}

extern "C" {

void TItemLockCountCtrl__sub_80119238(int arg0);
void TItemLockCountCtrl__sub_8011926C(int arg0);
void TItemLockCountCtrl__sub_801192A0(int arg0);
void TItemLockCountCtrl__sub_8011933C(int arg0);
void TItemLockCountCtrl__sub_80119370(int arg0);
void apply_battle_ctrl_effect(int arg0);
void notify_stealth_enemies_08(int arg0);
void set_battle_ctrl_flag30__18TItemLockCountCtrlFi(int arg0);
M2C_UNK TObjEneMe3Stelth__sub_800F5874(u32, M2C_UNK);
u32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
M2C_UNK obj_clearFlags30(u32, M2C_UNK);
M2C_UNK obj_setFlags30(u32, M2C_UNK);

void TItemLockCountCtrl__sub_80119238(int arg0) {
    u32 temp = TPlayerBattleCtrl4P__sub_801BA74C(arg0);
    if (temp != 0U) {
        obj_clearFlags30(temp, 0x40);
    }
}

void TItemLockCountCtrl__sub_8011926C(int arg0) {
    u32 temp = TPlayerBattleCtrl4P__sub_801BA74C(arg0);
    if (temp != 0U) {
        TObjEneMe3Stelth__sub_800F5874(temp, 0x20);
    }
}

void TItemLockCountCtrl__sub_801192A0(int arg0) {
    u32 temp = TPlayerBattleCtrl4P__sub_801BA74C(arg0);
    if (temp != 0U) {
        TObjEneMe3Stelth__sub_800F5874(temp, 0x10);
    }
}

void notify_stealth_enemies_08(int arg0) {
    u32 temp = TPlayerBattleCtrl4P__sub_801BA74C(arg0);
    if (temp != 0U) {
        TObjEneMe3Stelth__sub_800F5874(temp, 8);
    }
}

void apply_battle_ctrl_effect(int arg0) {
    u32 temp = TPlayerBattleCtrl4P__sub_801BA74C(arg0);
    if (temp != 0U) {
        TObjEneMe3Stelth__sub_800F5874(temp, 4);
    }
}

void TItemLockCountCtrl__sub_8011933C(int arg0) {
    u32 temp = TPlayerBattleCtrl4P__sub_801BA74C(arg0);
    if (temp != 0U) {
        TObjEneMe3Stelth__sub_800F5874(temp, 2);
    }
}

void TItemLockCountCtrl__sub_80119370(int arg0) {
    u32 temp = TPlayerBattleCtrl4P__sub_801BA74C(arg0);
    if (temp != 0U) {
        TObjEneMe3Stelth__sub_800F5874(temp, 1);
    }
}

void set_battle_ctrl_flag30__18TItemLockCountCtrlFi(int arg0) {
    u32 temp = TPlayerBattleCtrl4P__sub_801BA74C(arg0);
    if (temp != 0U) {
        obj_setFlags30(temp, 0x40);
    }
}
void TItemLockCountCtrl__sub_801193D8(void) {
    s32 i;
    for (i = 0; i != 7; i++) {
        if (lbl_80506228[i] != 0) {
            lbl_80506228[i]->m0(1);
        }
        lbl_80506228[i] = 0;
    }
}
#define MK_80119444(idx, a, b)                                   \
    p = __nw__7TObjectFUl(0x2C);                                 \
    if (p != 0) {                                                \
        p = TItemLockCountCtrl__ct(p, 0, 0xC, a, b);             \
    }                                                            \
    lbl_80506228[idx] = (VObj_801193D8 *)p;
void TItemLockCountCtrl__sub_80119444(void) {
    void *p;
    MK_80119444(0, set_battle_ctrl_flag30__18TItemLockCountCtrlFi, TItemLockCountCtrl__sub_80119238)
    MK_80119444(1, TItemLockCountCtrl__sub_80119370, fn_80119204)
    MK_80119444(2, TItemLockCountCtrl__sub_8011933C, TItemEquipBase__sub_801191D0)
    MK_80119444(3, apply_battle_ctrl_effect, TItemEquipBase__sub_8011919C)
    MK_80119444(4, notify_stealth_enemies_08, TItemEquipBase__sub_80119168)
    MK_80119444(5, TItemLockCountCtrl__sub_801192A0, notify_stealth_enemies_10)
    MK_80119444(6, TItemLockCountCtrl__sub_8011926C, TItemEquipBase__sub_80119100)
}

}
