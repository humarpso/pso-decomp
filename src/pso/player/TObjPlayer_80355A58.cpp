#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80355BA0_lbl_804F1320 {
    M2C_UNK value;
    u8 remaining[0xF4];
};

extern "C" {
void send_6x61_activate_mag_effect(void *, s32);
s32 get_sub_value__8TItemMagFi(s32);
s32 is_mode_two_and_ready__10TObjPlayerFPv(void *);
void update_active_game_effect__10TObjPlayerFPv(void *);
void photon_field_weapon_attack_marker(u8 *arg0);
u8 get_field_ed__10TObjPlayerFPv(void *);
u8 * TItemWeapon__ct(void *, void *);
void set_status_flags__10TObjPlayerFPvUi(void *, s32);
extern M2C_UNK lbl_804F1320[];
extern const f32 lbl_805DFFC0;
extern const f32 lbl_805DFFC4;
u8 *photon_field_weapon_ct(u8 *arg0, u8 *arg1);
}

extern "C" {

void *item_equip_variant_deleting_dtor_80355B48(void *arg0, s16 arg1);
void photon_field_weapon_receive_effect(void *arg0, s32 arg1);
s32 get_current_floor();
s8 TObjPlayer__sub_80102C30(void *);
M2C_UNK spawn_pg_effect__10TObjPlayerFPvPvif(void *, s32, s32, f32);
void free_obj_heap__10TObjPlayerFPv(void *);
s32 get_field_3e4__10TObjPlayerFPv(u32);
void item_equip_variant_deleting_dtor_80120CF8(void *, int);
void *item_equip_variant_deleting_dtor_80355B48(void *arg0, s16 arg1);
s32 reset_key_machine_state__10TObjPlayerFv();

void photon_field_weapon_receive_effect(void *arg0, s32 arg1) {
    s32 temp_r31;

    if (((u32) M2C_FIELD(arg0, u32 *, 0xF0) != 0U) && (reset_key_machine_state__10TObjPlayerFv() != 0)) {
        temp_r31 = get_field_3e4__10TObjPlayerFPv(M2C_FIELD(arg0, u32 *, 0xF0));
        {
        s32 t = get_current_floor();
        if ((t == temp_r31) && (TObjPlayer__sub_80102C30(arg0) == 2)) {
            spawn_pg_effect__10TObjPlayerFPvPvif(arg0, M2C_FIELD(arg0, u32 *, 0xF0) + 0x2FC, arg1, M2C_FIELD(arg0, f32 *, 0x1F8));
        }
        }
    }
}
void photon_field_weapon_attack_marker(u8 *arg0) {
    s32 temp_r3;
    if (is_mode_two_and_ready__10TObjPlayerFPv(arg0) != 0) {
        temp_r3 = get_sub_value__8TItemMagFi(M2C_FIELD(arg0, s32 *, 0xF0));
        if (temp_r3 >= 0x14) {
            send_6x61_activate_mag_effect(arg0, temp_r3);
            return;
        }
        update_active_game_effect__10TObjPlayerFPv(arg0);
        return;
    }
    update_active_game_effect__10TObjPlayerFPv(arg0);
}
typedef char RecoveredGlobal_80355BA0_lbl_804F1320_size[sizeof(RecoveredGlobal_80355BA0_lbl_804F1320) == 0xF8 ? 1 : -1];

extern M2C_UNK lbl_804F1320[];

void *item_equip_variant_deleting_dtor_80355B48(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F1320;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}
u8 *photon_field_weapon_ct(u8 *arg0, u8 *arg1) {
    TItemWeapon__ct(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80355BA0_lbl_804F1320 *)&lbl_804F1320).value;
    set_status_flags__10TObjPlayerFPvUi(arg0, 0x22);
    if (get_field_ed__10TObjPlayerFPv(arg0) == 0x3D) {
        M2C_FIELD(arg0, f32 *, 0x1F8) = (f32) lbl_805DFFC0;
        set_status_flags__10TObjPlayerFPvUi(arg0, 0x100000);
    } else {
        M2C_FIELD(arg0, f32 *, 0x1F8) = (f32) lbl_805DFFC4;
    }
    return arg0;
}

}
