#include "types.h"
#include "pso/TItemLockCountCtrl.h"

struct Base_801193D8 { char pad[0x18]; };

struct VObj_801193D8 : Base_801193D8 {
    virtual void m0(s32);
};

extern "C" {
extern VObj_801193D8 *item_effect_object_table[7];
extern VObj_801193D8 *item_effect_object_table[7];
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
void apply_unit_immunity__18TItemLockCountCtrlFi(int arg0);
void apply_battle_ctrl_effect(int arg0);
void notify_stealth_enemies_08(int arg0);
void set_battle_ctrl_flag30__18TItemLockCountCtrlFi(int arg0);
}

extern "C" {

void TItemLockCountCtrl__sub_80119238(int arg0);
void TItemLockCountCtrl__sub_8011926C(int arg0);
void TItemLockCountCtrl__sub_801192A0(int arg0);
void TItemLockCountCtrl__sub_8011933C(int arg0);
void apply_unit_immunity__18TItemLockCountCtrlFi(int arg0);
void apply_battle_ctrl_effect(int arg0);
void notify_stealth_enemies_08(int arg0);
void set_battle_ctrl_flag30__18TItemLockCountCtrlFi(int arg0);
s32 TObjEneMe3Stelth__sub_800F5874(u32, s32);
u32 get_player_by_client_id(u16);
s32 obj_clearFlags30(u32, s32);
s32 obj_setFlags30(u32, s32);

void TItemLockCountCtrl__sub_80119238(int arg0) {
    u32 temp = get_player_by_client_id(arg0);
    if (temp != 0U) {
        obj_clearFlags30(temp, 0x40);
    }
}

void TItemLockCountCtrl__sub_8011926C(int arg0) {
    u32 temp = get_player_by_client_id(arg0);
    if (temp != 0U) {
        TObjEneMe3Stelth__sub_800F5874(temp, 0x20);
    }
}

void TItemLockCountCtrl__sub_801192A0(int arg0) {
    u32 temp = get_player_by_client_id(arg0);
    if (temp != 0U) {
        TObjEneMe3Stelth__sub_800F5874(temp, 0x10);
    }
}

void notify_stealth_enemies_08(int arg0) {
    u32 temp = get_player_by_client_id(arg0);
    if (temp != 0U) {
        TObjEneMe3Stelth__sub_800F5874(temp, 8);
    }
}

void apply_battle_ctrl_effect(int arg0) {
    u32 temp = get_player_by_client_id(arg0);
    if (temp != 0U) {
        TObjEneMe3Stelth__sub_800F5874(temp, 4);
    }
}

void TItemLockCountCtrl__sub_8011933C(int arg0) {
    u32 temp = get_player_by_client_id(arg0);
    if (temp != 0U) {
        TObjEneMe3Stelth__sub_800F5874(temp, 2);
    }
}

void apply_unit_immunity__18TItemLockCountCtrlFi(int arg0) {
    u32 temp = get_player_by_client_id(arg0);
    if (temp != 0U) {
        TObjEneMe3Stelth__sub_800F5874(temp, 1);
    }
}

void set_battle_ctrl_flag30__18TItemLockCountCtrlFi(int arg0) {
    u32 temp = get_player_by_client_id(arg0);
    if (temp != 0U) {
        obj_setFlags30(temp, 0x40);
    }
}
void TItemLockCountCtrl::free_all() {
    s32 i;
    for (i = 0; i != 7; i++) {
        if (item_effect_object_table[i] != 0) {
            item_effect_object_table[i]->m0(1);
        }
        item_effect_object_table[i] = 0;
    }
}
#define MK_80119444(idx, a, b)                                   \
    p = __nw__7TObjectFUl(0x2C);                                 \
    if (p != 0) {                                                \
        p = TItemLockCountCtrl__ct(p, 0, 0xC, a, b);             \
    }                                                            \
    item_effect_object_table[idx] = (VObj_801193D8 *)p;
void TItemLockCountCtrl::init_effect_table() {
    void *p;
    MK_80119444(0, set_battle_ctrl_flag30__18TItemLockCountCtrlFi, TItemLockCountCtrl__sub_80119238)
    MK_80119444(1, apply_unit_immunity__18TItemLockCountCtrlFi, fn_80119204)
    MK_80119444(2, TItemLockCountCtrl__sub_8011933C, TItemEquipBase__sub_801191D0)
    MK_80119444(3, apply_battle_ctrl_effect, TItemEquipBase__sub_8011919C)
    MK_80119444(4, notify_stealth_enemies_08, TItemEquipBase__sub_80119168)
    MK_80119444(5, TItemLockCountCtrl__sub_801192A0, notify_stealth_enemies_10)
    MK_80119444(6, TItemLockCountCtrl__sub_8011926C, TItemEquipBase__sub_80119100)
}

}
