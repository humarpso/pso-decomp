#include "types.h"
#include "pso/player/TObjPlayer.h"
#include "pso/item/TItem.h"
#include "pso/items/TItemWeapon.h"

extern "C" {
void *alloc_from_obj_heap__10TObjPlayerFPv(u32);
void *setup_state__10TObjPlayerFPv(void *, s32, void *);
void *init_needle_effect__10TObjPlayerFPv(void *, s32, void *);
void *enter_state_341__13TUnk_804E2000Fv(void *, s32, void *);
void *init_mag_effect_state__10TObjPlayerFPv(void *, s32, void *);
void *init_type_447__13TUnk_804E22F4Fv(void *, s32, void *);
void *init_vtable_and_handlers_341__13TUnk_804E1F04Fv(void *, s32, void *);
void *init_vtable_and_field200__10TObjPlayerFPv(void *, s32, void *);
extern s32 tl_05;
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

extern s32 lbl_804E1E08[];

extern "C" void TItemEquipBase__sub_8010A77C();
extern "C" void TItem__sub_801005D8();
extern "C" void TItem__sub_801005E0();
extern "C" void TItem__sub_801005E4();
extern "C" void TItem__sub_80100648();
extern "C" void TItem__sub_80100B8C();
extern "C" void TLobby__sub_801A1FD8();
extern "C" void TItemWeapon__sub_8011E5C0();
extern "C" void TItemWeapon__sub_8011E5C4();
extern "C" void TItemWeapon__sub_8011E5C8();
extern "C" void TItemWeapon__sub_8011E5CC();
extern "C" void update_weapon__11TItemWeaponFv();
extern "C" void TItemWeapon__sub_8011E5D8();
extern "C" void update_attack__11TItemWeaponFv();
extern "C" void vfunc_17__11TItemWeaponFl();
extern "C" void vfunc_14__11TItemWeaponFv();
extern "C" void vfunc_50__11TItemWeaponFv();
extern "C" void TItemWeapon__write_item_data();
extern "C" void vfunc_45__11TItemWeaponFv();
extern "C" void TItemWeapon__sub_80121064();
extern "C" void TObjPlayer__sub_802D5DE0();
extern "C" void add_equip_stats__14TItemEquipBaseFPvi();
extern "C" void vfunc_44__11TItemWeaponFv();
extern "C" void apply_object_set_data();
extern "C" void vfunc_48__11TItemWeaponFv();
extern "C" void classify_actor_view_detail();
extern "C" void create_cane_effect_from_state__10TObjPlayerFPv();
extern "C" void deliver_hit__11TItemWeaponFPviPviif();
extern "C" void vfunc_30__11TItemWeaponFv();
extern "C" void dispatch_state__5TItemFv();
extern "C" void vfunc_27__11TItemWeaponFv();
extern "C" void draw_twin_weapon_trails();
extern "C" void draw_weapon_if_not_hidden__10TObjPlayerFPv();
extern "C" void vfunc_26__11TItemWeaponFv();
extern "C" void equip__14TItemEquipBaseFv();
extern "C" void fire_spread_shot__10TObjPlayerFPv();
extern "C" void get_attack_flags__11TItemWeaponFv();
extern "C" void get_motion_ptr__11TItemWeaponFv();
extern "C" void item_equip_variant_deleting_dtor_802D5214();
extern "C" void item_equip_variant_deleting_dtor_802D526C();
extern "C" void launch_shot__11TItemWeaponFPvPviii();
extern "C" void vfunc_46__11TItemWeaponFv();
extern "C" void register_attack__5TItemFv();
extern "C" void release_member_90__10TObjPlayerFv();
extern "C" void remove_equip_stats__14TItemEquipBaseFPvi();
extern "C" void render_shadows__5TItemFv();
extern "C" void vfunc_49__11TItemWeaponFv();
extern "C" void release__11TItemWeaponFv();
extern "C" void ret_8010064C();
extern "C" void ret_80100654();
extern "C" void ret_8010065C();
extern "C" void ret_80100664();
extern "C" void run_task__5TItemFv();
extern "C" void set_attach_slot__14TItemEquipBaseFSc();
extern "C" void setup_radar_marker__10TObjPlayerFPvPv();
extern "C" void subtract_equip_stats__14TItemEquipBaseFlPUcPUc();
extern "C" void subtract_item_stat_bonus__14TItemEquipBaseFllPs();
extern "C" void try_pick_up_item__5TItemFPvi();
extern "C" void unequip__14TItemEquipBaseFv();
extern "C" void vfunc_16__11TItemWeaponFv();
extern "C" void update_equip__14TItemEquipBaseFv();
extern "C" void vfunc_34__11TItemWeaponFv();
extern "C" void update_swim_flag__10TObjPlayerFPv();
extern "C" void vfunc_28__11TItemWeaponFv();
extern "C" void emit_marker_effects__11TItemWeaponFv();
void *lbl_804E1BB0[62] = {
    (void *)0x0, (void *)0x0, (void *)&item_equip_variant_deleting_dtor_802D5214, (void *)&run_task__5TItemFv,
    (void *)&dispatch_state__5TItemFv, (void *)&render_shadows__5TItemFv, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&release_member_90__10TObjPlayerFv, (void *)&get_motion_ptr__11TItemWeaponFv, (void *)&TItem__sub_80100B8C, (void *)&classify_actor_view_detail,
    (void *)&register_attack__5TItemFv, (void *)&try_pick_up_item__5TItemFPvi, (void *)&vfunc_14__11TItemWeaponFv, (void *)&TItem__sub_801005E0,
    (void *)&vfunc_16__11TItemWeaponFv, (void *)&vfunc_17__11TItemWeaponFl, (void *)&TItemWeapon__write_item_data, (void *)&set_attach_slot__14TItemEquipBaseFSc,
    (void *)&equip__14TItemEquipBaseFv, (void *)&unequip__14TItemEquipBaseFv, (void *)&add_equip_stats__14TItemEquipBaseFPvi, (void *)&remove_equip_stats__14TItemEquipBaseFPvi,
    (void *)&subtract_item_stat_bonus__14TItemEquipBaseFllPs, (void *)&subtract_equip_stats__14TItemEquipBaseFlPUcPUc, (void *)&vfunc_26__11TItemWeaponFv, (void *)&vfunc_27__11TItemWeaponFv,
    (void *)&vfunc_28__11TItemWeaponFv, (void *)&update_equip__14TItemEquipBaseFv, (void *)&vfunc_30__11TItemWeaponFv, (void *)&TItem::update_pickup_flag,
    (void *)&get_attack_flags__11TItemWeaponFv, (void *)&TItemEquipBase__sub_8010A77C, (void *)&vfunc_34__11TItemWeaponFv, (void *)&TItemWeapon::copy_item_to_data,
    (void *)&ret_80100664, (void *)&ret_8010065C, (void *)&ret_80100654, (void *)&ret_8010064C,
    (void *)&TItem__sub_80100648, (void *)&TItem__sub_801005E4, (void *)&TItem__sub_801005D8, (void *)&TItemWeapon__sub_80121064,
    (void *)&vfunc_44__11TItemWeaponFv, (void *)&vfunc_45__11TItemWeaponFv, (void *)&vfunc_46__11TItemWeaponFv, (void *)&release__11TItemWeaponFv,
    (void *)&vfunc_48__11TItemWeaponFv, (void *)&vfunc_49__11TItemWeaponFv, (void *)&vfunc_50__11TItemWeaponFv, (void *)&launch_shot__11TItemWeaponFPvPviii,
    (void *)&emit_marker_effects__11TItemWeaponFv, (void *)&update_attack__11TItemWeaponFv, (void *)&TItemWeapon__sub_8011E5D8, (void *)&draw_twin_weapon_trails,
    (void *)&update_weapon__11TItemWeaponFv, (void *)&TItemWeapon__sub_8011E5CC, (void *)&TItemWeapon__sub_8011E5C8, (void *)&TItemWeapon__sub_8011E5C4,
    (void *)&TItemWeapon__sub_8011E5C0, (void *)&deliver_hit__11TItemWeaponFPviPviif,
};
void *lbl_804E1CA8[63] = {
    (void *)0x0, (void *)0x0, (void *)&item_equip_variant_deleting_dtor_802D526C, (void *)&run_task__5TItemFv,
    (void *)&dispatch_state__5TItemFv, (void *)&render_shadows__5TItemFv, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&release_member_90__10TObjPlayerFv, (void *)&get_motion_ptr__11TItemWeaponFv, (void *)&TItem__sub_80100B8C, (void *)&classify_actor_view_detail,
    (void *)&register_attack__5TItemFv, (void *)&try_pick_up_item__5TItemFPvi, (void *)&vfunc_14__11TItemWeaponFv, (void *)&TItem__sub_801005E0,
    (void *)&vfunc_16__11TItemWeaponFv, (void *)&vfunc_17__11TItemWeaponFl, (void *)&TItemWeapon__write_item_data, (void *)&set_attach_slot__14TItemEquipBaseFSc,
    (void *)&equip__14TItemEquipBaseFv, (void *)&unequip__14TItemEquipBaseFv, (void *)&add_equip_stats__14TItemEquipBaseFPvi, (void *)&remove_equip_stats__14TItemEquipBaseFPvi,
    (void *)&subtract_item_stat_bonus__14TItemEquipBaseFllPs, (void *)&subtract_equip_stats__14TItemEquipBaseFlPUcPUc, (void *)&vfunc_26__11TItemWeaponFv, (void *)&vfunc_27__11TItemWeaponFv,
    (void *)&vfunc_28__11TItemWeaponFv, (void *)&update_equip__14TItemEquipBaseFv, (void *)&vfunc_30__11TItemWeaponFv, (void *)&TItem::update_pickup_flag,
    (void *)&get_attack_flags__11TItemWeaponFv, (void *)&TItemEquipBase__sub_8010A77C, (void *)&vfunc_34__11TItemWeaponFv, (void *)&TItemWeapon::copy_item_to_data,
    (void *)&ret_80100664, (void *)&ret_8010065C, (void *)&ret_80100654, (void *)&ret_8010064C,
    (void *)&TItem__sub_80100648, (void *)&TItem__sub_801005E4, (void *)&TItem__sub_801005D8, (void *)&TItemWeapon__sub_80121064,
    (void *)&vfunc_44__11TItemWeaponFv, (void *)&vfunc_45__11TItemWeaponFv, (void *)&vfunc_46__11TItemWeaponFv, (void *)&release__11TItemWeaponFv,
    (void *)&vfunc_48__11TItemWeaponFv, (void *)&vfunc_49__11TItemWeaponFv, (void *)&vfunc_50__11TItemWeaponFv, (void *)&launch_shot__11TItemWeaponFPvPviii,
    (void *)&fire_spread_shot__10TObjPlayerFPv, (void *)&update_attack__11TItemWeaponFv, (void *)&TItemWeapon__sub_8011E5D8, (void *)&draw_weapon_if_not_hidden__10TObjPlayerFPv,
    (void *)&update_swim_flag__10TObjPlayerFPv, (void *)&TItemWeapon__sub_8011E5CC, (void *)&TItemWeapon__sub_8011E5C8, (void *)&setup_radar_marker__10TObjPlayerFPvPv,
    (void *)&TObjPlayer__sub_802D5DE0, (void *)&deliver_hit__11TItemWeaponFPviPviif, (void *)&create_cane_effect_from_state__10TObjPlayerFPv,
};

void *TObjPlayer::create_object_by_type() {
    u8 *arg0 = (u8 *)this;
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
                p = init_vtable_and_handlers_341__13TUnk_804E1F04Fv(p, tl_05, arg0);
            }
            return p;
        case 2:
            p = alloc_from_obj_heap__10TObjPlayerFPv(0x20C);
            if (p != NULL) {
                p = init_type_447__13TUnk_804E22F4Fv(p, tl_05, arg0);
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
            p = enter_state_341__13TUnk_804E2000Fv(p, tl_05, arg0);
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
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804E1E08;
        item_equip_variant_deleting_dtor_802D62F0((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_804E1F04[];

void *item_equip_variant_deleting_dtor_802D6138(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804E1F04;
        item_equip_variant_deleting_dtor_802D62F0((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_804E2000[];

void *item_equip_variant_deleting_dtor_802D6190(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804E2000;
        item_equip_variant_deleting_dtor_802D62F0((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_804E20FC[];

void *item_equip_variant_deleting_dtor_802D61E8(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804E20FC;
        item_equip_variant_deleting_dtor_802D62F0((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_804E21F8[];

void *item_equip_variant_deleting_dtor_802D6240(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804E21F8;
        item_equip_variant_deleting_dtor_802D62F0((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_804E22F4[];

void *item_equip_variant_deleting_dtor_802D6298(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804E22F4;
        item_equip_variant_deleting_dtor_802D62F0((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_804E23F0[];

void *item_equip_variant_deleting_dtor_802D62F0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804E23F0;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}
