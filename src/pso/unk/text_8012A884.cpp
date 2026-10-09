#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Self_8012A884 { u8 pad[0x18]; void *vt; u8 pad1C[0x1F8 - 0x1C]; u32 kind; };

extern "C" {
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *create_state_8012a9b4__10TObjPlayerFPv(u8 *arg0);
u8 get_slot_count__14TItemProShieldFPv(void *);
void TObjPlayer__sub_8011E2A4(void *, u8);
void TItemWeapon__ct(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
u8 *TObjPlayer__sub_8012A884(void *arg0, s32 arg1, void *arg2);
}

extern "C" {

struct Inc_8012A884;
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
extern "C" void TItemWeapon__sub_8011E5D0();
extern "C" void TItemWeapon__sub_8011E5D4();
extern "C" void TItemWeapon__sub_8011E5D8();
extern "C" void TItemWeapon__sub_8011E5DC();
extern "C" void TItemWeapon__sub_8011E610();
extern "C" void TItemWeapon__sub_801200C0();
extern "C" void TItemWeapon__sub_8012012C();
extern "C" void TItemWeapon__sub_80120454();
extern "C" void TItemWeapon__sub_80120568();
extern "C" void TItemWeapon__sub_80121064();
extern "C" void TObjPlayer__sub_801283B8();
extern "C" void TObjPlayer__sub_8012A5E8();
extern "C" void TObjPlayer__sub_8012A6B4();
extern "C" void add_equip_stats__14TItemEquipBaseFPvi();
extern "C" void apply_equip__11TItemWeaponFPv();
extern "C" void apply_object_set_data();
extern "C" void bind_attribute_entries__11TItemWeaponFPv();
extern "C" void classify_actor_view_detail();
extern "C" void copy_item_to_data__11TItemWeaponFi();
extern "C" void create_armor_item__10TObjPlayerFPv();
extern "C" void dispatch_attack_marker__11TItemWeaponFv();
extern "C" void dispatch_state__5TItemFPv();
extern "C" void draw_equipped_weapon__11TItemWeaponFPv();
extern "C" void draw_weapon_trails__11TItemWeaponFPv();
extern "C" void equip__14TItemEquipBaseFPv();
extern "C" void get_attack_flags__11TItemWeaponFPv();
extern "C" void get_motion_ptr__11TItemWeaponFPv();
extern "C" void item_equip_variant_deleting_dtor_8012A82C();
extern "C" void launch_shot__11TItemWeaponFPvPviii();
extern "C" void load_weapon_model__11TItemWeaponFPv();
extern "C" void register_attack__5TItemFPv();
extern "C" void release_member_90__10TObjPlayerFPv();
extern "C" void remove_equip_stats__14TItemEquipBaseFPvi();
extern "C" void render__5TItemFPv();
extern "C" void reset_entries__11TItemWeaponFPv();
extern "C" void reset_item_equip();
extern "C" void ret_8010064C();
extern "C" void ret_80100654();
extern "C" void ret_8010065C();
extern "C" void ret_80100664();
extern "C" void run_task__5TItemFPv();
extern "C" void set_attach_slot__14TItemEquipBaseFPvc();
extern "C" void subtract_equip_stats__14TItemEquipBaseFPviPvPv();
extern "C" void subtract_item_stat_bonus__14TItemEquipBaseFPviiPv();
extern "C" void try_pick_up_item__5TItemFPvi();
extern "C" void unequip__14TItemEquipBaseFPv();
extern "C" void update_active_weapon__11TItemWeaponFv();
extern "C" void update_equip__14TItemEquipBaseFPv();
extern "C" void update_model_flags__11TItemWeaponFPv();
extern "C" void update_pickup_flag__5TItemFi();
extern "C" void update_weapon_trails__11TItemWeaponFPv();
void *lbl_804A4948[63] = {
    (void *)0x0, (void *)0x0, (void *)&item_equip_variant_deleting_dtor_8012A82C, (void *)&run_task__5TItemFPv,
    (void *)&dispatch_state__5TItemFPv, (void *)&render__5TItemFPv, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&release_member_90__10TObjPlayerFPv, (void *)&get_motion_ptr__11TItemWeaponFPv, (void *)&TItem__sub_80100B8C, (void *)&classify_actor_view_detail,
    (void *)&register_attack__5TItemFPv, (void *)&try_pick_up_item__5TItemFPvi, (void *)&TItemWeapon__sub_801200C0, (void *)&TItem__sub_801005E0,
    (void *)&update_active_weapon__11TItemWeaponFv, (void *)&TItemWeapon__sub_8011E610, (void *)&TItemWeapon__sub_80120454, (void *)&set_attach_slot__14TItemEquipBaseFPvc,
    (void *)&equip__14TItemEquipBaseFPv, (void *)&unequip__14TItemEquipBaseFPv, (void *)&add_equip_stats__14TItemEquipBaseFPvi, (void *)&remove_equip_stats__14TItemEquipBaseFPvi,
    (void *)&subtract_item_stat_bonus__14TItemEquipBaseFPviiPv, (void *)&subtract_equip_stats__14TItemEquipBaseFPviPvPv, (void *)&draw_weapon_trails__11TItemWeaponFPv, (void *)&draw_equipped_weapon__11TItemWeaponFPv,
    (void *)&update_weapon_trails__11TItemWeaponFPv, (void *)&update_equip__14TItemEquipBaseFPv, (void *)&dispatch_attack_marker__11TItemWeaponFv, (void *)&update_pickup_flag__5TItemFi,
    (void *)&get_attack_flags__11TItemWeaponFPv, (void *)&TItemEquipBase__sub_8010A77C, (void *)&update_model_flags__11TItemWeaponFPv, (void *)&copy_item_to_data__11TItemWeaponFi,
    (void *)&ret_80100664, (void *)&ret_8010065C, (void *)&ret_80100654, (void *)&ret_8010064C,
    (void *)&TItem__sub_80100648, (void *)&TItem__sub_801005E4, (void *)&TItem__sub_801005D8, (void *)&TItemWeapon__sub_80121064,
    (void *)&apply_equip__11TItemWeaponFPv, (void *)&TItemWeapon__sub_80120568, (void *)&load_weapon_model__11TItemWeaponFPv, (void *)&reset_item_equip,
    (void *)&bind_attribute_entries__11TItemWeaponFPv, (void *)&reset_entries__11TItemWeaponFPv, (void *)&TItemWeapon__sub_8012012C, (void *)&launch_shot__11TItemWeaponFPvPviii,
    (void *)&TObjPlayer__sub_8012A6B4, (void *)&TItemWeapon__sub_8011E5DC, (void *)&TItemWeapon__sub_8011E5D8, (void *)&TItemWeapon__sub_8011E5D4,
    (void *)&TItemWeapon__sub_8011E5D0, (void *)&create_armor_item__10TObjPlayerFPv, (void *)&TItemWeapon__sub_8011E5C8, (void *)&TItemWeapon__sub_8011E5C4,
    (void *)&TItemWeapon__sub_8011E5C0, (void *)&TObjPlayer__sub_8012A5E8, (void *)&TObjPlayer__sub_801283B8,
};
#define lbl_804A4948 ((u8 *)lbl_804A4948)

u8 *TObjPlayer__sub_8012A884(void *arg0, s32 arg1, void *arg2) {
    Self_8012A884 *self = (Self_8012A884 *)arg0;
    Inc_8012A884 *p;
    TItemWeapon__ct(self);
    self->vt = lbl_804A4948;
    set_status_flags__10TObjPlayerFPvUi(self, 2);
    self->kind = get_slot_count__14TItemProShieldFPv(self);
    p = (Inc_8012A884 *)arg0;
    switch (self->kind) {
    case 0:
    case 3:
    case 4:
        break;
    case 1:
    case 2:
        set_status_flags__10TObjPlayerFPvUi(p, 0x400000);
        TObjPlayer__sub_8011E2A4(self, 0x1A);
        break;
    case 5:
        TObjPlayer__sub_8011E2A4(p, 0x1A);
        break;
    case 6:
        TObjPlayer__sub_8011E2A4(p, 0x1E);
        break;
    case 7:
        TObjPlayer__sub_8011E2A4(p, 0x12);
        break;
    case 8:
        TObjPlayer__sub_8011E2A4(p, 0x16);
        break;
    case 9:
        TObjPlayer__sub_8011E2A4(p, 0x26);
        break;
    case 10:
        TObjPlayer__sub_8011E2A4(p, 0x22);
        break;
    case 11:
        TObjPlayer__sub_8011E2A4(p, 0xD);
        break;
    case 12:
        TObjPlayer__sub_8011E2A4(p, 0xE);
        break;
    case 13:
        TObjPlayer__sub_8011E2A4(p, 0x28);
        break;
    case 14:
        TObjPlayer__sub_8011E2A4(p, 4);
        break;
    case 15:
        TObjPlayer__sub_8011E2A4(p, 8);
        break;
    case 16:
        TObjPlayer__sub_8011E2A4(p, 0xB);
        break;
    default:
        TObjPlayer__sub_8011E2A4(p, 0);
        break;
    }
    return (u8 *)self;
}

u8 *create_state_8012a9b4__10TObjPlayerFPv(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1FC));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(TObjPlayer__sub_8012A884((void *)(temp_r3), (s32)(tl_05), (void *)(arg0)));
        }
        return var_r0;
    }
    return NULL;
}

}
