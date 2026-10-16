#include "types.h"
extern "C" { extern void *s_rank_j_cutter_weapon_vtable[64]; extern void *s_rank_slicer_weapon_vtable[64]; }
struct Owner_801293FC { u8 pad[0x60]; s32 f60; };

struct Self_801293FC { u8 pad0[0x24]; s32 f24; u8 pad28[0xF0 - 0x28]; Owner_801293FC *owner; u8 padF4[0x188 - 0xF4]; s32 f188; };

struct Vec_801293FC { f32 x, y, z; };

struct Tec_801293FC {
    s16 id;
    u8 pad2[2];
    s32 f4;
    s32 f8;
    s32 fC;
    s16 f10;
    s16 f12;
    f32 f14;
    f32 f18;
    f32 f1C;
    f32 f20;
    f32 f24;
    s32 f28;
    u8 pad2C[4];
    Vec_801293FC pos;
    Vec_801293FC dir;
};

extern "C" {
s16 obj_getField1c(void *);
s32 get_field_d8__10TObjPlayerFv(void *);
void spawn_item_timer__13TItemAttackerFlll(void *, void *, s32);
s32 draw_icon__10TObjPlayerFll(void *, s32, void *);
f32 query_extended_state__10TObjPlayerFv(void *);
void TObjPlayer__sub_80128A70(void);
void init_slicer_launch_state(void *);
s16 get_validated_attack_stage(void *);
s16 TObjPlayer__sub_801D2F4C(void *);
void *create__10TTecSlicerFPUs(void *);
void enlarge_s_rank_j_cutter_blade(void *);
extern const f32 lbl_805DAE18;
extern const f32 lbl_805DAE1C;
extern const f32 lbl_805DAE20;
extern const f32 lbl_805DAE24;
void launch_s_rank_j_cutter(Self_801293FC *self);
}

extern "C" {

void launch_s_rank_j_cutter(Self_801293FC *self) {
    Tec_801293FC tec;
    TObjPlayer__sub_80128A70();
    init_slicer_launch_state(&tec);
    tec.id = obj_getField1c(self->owner);
    tec.fC = get_field_d8__10TObjPlayerFv(self);
    tec.f4 = self->f24;
    tec.f8 = self->f188;
    tec.f10 = TObjPlayer__sub_801D2F4C((u8 *)self->owner + 0x7CC);
    tec.f12 = get_validated_attack_stage((u8 *)self->owner + 0x7CC);
    tec.f14 = query_extended_state__10TObjPlayerFv(self->owner);
    tec.f18 = lbl_805DAE18;
    tec.f1C = lbl_805DAE1C;
    tec.f20 = lbl_805DAE20;
    tec.f24 = lbl_805DAE24;
    tec.f28 = self->owner->f60;
    draw_icon__10TObjPlayerFll(self, 3, &tec.pos);
    draw_icon__10TObjPlayerFll(self, 2, &tec.dir);
    spawn_item_timer__13TItemAttackerFlll(create__10TTecSlicerFPUs(&tec), enlarge_s_rank_j_cutter_blade, 3);
}

}

#include "types.h"

extern "C" {

void *destroy_s_rank_j_cutter_weapon(void *arg0, s16 arg1);
void item_equip_variant_deleting_dtor_8012A82C(void *, int);
void free_obj_heap__10TObjPlayerFPv(void *);

void *destroy_s_rank_j_cutter_weapon(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(void ***)((s8 *)arg0 + 0x18) = s_rank_j_cutter_weapon_vtable;
        item_equip_variant_deleting_dtor_8012A82C(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}

#include "types.h"

extern "C" {

void *construct_s_rank_j_cutter_weapon(void *arg0, s32 task_root, void *owner);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
void construct_srank_weapon(void *);

void *construct_s_rank_j_cutter_weapon(void *arg0, s32 task_root, void *owner) {
    construct_srank_weapon(arg0);
    *(void ***)((s8 *)arg0 + 0x18) = s_rank_j_cutter_weapon_vtable;
    set_status_flags__10TObjPlayerFPvUi(arg0, 2);
    return arg0;
}

}

#include "types.h"

extern "C" {
void *construct_s_rank_j_cutter_weapon(void *, s32, void *);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
u8 *create_s_rank_j_cutter_weapon(u8 *arg0);
}

extern "C" {

u8 *create_s_rank_j_cutter_weapon(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1FC));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(construct_s_rank_j_cutter_weapon(temp_r3, tl_05, arg0));
        }
        return var_r0;
    }
    return NULL;
}

}

#include "types.h"

extern "C" {

void enlarge_s_rank_j_cutter_blade(void *arg0);

extern const f32 lbl_805DAE28;

void enlarge_s_rank_j_cutter_blade(void *arg0) {
    if (arg0 != NULL) {
        *(f32 *)((s8 *)arg0 + 0x68) = (f32) lbl_805DAE28;
        *(f32 *)((s8 *)arg0 + 0x6C) = (f32) lbl_805DAE28;
        *(f32 *)((s8 *)arg0 + 0x70) = (f32) lbl_805DAE28;
    }
}

}

#include "types.h"
struct SlicerState_801295FC {
    u16 id;
    u8 pad0[2];
    s32 count;
    u8 pad1[4];
    s32 owner;
    s16 a;
    s16 b;
    f32 f14;
    f32 f18;
    f32 f1C;
    f32 f20;
    f32 f24;
    u8 pad2[4];
    s32 angle;
};

struct Owner_80129648 { u8 pad[0x60]; s32 f60; };

struct Self_80129648 { u8 pad0[0x24]; s32 f24; u8 pad28[0xF0 - 0x28]; Owner_80129648 *owner; u8 padF4[0x188 - 0xF4]; s32 f188; };

struct Vec_80129648 { f32 x, y, z; };

struct Tec_80129648 {
    s16 id;
    u8 pad2[2];
    s32 f4;
    s32 f8;
    s32 fC;
    s16 f10;
    s16 f12;
    f32 f14;
    f32 f18;
    f32 f1C;
    f32 f20;
    f32 f24;
    s32 f28;
    u8 pad2C[4];
    Vec_80129648 pos;
    Vec_80129648 dir;
};

extern "C" {
extern const f32 lbl_805DAE18;
extern const f32 lbl_805DAE2C;
void init_slicer_launch_state(void *);
s16 obj_getField1c(void *);
s32 get_field_d8__10TObjPlayerFv(void *);
s32 draw_icon__10TObjPlayerFll(void *, s32, void *);
f32 query_extended_state__10TObjPlayerFv(void *);
void TObjPlayer__sub_80128A70(void);
void init_slicer_launch_state(void *);
s16 get_validated_attack_stage(void *);
s16 TObjPlayer__sub_801D2F4C(void *);
void *create__10TTecSlicerFPUs(void *);
extern const f32 lbl_805DAE30;
extern const f32 lbl_805DAE34;
extern const f32 lbl_805DAE38;
extern const f32 lbl_805DAE3C;
void launch_s_rank_slicer(Self_80129648 *self);
}

extern "C" {

void init_slicer_launch_state(void *arg0) {
    SlicerState_801295FC *s = (SlicerState_801295FC *)arg0;
    s->id = 0xFFFF;
    s->owner = -1;
    s->count = 0;
    s->a = -1;
    s->b = -1;
    s->f14 = lbl_805DAE18;
    s->f24 = lbl_805DAE2C;
    s->f20 = lbl_805DAE2C;
    s->f1C = lbl_805DAE2C;
    s->f18 = lbl_805DAE2C;
    s->angle = -0x2AAA;
}
struct SlicerState_801295FC;
void launch_s_rank_slicer(Self_80129648 *self) {
    Tec_80129648 tec;
    TObjPlayer__sub_80128A70();
    init_slicer_launch_state((struct SlicerState_801295FC *)((SlicerState_801295FC *)&tec));
    tec.id = obj_getField1c(self->owner);
    tec.fC = get_field_d8__10TObjPlayerFv(self);
    tec.f4 = self->f24;
    tec.f8 = self->f188;
    tec.f10 = TObjPlayer__sub_801D2F4C((u8 *)self->owner + 0x7CC);
    tec.f12 = get_validated_attack_stage((u8 *)self->owner + 0x7CC);
    tec.f14 = query_extended_state__10TObjPlayerFv(self->owner);
    tec.f18 = lbl_805DAE30;
    tec.f1C = lbl_805DAE34;
    tec.f20 = lbl_805DAE38;
    tec.f24 = lbl_805DAE3C;
    tec.f28 = self->owner->f60;
    draw_icon__10TObjPlayerFll(self, 1, &tec.pos);
    draw_icon__10TObjPlayerFll(self, 2, &tec.dir);
    create__10TTecSlicerFPUs(&tec);
}

}

#include "types.h"

extern "C" {

void *construct_s_rank_slicer_weapon(void *arg0, s32 task_root, void *owner);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
void construct_srank_weapon(void *);

void *construct_s_rank_slicer_weapon(void *arg0, s32 task_root, void *owner) {
    construct_srank_weapon(arg0);
    *(void ***)((s8 *)arg0 + 0x18) = s_rank_slicer_weapon_vtable;
    set_status_flags__10TObjPlayerFPvUi(arg0, 2);
    return arg0;
}

}

#include "types.h"

extern "C" {
void *construct_s_rank_slicer_weapon(void *, s32, void *);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
u8 *create_s_rank_slicer_weapon(u8 *arg0);
}

extern "C" {

u8 *create_s_rank_slicer_weapon(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1FC));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(construct_s_rank_slicer_weapon(temp_r3, tl_05, arg0));
        }
        return var_r0;
    }
    return NULL;
}

}

#include "types.h"
#include "pso/item/TItem.h"
#include "pso/items/TItemWeapon.h"

extern "C" {

void *destroy_s_rank_slicer_weapon(void *arg0, s16 arg1);
void item_equip_variant_deleting_dtor_8012A82C(void *, int);
void free_obj_heap__10TObjPlayerFPv(void *);

void *destroy_s_rank_slicer_weapon(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(void ***)((s8 *)arg0 + 0x18) = s_rank_slicer_weapon_vtable;
        item_equip_variant_deleting_dtor_8012A82C(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}

extern "C" void TItemEquipBase__sub_8010A77C();
extern "C" void TItemWeapon__sub_8011E5C0();
extern "C" void TItemWeapon__sub_8011E5C4();
extern "C" void TItemWeapon__sub_8011E5C8();
extern "C" void TItemWeapon__sub_8011E5D0();
extern "C" void TItemWeapon__sub_8011E5D4();
extern "C" void TItemWeapon__sub_8011E5D8();
extern "C" void TItemWeapon__sub_8011E5DC();
extern "C" void set_technique_roll__11TItemWeaponFl();
extern "C" void TItemWeapon__sub_801200C0();
extern "C" void TItemWeapon__sub_8012012C();
extern "C" void TItemWeapon__sub_80120568();
extern "C" void TItemWeapon__sub_80121064();
extern "C" void TItemWeapon__write_item_data();
extern "C" void TItem__sub_801005D8();
extern "C" void TItem__sub_801005E0();
extern "C" void TItem__sub_801005E4();
extern "C" void TItem__sub_80100648();
extern "C" void TItem__sub_80100B8C();
extern "C" void TLobby__sub_801A1FD8();
extern "C" void srank_marker_noop();
extern "C" void receive_srank_hit();
extern "C" void add_equip_stats__14TItemEquipBaseFPvi();
extern "C" void apply_equip__11TItemWeaponFv();
extern "C" void apply_object_set_data();
extern "C" void bind_attribute_entries__11TItemWeaponFv();
extern "C" void classify_actor_view_detail();
extern "C" void start_srank_regen_timer__10TObjPlayerFv();
extern "C" void dispatch_attack_marker__11TItemWeaponFv();
extern "C" void dispatch_state__5TItemFv();
extern "C" void draw_equipped_weapon__11TItemWeaponFv();
extern "C" void draw_weapon_trails__11TItemWeaponFPv();
extern "C" void equip__14TItemEquipBaseFv();
extern "C" void get_attack_flags__11TItemWeaponFv();
extern "C" void get_motion_ptr__11TItemWeaponFv();
extern "C" void launch_shot__11TItemWeaponFPvPviii();
extern "C" void load_weapon_model__11TItemWeaponFv();
extern "C" void register_attack__5TItemFv();
extern "C" void release_member_90__10TObjPlayerFv();
extern "C" void remove_equip_stats__14TItemEquipBaseFPvi();
extern "C" void render__5TItemFv();
extern "C" void reset_entries__11TItemWeaponFv();
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
extern "C" void update_model_flags__11TItemWeaponFv();
extern "C" void update_weapon_trails__11TItemWeaponFv();
extern "C" {
void *s_rank_j_cutter_weapon_vtable[64] = {
    (void *)0x0, (void *)0x0, (void *)&destroy_s_rank_j_cutter_weapon, (void *)&run_task__5TItemFv,
    (void *)&dispatch_state__5TItemFv, (void *)&render__5TItemFv, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&release_member_90__10TObjPlayerFv, (void *)&get_motion_ptr__11TItemWeaponFv, (void *)&TItem__sub_80100B8C, (void *)&classify_actor_view_detail,
    (void *)&register_attack__5TItemFv, (void *)&try_pick_up_item__5TItemFPvi, (void *)&TItemWeapon__sub_801200C0, (void *)&TItem__sub_801005E0,
    (void *)&update_active_weapon__11TItemWeaponFv, (void *)&set_technique_roll__11TItemWeaponFl, (void *)&TItemWeapon__write_item_data, (void *)&set_attach_slot__14TItemEquipBaseFSc,
    (void *)&equip__14TItemEquipBaseFv, (void *)&unequip__14TItemEquipBaseFv, (void *)&add_equip_stats__14TItemEquipBaseFPvi, (void *)&remove_equip_stats__14TItemEquipBaseFPvi,
    (void *)&subtract_item_stat_bonus__14TItemEquipBaseFllPs, (void *)&subtract_equip_stats__14TItemEquipBaseFlPUcPUc, (void *)&draw_weapon_trails__11TItemWeaponFPv, (void *)&draw_equipped_weapon__11TItemWeaponFv,
    (void *)&update_weapon_trails__11TItemWeaponFv, (void *)&update_equip__14TItemEquipBaseFv, (void *)&dispatch_attack_marker__11TItemWeaponFv, (void *)&TItem::update_pickup_flag,
    (void *)&get_attack_flags__11TItemWeaponFv, (void *)&TItemEquipBase__sub_8010A77C, (void *)&update_model_flags__11TItemWeaponFv, (void *)&TItemWeapon::copy_item_to_data,
    (void *)&ret_80100664, (void *)&ret_8010065C, (void *)&ret_80100654, (void *)&ret_8010064C,
    (void *)&TItem__sub_80100648, (void *)&TItem__sub_801005E4, (void *)&TItem__sub_801005D8, (void *)&TItemWeapon__sub_80121064,
    (void *)&apply_equip__11TItemWeaponFv, (void *)&TItemWeapon__sub_80120568, (void *)&load_weapon_model__11TItemWeaponFv, (void *)&reset_item_equip,
    (void *)&bind_attribute_entries__11TItemWeaponFv, (void *)&reset_entries__11TItemWeaponFv, (void *)&TItemWeapon__sub_8012012C, (void *)&launch_shot__11TItemWeaponFPvPviii,
    (void *)&launch_s_rank_j_cutter, (void *)&TItemWeapon__sub_8011E5DC, (void *)&TItemWeapon__sub_8011E5D8, (void *)&TItemWeapon__sub_8011E5D4,
    (void *)&TItemWeapon__sub_8011E5D0, (void *)&start_srank_regen_timer__10TObjPlayerFv, (void *)&TItemWeapon__sub_8011E5C8, (void *)&TItemWeapon__sub_8011E5C4,
    (void *)&TItemWeapon__sub_8011E5C0, (void *)&receive_srank_hit, (void *)&srank_marker_noop, (void *)0x0,
};
void *s_rank_slicer_weapon_vtable[64] = {
    (void *)0x0, (void *)0x0, (void *)&destroy_s_rank_slicer_weapon, (void *)&run_task__5TItemFv,
    (void *)&dispatch_state__5TItemFv, (void *)&render__5TItemFv, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&release_member_90__10TObjPlayerFv, (void *)&get_motion_ptr__11TItemWeaponFv, (void *)&TItem__sub_80100B8C, (void *)&classify_actor_view_detail,
    (void *)&register_attack__5TItemFv, (void *)&try_pick_up_item__5TItemFPvi, (void *)&TItemWeapon__sub_801200C0, (void *)&TItem__sub_801005E0,
    (void *)&update_active_weapon__11TItemWeaponFv, (void *)&set_technique_roll__11TItemWeaponFl, (void *)&TItemWeapon__write_item_data, (void *)&set_attach_slot__14TItemEquipBaseFSc,
    (void *)&equip__14TItemEquipBaseFv, (void *)&unequip__14TItemEquipBaseFv, (void *)&add_equip_stats__14TItemEquipBaseFPvi, (void *)&remove_equip_stats__14TItemEquipBaseFPvi,
    (void *)&subtract_item_stat_bonus__14TItemEquipBaseFllPs, (void *)&subtract_equip_stats__14TItemEquipBaseFlPUcPUc, (void *)&draw_weapon_trails__11TItemWeaponFPv, (void *)&draw_equipped_weapon__11TItemWeaponFv,
    (void *)&update_weapon_trails__11TItemWeaponFv, (void *)&update_equip__14TItemEquipBaseFv, (void *)&dispatch_attack_marker__11TItemWeaponFv, (void *)&TItem::update_pickup_flag,
    (void *)&get_attack_flags__11TItemWeaponFv, (void *)&TItemEquipBase__sub_8010A77C, (void *)&update_model_flags__11TItemWeaponFv, (void *)&TItemWeapon::copy_item_to_data,
    (void *)&ret_80100664, (void *)&ret_8010065C, (void *)&ret_80100654, (void *)&ret_8010064C,
    (void *)&TItem__sub_80100648, (void *)&TItem__sub_801005E4, (void *)&TItem__sub_801005D8, (void *)&TItemWeapon__sub_80121064,
    (void *)&apply_equip__11TItemWeaponFv, (void *)&TItemWeapon__sub_80120568, (void *)&load_weapon_model__11TItemWeaponFv, (void *)&reset_item_equip,
    (void *)&bind_attribute_entries__11TItemWeaponFv, (void *)&reset_entries__11TItemWeaponFv, (void *)&TItemWeapon__sub_8012012C, (void *)&launch_shot__11TItemWeaponFPvPviii,
    (void *)&launch_s_rank_slicer, (void *)&TItemWeapon__sub_8011E5DC, (void *)&TItemWeapon__sub_8011E5D8, (void *)&TItemWeapon__sub_8011E5D4,
    (void *)&TItemWeapon__sub_8011E5D0, (void *)&start_srank_regen_timer__10TObjPlayerFv, (void *)&TItemWeapon__sub_8011E5C8, (void *)&TItemWeapon__sub_8011E5C4,
    (void *)&TItemWeapon__sub_8011E5C0, (void *)&receive_srank_hit, (void *)&srank_marker_noop, (void *)0x0,
};
#define s_rank_j_cutter_weapon_vtable ((s32 *)s_rank_j_cutter_weapon_vtable)
#define s_rank_slicer_weapon_vtable ((s32 *)s_rank_slicer_weapon_vtable)
}

extern "C" {
__declspec(section ".sdata2") const f32 lbl_805DAE18 = 1.0f;
__declspec(section ".sdata2") const f32 lbl_805DAE1C = 0.6f;
__declspec(section ".sdata2") const f32 lbl_805DAE20 = 0.5f;
__declspec(section ".sdata2") const f32 lbl_805DAE24 = 0.3f;
__declspec(section ".sdata2") const f32 lbl_805DAE28 = 1.6f;
__declspec(section ".sdata2") const f32 lbl_805DAE2C = 0.0f;
__declspec(section ".sdata2") const f32 lbl_805DAE30 = 1.0f;
__declspec(section ".sdata2") const f32 lbl_805DAE34 = 0.6f;
__declspec(section ".sdata2") const f32 lbl_805DAE38 = 0.5f;
__declspec(section ".sdata2") const f32 lbl_805DAE3C = 0.3f;
}
