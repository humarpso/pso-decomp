#include "types.h"
#include "pso/enemy/TObjEneDD_ST.h"
#include "pso/item/TItemEquipBase.h"

struct RecoveredGlobal_80119060_lbl_80506228 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801190B0_lbl_80506228 {
    s32 value;
    u8 remaining[0x1C];
};

extern "C" {
void fn_8011085C(u8 *arg0, s32 arg1);
extern RecoveredGlobal_80119060_lbl_80506228 item_effect_object_table;
void fn_801108C8(u8 *arg0, s32 arg1);
void TItemEquipBase__sub_80119100(int arg0);
void TItemEquipBase__sub_80119168(int arg0);
void TItemEquipBase__sub_8011919C(int arg0);
void TItemEquipBase__sub_801191D0(int arg0);
void fn_80119204(int arg0);
void notify_stealth_enemies_10(int arg0);
u32 get_player_by_client_id(u16);

typedef char RecoveredGlobal_80119060_lbl_80506228_size[sizeof(RecoveredGlobal_80119060_lbl_80506228) == 0x20 ? 1 : -1];
void TItemEquipBase::apply_equip_effect_slot(u16 arg0, u32 arg1) {
    u32 temp_r3;
    if ((arg0 < 0xCU) && (arg1 < 7U)) {
        temp_r3 = *(s32 *)((s8 *)(&item_effect_object_table.value) + (arg1 * 4));
        if (temp_r3 != 0U) {
            fn_8011085C((u8 *)(temp_r3), ((s32) arg0));
        }
    }
}

typedef char RecoveredGlobal_801190B0_lbl_80506228_size[sizeof(RecoveredGlobal_801190B0_lbl_80506228) == 0x20 ? 1 : -1];
void TItemEquipBase::apply_equip_slot_effect(u16 arg0, u32 arg1) {
    u32 temp_r3;
    if ((arg0 < 0xCU) && (arg1 < 7U)) {
        temp_r3 = *(s32 *)((s8 *)(&(*(RecoveredGlobal_801190B0_lbl_80506228 *)&item_effect_object_table).value) + (arg1 * 4));
        if (temp_r3 != 0U) {
            fn_801108C8((u8 *)(temp_r3), ((s32) arg0));
        }
    }
}

void TItemEquipBase__sub_80119100(int arg0) {
    u32 temp = get_player_by_client_id(arg0);
    if (temp != 0U) {
        ((TObjEneDD_ST *)temp)->sub_800F5864(0x20);
    }
}

void notify_stealth_enemies_10(int arg0) {
    u32 temp = get_player_by_client_id(arg0);
    if (temp != 0U) {
        ((TObjEneDD_ST *)temp)->sub_800F5864(0x10);
    }
}

void TItemEquipBase__sub_80119168(int arg0) {
    u32 temp = get_player_by_client_id(arg0);
    if (temp != 0U) {
        ((TObjEneDD_ST *)temp)->sub_800F5864(8);
    }
}

void TItemEquipBase__sub_8011919C(int arg0) {
    u32 temp = get_player_by_client_id(arg0);
    if (temp != 0U) {
        ((TObjEneDD_ST *)temp)->sub_800F5864(4);
    }
}

void TItemEquipBase__sub_801191D0(int arg0) {
    u32 temp = get_player_by_client_id(arg0);
    if (temp != 0U) {
        ((TObjEneDD_ST *)temp)->sub_800F5864(2);
    }
}

void fn_80119204(int arg0) {
    u32 temp = get_player_by_client_id(arg0);
    if (temp != 0U) {
        ((TObjEneDD_ST *)temp)->sub_800F5864(1);
    }
}

}
