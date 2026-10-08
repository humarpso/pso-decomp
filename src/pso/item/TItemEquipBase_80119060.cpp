#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80119060_lbl_80506228 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801190B0_lbl_80506228 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

extern "C" {
s32 fn_8011085C(int, void *);
extern RecoveredGlobal_80119060_lbl_80506228 lbl_80506228;
void apply_equip_effect_slot__14TItemEquipBaseFUsUi(u16 arg0, u32 arg1);
s32 fn_801108C8(int, void *);
extern RecoveredGlobal_80119060_lbl_80506228 lbl_80506228;
void apply_equip_slot_effect__14TItemEquipBaseFUsUi(u16 arg0, u32 arg1);
}

extern "C" {

void TItemEquipBase__sub_80119100(int arg0);
void TItemEquipBase__sub_80119168(int arg0);
void TItemEquipBase__sub_8011919C(int arg0);
void TItemEquipBase__sub_801191D0(int arg0);
void fn_80119204(int arg0);
void notify_stealth_enemies_10(int arg0);
M2C_UNK TObjEneMe3Stelth__sub_800F5864(u32, M2C_UNK);
u32 get_player_by_client_id(u16);

typedef char RecoveredGlobal_80119060_lbl_80506228_size[sizeof(RecoveredGlobal_80119060_lbl_80506228) == 0x20 ? 1 : -1];
void apply_equip_effect_slot__14TItemEquipBaseFUsUi(u16 arg0, u32 arg1) {
    u32 temp_r3;
    if ((arg0 < 0xCU) && (arg1 < 7U)) {
        temp_r3 = M2C_FIELD(&lbl_80506228.value, M2C_UNK *, (arg1 * 4));
        if (temp_r3 != 0U) {
            fn_8011085C((int) (temp_r3), (void *) ((s32) arg0));
        }
    }
}

typedef char RecoveredGlobal_801190B0_lbl_80506228_size[sizeof(RecoveredGlobal_801190B0_lbl_80506228) == 0x20 ? 1 : -1];
void apply_equip_slot_effect__14TItemEquipBaseFUsUi(u16 arg0, u32 arg1) {
    u32 temp_r3;
    if ((arg0 < 0xCU) && (arg1 < 7U)) {
        temp_r3 = M2C_FIELD(&(*(RecoveredGlobal_801190B0_lbl_80506228 *)&lbl_80506228).value, M2C_UNK *, (arg1 * 4));
        if (temp_r3 != 0U) {
            fn_801108C8((int) (temp_r3), (void *) ((s32) arg0));
        }
    }
}

void TItemEquipBase__sub_80119100(int arg0) {
    u32 temp = get_player_by_client_id(arg0);
    if (temp != 0U) {
        TObjEneMe3Stelth__sub_800F5864(temp, 0x20);
    }
}

void notify_stealth_enemies_10(int arg0) {
    u32 temp = get_player_by_client_id(arg0);
    if (temp != 0U) {
        TObjEneMe3Stelth__sub_800F5864(temp, 0x10);
    }
}

void TItemEquipBase__sub_80119168(int arg0) {
    u32 temp = get_player_by_client_id(arg0);
    if (temp != 0U) {
        TObjEneMe3Stelth__sub_800F5864(temp, 8);
    }
}

void TItemEquipBase__sub_8011919C(int arg0) {
    u32 temp = get_player_by_client_id(arg0);
    if (temp != 0U) {
        TObjEneMe3Stelth__sub_800F5864(temp, 4);
    }
}

void TItemEquipBase__sub_801191D0(int arg0) {
    u32 temp = get_player_by_client_id(arg0);
    if (temp != 0U) {
        TObjEneMe3Stelth__sub_800F5864(temp, 2);
    }
}

void fn_80119204(int arg0) {
    u32 temp = get_player_by_client_id(arg0);
    if (temp != 0U) {
        TObjEneMe3Stelth__sub_800F5864(temp, 1);
    }
}

}
