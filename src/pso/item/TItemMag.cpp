#define TOBJECT_OUT_OF_LINE_HELPERS
#include "pso/item/TItemMagSub.h"

#include "types.h"
#include "pso/item/TItemMag.h"

extern "C" {

struct O_80110F04 { u8 pad[0x190]; f32 f190; f32 f194; };

struct TItemMag_80110B94 { u8 pad[0x1a8]; void *subs[2]; };

struct TItemMag_80111140 { u8 pad[0x1bd]; u8 a[4]; u8 b[4]; };

struct TItemMag_80111758 { u8 pad[0x1a8]; void *subs[2]; };

struct TItemMag_801112B8 {
    u8 pad0[0x18C];
    s32 f18C;
    u8 pad190[0x1A8 - 0x190];
    u8 *objs[2];
    s8 *types[2];
};

struct VBase_18_8b050c { char pad[0x18]; };

struct VObj_18_8b050c : VBase_18_8b050c {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual s32 m44();
    virtual s32 m45();
};

struct Self_801124C4
{
  u8 pad[0x198];
  u8 data[1];
};

typedef struct Self_801124C4 Self_801124C4;

struct RecoveredFields_80113244_arg0 {
    u8 unknown_0[0x1CC];
    s32 field_1CC;
};

typedef struct TargetList_80112BC4 { s32 count; s16 ids[46]; } TargetList_80112BC4;

struct MagStats_80112A3C {
    s16 a;
    s16 b;
    s16 c;
    s16 d;
    s16 e;
    s16 f;
    u8 pad[0x4];
};

struct Mag_80112A3C {
    u8 pad0[0x1A8];
    u8 *subs[2];
};

struct VBase_80112720 { u8 pad[0x18]; };

struct VObj_80112720 : VBase_80112720 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual s32 m14();
};

void * memcpy(void *dst, const void *src, u32 n);
s32 get_main_phase();
s32 obj_isState2_324(int);
s16 obj_getS16_32C(s32);
s16 obj_getField1c(void *);
s32 get_item_field_6__10TObjPlayerFPv(int);
u8 get_field_ed__10TObjPlayerFPv(s32);
void set_flag_4__9TObjLukerFPv(void *);
u8 * get_type__8TItemMagFPv(s32);
s32 set_type__10TObjPlayerFPvi(s32, s32);
void construct_target_cursor_records__10TObjPlayerFi(void *);
s32 is_quest_active();
s32 is_flag_set__6TLobbyFv();
s16 get_field_2b8__14TItemProShieldFPv(void *);
s32 clear_flag4_bit4__22TQuestVmDownLoadServerFPv(void *);
s32 test_action_mask__10TObjPlayerFPvi(s32, s32);
s32 spawn_particle_effect(void *, int);
s32 get_field_d8__10TObjPlayerFPv(int);
s32 apply_switch_attack__5TItemFPvi(void *, s32);
s32 refresh_owner_stats__5TItemFPv(void *);
s32 set_field_EE__8TItemMagFPvUc(void *, void *);
int fn_80100D9C(s32, s32);
s32 send_6x61_activate_mag_effect(void *, s32);
s32 get_item_info__10TObjPlayerFiiPv(int, int, int);
s32 copy_to_item_data__5TItemFPvPv(s32, void *);
s8 TObjPlayer__sub_80102C30(void *);
int get_flag_40__8TItemMagFPv(void *);
void spawn_item_timer__13TItemAttackerFiii(void *a, void *fn, s32 t);
s32 check_class_equip_permission(void *, int);
s32 activate_d04_slot__10TObjPlayerFPv();
void initialize_mag_data__9TItemDataFPv(void *);
u8 get_slot_count__14TItemProShieldFPv();
s32 * lookup_item_pmt_record(u8 *);
void call_preserve_flag__8TItemMagFPvi(void *arg0, s32 arg1);
void try_add_action__8TItemMagFii(s32 arg0, s32 arg1);
void TItemMag__vt40(TItemMag_80110B94 *self);
s32 check_evolution_cond__8TItemMagFUii(u32 arg0, s32 arg1);
s32 check_feed_state__8TItemMagFPvi(void *arg0, s32 arg1);
void copy_owner_data__8TItemMagFPv(u8 *arg0);
void register_photon_blasts__8TItemMagFPv(u8 *arg0);
void tick_fullness_timer__8TItemMagFPv(O_80110F04 *self);
u8 mag_owner_has_motion_action(void *arg0);
s32 mag_owner_freezes_follow(void *arg0);
s32 check_action_probability__8TItemMagFPvi(u8 *arg0, s32 arg1);
void copy_owner_pair__8TItemMagFPvPvPv(TItemMag_80111140 *self, void *a, void *b);
void apply_transform_action__8TItemMagFPvUc(u8 *arg0, u8 arg1);
int TItemMag__sub_801112B0(void);
void select_action_motion__8TItemMagFPv(TItemMag_801112B8 *self);
void set_subs_visible__8TItemMagFPvi(TItemMag_80111758 *self, s32 on);
s32 get_evolution_stage__8TItemMagFPv(void * _w0);
s32 get_max_stat_flags__8TItemMagFi(s32 arg0);
u8 evolve_rare_form__8TItemMagFPv(u8 *arg0);
void update_feed_anim__8TItemMagFPv(void *arg0);
void do_action_by_class__8TItemMagFi(s32 arg0);
void evolve_first_form__8TItemMagFPv(u8 *arg0);
void apply_form_change__8TItemMagFPv(u8 *arg0);
void apply_natural_evolution__8TItemMagFPv(Self_801124C4 *self);
void feed_by_item_flags__8TItemMagFPvc(void *arg0, s8 arg1);
void TItemMag__sub_8011271C(void);
s32 TItemMag__vt39(u8 *arg0, u8 *arg1);
void cast_support_technique__8TItemMagFPvi(u8 *self, s32 technique);
s32 apply_feed_stats__8TItemMagFPvPv(u8 *arg0, u8 *arg1);
void TItemMag__vt15(void* p, s32 _w1);
void select_support_action__8TItemMagFPvi(u8 *arg0, s32 arg1);
void request_support_action__8TItemMagFPvi(void *arg0, s32 arg1);
void transfer_energy__8TItemMagFPv(void *arg0);
void apply_feed_delta__8TItemMagFPv(u8 *arg0);
void update_protection__8TItemMagFv(u8 *self);
void update_feed_timer__8TItemMagFPv(void *arg0);
void feed_if_over_90__8TItemMagFPv(void* p);
void feed_if_over_45__8TItemMagFPv(void* p);
void update_feed__8TItemMagFPv(void *arg0);
void check_level_cap__8TItemMagFPv(void *arg0);
void check_level_evolve__8TItemMagFPv(void *arg0);
void apply_auto_support_techniques__8TItemMagFPv(struct RecoveredFields_80113244_arg0 *arg0);
void set_flags__11TItemMagSubFUl(void *p, u32 v);
s16 TObjPlayer__sub_80113D90(s32);
s16 get_mag_data__10TObjPlayerFPv(s32);
s16 get_mag_item_data(s32);
s16 get_mag_level(s32);
s16 get_mag_item_percent();
s32 get_mag_item_stat_percent(s32);
s32 get_status_flag__8TItemMagFPv(void *);
s32 get_item_type__8TItemMagFPv(void *);
s32 get_sync__8TItemMagFPv(void *);
s32 is_active__8TItemMagFPv(u32);
s32 get_sub_value__8TItemMagFi(void *);
void TItemMag__sub_80113EDC(s32, s16, s8);
s32 get_mag_id__8TItemMagFPv(s32);
s32 clear_feed_flags__8TItemMagFPvUi(void *, s32);
void set_flags__8TItemMagFPvUi(void *, u32);
u32 test_flags__8TItemMagFPvUi(void *, s32);
s32 add_photon_blast__8TItemMagFPvUc(void *, int);
s32 add_clamped_stat__8TItemMagFPvi(void *, int);
s32 add_stat_clamped__8TItemMagFPvi(void *, int);
s32 mag_feed_add_mind(void *, int);
s32 TItemMag__sub_80114198(void *, int);
s32 add_stat_level_capped__8TItemMagFPvs(void *, int);
s32 mag_feed_add_def(void *, int);
s32 get_photon_blast_at_slot__8TItemMagFPvi(void *, s32);
s16 get_mag_total_level(void *);
void transition_motion_type__11TItemMagSubFl(u8 *arg0, s32 arg1);
void clear_optional_oscillation_flag__11TItemMagSubFPv(void *arg0);
s32 get_world_position__11TItemMagSubFPv(u8 *arg0, u32 arg1);
u8 * get_mag_feed_result(s32, s32);
u8 * get_pmt_record__10TObjPlayerFi(u8);
s32 send_6x26_unequip_item__10TObjPlayerFPvPv(int, int);
s32 decrement_clamp__10TObjPlayerFPvi(s32, s32);
void assign_default_photon_blast_palette_slots(s32);
void assign_photon_blast_palette_slot(u8 *arg0, s32 arg1);
s32 is_boss_area();
s32 get_global_state__14TOKeyMachine01Fv();
s32 play_sound_effect(int, int, int, int);
void create__10TTecDebandFiii(void *, void *, int);
void create__9TTecRestaFPvPvPv(void *, void *, int);
void create__12TTecReverserFPvPvPvPv(void *, void *, void *, int);
void create__9TTecSiftaFPvPvPv(void *, void *, int);
s32 is_challenge_mode_active();
s32 rand();

extern s32 TItemMag__item_load_instance;
extern const f32 TItemMag__data_805DABA4;
extern const f32 TItemMag__data_805DABA8;
extern s32 lbl_8043E534[];
extern u8 lbl_8043E540[];
extern const f32 lbl_805DAB98;
extern const f32 lbl_805DAB9C;
extern const f32 lbl_805DABA0;
extern const f32 lbl_805DABAC;
extern const f32 lbl_805DABB0;
extern const f32 lbl_805DABB4;

#pragma push
#pragma inline_depth(4)
#pragma auto_inline off
#pragma dont_inline off
extern "C" void TItemEquipBase__sub_8010A77C();
extern "C" void TItemEquipBase__sub_8010A938();
extern "C" void TItemEquipBase__sub_8010A93C();
extern "C" void TItemMag__vt48();
extern "C" void TItem__sub_80100648();
extern "C" void TItem__sub_80100674();
extern "C" void TItem__sub_80100680();
extern "C" void TItem__sub_80100688();
extern "C" void TItem__sub_801007A8();
extern "C" void TItem__sub_80100B8C();
extern "C" void TLobby__sub_801A1FD8();
extern "C" void TObjPlayer__sub_80102BD8();
extern "C" void TParticleCtrl__sub_801A2124();
extern "C" void add_equip_stats__14TItemEquipBaseFPvi();
extern "C" void apply_object_set_data();
extern "C" void classify_actor_view_detail();
extern "C" void dispatch_state__5TItemFPv();
extern "C" void equip__14TItemEquipBaseFPv();
extern "C" void register_attack__5TItemFPv();
extern "C" void release_member_90__10TObjPlayerFPv();
extern "C" void remove_equip_stats__14TItemEquipBaseFPvi();
extern "C" void render__5TItemFPv();
extern "C" void ret_8010064C();
extern "C" void ret_80100654();
extern "C" void ret_8010065C();
extern "C" void ret_80100664();
extern "C" void ret_8010066C();
extern "C" void run_task__5TItemFPv();
extern "C" void set_attach_slot__14TItemEquipBaseFPvc();
extern "C" void subtract_equip_stats__14TItemEquipBaseFPviPvPv();
extern "C" void subtract_item_stat_bonus__14TItemEquipBaseFPviiPv();
extern "C" void try_pick_up_item__5TItemFPvi();
extern "C" void unequip__14TItemEquipBaseFPv();
extern "C" void update_equip__14TItemEquipBaseFPv();
extern "C" void update_pickup_flag__5TItemFi();
struct TItemMag_801138F0; struct Self_801134CC; struct Self_80113310; struct Self_801135E0;
extern "C" { void *__dt__8TItemMagFv(void *, s16); void TItemMag__vt12(s32); int TItemMag__vt13(void*); void TItemMag__vt14(Self_80113310*); void serialize_to_item__8TItemMagFPv(TItemMag *, void *); void TItemMag__vt24(Self_801135E0*); void TItemMag__vt25(Self_801134CC*); void TItemMag__vt42(u8*); void TItemMag__vt43(u8*); void TItemMag__vt44(s32); void TItemMag__vt45(TItemMag_801138F0*); }
void *__vt__8TItemMag[51] = {
    (void *)0x0, (void *)0x0, (void *)&__dt__8TItemMagFv, (void *)&run_task__5TItemFPv,
    (void *)&dispatch_state__5TItemFPv, (void *)&render__5TItemFPv, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&release_member_90__10TObjPlayerFPv, (void *)&TParticleCtrl__sub_801A2124, (void *)&TItem__sub_80100B8C, (void *)&classify_actor_view_detail,
    (void *)&register_attack__5TItemFPv, (void *)&try_pick_up_item__5TItemFPvi, (void *)&TItemMag__vt12, (void *)&TItemMag__vt13,
    (void *)&TItemMag__vt14, (void *)&TItemMag__vt15, (void *)&serialize_to_item__8TItemMagFPv, (void *)&set_attach_slot__14TItemEquipBaseFPvc,
    (void *)&equip__14TItemEquipBaseFPv, (void *)&unequip__14TItemEquipBaseFPv, (void *)&add_equip_stats__14TItemEquipBaseFPvi, (void *)&remove_equip_stats__14TItemEquipBaseFPvi,
    (void *)&subtract_item_stat_bonus__14TItemEquipBaseFPviiPv, (void *)&subtract_equip_stats__14TItemEquipBaseFPviPvPv, (void *)&TItemMag__vt24, (void *)&TItemMag__vt25,
    (void *)&TItem__sub_80100688, (void *)&update_equip__14TItemEquipBaseFPv, (void *)&TItem__sub_801007A8, (void *)&update_pickup_flag__5TItemFi,
    (void *)&TItem__sub_80100680, (void *)&TItemEquipBase__sub_8010A77C, (void *)&TItem__sub_80100674, (void *)&ret_8010066C,
    (void *)&ret_80100664, (void *)&ret_8010065C, (void *)&ret_80100654, (void *)&ret_8010064C,
    (void *)&TItem__sub_80100648, (void *)&TItemMag__vt39, (void *)&TItemMag__vt40, (void *)&TObjPlayer__sub_80102BD8,
    (void *)&TItemMag__vt42, (void *)&TItemMag__vt43, (void *)&TItemMag__vt44, (void *)&TItemMag__vt45,
    (void *)&TItemEquipBase__sub_8010A93C, (void *)&TItemEquipBase__sub_8010A938, (void *)&TItemMag__vt48,
};
#define __vt__8TItemMag ((s32 *)__vt__8TItemMag)

inline f32 frand_80110A18(void) {
    f32 r = lbl_805DAB9C * (f32) rand();
    return r;
}
extern int fold_flush_0;
#pragma pop

#pragma push
#pragma inline_depth(4)
#pragma auto_inline off
#pragma dont_inline off
#pragma opt_lifetimes off
void resolve_sentinel_color__8TItemMagFv(u8 *arg0) {
    u8 v;

    if (check_class_equip_permission(*(u8 **)((s8 *)arg0 + 0xF0), 0xD7) != 0) {
        v = (u8) *(s16 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0xF0)) + 0x896);
    } else {
        v = (u8) *(s16 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0xF0)) + 0x894);
    }
    v = v % 9;
    if (v >= 7) {
        v = lbl_805DAB98 * (lbl_805DAB9C * (f32) rand());
    }
    if (lbl_805DAB9C * (f32) rand() < lbl_805DABA0) {
        v += 9;
    }
    *(u8 *)((s8 *)arg0 + 0x1A6) = v;
}
extern int fold_flush_1;
#pragma pop

void call_preserve_flag__8TItemMagFPvi(void *arg0, s32 arg1) {
    u8 temp_r31;

    temp_r31 = *(u8 *)((s8 *)arg0 + 1);
    copy_to_item_data__5TItemFPvPv(arg1, arg0);
    *(u8 *)((s8 *)arg0 + 1) = temp_r31;
}

void try_add_action__8TItemMagFii(s32 arg0, s32 arg1) {
    if (((s32 (*)(void))get_evolution_stage__8TItemMagFPv)() < 4) {
        fn_80100D9C(arg0, arg1);
    }
}

void TItemMag__vt40(TItemMag_80110B94 *self) {
    s32 i;
    for (i = 0; i != 2; i++) {
        if (self->subs[i] != 0) {
            set_flags__11TItemMagSubFUl(self->subs[i], 2);
            spawn_item_timer__13TItemAttackerFiii(self->subs[i], (void *)clear_optional_oscillation_flag__11TItemMagSubFPv, 0x1e);
        }
    }
}

s32 check_evolution_cond__8TItemMagFUii(u32 arg0, s32 arg1) {
    s32 temp_r3;
    s32 var_r30;

    if ((arg0 != 0U) && (temp_r3 = activate_d04_slot__10TObjPlayerFPv(), ((temp_r3 == 0) == 0))) {
        switch (arg1) {
        case 0:
            if (get_slot_count__14TItemProShieldFPv() >= 0x64U) {
                return 1;
            }
            break;
        case 1:
            if (get_slot_count__14TItemProShieldFPv() >= 0x64U) {
                return 1;
            }
            break;
        case 2:
            var_r30 = 0;
            if (((s16 (*)(void))get_mag_item_stat_percent)() >= 0x46) {
                var_r30 = 1;
            }
            if (((s16 (*)(s32))get_mag_item_percent)(temp_r3) >= 0x46) {
                var_r30 += 1;
            }
            if (get_mag_level(temp_r3) >= 0x46) {
                var_r30 += 1;
            }
            if (get_mag_item_data(temp_r3) >= 0x46) {
                var_r30 += 1;
            }
            if (var_r30 >= 2) {
                return 1;
            }
            break;
        case 3:
            if (get_slot_count__14TItemProShieldFPv() >= 0x64U) {
                return 1;
            }
            break;
        case 4:
            if ((get_slot_count__14TItemProShieldFPv() >= 0x78U) && (get_mag_data__10TObjPlayerFPv(temp_r3) >= 0xB4) && (TObjPlayer__sub_80113D90(temp_r3) >= 0x6E)) {
                return 1;
            }
            break;
        case 5:
            if ((((s16 (*)(void))get_mag_item_stat_percent)() >= 0x23) && (((s16 (*)(s32))get_mag_item_percent)(temp_r3) >= 0x23) && (get_mag_level(temp_r3) >= 0x23) && (get_mag_item_data(temp_r3) >= 0x23)) {
                return 1;
            }
            break;
        }
    }
    return 0;
}

s32 check_feed_state__8TItemMagFPvi(void *arg0, s32 arg1) {
    s16 temp_r3;

    temp_r3 = obj_getS16_32C(*(s32 *)((s8 *)arg0 + 0xF0));
    if (arg1 == 7) {
        if (temp_r3 != 0) {
            return 0;
        }
        goto block_5;
    }
    if (temp_r3 == 0) {
        return 0;
    }
block_5:
    return 1;
}

void copy_owner_data__8TItemMagFPv(u8 *arg0) {
    u8 *temp_r3;

    temp_r3 = get_pmt_record__10TObjPlayerFi(((int (*)(void))get_field_ed__10TObjPlayerFPv)());
    if (temp_r3 != NULL) {
        *(s32 *)((s8 *)arg0 + 0x1B8) = (s32) *(s16 *)((s8 *)temp_r3 + 8);
        *(u8 *)((s8 *)arg0 + 0x1BC) = (u8) *(u8 *)((s8 *)temp_r3 + 0xB);
        ((s32 (*)(void *, void *, void *))copy_owner_pair__8TItemMagFPvPvPv)(arg0, temp_r3 + 0xC, temp_r3 + 0x10);
    }
}

void register_photon_blasts__8TItemMagFPv(u8 *arg0) {
    s32 temp_r3;
    s32 var_r30;
    assign_default_photon_blast_palette_slots(*(s32 *)((s8 *)arg0 + 0xF0) + 0x500);
    var_r30 = 0;
    do {
        temp_r3 = get_photon_blast_at_slot__8TItemMagFPvi(arg0 + 0x198, var_r30);
        if (temp_r3 != -1) {
            TItemMag__sub_80113EDC(*(s32 *)((s8 *)arg0 + 0xF0) + 0x4AC, (s16) temp_r3, ((u8 (*)(void *)) get_slot_count__14TItemProShieldFPv)(arg0));
            assign_photon_blast_palette_slot(*(u8 **)((s8 *)arg0 + 0xF0) + 0x500, (s16) temp_r3);
        }
        var_r30 += 1;
    } while (var_r30 != 3);
}

void tick_fullness_timer__8TItemMagFPv(O_80110F04 *self) {
    if (TItemMag__data_805DABA4 != self->f190) {
        self->f190 -= TItemMag__data_805DABA8;
        if (TItemMag__data_805DABA4 == self->f190) {
            self->f194 = TItemMag__data_805DABA4;
        }
    }
}

u8 mag_owner_has_motion_action(void *arg0) {
    int var_r31;

    var_r31 = 0;
    if ((test_action_mask__10TObjPlayerFPvi(*(s32 *)((s8 *)arg0 + 0xF0), 4) != 0) || (test_action_mask__10TObjPlayerFPvi(*(s32 *)((s8 *)arg0 + 0xF0), 0x10) != 0)) {
        var_r31 = 1;
    }
    return (u8) var_r31;
}

s32 mag_owner_freezes_follow(void *arg0) {
    s32 var_r31;

    var_r31 = 0;
    if (((u32) *(u32 *)((s8 *)arg0 + 0xF0) != 0U) && (is_active__8TItemMagFPv(*(u32 *)((s8 *)arg0 + 0xF0)) != 0)) {
        var_r31 = 1;
    }
    return var_r31;
}

s32 check_action_probability__8TItemMagFPvi(u8 *arg0, s32 arg1) {
    s16 temp_r0;
    u8 temp_r0_2;
    u8 temp_r3;
    u8 var_r31;
    u8 var_r5;
    u8 *temp_r4;

    temp_r0 = *(s16 *)((s8 *)arg0 + 0x19A);
    if (temp_r0 < 0x1F) {
        var_r5 = 0;
    } else if (temp_r0 < 0x3D) {
        var_r5 = 0xF;
    } else if (temp_r0 < 0x51) {
        var_r5 = 0x19;
    } else if (temp_r0 < 0x65) {
        var_r5 = 0x1E;
    } else {
        var_r5 = 0x23;
    }
    temp_r4 = arg0 + arg1;
    var_r31 = 0;
    if ((u8) *(u8 *)((s8 *)temp_r4 + 0x1BD) != 0) {
        temp_r0_2 = *(u8 *)((s8 *)temp_r4 + 0x1C1);
        switch ((s32) temp_r0_2) {
        case 0:
            var_r31 = *(u8 *)((s8 *)arg0 + 0x1BC);
            break;
        case 1:
            var_r31 = *(u8 *)((s8 *)arg0 + 0x1BC) + var_r5;
            break;
        case 2:
            var_r31 = var_r5;
            break;
        case 3:
            temp_r3 = *(u8 *)((s8 *)arg0 + 0x1BC);
            if (temp_r3 > 0xAU) {
                var_r31 = temp_r3 - 0xA;
            } else {
                var_r31 = 0;
            }
            break;
        case 4:
            if (var_r5 > 0xAU) {
                var_r31 = var_r5 - 0xA;
            } else {
                var_r31 = 0;
            }
            break;
        }
        if ((u8) (s32) (lbl_805DABAC * (lbl_805DAB9C * (f32) rand())) < var_r31) {
            return 1;
        }
        goto block_29;
    }
block_29:
    return 0;
}

void copy_owner_pair__8TItemMagFPvPvPv(TItemMag_80111140 *self, void *a, void *b) {
    memcpy(self->a, a, 4);
    memcpy(self->b, b, 4);
}

void apply_transform_action__8TItemMagFPvUc(u8 *arg0, u8 arg1) {
    u8 temp_r31;
    temp_r31 = ((u8 (*)(void *))get_field_ed__10TObjPlayerFPv)((void *) (arg0));
    switch ((s32) arg1) {
    case 0:
        if (*(u8 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0xF0)) + 0x88C) & 1) {
            ((s32 (*)(void *, int))try_add_action__8TItemMagFii)((void *) (arg0), (int) (0x1D));
        } else {
            ((s32 (*)(void *, int))try_add_action__8TItemMagFii)((void *) (arg0), (int) (0x21));
        }
        break;
    case 1:
        if (*(u8 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0xF0)) + 0x88C) & 1) {
            ((s32 (*)(void *, int))try_add_action__8TItemMagFii)((void *) (arg0), (int) (0x22));
        } else {
            ((s32 (*)(void *, int))try_add_action__8TItemMagFii)((void *) (arg0), (int) (0x27));
        }
        break;
    case 2:
        ((s32 (*)(void *, int))try_add_action__8TItemMagFii)((void *) (arg0), (int) (0x28));
        break;
    case 3:
        ((s32 (*)(void *, int))try_add_action__8TItemMagFii)((void *) (arg0), (int) (0x29));
        break;
    case 4:
        ((s32 (*)(void *, int))try_add_action__8TItemMagFii)((void *) (arg0), (int) (0x2A));
        break;
    case 5:
        ((s32 (*)(void *, int))try_add_action__8TItemMagFii)((void *) (arg0), (int) (0x2B));
        break;
    }
    if (temp_r31 != ((u8 (*)(void *))get_field_ed__10TObjPlayerFPv)((void *) (arg0))) {
        ((s32 (*)(void *))apply_form_change__8TItemMagFPv)((void *) (arg0));
    }
}

int TItemMag__sub_801112B0(void) { return 0; }

void select_action_motion__8TItemMagFPv(TItemMag_801112B8 *self) {
    s32 i;
    u8 *o;
    s16 lv;
    for (i = 0; i != 2; i++) {
        o = self->objs[i];
        if (o != NULL) {
            lv = self->f18C & 0xF;
            if (lv > 0 && lv < 6) {
                transition_motion_type__11TItemMagSubFl(o, self->types[i][lv - 1]);
            } else if (lv >= 6 && lv < 8) {
                transition_motion_type__11TItemMagSubFl(o, self->types[i][5]);
            } else if (lv == 8) {
                transition_motion_type__11TItemMagSubFl(o, self->types[i][3]);
            }
        }
    }
}

void set_subs_visible__8TItemMagFPvi(TItemMag_80111758 *self, s32 on) {
    s32 i;
    for (i = 0; i != 2; i++) {
        if (self->subs[i] != 0) {
            if (on) {
                clear_flag4_bit4__22TQuestVmDownLoadServerFPv(self->subs[i]);
            } else {
                set_flag_4__9TObjLukerFPv(self->subs[i]);
            }
        }
    }
}

s32 get_evolution_stage__8TItemMagFPv(void * _w0) {
    u8 temp_r3;
    u8 var_r31;
    temp_r3 = ((u8 (*)(void *))get_field_ed__10TObjPlayerFPv)((void *)(_w0));
    var_r31 = temp_r3;
    if (temp_r3 >= 0x42U) {
        var_r31 = 0x42;
    }
    if (var_r31 <= 0x42U) {
        return *(s8 *)((s8 *)(*(s32 *)((s8 *)(get_type__8TItemMagFPv(TItemMag__item_load_instance)) + 0x14)) + var_r31);
    }
    return 0;
}

s32 get_max_stat_flags__8TItemMagFi(s32 arg0) {
    s32 var_r31;
    s16 temp_r30;
    s16 temp_r29;
    s16 temp_r28;
    s16 var_r0;
    s32 var_r4;

    var_r31 = 0;
    temp_r30 = get_mag_item_percent();
    temp_r29 = get_mag_level(arg0);
    temp_r28 = get_mag_item_data(arg0);
    get_mag_item_stat_percent(arg0);
    if ((temp_r29 < temp_r30) && (temp_r28 < temp_r30)) {
        var_r31 |= 8;
    }
    if ((temp_r30 < temp_r29) && (temp_r28 < temp_r29)) {
        var_r31 |= 0x10;
    }
    if ((temp_r29 < temp_r28) && (temp_r30 < temp_r28)) {
        var_r31 |= 0x20;
    }
    var_r0 = temp_r29;
    var_r4 = 0;
    if (temp_r30 > temp_r29) {
        var_r0 = temp_r30;
    }
    if (var_r0 > temp_r28) {
        var_r0 = temp_r29;
        if (temp_r30 > temp_r29) {
            var_r0 = temp_r30;
        }
    } else {
        var_r0 = temp_r28;
    }
    {
        s32 max32 = var_r0;
        if (temp_r30 == max32) {
            var_r4 = 1;
        }
        if (temp_r29 == max32) {
            var_r4 += 1;
        }
        if (temp_r28 == max32) {
            var_r4 += 1;
        }
    }
    if (var_r4 >= 2) {
        var_r31 |= 0x100;
    }
    return var_r31;
}

u8 evolve_rare_form__8TItemMagFPv(u8 *arg0) {
    s16 stat;
    s16 data;
    s16 level;
    u8 before;
    s32 idx;
    s16 pct;
    s8 group;
    before = ((u8 (*)(void *))get_field_ed__10TObjPlayerFPv)(arg0);
    if (*(u8 **)((s8 *)arg0 + 0xF0) != NULL && get_mag_total_level(arg0 + 0x198) >= 100) {
        group = (s8)*(u8 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0xF0)) + 0x88C) % 3;
        pct = ((s16 (*)(s32))get_mag_item_percent)((s32)arg0);
        level = get_mag_level((s32)arg0);
        data = get_mag_item_data((s32)arg0);
        stat = ((s16 (*)(s32))get_mag_item_stat_percent)((s32)arg0);
        idx = (u32)__cntlzw(check_class_equip_permission(*(u8 **)((s8 *)arg0 + 0xF0), 0x7F)) >> 5;
        idx += group * 2;
        if (check_class_equip_permission(*(u8 **)((s8 *)arg0 + 0xF0), 0xF9) == 0) {
            if (check_class_equip_permission(*(u8 **)((s8 *)arg0 + 0xF0), 0xFA) != 0) {
                idx += 6;
            } else if (check_class_equip_permission(*(u8 **)((s8 *)arg0 + 0xF0), 0xFC) != 0) {
                idx += 12;
            }
        }
        if (check_class_equip_permission(*(u8 **)((s8 *)arg0 + 0xF0), 0xF9) != 0) {
            switch (group) {
            case 0:
                if (pct + data == stat + level) {
                    ((void (*)(void *, int))try_add_action__8TItemMagFii)(arg0, lbl_8043E540[idx]);
                }
                break;
            case 1:
                if (pct + level == data + stat) {
                    ((void (*)(void *, int))try_add_action__8TItemMagFii)(arg0, lbl_8043E540[idx]);
                }
                break;
            case 2:
                if (pct + stat == data + level) {
                    ((void (*)(void *, int))try_add_action__8TItemMagFii)(arg0, lbl_8043E540[idx]);
                }
                break;
            }
        } else if (check_class_equip_permission(*(u8 **)((s8 *)arg0 + 0xF0), 0xFA) != 0) {
            switch (group) {
            case 0:
                if (pct + data == stat + level) {
                    ((void (*)(void *, int))try_add_action__8TItemMagFii)(arg0, lbl_8043E540[idx]);
                }
                break;
            case 1:
                if (pct + level == data + stat) {
                    ((void (*)(void *, int))try_add_action__8TItemMagFii)(arg0, lbl_8043E540[idx]);
                }
                break;
            case 2:
                if (pct + stat == data + level) {
                    ((void (*)(void *, int))try_add_action__8TItemMagFii)(arg0, lbl_8043E540[idx]);
                }
                break;
            }
        } else if (check_class_equip_permission(*(u8 **)((s8 *)arg0 + 0xF0), 0xFC) != 0) {
            switch (group) {
            case 0:
                if (pct + data == stat + level) {
                    ((void (*)(void *, int))try_add_action__8TItemMagFii)(arg0, lbl_8043E540[idx]);
                }
                break;
            case 1:
                if (pct + level == data + stat) {
                    ((void (*)(void *, int))try_add_action__8TItemMagFii)(arg0, lbl_8043E540[idx]);
                }
                break;
            case 2:
                if (pct + stat == data + level) {
                    ((void (*)(void *, int))try_add_action__8TItemMagFii)(arg0, lbl_8043E540[idx]);
                }
                break;
            }
        }
    }
    return ((u8 (*)(void *))get_field_ed__10TObjPlayerFPv)(arg0) != before;
}

void update_feed_anim__8TItemMagFPv(void *arg0) {
    s16 temp_r26;
    s16 temp_r29;
    s16 temp_r30;
    s16 temp_r31;
    s32 temp_r25;
    s8 temp_r28;
    void *temp_r4;

    if ((void *) *(void **)((s8 *)arg0 + 0xF0) != NULL) {
        temp_r25 = ((s32 (*)(void))get_max_stat_flags__8TItemMagFi)();
        temp_r4 = *(void **)((s8 *)arg0 + 0xF0);
        temp_r28 = (s8) *(u8 *)((s8 *)temp_r4 + 0x88C);
        temp_r29 = ((s16 (*)(void *, void *))get_mag_item_percent)(arg0, temp_r4);
        temp_r30 = ((s16 (*)(void *))get_mag_level)(arg0);
        temp_r31 = ((s16 (*)(void *))get_mag_item_data)(arg0);
        temp_r26 = ((s16 (*)(void *))get_mag_item_stat_percent)(arg0);
        if (((s32 (*)(void *, s32))check_class_equip_permission)(*(void **)((s8 *)arg0 + 0xF0), 0xF9) != 0) {
            if (temp_r25 & 0x108) {
                if (!(temp_r28 & 1)) {
                    if (temp_r31 <= temp_r30) {
                        ((s32 (*)(void *, s32))try_add_action__8TItemMagFii)((void *)(arg0), (s32)(5));
                        return;
                    }
                    ((s32 (*)(void *, s32))try_add_action__8TItemMagFii)((void *)(arg0), (s32)(0xC));
                    return;
                }
                if (temp_r31 <= temp_r30) {
                    ((s32 (*)(void *, s32))try_add_action__8TItemMagFii)((void *)(arg0), (s32)(6));
                    return;
                }
                ((s32 (*)(void *, s32))try_add_action__8TItemMagFii)((void *)(arg0), (s32)(8));
                return;
            }
            if (temp_r25 & 0x10) {
                if (!(temp_r28 & 1)) {
                    if (temp_r29 <= temp_r31) {
                        ((s32 (*)(void *, s32))try_add_action__8TItemMagFii)((void *)(arg0), (s32)(0x13));
                        return;
                    }
                    ((s32 (*)(void *, s32))try_add_action__8TItemMagFii)((void *)(arg0), (s32)(0x17));
                    return;
                }
                if (temp_r29 <= temp_r31) {
                    ((s32 (*)(void *, s32))try_add_action__8TItemMagFii)((void *)(arg0), (s32)(0x10));
                    return;
                }
                ((s32 (*)(void *, s32))try_add_action__8TItemMagFii)((void *)(arg0), (s32)(0x12));
                return;
            }
            if (temp_r25 & 0x20) {
                if (!(temp_r28 & 1)) {
                    if (temp_r30 <= temp_r29) {
                        ((s32 (*)(void *, s32))try_add_action__8TItemMagFii)((void *)(arg0), (s32)(0x1E));
                        return;
                    }
                    ((s32 (*)(void *, s32))try_add_action__8TItemMagFii)((void *)(arg0), (s32)(7));
                    return;
                }
                if (temp_r30 <= temp_r29) {
                    ((s32 (*)(void *, s32))try_add_action__8TItemMagFii)((void *)(arg0), (s32)(0x24));
                    return;
                }
                ((s32 (*)(void *, s32))try_add_action__8TItemMagFii)((void *)(arg0), (s32)(0x16));
            }
        } else if (((s32 (*)(void *, s32))check_class_equip_permission)(*(void **)((s8 *)arg0 + 0xF0), 0xFA) != 0) {
            if (temp_r25 & 0x110) {
                if (!(temp_r28 & 1)) {
                    if (temp_r29 <= temp_r31) {
                        ((s32 (*)(void *, s32))try_add_action__8TItemMagFii)((void *)(arg0), (s32)(6));
                        return;
                    }
                    ((s32 (*)(void *, s32))try_add_action__8TItemMagFii)((void *)(arg0), (s32)(0xC));
                    return;
                }
                if (temp_r29 <= temp_r31) {
                    ((s32 (*)(void *, s32))try_add_action__8TItemMagFii)((void *)(arg0), (s32)(5));
                    return;
                }
                ((s32 (*)(void *, s32))try_add_action__8TItemMagFii)((void *)(arg0), (s32)(0xA));
                return;
            }
            if (temp_r25 & 8) {
                if (!(temp_r28 & 1)) {
                    if (temp_r31 <= temp_r30) {
                        ((s32 (*)(void *, s32))try_add_action__8TItemMagFii)((void *)(arg0), (s32)(6));
                        return;
                    }
                    ((s32 (*)(void *, s32))try_add_action__8TItemMagFii)((void *)(arg0), (s32)(0xC));
                    return;
                }
                if (temp_r31 <= temp_r30) {
                    ((s32 (*)(void *, s32))try_add_action__8TItemMagFii)((void *)(arg0), (s32)(0x26));
                    return;
                }
                ((s32 (*)(void *, s32))try_add_action__8TItemMagFii)((void *)(arg0), (s32)(0xA));
                return;
            }
            if (temp_r25 & 0x20) {
                if (!(temp_r28 & 1)) {
                    if (temp_r30 <= temp_r29) {
                        ((s32 (*)(void *, s32))try_add_action__8TItemMagFii)((void *)(arg0), (s32)(5));
                        return;
                    }
                    ((s32 (*)(void *, s32))try_add_action__8TItemMagFii)((void *)(arg0), (s32)(8));
                    return;
                }
                if (temp_r30 <= temp_r29) {
                    ((s32 (*)(void *, s32))try_add_action__8TItemMagFii)((void *)(arg0), (s32)(0x1E));
                    return;
                }
                ((s32 (*)(void *, s32))try_add_action__8TItemMagFii)((void *)(arg0), (s32)(0x18));
            }
        } else if (((s32 (*)(void *, s32))check_class_equip_permission)(*(void **)((s8 *)arg0 + 0xF0), 0xFC) != 0) {
            if (temp_r25 & 0x120) {
                if (temp_r26 <= 0x2C) {
                    if (!(temp_r28 & 1)) {
                        if (temp_r30 <= temp_r29) {
                            ((s32 (*)(void *, s32))try_add_action__8TItemMagFii)((void *)(arg0), (s32)(0x1C));
                            return;
                        }
                        ((s32 (*)(void *, s32))try_add_action__8TItemMagFii)((void *)(arg0), (s32)(0x1E));
                        return;
                    }
                    if (temp_r30 <= temp_r29) {
                        ((s32 (*)(void *, s32))try_add_action__8TItemMagFii)((void *)(arg0), (s32)(9));
                        return;
                    }
                    ((s32 (*)(void *, s32))try_add_action__8TItemMagFii)((void *)(arg0), (s32)(0x17));
                    return;
                }
                ((s32 (*)(void *, s32))try_add_action__8TItemMagFii)((void *)(arg0), (s32)(0x24));
                return;
            }
            if (temp_r25 & 8) {
                if (temp_r26 <= 0x2C) {
                    if (!(temp_r28 & 1)) {
                        if (temp_r31 <= temp_r30) {
                            ((s32 (*)(void *, s32))try_add_action__8TItemMagFii)((void *)(arg0), (s32)(0x25));
                            return;
                        }
                        ((s32 (*)(void *, s32))try_add_action__8TItemMagFii)((void *)(arg0), (s32)(0x1F));
                        return;
                    }
                    if (temp_r31 <= temp_r30) {
                        ((s32 (*)(void *, s32))try_add_action__8TItemMagFii)((void *)(arg0), (s32)(0x20));
                        return;
                    }
                    ((s32 (*)(void *, s32))try_add_action__8TItemMagFii)((void *)(arg0), (s32)(0x1C));
                    return;
                }
                ((s32 (*)(void *, s32))try_add_action__8TItemMagFii)((void *)(arg0), (s32)(0x23));
                return;
            }
            if (temp_r25 & 0x10) {
                if (temp_r26 <= 0x2C) {
                    if (!(temp_r28 & 1)) {
                        if (temp_r29 <= temp_r31) {
                            ((s32 (*)(void *, s32))try_add_action__8TItemMagFii)((void *)(arg0), (s32)(0x11));
                            return;
                        }
                        ((s32 (*)(void *, s32))try_add_action__8TItemMagFii)((void *)(arg0), (s32)(0x15));
                        return;
                    }
                    if (temp_r29 <= temp_r31) {
                        ((s32 (*)(void *, s32))try_add_action__8TItemMagFii)((void *)(arg0), (s32)(0xC));
                        return;
                    }
                    ((s32 (*)(void *, s32))try_add_action__8TItemMagFii)((void *)(arg0), (s32)(0x12));
                    return;
                }
                ((s32 (*)(void *, s32))try_add_action__8TItemMagFii)((void *)(arg0), (s32)(0x24));
            }
        }
    }
}

void do_action_by_class__8TItemMagFi(s32 arg0) {
    s32 temp_r31;
    u8 temp_r3;

    temp_r31 = ((s32 (*)(void))get_max_stat_flags__8TItemMagFi)();
    temp_r3 = get_field_ed__10TObjPlayerFPv(arg0);
    switch ((s32) temp_r3) {
    case 1:
        if (temp_r31 & 0x108) {
            ((s32 (*)(void *, s32))try_add_action__8TItemMagFii)((void *)(arg0), (s32)(0xE));
            return;
        }
        if (temp_r31 & 0x10) {
            ((s32 (*)(void *, s32))try_add_action__8TItemMagFii)((void *)(arg0), (s32)(0xF));
            return;
        }
        if (temp_r31 & 0x20) {
            ((s32 (*)(void *, s32))try_add_action__8TItemMagFii)((void *)(arg0), (s32)(4));
        }
        break;
    case 13:
        if (temp_r31 & 0x110) {
            ((s32 (*)(void *, s32))try_add_action__8TItemMagFii)((void *)(arg0), (s32)(2));
            return;
        }
        if (temp_r31 & 8) {
            ((s32 (*)(void *, s32))try_add_action__8TItemMagFii)((void *)(arg0), (s32)(3));
            return;
        }
        if (temp_r31 & 0x20) {
            ((s32 (*)(void *, s32))try_add_action__8TItemMagFii)((void *)(arg0), (s32)(0xB));
            return;
        }
        break;
    case 25:
        if (temp_r31 & 0x120) {
            ((s32 (*)(void *, s32))try_add_action__8TItemMagFii)((void *)(arg0), (s32)(0x1A));
            return;
        }
        if (temp_r31 & 8) {
            ((s32 (*)(void *, s32))try_add_action__8TItemMagFii)((void *)(arg0), (s32)(0x1B));
            return;
        }
        if (temp_r31 & 0x10) {
            ((s32 (*)(void *, s32))try_add_action__8TItemMagFii)((void *)(arg0), (s32)(0x14));
        }
        break;
    }
}

void evolve_first_form__8TItemMagFPv(u8 *arg0) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(*(u8 **)((s8 *)arg0 + 0xF0));
    if (temp_r3 != NULL) {
        if (((s32 (*)(void *, s32))check_class_equip_permission)((void *)(temp_r3), (s32)(0xF9)) != 0) {
            ((s32 (*)(void *, s32))try_add_action__8TItemMagFii)((void *)((s32) arg0), (s32)(1));
            return;
        }
        if (((s32 (*)(void *, s32))check_class_equip_permission)((void *)(*(u8 **)((s8 *)arg0 + 0xF0)), (s32)(0xFA)) != 0) {
            ((s32 (*)(void *, s32))try_add_action__8TItemMagFii)((void *)((s32) arg0), (s32)(0xD));
            return;
        }
        if (((s32 (*)(void *, s32))check_class_equip_permission)((void *)(*(u8 **)((s8 *)arg0 + 0xF0)), (s32)(0xFC)) != 0) {
            ((s32 (*)(void *, s32))try_add_action__8TItemMagFii)((void *)((s32) arg0), (s32)(0x19));
        }
    }
}

void apply_form_change__8TItemMagFPv(u8 *arg0) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(((u8 * (*)(int))get_pmt_record__10TObjPlayerFi)((s32) get_field_ed__10TObjPlayerFPv((s32)(arg0))));
    if (temp_r3 != NULL) {
        add_photon_blast__8TItemMagFPvUc((void *) (arg0 + 0x198), (int) (*(u8 *)((s8 *)temp_r3 + 0xA)));
    }
    if (TObjPlayer__sub_80102C30(arg0) == 2) {
        ((VObj_18_8b050c *)(arg0))->m45();
        *(s32 *)((s8 *)arg0 + 0x18C) = (s32) (*(s32 *)((s8 *)arg0 + 0x18C) | 0x40);
        ((VObj_18_8b050c *)(arg0))->m44();
        ((s32 (*)(void *))register_photon_blasts__8TItemMagFPv)((void *) (arg0));
    }
    if (get_flag_40__8TItemMagFPv(arg0) == 0) {
        play_sound_effect((int) (0x4000B20A), (int) (*(s32 *)((s8 *)arg0 + 0xF0) + 0x38), (int) (0), (int) (0));
    }
    ((void (*)(void *))copy_owner_data__8TItemMagFPv)(arg0);
}

void apply_natural_evolution__8TItemMagFPv(Self_801124C4 *self) {
  unsigned int new_var;
  s32 stage;
  s16 level;
  u8 before;
  stage = ((s8 (*)(void *))get_evolution_stage__8TItemMagFPv)(self);
  level = get_mag_total_level(self->data);
  before = get_field_ed__10TObjPlayerFPv((s32) self);
  {
    new_var = (s32) self;
    if ((lbl_8043E534[0] <= level) && (level < lbl_8043E534[1]))
    {
      if (stage < 1)
      {
        evolve_first_form__8TItemMagFPv((u8 *) self);
      }
    }
    else
      if ((lbl_8043E534[1] <= level) && (level < lbl_8043E534[2]))
    {
      if (stage < 2)
      {
        do_action_by_class__8TItemMagFi(new_var);
      }
    }
    else
      if ((((lbl_8043E534[2] <= level) && ((level % 5) == 0)) && (stage <= 3)) && (((s32 (*)(void *))evolve_rare_form__8TItemMagFPv)(self) == 0))
    {
      update_feed_anim__8TItemMagFPv(self);
    }
    if (before != get_field_ed__10TObjPlayerFPv(new_var))
    {
      apply_form_change__8TItemMagFPv((u8 *) self);
    }
  }
}

void feed_by_item_flags__8TItemMagFPvc(void *arg0, s8 arg1) {
    rand();
    if (arg1 & 0x40) {
        if (((s32 (*)(void *, s32))check_action_probability__8TItemMagFPvi)(arg0, 0) != 0) {
            ((s32 (*)(void *, u8))request_support_action__8TItemMagFPvi)(arg0, *(u8 *)((s8 *)arg0 + 0x1BD));
        }
    } else if (arg1 & 1) {
        if (((s32 (*)(void *, s32))check_action_probability__8TItemMagFPvi)(arg0, 1) != 0) {
            ((s32 (*)(void *, u8))request_support_action__8TItemMagFPvi)(arg0, *(u8 *)((s8 *)arg0 + 0x1BE));
        }
    } else if (arg1 & 2) {
        if (((s32 (*)(void *, s32))check_action_probability__8TItemMagFPvi)(arg0, 2) != 0) {
            ((s32 (*)(void *, u8))request_support_action__8TItemMagFPvi)(arg0, *(u8 *)((s8 *)arg0 + 0x1BF));
        }
    } else if (arg1 & 0x80) {
        if (((s32 (*)(void *, s32))check_action_probability__8TItemMagFPvi)(arg0, 3) != 0) {
            ((s32 (*)(void *, u8))request_support_action__8TItemMagFPvi)(arg0, *(u8 *)((s8 *)arg0 + 0x1C0));
        }
    } else {
        if (arg1 & 0x20) {
            ((s32 (*)(void *, u8))request_support_action__8TItemMagFPvi)(arg0, 2U);
            return;
        }
        if (arg1 & 0x10) {
            ((s32 (*)(void *, u8))request_support_action__8TItemMagFPvi)(arg0, 3U);
            return;
        }
        if (arg1 & 4) {
            ((s32 (*)(void *, u8))request_support_action__8TItemMagFPvi)(arg0, 5U);
            return;
        }
        if (arg1 & 8) {
            ((s32 (*)(void *, u8))request_support_action__8TItemMagFPvi)(arg0, 4U);
        }
    }
}

void TItemMag__sub_8011271C(void) {  }

s8 collect_support_events__8TItemMagFv(u8 *arg0) {
    s16 delta;
    s16 cur;
    s16 lim;
    s32 g;
    s8 ev;

    if (!(*(s32 *)((s8 *)arg0 + 0x18C) & 1)) {
        return 0;
    }
    delta = 0;
    cur = obj_getS16_32C(*(s32 *)((s8 *)arg0 + 0xF0));
    lim = get_field_2b8__14TItemProShieldFPv(*(void **)((s8 *)arg0 + 0xF0));
    ev = 0;
    if (*(s16 *)((s8 *)arg0 + 0x1DC) != cur) {
        if (cur < *(s16 *)((s8 *)arg0 + 0x1DC)) {
            delta = *(s16 *)((s8 *)arg0 + 0x1DC) - cur;
        }
        *(s16 *)((s8 *)arg0 + 0x1DC) = cur;
    }
    if (cur == 0) {
        if (test_flags__8TItemMagFPvUi(arg0 + 0x1D4, 2) == 0) {
            if (get_main_phase() == 0xE) {
                ev |= 2;
            }
            set_flags__8TItemMagFPvUi(arg0 + 0x1D4, 2);
            add_clamped_stat__8TItemMagFPvi(arg0 + 0x198, -5);
        }
    } else if (test_flags__8TItemMagFPvUi(arg0 + 0x1D4, 2) != 0) {
        clear_feed_flags__8TItemMagFPvUi(arg0 + 0x1D4, 2);
    }
    if (cur * 10 < lim && lim <= delta * 5) {
        if (test_flags__8TItemMagFPvUi(arg0 + 0x1D4, 1) == 0) {
            ev |= 1;
            set_flags__8TItemMagFPvUi(arg0 + 0x1D4, 1);
        }
    } else if (test_flags__8TItemMagFPvUi(arg0 + 0x1D4, 1) != 0) {
        clear_feed_flags__8TItemMagFPvUi(arg0 + 0x1D4, 1);
    }
    if (*(s16 *)((s8 *)arg0 + 0x19A) < 0x1E) {
        if (test_flags__8TItemMagFPvUi(arg0 + 0x1D4, 4) == 0) {
            ev |= 4;
            set_flags__8TItemMagFPvUi(arg0 + 0x1D4, 4);
        }
    } else if (*(s16 *)((s8 *)arg0 + 0x19A) > 0x64) {
        if (test_flags__8TItemMagFPvUi(arg0 + 0x1D4, 8) == 0) {
            ev |= 8;
            set_flags__8TItemMagFPvUi(arg0 + 0x1D4, 8);
        }
    } else {
        clear_feed_flags__8TItemMagFPvUi(arg0 + 0x1D4, 0xC);
    }
    if (*(s16 *)((s8 *)arg0 + 0x1D4) < (*(VObj_80112720 **)((s8 *)arg0 + 0xF0))->m14()) {
        *(s16 *)((s8 *)arg0 + 0x1D4) = (*(VObj_80112720 **)((s8 *)arg0 + 0xF0))->m14();
        ev |= 0x20;
    }
    g = get_global_state__14TOKeyMachine01Fv();
    if (*(s16 *)((s8 *)arg0 + 0x1D6) != g) {
        *(s16 *)((s8 *)arg0 + 0x1D6) = g;
        if (is_boss_area() == 1) {
            ev |= 0x80;
        }
    }
    if (lbl_805DABAC == (f32)get_sub_value__8TItemMagFi(*(void **)((s8 *)arg0 + 0xF0)) &&
        test_flags__8TItemMagFPvUi(arg0 + 0x1D4, 0x40) == 0) {
        set_flags__8TItemMagFPvUi(arg0 + 0x1D4, 0x40);
        ev |= 0x40;
    } else if ((f32)get_sub_value__8TItemMagFi(*(void **)((s8 *)arg0 + 0xF0)) < lbl_805DABAC &&
               test_flags__8TItemMagFPvUi(arg0 + 0x1D4, 0x40) != 0) {
        clear_feed_flags__8TItemMagFPvUi(arg0 + 0x1D4, 0x40);
    }
    if (test_flags__8TItemMagFPvUi(arg0 + 0x1D4, 0x10) != 0) {
        clear_feed_flags__8TItemMagFPvUi(arg0 + 0x1D4, 0x10);
        ev |= 0x10;
    }
    return ev;
}

s32 TItemMag__vt39(u8 *arg0, u8 *arg1) {
    MagStats_80112A3C stats;
    u8 pos[0xC];
    s32 *rec;
    u8 *tbl;
    s32 i;
    if (arg1 == NULL) {
        return 0;
    }
    initialize_mag_data__9TItemDataFPv(&stats);
    stats.a = 0;
    stats.b = 0;
    stats.f = 0;
    stats.e = 0;
    stats.d = 0;
    stats.c = 0;
    if (*arg1 == 3) {
        rec = lookup_item_pmt_record(arg1);
        if (rec != NULL) {
            tbl = get_mag_feed_result(*(s32 *)((s8 *)arg0 + 0x1B8), *rec);
            if (tbl != NULL) {
                stats.c = (s8)tbl[0];
                stats.d = (s8)tbl[1];
                stats.e = (s8)tbl[2];
                stats.f = (s8)tbl[3];
                stats.a = (s8)tbl[4];
                stats.b = (s8)tbl[5];
                set_flags__8TItemMagFPvUi(arg0 + 0x1D4, 0x10);
                if (TItemMag__data_805DABA4 != *(f32 *)((s8 *)arg0 + 0x190)) {
                    *(f32 *)((s8 *)arg0 + 0x194) = *(f32 *)((s8 *)arg0 + 0x194) + TItemMag__data_805DABA8;
                } else {
                    *(f32 *)((s8 *)arg0 + 0x190) = lbl_805DABB0;
                }
            }
        }
    }
    if (((s32 (*)(void *))get_flag_40__8TItemMagFPv)(arg0) == 0) {
        for (i = 0; i != 2; i++) {
            if (((Mag_80112A3C *)arg0)->subs[i] != NULL &&
                ((s32 (*)(u8 *, void *))get_world_position__11TItemMagSubFPv)(((Mag_80112A3C *)arg0)->subs[i], pos) != 0) {
                spawn_particle_effect(pos, 0x9B);
            }
        }
        ((void (*)(int, int, int, int))play_sound_effect)(0x5B211, *(s32 *)((s8 *)arg0 + 0xF0) + 0x38, 0, 0);
    }
    return apply_feed_stats__8TItemMagFPvPv(arg0, (u8 *)&stats);
}

void cast_support_technique__8TItemMagFPvi(u8 *self, s32 technique) {
    TargetList_80112BC4 targets;
    s32 level = *(s16 *)((s8 *)self + 0x198) / 40;
    if (*(u8 **)((s8 *)self + 0xF0) == NULL) {
        return;
    }
    switch (technique) {
    case 13:
        create__9TTecSiftaFPvPvPv(*(u8 **)((s8 *)self + 0xF0), *(u8 **)((s8 *)self + 0xF0) + 0x38, level);
        break;
    case 10:
        create__10TTecDebandFiii(*(u8 **)((s8 *)self + 0xF0), *(u8 **)((s8 *)self + 0xF0) + 0x38, level);
        break;
    case 15:
        create__9TTecRestaFPvPvPv(*(u8 **)((s8 *)self + 0xF0), *(u8 **)((s8 *)self + 0xF0) + 0x38, level);
        break;
    case 17:
        construct_target_cursor_records__10TObjPlayerFi(&targets);
        targets.count = 1;
        targets.ids[0] = obj_getField1c(*(u8 **)((s8 *)self + 0xF0));
        targets.ids[1] = 0;
        create__12TTecReverserFPvPvPvPv(*(u8 **)((s8 *)self + 0xF0), *(u8 **)((s8 *)self + 0xF0) + 0x38, &targets, level);
        break;
    case 11:
        return;
    case 12:
        return;
    case 14:
        return;
    case 16:
        return;
    }
}

s32 apply_feed_stats__8TItemMagFPvPv(u8 *arg0, u8 *arg1) {
    if (arg1 != NULL) {
        mag_feed_add_def((void *) (arg0 + 0x198), (int) (*(s16 *)((s8 *)arg1 + 4)));
        add_stat_level_capped__8TItemMagFPvs((void *) (arg0 + 0x198), (int) (*(s16 *)((s8 *)arg1 + 6)));
        mag_feed_add_mind((void *) (arg0 + 0x198), (int) (*(s16 *)((s8 *)arg1 + 0xA)));
        TItemMag__sub_80114198((void *) (arg0 + 0x198), (int) (*(s16 *)((s8 *)arg1 + 8)));
        add_stat_clamped__8TItemMagFPvi((void *) (arg0 + 0x198), (int) (*(s16 *)((s8 *)arg1 + 0)));
        add_clamped_stat__8TItemMagFPvi((void *) (arg0 + 0x198), (int) (*(s16 *)((s8 *)arg1 + 2)));
        set_field_EE__8TItemMagFPvUc((void *) (arg0), (void *) (((u8 (*)(void *))get_mag_total_level)((void *) (arg0 + 0x198))));
        if (TObjPlayer__sub_80102C30((void *) (arg0)) == 2) {
            refresh_owner_stats__5TItemFPv((void *) (arg0));
            if (obj_isState2_324((int) (*(s32 *)((s8 *)arg0 + 0xF0))) == 0) {
                arg1 = (u8 *) get_item_field_6__10TObjPlayerFPv((int) (*(s32 *)((s8 *)arg0 + 0xF0)));
                if ((arg1 != NULL) && (get_item_info__10TObjPlayerFiiPv((int) (arg1), (int) (*(s32 *)((s8 *)arg0 + 0xF0)), (int) (0)) == 0)) {
                    send_6x26_unequip_item__10TObjPlayerFPvPv((int) (*(s32 *)((s8 *)arg0 + 0xF0)), (int) (get_field_d8__10TObjPlayerFPv((int) (arg1))));
                }
            }
        }
        ((s32 (*)(void *))apply_natural_evolution__8TItemMagFPv)((void *) (arg0));
        return 1;
    }
    return 0;
}

void TItemMag__vt15(void* p, s32 _w1) { select_support_action__8TItemMagFPvi((u8 *)(p), (s32)(_w1)); }

void select_support_action__8TItemMagFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r4;
    apply_feed_delta__8TItemMagFPv((u8 *)(arg0));
    *(s32 *)((s8 *)arg0 + 0x18C) = (s32) (*(s32 *)((s8 *)arg0 + 0x18C) & 0xF0);
    temp_r4 = *(s32 *)((s8 *)arg0 + 0x18C) | arg1;
    *(s32 *)((s8 *)arg0 + 0x18C) = temp_r4;
    *(f32 *)((s8 *)arg0 + 0x1C8) = (f32) lbl_805DABB4;
    *(s32 *)((s8 *)arg0 + 0x1CC) = 0;
    ((s32 (*)(void *, int))select_action_motion__8TItemMagFPv)((void *) (arg0), (int) (temp_r4));
    ((s32 (*)(void *, int))set_subs_visible__8TItemMagFPvi)((void *) (arg0), (int) (1));
}

void request_support_action__8TItemMagFPvi(void *arg0, s32 arg1) {
    if ((is_flag_set__6TLobbyFv() != 0 || is_challenge_mode_active() != 0) && (arg1 == 7 || arg1 == 6)) {
        return;
    }
    if (is_quest_active() != 0 && arg1 == 7) {
        return;
    }
    if (arg1 != 1) {
        if (get_status_flag__8TItemMagFPv(arg0) != 0 && !(TItemMag__data_805DABA4 < *(f32 *)((s8 *)arg0 + 0x1C8)) && check_feed_state__8TItemMagFPvi(arg0, arg1) != 0) {
            send_6x61_activate_mag_effect(arg0, arg1);
        }
    } else {
        select_support_action__8TItemMagFPvi((u8 *)arg0, arg1);
    }
}

void transfer_energy__8TItemMagFPv(void *arg0) {
    u32 temp_r3;
    s32 temp_r4;

    temp_r3 = *(u32 *)((s8 *)arg0 + 0xF0);
    if ((temp_r3 != 0U) && (get_mag_id__8TItemMagFPv(temp_r3 + 0x644) == 0)) {
        temp_r4 = *(s32 *)((s8 *)arg0 + 0x1D0) - *(s32 *)((s8 *)arg0 + 0x1CC);
        if (temp_r4 > 0) {
            set_type__10TObjPlayerFPvi(*(u32 *)((s8 *)arg0 + 0xF0) + 0x644, temp_r4);
        }
    }
}

void apply_feed_delta__8TItemMagFPv(u8 *arg0) {
    s32 temp_r4;

    if (((u32) *(u32 *)((s8 *)arg0 + 0xF0) != 0U) && (test_flags__8TItemMagFPvUi(arg0 + 0x1D4, 0x100) != 0U)) {
        temp_r4 = *(s32 *)((s8 *)arg0 + 0x1D0) - *(s32 *)((s8 *)arg0 + 0x1CC);
        if (temp_r4 > 0) {
            decrement_clamp__10TObjPlayerFPvi(*(u32 *)((s8 *)arg0 + 0xF0) + 0x644, temp_r4);
        }
        clear_feed_flags__8TItemMagFPvUi(arg0 + 0x1D4, 0x100);
    }
}

void update_protection__8TItemMagFv(u8 *self) {
    *(s32 *)((s8 *)self + 0x1D0) = (s32) (lbl_805DABB4 * (f32) ((((s16) get_sync__8TItemMagFPv(self + 0x198) + (s16) get_item_type__8TItemMagFPv(self + 0x198)) / 3) + 40));
    if (*(s32 *)((s8 *)self + 0x1D0) > 900) {
        *(s32 *)((s8 *)self + 0x1D0) = 900;
    }
    if (*(u32 *)((s8 *)self + 0xF0) != 0 && get_mag_id__8TItemMagFPv(*(u32 *)((s8 *)self + 0xF0) + 0x644) < *(s32 *)((s8 *)self + 0x1D0)) {
        set_type__10TObjPlayerFPvi(*(s32 *)((s8 *)self + 0xF0) + 0x644, *(s32 *)((s8 *)self + 0x1D0));
        set_flags__8TItemMagFPvUi(self + 0x1D4, 0x100);
    }
}

void update_feed_timer__8TItemMagFPv(void *arg0) {
    if ((s32) *(s32 *)((s8 *)arg0 + 0x1CC) == 0) {
        ((s32 (*)(void))update_protection__8TItemMagFv)();
    }
    transfer_energy__8TItemMagFPv((void *)(arg0));
    if ((s32) *(s32 *)((s8 *)arg0 + 0x1D0) <= (s32) *(s32 *)((s8 *)arg0 + 0x1CC)) {
        apply_feed_delta__8TItemMagFPv((u8 *)((u8 *)(arg0)));
        request_support_action__8TItemMagFPvi((void *)((void*)(arg0)), (s32)((void*)(1)));
    }
    if ((*(s32 *)((s8 *)arg0 + 0x1CC) % 60) == 0) {
        apply_switch_attack__5TItemFPvi(arg0, 0x6C);
    }
}

void feed_if_over_90__8TItemMagFPv(void* p) { if (*(int*)((char*)p + 0x1cc) > 90) { request_support_action__8TItemMagFPvi((void *)((void*)(p)), (s32)((void*)((void*)1))); } }

void feed_if_over_45__8TItemMagFPv(void* p) { if (*(int*)((char*)p + 0x1cc) > 45) { request_support_action__8TItemMagFPvi((void *)((void*)(p)), (s32)((void*)((void*)1))); } }

void update_feed__8TItemMagFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = *(s32 *)((s8 *)arg0 + 0x1CC);
    if ((temp_r0 != 0x5A) && (temp_r0 > 0x5A)) {
        request_support_action__8TItemMagFPvi((void *)((void*)(arg0)), (s32)((void*)(1)));
    }
}

void check_level_cap__8TItemMagFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = *(s32 *)((s8 *)arg0 + 0x1CC);
    if (temp_r0 == 0x5A) {
        cast_support_technique__8TItemMagFPvi((u8 *)(arg0), (s32)(0x11));
        return;
    }
    if (temp_r0 > 0x5A) {
        request_support_action__8TItemMagFPvi((void *)((void*)(arg0)), (s32)((void*)(1)));
    }
}

void check_level_evolve__8TItemMagFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = *(s32 *)((s8 *)arg0 + 0x1CC);
    if (temp_r0 == 0x5A) {
        if (obj_getS16_32C(*(s32 *)((s8 *)arg0 + 0xF0)) > 0) {
            cast_support_technique__8TItemMagFPvi((u8 *)(arg0), (s32)(0xF));
        }
    } else if (temp_r0 > 0x5A) {
        request_support_action__8TItemMagFPvi((void *)((void*)(arg0)), (s32)((void*)(1)));
    }
}

void apply_auto_support_techniques__8TItemMagFPv(struct RecoveredFields_80113244_arg0 *arg0) {
    s32 temp_r0;
    temp_r0 = arg0->field_1CC;
    if (temp_r0 == 0x5A) {
        cast_support_technique__8TItemMagFPvi((u8 *)((void *)(arg0)), (s32)((s32)(0xD)));
        cast_support_technique__8TItemMagFPvi((u8 *)((void *)(arg0)), (s32)((s32)(0xA)));
        return;
    }
    if (temp_r0 > 0x5A) {
        request_support_action__8TItemMagFPvi((void *)((void*)(arg0)), (s32)((void*)(1)));
    }
}

}
#pragma push
#pragma dont_inline on

#include "types.h"

struct VBase_18 { char pad[0x18]; };
struct VObj_18 : VBase_18 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual s16 m14();
};

struct Obj_80113CA8 { u8 pad[0x70]; s32 arr[1]; };

struct Base_801139F4 { s32 x0; u8 pad[0x14]; };

struct Mag_801139F4 : Base_801139F4 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(s32);
    u8 pad1c[0x170];
    s32 x18c;
    f32 x190;
    f32 x194;
    u8 data198[0xC];
    u8 flags1a4;
    u8 pad1a5[3];
    s32 x1a8[2];
    s32 x1b0[2];
    u8 pad1b8[0x10];
    f32 x1c8;
};

struct TItemMag_801138F0 { u8 pad[0x1a8]; void *subs[2]; };

struct VBase_18_801134CC { char pad[0x18]; };

struct VObj_18_801134CC : VBase_18_801134CC {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
};

struct Owner_801134CC { u8 pad[0x5B0]; u8 stats[1]; };

struct Self_801134CC {
    u8 pad0[0xF0];
    Owner_801134CC *owner;
    u8 pad1[0x1A8 - 0xF4];
    VObj_18_801134CC *subs[2];
};

struct Self_80113310 {
    u8 pad0[0x18C];
    u32 f18C;
    u8 pad1[0x1CC - 0x190];
    s32 f1CC;
};

struct VBase_18_801135E0 { char pad[0x18]; };

struct VObj_18_801135E0 : VBase_18_801135E0 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
};

struct Owner_801135E0 { u8 pad[0x5B0]; u8 stats[1]; };

struct Self_801135E0 {
    u8 pad0[0xF0];
    Owner_801135E0 *owner;
    u8 pad1[0x1A8 - 0xF4];
    VObj_18_801135E0 *subs[2];
};

struct Grp_80113B6C { u32 a, b, c, d; };

struct Rec_80113B6C {
    u32 f0; u32 f4; u32 f8; u32 fC; u32 f10; u32 f14; u32 f18; u32 f1C;
    u32 f20; u32 f24; u32 f28; u32 f2C; u32 f30;
    Grp_80113B6C g[3];
};

extern "C" {
s32 refresh_if_current_player__20TWindowSubStatusDispFPv(void *);
int get_mag_mind_level__9TItemDataFPv(void*);
int get_stat_percent__9TItemDataFPv(void*);
int get_level__9TItemDataFPv(void*);
int get_percent__9TItemDataFPv(void*);
s16 get_mag_total_level(void *);
void TItemMag__vt12(s32 arg0);
s16 obj_getS16_32E(void *);
s32 test_flags_any(void *, int);
s32 obj_isState7_324(void *);
void TItemMag__vt42(u8 *arg0);
s32 get_photon_blast_at_slot__8TItemMagFPvi(void *, s32);
s32 is_flag_20000_set__10TObjPlayerFv(void *);
s32 init_feed_timer__8TItemMagFPv(void *);
s32 send_6x3A_clear_photon_blast_ready_flag(void *);
void TItemMag__vt43(u8 *arg0);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
u8 *create__8TItemMagFi(s32 arg0);
void set_node_id__11TItemMagSubFll(Obj_80113CA8 *self, s32 i, s32 v);
extern s32 lbl_805D2C00;
extern const f32 TItemMag__data_805DABA4;
extern const f32 lbl_805DABB0;
extern const f32 lbl_805DABB8;
u8 *TItemEquipBase__ct(u8 *arg0, s32 arg1, s32 arg2);
void deserialize_mag__9TItemDataFPvPv(void *src, void *dst);
s16 get_mag_total_level(void *);
u8 *TItemMag__ct(Mag_801139F4 *self, s32 a, s32 src);
void release_model_and_destroy__11TItemMagSubFv(void *);
void release__14TItemEquipBaseFPv(void *arg0);
void TItemMag__vt45(TItemMag_801138F0 *self);
s32 obj_testFlags30(void *, s32);
void scale_owner_height__11TItemMagSubFf(void* p, f32 v);
int is_growth_inactive__11TItemMagSubFv(void* p);
f32 get_stat_f32__8TItemMagFPv(void *);
s32 check_state_flag_1__8TItemMagFPv(void *);
s32 push_matrix();
s32 pop_matrix();
extern const f32 TItemMag__data_805DABA8;
void TItemMag__vt25(Self_801134CC *self);
s32 bind_loaded_resources__14TItemEquipBaseFPv(void *);
void feed_by_item_flags__8TItemMagFPvc(void *, s8);
void update_feed_timer__8TItemMagFPv(void *);
void feed_if_over_90__8TItemMagFPv(void *);
void feed_if_over_45__8TItemMagFPv(void *);
void update_feed__8TItemMagFPv(void *);
void check_level_cap__8TItemMagFPv(void *);
void check_level_evolve__8TItemMagFPv(void *);
void update__8TItemMagFPv(void *arg0);
s32 reset_key_machine_state__10TObjPlayerFv();
void TItemMag__vt14(Self_80113310 *self);
s32 obj_testFlags30(void *, s32);
void scale_owner_height__11TItemMagSubFf(void* p, f32 v);
int is_growth_inactive__11TItemMagSubFv(void* p);
f32 get_stat_f32__8TItemMagFPv(void *);
s32 check_state_flag_1__8TItemMagFPv(void *);
s32 push_matrix();
s32 pop_matrix();
void TObjPlayer__sub_80364198();
f32 get_mag_scale__10TObjPlayerFPv(void *);
void set_model_fade_alpha__10TObjPlayerFf(f32);
void warn_if_gauge_low__10TObjPlayerFv();
void TObjPlayer__sub_8036414C();
extern const f32 TItemMag__data_805DABA8;
void TItemMag__vt24(Self_801135E0 *self);
void *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
void *load_buffer__9TItemLoadFPvUii(void *arg0, u32 arg1, s32 arg2);
int fn_800F955C(void *p);
int bswap_32__FPUl(void *);
extern u8 lbl_8043E568[];
extern u8 lbl_8043E57C[];
extern int item_mag_type_id;
extern int item_mag_param_table;
void load_data_files__8TItemMagFv(void);
}

extern "C" {

void set_material_node__11TItemMagSubFlPv(u8 *arg0, s32 arg1, u32 arg2);
int TItemMag__vt13(void* p);
void serialize_to_item__8TItemMagFPv(TItemMag *, void *);
void TItemMag__vt44(s32 arg0);
void *__dt__8TItemMagFv(void *arg0, s16 arg1);
void cleanup__8TItemMagFv(void);
int is_growth_inactive__11TItemMagSubFv(void* p);
void scale_owner_height__11TItemMagSubFf(void* p, f32 v);
void set_flags__11TItemMagSubFUl(void* p, u32 v);
void set_model__11TItemMagSubFPvUlPv(void *arg0, s32 arg1, s32 arg2, void *arg3);
void update__8TItemMagFPv(void *arg0);
void serialize_mag__9TItemDataFPvPv(void *, const void *);
int get_mag_mind_level__9TItemDataFPv(void*);
s32 request_model_load__14TItemEquipBaseFPvi(s32, u8);
void TItemMag__sub_80113E3C(void* p);
u8 TItemMag__sub_80113E74(void* p);
f32 TItemMag__sub_80113EEC(void* p);
void __dt__14TItemEquipBaseFv(void *, int);
int __dt__9TItemLoadFPvs(void*, void*);
s32 copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
int fn_800F953C(void*);
void free_obj_heap__10TObjPlayerFPv(void *);
int get_level__9TItemDataFPv(void*);
int get_percent__9TItemDataFPv(void*);
int get_stat_percent__9TItemDataFPv(void*);
s32 obj_testFlags30(void *, s32);
int test_flags__11TItemMagSubFUl(void* p, u32 m);

extern const f32 TItemMag__data_805DABA4;
extern const f32 TItemMag__data_805DABA8;

void update__8TItemMagFPv(void *arg0) {
    f32 temp_f1;

    temp_f1 = *(f32 *)((s8 *)arg0 + 0x1C8);
    if (TItemMag__data_805DABA4 < temp_f1) {
        *(f32 *)((s8 *)arg0 + 0x1C8) = (f32) (temp_f1 - TItemMag__data_805DABA8);
    }
    if (obj_testFlags30(arg0, 0x08000000) == 0) {
        ((s32 (*)(void *, s32))set_subs_visible__8TItemMagFPvi)(arg0, 1);
        return;
    }
    ((s32 (*)(void *, s32))set_subs_visible__8TItemMagFPvi)(arg0, 0);
}

void TItemMag__vt14(Self_80113310 *self) {
    s8 events;
    ((int (*)(void*))tick_fullness_timer__8TItemMagFPv)((void*)(self));
    bind_loaded_resources__14TItemEquipBaseFPv(self);
    if (self->f18C & 0x20) {
        return;
    }
    events = ((s8 (*)(void *))collect_support_events__8TItemMagFv)(self);
    if (((int (*)(void* p))get_status_flag__8TItemMagFPv)((void*)(self)) != 0) {
        if (reset_key_machine_state__10TObjPlayerFv() != 0) {
            feed_by_item_flags__8TItemMagFPvc(self, events);
            ((void (*)(void *))TItemMag__sub_8011271C)(self);
        } else {
            return;
        }
    }
    switch (self->f18C & 0xF) {
    case 1:
        update__8TItemMagFPv(self);
        break;
    case 4:
        ((void (*)(void *))apply_auto_support_techniques__8TItemMagFPv)(self);
        break;
    case 6:
        check_level_evolve__8TItemMagFPv(self);
        break;
    case 7:
        check_level_cap__8TItemMagFPv(self);
        break;
    case 5:
        update_feed__8TItemMagFPv(self);
        break;
    case 2:
        feed_if_over_45__8TItemMagFPv(self);
        break;
    case 3:
        feed_if_over_90__8TItemMagFPv(self);
        break;
    case 8:
        update_feed_timer__8TItemMagFPv(self);
        break;
    }
    self->f1CC++;
}

int TItemMag__vt13(void* p) { return ((int (*)(void*))tick_fullness_timer__8TItemMagFPv)(p); }

void TItemMag__vt12(s32 arg0) {
    if ((get_mag_total_level((void *) (arg0 + 0x198)) > 0xC8) || (((s16)get_stat_percent__9TItemDataFPv((void*)((void *) (arg0 + 0x198)))) < 0) || (((s16)get_percent__9TItemDataFPv((void*)((void *) (arg0 + 0x198)))) < 0) || (((s16)get_level__9TItemDataFPv((void*)((void *) (arg0 + 0x198)))) < 0) || (((s16)get_mag_mind_level__9TItemDataFPv((void*)((void *) (arg0 + 0x198)))) < 0)) {
        refresh_if_current_player__20TWindowSubStatusDispFPv((void *) (arg0));
    }
}

void TItemMag__vt25(Self_801134CC *self) {
    s32 scaled;
    VObj_18_801134CC *child;
    s32 i;
    f32 scale;
    if (self->owner != NULL && obj_testFlags30((void *)(self), (s32)(0x08000000)) == 0 && ((s32 (*)(void *))get_flag_40__8TItemMagFPv)(self) == 0) {
    scaled = check_state_flag_1__8TItemMagFPv(self->owner->stats);
    scale = get_stat_f32__8TItemMagFPv(self->owner->stats);
    push_matrix();
    for (i = 0; i != 2; i++) {
        if (self->subs[i] != NULL && is_growth_inactive__11TItemMagSubFv((void*)(self->subs[i])) != 0) {
            child = self->subs[i];
            if (scaled != 0) {
                scale_owner_height__11TItemMagSubFf((void*)(child), scale);
                child->m3();
                scale_owner_height__11TItemMagSubFf((void*)(child), TItemMag__data_805DABA8 / scale);
            } else {
                child->m3();
            }
        }
    }
    pop_matrix();
    }
}

void TItemMag__vt24(Self_801135E0 *self) {
    s32 scaled;
    VObj_18_801135E0 *child;
    s32 i;
    f32 scale;
    if (self->owner != NULL && obj_testFlags30((void *)(self), (s32)(0x08000000)) == 0 && ((s32 (*)(void *))get_flag_40__8TItemMagFPv)(self) == 0) {
    scaled = check_state_flag_1__8TItemMagFPv(self->owner->stats);
    scale = get_stat_f32__8TItemMagFPv(self->owner->stats);
    push_matrix();
    TObjPlayer__sub_80364198();
    set_model_fade_alpha__10TObjPlayerFf(get_mag_scale__10TObjPlayerFPv(self));
    for (i = 0; i != 2; i++) {
        if (self->subs[i] != NULL && is_growth_inactive__11TItemMagSubFv((void*)(self->subs[i])) != 0) {
            child = self->subs[i];
            if (scaled != 0) {
                scale_owner_height__11TItemMagSubFf((void*)(child), scale);
                child->m2();
                scale_owner_height__11TItemMagSubFf((void*)(child), TItemMag__data_805DABA8 / scale);
            } else {
                child->m2();
            }
        }
    }
    warn_if_gauge_low__10TObjPlayerFv();
    TObjPlayer__sub_8036414C();
    pop_matrix();
    }
}

void TItemMag::serialize_to_item(void *item) {
    serialize_mag__9TItemDataFPvPv(item, &m_198);
}

void TItemMag__vt43(u8 *arg0) {
  s32 temp_r3;
  s32 var_r31;
  u8 *temp_r6;
  u8 *new_var;
  if (((volatile int)((s32 (*)(void *))obj_isState2_324)(*((u8 **) (((s8 *) arg0) + 0xF0)))) == 0)
  {
    ((s32 (*)(void *))assign_default_photon_blast_palette_slots)((void *) ((*((u8 **) (((s8 *) arg0) + 0xF0))) + 0x500));
    var_r31 = 0;
    do
    {
      temp_r3 = get_photon_blast_at_slot__8TItemMagFPvi(arg0 + 0x198, var_r31);
      if (temp_r3 != (-1))
      {
        new_var = arg0;
        temp_r6 = (u8 *) (*((u8 **) (((s8 *) new_var) + 0xF0)));
        ((s32 (*)(void *, int, int, int))TItemMag__sub_80113EDC)((void *) (temp_r6 + 0x4AC), (int) ((s16) temp_r3), (int) (-1), (int) temp_r6);
      }
      var_r31 += 1;
    }
    while (var_r31 != 3);
    if (is_flag_20000_set__10TObjPlayerFv((void *) (*((u8 **) (((s8 *) arg0) + 0xF0)))) == 0)
    {
      init_feed_timer__8TItemMagFPv((void *) ((*((u8 **) (((s8 *) arg0) + 0xF0))) + 0x4AC));
      send_6x3A_clear_photon_blast_ready_flag((void *) ((*((u8 **) (((s8 *) arg0) + 0xF0))) + 0x4AC));
    }
  }
  ((s32 (*)(void *))apply_feed_delta__8TItemMagFPv)((void *) arg0);
}

void TItemMag__vt42(u8 *arg0) {
    u8 *temp_r3;
    *(s32 *)((s8 *)arg0 + 0x18C) = 0;
    if (((s32 (*)(void *))obj_isState2_324)((void *) (*(u8 **)((s8 *)arg0 + 0xF0))) == 0) {
        *(s32 *)((s8 *)arg0 + 0x18C) = 0x10;
        ((s32 (*)(void *))register_photon_blasts__8TItemMagFPv)((void *) (arg0));
    }
    ((s32 (*)(void *, int))request_support_action__8TItemMagFPvi)((void *) (arg0), (int) (1));
    temp_r3 = *(u8 **)((s8 *)arg0 + 0xF0);
    *(s16 *)((s8 *)arg0 + 0x1D4) = ((VObj_18 *)(temp_r3))->m14();
    if ((s16) *(s16 *)((s8 *)arg0 + 0x1D6) == -1) {
        *(s16 *)((s8 *)arg0 + 0x1D6) = ((s16 (*)())get_global_state__14TOKeyMachine01Fv)();
    }
    *(s16 *)((s8 *)arg0 + 0x1DC) = ((s16 (*)(void *))obj_getS16_32C)((void *) (*(u8 **)((s8 *)arg0 + 0xF0)));
    *(s16 *)((s8 *)arg0 + 0x1DE) = obj_getS16_32E((void *) (*(u8 **)((s8 *)arg0 + 0xF0)));
    if (test_flags_any((void *) (arg0 + 0x178), (int) (1)) != 0) {
        *(s32 *)((s8 *)arg0 + 0x18C) = (s32) (*(s32 *)((s8 *)arg0 + 0x18C) & 0xFFFFFFDF);
    } else {
        *(s32 *)((s8 *)arg0 + 0x18C) = (s32) (*(s32 *)((s8 *)arg0 + 0x18C) | 0x20);
    }
    if ((((s32 (*)(void *))get_flag_40__8TItemMagFPv)((void *) (arg0)) == 0) && (obj_isState7_324((void *) (*(u8 **)((s8 *)arg0 + 0xF0))) == 0)) {
        ((s32 (*)(int, void *, int, int))play_sound_effect)((int) (0x4000B20A), (void *) (*(u8 **)((s8 *)arg0 + 0xF0) + 0x38), (int) (0), (int) (0));
    }
}

void TItemMag__vt45(TItemMag_801138F0 *self) {
    s32 i;
    for (i = 0; i != 2; i++) {
        if (self->subs[i] != 0) {
            release_model_and_destroy__11TItemMagSubFv(self->subs[i]);
            self->subs[i] = 0;
        }
    }
    release__14TItemEquipBaseFPv(self);
}

void TItemMag__vt44(s32 arg0) {
    u8 temp_r3;
    u8 var_r4;

    temp_r3 = ((u8 (*)())get_field_ed__10TObjPlayerFPv)();
    var_r4 = temp_r3;
    if (temp_r3 >= 0x42U) {
        var_r4 = 0x42;
    }
    request_model_load__14TItemEquipBaseFPvi(arg0, var_r4);
}

void *__dt__8TItemMagFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__8TItemMag;
        __dt__14TItemEquipBaseFv(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

    extern int item_mag_type_id;
    extern int item_mag_param_table;

#pragma push
#pragma opt_common_subs off
u8 *TItemMag__ct(Mag_801139F4 *self, s32 a, s32 src) {
    s32 i;
    TItemEquipBase__ct((u8 *)self, a, src);
    *(s32 **)((u8 *)self + 0x18) = ((s32 *)__vt__8TItemMag);
    ((void * (*)(void *p))initialize_mag_data__9TItemDataFPv)(self->data198);
    self->x0 = lbl_805D2C00;
    self->x1c8 = TItemMag__data_805DABA4;
    self->x190 = lbl_805DABB0;
    self->x194 = lbl_805DABB8;
    deserialize_mag__9TItemDataFPvPv((void *)src, self->data198);
    self->flags1a4 &= ~0x40;
    ((void (*)(void *p, u8 v))set_field_EE__8TItemMagFPvUc)(self, get_mag_total_level(self->data198));
    self->m17(1);
    self->x18c = 0;
    for (i = 0; i < 2; i++) {
        self->x1a8[i] = 0;
        self->x1b0[i] = 0;
    }
    ((void (*)(void *))copy_owner_data__8TItemMagFPv)(self);
    return (u8 *)self;
}
#pragma pop

u8 *create__8TItemMagFi(s32 arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != 0) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1E0));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(TItemMag__ct((Mag_801139F4 *)(temp_r3), (s32)(tl_05), (s32)(arg0)));
        }
        return var_r0;
    }
    return NULL;
}

void cleanup__8TItemMagFv(void) { __dt__9TItemLoadFPvs((void*)(TItemMag__item_load_instance), (void*)1); fn_800F953C((void*)(item_mag_param_table)); TItemMag__item_load_instance = 0; item_mag_type_id = 0; item_mag_param_table = 0; }

void load_data_files__8TItemMagFv(void) {
    s32 i;
    s32 j;
    Rec_80113B6C *rec;
    Grp_80113B6C *g;
    s32 *type;
    void *buf;
    item_mag_param_table = fn_800F955C(lbl_8043E568);
    rec = (Rec_80113B6C *)item_mag_param_table;
    for (i = 0; i < 0x5A; i++, rec++) {
        bswap_32__FPUl(&rec->f0);
        bswap_32__FPUl(&rec->f8);
        bswap_32__FPUl(&rec->f10);
        bswap_32__FPUl(&rec->f14);
        bswap_32__FPUl(&rec->f18);
        bswap_32__FPUl(&rec->f1C);
        bswap_32__FPUl(&rec->f20);
        bswap_32__FPUl(&rec->f24);
        bswap_32__FPUl(&rec->f28);
        bswap_32__FPUl(&rec->f2C);
        bswap_32__FPUl(&rec->f30);
        g = rec->g;
        for (j = 0; j < 3; j++, g++) {
            bswap_32__FPUl(&g->a);
            bswap_32__FPUl(&g->b);
            bswap_32__FPUl(&g->c);
            bswap_32__FPUl(&g->d);
        }
    }
    type = NULL;
    buf = alloc__23TAdSinglePlyChrSelectGCFPv(8);
    if (buf != NULL) {
        buf = load_buffer__9TItemLoadFPvUii(buf, (u32)lbl_8043E57C, 0x1000);
    }
    TItemMag__item_load_instance = (int)buf;
    if (buf != NULL) {
        type = ((s32 * (*)(void *))get_type__8TItemMagFPv)(buf);
    }
    if (type != NULL) {
        item_mag_type_id = *type;
    }
}

}
void TItemMagSub::set_flags(u32 value) { flags |= value; }
extern "C" {

#include "types.h"

extern "C" {

}

#include "types.h"

extern "C" {

}
void TItemMagSub::set_node_id(s32 index, s32 id) { node_ids[index] = id; }
extern "C" {

}
void TItemMagSub::set_material_node(s32 node, void* parameters) { node_ids[0] = node; if (parameters != 0) copy_vec4__13TRaderMapCoreFPvPv(material_parameters, parameters); }
extern "C" {

}

extern s32 lbl_8043E560;
extern const f32 TItemMag__data_805DABA4;
extern const f32 TItemMag__data_805DABA8;

}
void TItemMagSub::set_model(void* model_arg, u32 textures_arg, void* animation_arg) {
    void* arg0=this; s32 arg1=(s32)model_arg; s32 arg2=(s32)textures_arg; void* arg3=animation_arg;
    *(s32 *)((s8 *)arg0 + 0x24) = arg1;
    *(s32 *)((s8 *)arg0 + 0x2C) = arg2;
    *(void **)((s8 *)arg0 + 0x28) = arg3;
    if ((void *) *(void **)((s8 *)arg0 + 0x28) != NULL) {
        *(f32 *)((s8 *)arg0 + 0x80) = (f32) TItemMag__data_805DABA4;
        *(f32 *)((s8 *)arg0 + 0x84) = (f32) ((f32) *(u32 *)((s8 *)(*(void **)((s8 *)arg0 + 0x28)) + 4) - TItemMag__data_805DABA8);
    }
}
extern "C" {

}
void TItemMagSub::scale_owner_height(f32 factor) { owner_height_scale *= factor; }
extern "C" {
}
int TItemMagSub::is_growth_inactive() {
    void* p=this; return (test_flags__11TItemMagSubFUl(p, 64)) == 0; }
extern "C" {

}
#pragma pop
