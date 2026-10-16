#include "types.h"
#include "pso/unk/TUnk_804A4948.h"
#include "pso/player/TObjPlayer.h"
#include "pso/item/TItem.h"
#include "pso/item/TItemProShield.h"
#include "pso/items/TItemWeapon.h"

struct Self_8012A884 { u8 pad[0x18]; void *vt; u8 pad1C[0x1F8 - 0x1C]; u32 kind; };

extern "C" {
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
void TItemWeapon__ct(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
u8 *construct_srank_weapon(void *arg0, s32 arg1, void *arg2);
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
extern "C" void update_weapon__11TItemWeaponFv();
extern "C" void reserved_53__11TItemWeaponFv();
extern "C" void TItemWeapon__sub_8011E5D8();
extern "C" void update_attack__11TItemWeaponFv();
extern "C" void set_technique_roll__11TItemWeaponFl();
extern "C" void TItemWeapon__sub_801200C0();
extern "C" void TItemWeapon__sub_8012012C();
extern "C" void TItemWeapon__write_item_data();
extern "C" void reserved_43__11TItemWeaponFv();
extern "C" void TItemWeapon__sub_80121064();
extern "C" void srank_marker_noop();
extern "C" void receive_srank_hit();
extern "C" void emit_marker_effects__13TUnk_804A4948Fv();
extern "C" void add_equip_stats__14TItemEquipBaseFPvi();
extern "C" void reserved_42__11TItemWeaponFv();
extern "C" void apply_object_set_data();
extern "C" void reserved_46__11TItemWeaponFv();
extern "C" void classify_actor_view_detail();
extern "C" void start_srank_regen_timer__10TObjPlayerFv();
extern "C" void reserved_28__11TItemWeaponFv();
extern "C" void dispatch_state__5TItemFv();
extern "C" void draw_equipped_weapon__11TItemWeaponFv();
extern "C" void draw_weapon_trails__11TItemWeaponFPv();
extern "C" void equip__14TItemEquipBaseFv();
extern "C" void get_attack_flags__11TItemWeaponFv();
extern "C" void get_motion_ptr__11TItemWeaponFv();
extern "C" void item_equip_variant_deleting_dtor_8012A82C();
extern "C" void launch_shot__11TItemWeaponFPvPviii();
extern "C" void reserved_44__11TItemWeaponFv();
extern "C" void register_attack__5TItemFv();
extern "C" void release_member_90__10TObjPlayerFv();
extern "C" void remove_equip_stats__14TItemEquipBaseFPvi();
extern "C" void render_shadows__5TItemFv();
extern "C" void reserved_47__11TItemWeaponFv();
extern "C" void reset_item_equip();
extern "C" void ret_8010064C();
extern "C" void ret_80100654();
extern "C" void ret_8010065C();
extern "C" void ret_80100664();
extern "C" void run_task__5TItemFv();
extern "C" void set_attach_slot__14TItemEquipBaseFSc();
extern "C" void subtract_equip_stats__14TItemEquipBaseFlPUcPUc();
extern "C" void subtract_item_stat_bonus__14TItemEquipBaseFllPs();
extern "C" void try_pick_up_item__5TItemFPvi();
extern "C" void unequip__14TItemEquipBaseFv();
extern "C" void update_active_weapon__11TItemWeaponFv();
extern "C" void update_equip__14TItemEquipBaseFv();
extern "C" void reserved_32__11TItemWeaponFv();
extern "C" void update_weapon_trails__11TItemWeaponFv();
void *s_rank_weapon_vtable[63] = {
    (void *)0x0, (void *)0x0, (void *)&item_equip_variant_deleting_dtor_8012A82C, (void *)&run_task__5TItemFv,
    (void *)&dispatch_state__5TItemFv, (void *)&render_shadows__5TItemFv, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&release_member_90__10TObjPlayerFv, (void *)&get_motion_ptr__11TItemWeaponFv, (void *)&TItem__sub_80100B8C, (void *)&classify_actor_view_detail,
    (void *)&register_attack__5TItemFv, (void *)&try_pick_up_item__5TItemFPvi, (void *)&TItemWeapon__sub_801200C0, (void *)&TItem__sub_801005E0,
    (void *)&update_active_weapon__11TItemWeaponFv, (void *)&set_technique_roll__11TItemWeaponFl, (void *)&TItemWeapon__write_item_data, (void *)&set_attach_slot__14TItemEquipBaseFSc,
    (void *)&equip__14TItemEquipBaseFv, (void *)&unequip__14TItemEquipBaseFv, (void *)&add_equip_stats__14TItemEquipBaseFPvi, (void *)&remove_equip_stats__14TItemEquipBaseFPvi,
    (void *)&subtract_item_stat_bonus__14TItemEquipBaseFllPs, (void *)&subtract_equip_stats__14TItemEquipBaseFlPUcPUc, (void *)&draw_weapon_trails__11TItemWeaponFPv, (void *)&draw_equipped_weapon__11TItemWeaponFv,
    (void *)&update_weapon_trails__11TItemWeaponFv, (void *)&update_equip__14TItemEquipBaseFv, (void *)&reserved_28__11TItemWeaponFv, (void *)&TItem::update_pickup_flag,
    (void *)&get_attack_flags__11TItemWeaponFv, (void *)&TItemEquipBase__sub_8010A77C, (void *)&reserved_32__11TItemWeaponFv, (void *)&TItemWeapon::copy_item_to_data,
    (void *)&ret_80100664, (void *)&ret_8010065C, (void *)&ret_80100654, (void *)&ret_8010064C,
    (void *)&TItem__sub_80100648, (void *)&TItem__sub_801005E4, (void *)&TItem__sub_801005D8, (void *)&TItemWeapon__sub_80121064,
    (void *)&reserved_42__11TItemWeaponFv, (void *)&reserved_43__11TItemWeaponFv, (void *)&reserved_44__11TItemWeaponFv, (void *)&reset_item_equip,
    (void *)&reserved_46__11TItemWeaponFv, (void *)&reserved_47__11TItemWeaponFv, (void *)&TItemWeapon__sub_8012012C, (void *)&launch_shot__11TItemWeaponFPvPviii,
    (void *)&emit_marker_effects__13TUnk_804A4948Fv, (void *)&update_attack__11TItemWeaponFv, (void *)&TItemWeapon__sub_8011E5D8, (void *)&reserved_53__11TItemWeaponFv,
    (void *)&update_weapon__11TItemWeaponFv, (void *)&start_srank_regen_timer__10TObjPlayerFv, (void *)&TItemWeapon__sub_8011E5C8, (void *)&TItemWeapon__sub_8011E5C4,
    (void *)&TItemWeapon__sub_8011E5C0, (void *)&receive_srank_hit, (void *)&srank_marker_noop,
};
#define s_rank_weapon_vtable ((u8 *)s_rank_weapon_vtable)

u8 *construct_srank_weapon(void *arg0, s32 arg1, void *arg2) {
    Self_8012A884 *self = (Self_8012A884 *)arg0;
    Inc_8012A884 *p;
    TItemWeapon__ct(self);
    self->vt = s_rank_weapon_vtable;
    set_status_flags__10TObjPlayerFPvUi(self, 2);
    self->kind = ((TItemProShield *)self)->get_slot_count();
    p = (Inc_8012A884 *)arg0;
    switch (self->kind) {
    case 0:
    case 3:
    case 4:
        break;
    case 1:
    case 2:
        set_status_flags__10TObjPlayerFPvUi(p, 0x400000);
        ((TUnk_804A4948 *)self)->set_special_selector(0x1A);
        break;
    case 5:
        ((TUnk_804A4948 *)p)->set_special_selector(0x1A);
        break;
    case 6:
        ((TUnk_804A4948 *)p)->set_special_selector(0x1E);
        break;
    case 7:
        ((TUnk_804A4948 *)p)->set_special_selector(0x12);
        break;
    case 8:
        ((TUnk_804A4948 *)p)->set_special_selector(0x16);
        break;
    case 9:
        ((TUnk_804A4948 *)p)->set_special_selector(0x26);
        break;
    case 10:
        ((TUnk_804A4948 *)p)->set_special_selector(0x22);
        break;
    case 11:
        ((TUnk_804A4948 *)p)->set_special_selector(0xD);
        break;
    case 12:
        ((TUnk_804A4948 *)p)->set_special_selector(0xE);
        break;
    case 13:
        ((TUnk_804A4948 *)p)->set_special_selector(0x28);
        break;
    case 14:
        ((TUnk_804A4948 *)p)->set_special_selector(4);
        break;
    case 15:
        ((TUnk_804A4948 *)p)->set_special_selector(8);
        break;
    case 16:
        ((TUnk_804A4948 *)p)->set_special_selector(0xB);
        break;
    default:
        ((TUnk_804A4948 *)p)->set_special_selector(0);
        break;
    }
    return (u8 *)self;
}

u8 *TObjPlayer::create_srank_common_weapon() {
    u8 *arg0 = (u8 *)this;
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1FC));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(construct_srank_weapon((void *)(temp_r3), (s32)(tl_05), (void *)(arg0)));
        }
        return var_r0;
    }
    return NULL;
}

}
