#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void *alloc_from_obj_heap__10TObjPlayerFPv(u32);
void *setup_state__10TObjPlayerFPv(void *, s32, void *);
void *init_needle_effect__10TObjPlayerFPv(void *, s32, void *);
void *enter_state_341__10TObjPlayerFPv(void *, s32, void *);
void *init_mag_effect_state__10TObjPlayerFPv(void *, s32, void *);
void *init_type_447__10TObjPlayerFPv(void *, s32, void *);
void *init_vtable_and_handlers_341__10TObjPlayerFPv(void *, s32, void *);
void *init_vtable_and_field200__10TObjPlayerFPv(void *, s32, void *);
extern s32 tl_05;
void *create_object_by_type__10TObjPlayerFPv(u8 *arg0);
}

extern "C" {

void *item_equip_variant_deleting_dtor_802D60E0(void *arg0, s16 arg1);
void *item_equip_variant_deleting_dtor_802D6138(void *arg0, s16 arg1);
void *item_equip_variant_deleting_dtor_802D6190(void *arg0, s16 arg1);
void *item_equip_variant_deleting_dtor_802D61E8(void *arg0, s16 arg1);
void *item_equip_variant_deleting_dtor_802D6240(void *arg0, s16 arg1);
void *item_equip_variant_deleting_dtor_802D6298(void *arg0, s16 arg1);
void *item_equip_variant_deleting_dtor_802D62F0(void *arg0, s16 arg1);
void item_equip_variant_deleting_dtor_80120CF8(void *, int);
void free_obj_heap__10TObjPlayerFPv(void *);

extern M2C_UNK lbl_804E1E08[];

extern "C" void TItemEquipBase__sub_8010A77C();
extern "C" void TItem__sub_801005D8();
extern "C" void TItem__sub_801005E0();
extern "C" void TItem__sub_801005E4();
extern "C" void TItem__sub_80100648();
extern "C" void TItem__sub_80100B8C();
extern "C" void TLobby__sub_801A1FD8();
extern "C" void TObjPlayer__sub_8011E5C0();
extern "C" void TObjPlayer__sub_8011E5C4();
extern "C" void TObjPlayer__sub_8011E5C8();
extern "C" void TObjPlayer__sub_8011E5CC();
extern "C" void TObjPlayer__sub_8011E5D0();
extern "C" void TObjPlayer__sub_8011E5D8();
extern "C" void TObjPlayer__sub_8011E5DC();
extern "C" void TObjPlayer__sub_8011E610();
extern "C" void TObjPlayer__sub_801200C0();
extern "C" void TObjPlayer__sub_8012012C();
extern "C" void TObjPlayer__sub_80120454();
extern "C" void TObjPlayer__sub_80120568();
extern "C" void TObjPlayer__sub_80121064();
extern "C" void TObjPlayer__sub_802D5DE0();
extern "C" void add_equip_stats__14TItemEquipBaseFPvi();
extern "C" void apply_equip__11TItemWeaponFPv();
extern "C" void apply_object_set_data();
extern "C" void bind_attribute_entries__11TItemWeaponFPv();
extern "C" void classify_actor_view_detail();
extern "C" void copy_item_to_data__10TObjPlayerFi();
extern "C" void create_cane_effect_from_state__10TObjPlayerFPv();
extern "C" void deliver_hit__11TItemWeaponFPviPviif();
extern "C" void dispatch_attack_marker__11TItemWeaponFv();
extern "C" void dispatch_state__5TItemFPv();
extern "C" void draw_equipped_weapon__10TObjPlayerFPv();
extern "C" void draw_twin_weapon_trails();
extern "C" void draw_weapon_if_not_hidden__10TObjPlayerFPv();
extern "C" void draw_weapon_trails__10TObjPlayerFPv();
extern "C" void equip__14TItemEquipBaseFPv();
extern "C" void fire_spread_shot__10TObjPlayerFPv();
extern "C" void get_attack_flags__11TItemWeaponFPv();
extern "C" void get_motion_ptr__10TObjPlayerFPv();
extern "C" void item_equip_variant_deleting_dtor_802D5214();
extern "C" void item_equip_variant_deleting_dtor_802D526C();
extern "C" void launch_shot__11TItemWeaponFPvPviii();
extern "C" void load_weapon_model__10TObjPlayerFPv();
extern "C" void register_attack__5TItemFPv();
extern "C" void release_member_90__10TObjPlayerFPv();
extern "C" void remove_equip_stats__14TItemEquipBaseFPvi();
extern "C" void render__5TItemFPv();
extern "C" void reset_entries__10TObjPlayerFPv();
extern "C" void reset_item_equip();
extern "C" void ret_8010064C();
extern "C" void ret_80100654();
extern "C" void ret_8010065C();
extern "C" void ret_80100664();
extern "C" void run_task__5TItemFPv();
extern "C" void set_attach_slot__14TItemEquipBaseFPvc();
extern "C" void setup_radar_marker__10TObjPlayerFPvPv();
extern "C" void subtract_equip_stats__14TItemEquipBaseFPviPvPv();
extern "C" void subtract_item_stat_bonus__14TItemEquipBaseFPviiPv();
extern "C" void try_pick_up_item__5TItemFPvi();
extern "C" void unequip__14TItemEquipBaseFPv();
extern "C" void update_active_weapon__11TItemWeaponFv();
extern "C" void update_equip__14TItemEquipBaseFPv();
extern "C" void update_model_flags__10TObjPlayerFPv();
extern "C" void update_pickup_flag__5TItemFi();
extern "C" void update_swim_flag__10TObjPlayerFPv();
extern "C" void update_weapon_trails__10TObjPlayerFPv();
extern "C" void weapon_prepare_marker_noop();
void *lbl_804E1BB0[62] = {
    (void *)0x0, (void *)0x0, (void *)&item_equip_variant_deleting_dtor_802D5214, (void *)&run_task__5TItemFPv,
    (void *)&dispatch_state__5TItemFPv, (void *)&render__5TItemFPv, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&release_member_90__10TObjPlayerFPv, (void *)&get_motion_ptr__10TObjPlayerFPv, (void *)&TItem__sub_80100B8C, (void *)&classify_actor_view_detail,
    (void *)&register_attack__5TItemFPv, (void *)&try_pick_up_item__5TItemFPvi, (void *)&TObjPlayer__sub_801200C0, (void *)&TItem__sub_801005E0,
    (void *)&update_active_weapon__11TItemWeaponFv, (void *)&TObjPlayer__sub_8011E610, (void *)&TObjPlayer__sub_80120454, (void *)&set_attach_slot__14TItemEquipBaseFPvc,
    (void *)&equip__14TItemEquipBaseFPv, (void *)&unequip__14TItemEquipBaseFPv, (void *)&add_equip_stats__14TItemEquipBaseFPvi, (void *)&remove_equip_stats__14TItemEquipBaseFPvi,
    (void *)&subtract_item_stat_bonus__14TItemEquipBaseFPviiPv, (void *)&subtract_equip_stats__14TItemEquipBaseFPviPvPv, (void *)&draw_weapon_trails__10TObjPlayerFPv, (void *)&draw_equipped_weapon__10TObjPlayerFPv,
    (void *)&update_weapon_trails__10TObjPlayerFPv, (void *)&update_equip__14TItemEquipBaseFPv, (void *)&dispatch_attack_marker__11TItemWeaponFv, (void *)&update_pickup_flag__5TItemFi,
    (void *)&get_attack_flags__11TItemWeaponFPv, (void *)&TItemEquipBase__sub_8010A77C, (void *)&update_model_flags__10TObjPlayerFPv, (void *)&copy_item_to_data__10TObjPlayerFi,
    (void *)&ret_80100664, (void *)&ret_8010065C, (void *)&ret_80100654, (void *)&ret_8010064C,
    (void *)&TItem__sub_80100648, (void *)&TItem__sub_801005E4, (void *)&TItem__sub_801005D8, (void *)&TObjPlayer__sub_80121064,
    (void *)&apply_equip__11TItemWeaponFPv, (void *)&TObjPlayer__sub_80120568, (void *)&load_weapon_model__10TObjPlayerFPv, (void *)&reset_item_equip,
    (void *)&bind_attribute_entries__11TItemWeaponFPv, (void *)&reset_entries__10TObjPlayerFPv, (void *)&TObjPlayer__sub_8012012C, (void *)&launch_shot__11TItemWeaponFPvPviii,
    (void *)&weapon_prepare_marker_noop, (void *)&TObjPlayer__sub_8011E5DC, (void *)&TObjPlayer__sub_8011E5D8, (void *)&draw_twin_weapon_trails,
    (void *)&TObjPlayer__sub_8011E5D0, (void *)&TObjPlayer__sub_8011E5CC, (void *)&TObjPlayer__sub_8011E5C8, (void *)&TObjPlayer__sub_8011E5C4,
    (void *)&TObjPlayer__sub_8011E5C0, (void *)&deliver_hit__11TItemWeaponFPviPviif,
};
void *lbl_804E1CA8[63] = {
    (void *)0x0, (void *)0x0, (void *)&item_equip_variant_deleting_dtor_802D526C, (void *)&run_task__5TItemFPv,
    (void *)&dispatch_state__5TItemFPv, (void *)&render__5TItemFPv, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&release_member_90__10TObjPlayerFPv, (void *)&get_motion_ptr__10TObjPlayerFPv, (void *)&TItem__sub_80100B8C, (void *)&classify_actor_view_detail,
    (void *)&register_attack__5TItemFPv, (void *)&try_pick_up_item__5TItemFPvi, (void *)&TObjPlayer__sub_801200C0, (void *)&TItem__sub_801005E0,
    (void *)&update_active_weapon__11TItemWeaponFv, (void *)&TObjPlayer__sub_8011E610, (void *)&TObjPlayer__sub_80120454, (void *)&set_attach_slot__14TItemEquipBaseFPvc,
    (void *)&equip__14TItemEquipBaseFPv, (void *)&unequip__14TItemEquipBaseFPv, (void *)&add_equip_stats__14TItemEquipBaseFPvi, (void *)&remove_equip_stats__14TItemEquipBaseFPvi,
    (void *)&subtract_item_stat_bonus__14TItemEquipBaseFPviiPv, (void *)&subtract_equip_stats__14TItemEquipBaseFPviPvPv, (void *)&draw_weapon_trails__10TObjPlayerFPv, (void *)&draw_equipped_weapon__10TObjPlayerFPv,
    (void *)&update_weapon_trails__10TObjPlayerFPv, (void *)&update_equip__14TItemEquipBaseFPv, (void *)&dispatch_attack_marker__11TItemWeaponFv, (void *)&update_pickup_flag__5TItemFi,
    (void *)&get_attack_flags__11TItemWeaponFPv, (void *)&TItemEquipBase__sub_8010A77C, (void *)&update_model_flags__10TObjPlayerFPv, (void *)&copy_item_to_data__10TObjPlayerFi,
    (void *)&ret_80100664, (void *)&ret_8010065C, (void *)&ret_80100654, (void *)&ret_8010064C,
    (void *)&TItem__sub_80100648, (void *)&TItem__sub_801005E4, (void *)&TItem__sub_801005D8, (void *)&TObjPlayer__sub_80121064,
    (void *)&apply_equip__11TItemWeaponFPv, (void *)&TObjPlayer__sub_80120568, (void *)&load_weapon_model__10TObjPlayerFPv, (void *)&reset_item_equip,
    (void *)&bind_attribute_entries__11TItemWeaponFPv, (void *)&reset_entries__10TObjPlayerFPv, (void *)&TObjPlayer__sub_8012012C, (void *)&launch_shot__11TItemWeaponFPvPviii,
    (void *)&fire_spread_shot__10TObjPlayerFPv, (void *)&TObjPlayer__sub_8011E5DC, (void *)&TObjPlayer__sub_8011E5D8, (void *)&draw_weapon_if_not_hidden__10TObjPlayerFPv,
    (void *)&update_swim_flag__10TObjPlayerFPv, (void *)&TObjPlayer__sub_8011E5CC, (void *)&TObjPlayer__sub_8011E5C8, (void *)&setup_radar_marker__10TObjPlayerFPvPv,
    (void *)&TObjPlayer__sub_802D5DE0, (void *)&deliver_hit__11TItemWeaponFPviPviif, (void *)&create_cane_effect_from_state__10TObjPlayerFPv,
};

void *create_object_by_type__10TObjPlayerFPv(u8 *arg0) {
    void *p;
    if (arg0 != NULL) {
    switch (arg0[1]) {
    case 0x8C:
        switch (arg0[2]) {
        case 0:
            break;
        case 1:
            p = alloc_from_obj_heap__10TObjPlayerFPv(0x20C);
            if (p != NULL) {
                p = init_vtable_and_handlers_341__10TObjPlayerFPv(p, tl_05, arg0);
            }
            return p;
        case 2:
            p = alloc_from_obj_heap__10TObjPlayerFPv(0x20C);
            if (p != NULL) {
                p = init_type_447__10TObjPlayerFPv(p, tl_05, arg0);
            }
            return p;
        case 3:
            p = alloc_from_obj_heap__10TObjPlayerFPv(0x254);
            if (p != NULL) {
                p = init_mag_effect_state__10TObjPlayerFPv(p, tl_05, arg0);
            }
            return p;
        }
        break;
    case 0x93:
        p = alloc_from_obj_heap__10TObjPlayerFPv(0x20C);
        if (p != NULL) {
            p = enter_state_341__10TObjPlayerFPv(p, tl_05, arg0);
        }
        return p;
    case 0xA4:
        p = alloc_from_obj_heap__10TObjPlayerFPv(0x20C);
        if (p != NULL) {
            p = init_needle_effect__10TObjPlayerFPv(p, tl_05, arg0);
        }
        return p;
    case 0x96:
        p = alloc_from_obj_heap__10TObjPlayerFPv(0x20C);
        if (p != NULL) {
            p = setup_state__10TObjPlayerFPv(p, tl_05, arg0);
        }
        return p;
    }
    p = alloc_from_obj_heap__10TObjPlayerFPv(0x20C);
    if (p != NULL) {
        p = init_vtable_and_field200__10TObjPlayerFPv(p, tl_05, arg0);
    }
    return p;
    }
    return NULL;
}

void *item_equip_variant_deleting_dtor_802D60E0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E1E08;
        item_equip_variant_deleting_dtor_802D62F0((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804E1F04[];

void *item_equip_variant_deleting_dtor_802D6138(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E1F04;
        item_equip_variant_deleting_dtor_802D62F0((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804E2000[];

void *item_equip_variant_deleting_dtor_802D6190(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E2000;
        item_equip_variant_deleting_dtor_802D62F0((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804E20FC[];

void *item_equip_variant_deleting_dtor_802D61E8(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E20FC;
        item_equip_variant_deleting_dtor_802D62F0((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804E21F8[];

void *item_equip_variant_deleting_dtor_802D6240(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E21F8;
        item_equip_variant_deleting_dtor_802D62F0((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804E22F4[];

void *item_equip_variant_deleting_dtor_802D6298(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E22F4;
        item_equip_variant_deleting_dtor_802D62F0((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804E23F0[];

void *item_equip_variant_deleting_dtor_802D62F0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E23F0;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}
