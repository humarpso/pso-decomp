#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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
    virtual M2C_UNK m44();
    virtual M2C_UNK m45();
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
M2C_UNK set_type__10TObjPlayerFPvi(s32, s32);
void construct_target_cursor_records__10TObjPlayerFi(void *);
s32 is_quest_active();
s32 is_flag_set__6TLobbyFv();
s16 get_field_2b8__14TItemProShieldFPv(void *);
s32 clear_flag4_bit4__22TQuestVmDownLoadServerFPv(void *);
s32 test_action_mask__10TObjPlayerFPvi(s32, M2C_UNK);
s32 spawn_particle_effect(void *, int);
s32 get_field_d8__10TObjPlayerFPv(int);
M2C_UNK apply_switch_attack__5TItemFPvi(void *, M2C_UNK);
M2C_UNK refresh_owner_stats__5TItemFPv(void *);
M2C_UNK set_field_EE__8TItemMagFPvUc(void *, void *);
int fn_80100D9C(s32, s32);
M2C_UNK send_6x61_activate_mag_effect(void *, s32);
s32 get_item_info__10TObjPlayerFiiPv(int, int, int);
M2C_UNK copy_to_item_data__5TItemFPvPv(s32, void *);
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
u8 has_feed_flag__11TItemMagSubFPv(void *arg0);
s32 is_mag_active__11TItemMagSubFPv(void *arg0);
s32 check_action_probability__8TItemMagFPvi(u8 *arg0, s32 arg1);
void TItemMag__sub_80111140(TItemMag_80111140 *self, void *a, void *b);
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
void set_flags64__8TItemMagFPvUi(void *p, u32 v);
s16 TObjPlayer__sub_80113D90(s32);
s16 get_mag_data__10TObjPlayerFPv(s32);
s16 get_mag_item_data(s32);
s16 get_mag_level(s32);
s16 get_mag_item_percent();
M2C_UNK get_mag_item_stat_percent(s32);
s32 get_status_flag__8TItemMagFPv(void *);
s32 get_item_type__8TItemMagFPv(void *);
s32 get_sync__8TItemMagFPv(void *);
s32 is_active__8TItemMagFPv(u32);
s32 get_sub_value__8TItemMagFi(void *);
void TItemMag__sub_80113EDC(s32, s16, s8);
s32 get_mag_id__8TItemMagFPv(s32);
M2C_UNK clear_feed_flags__8TItemMagFPvUi(void *, M2C_UNK);
void set_flags__8TItemMagFPvUi(void *, u32);
u32 test_flags__8TItemMagFPvUi(void *, M2C_UNK);
M2C_UNK add_photon_blast__8TItemMagFPvUc(void *, int);
M2C_UNK add_clamped_stat__8TItemMagFPvi(void *, int);
M2C_UNK add_stat_clamped__8TItemMagFPvi(void *, int);
M2C_UNK mag_feed_add_mind(void *, int);
M2C_UNK TItemMag__sub_80114198(void *, int);
M2C_UNK TItemMag__sub_8011423C(void *, int);
M2C_UNK mag_feed_add_def(void *, int);
s32 TItemMag__sub_801143E8(void *, s32);
s16 TItemMagSub__sub_8011455C(void *);
void set_type__8TItemMagFPvi(u8 *arg0, s32 arg1);
void clear_flag2__11TItemMagSubFPv(void *arg0);
s32 get_world_position__11TItemMagSubFPvUi(u8 *arg0, u32 arg1);
u8 * get_mag_feed_result(s32, s32);
u8 * get_pmt_record__10TObjPlayerFi(u8);
M2C_UNK send_6x26_unequip_item__10TObjPlayerFPvPv(int, int);
M2C_UNK decrement_clamp__10TObjPlayerFPvi(s32, s32);
void assign_default_photon_blast_palette_slots(s32);
void assign_photon_blast_palette_slot(u8 *arg0, s32 arg1);
s32 is_boss_area();
s32 get_global_state__14TOKeyMachine01Fv();
M2C_UNK play_sound_effect(int, int, int, int);
void create__10TTecDebandFiii(void *, void *, int);
void create__9TTecRestaFPvPvPv(void *, void *, int);
void create__12TTecReverserFPvPvPvPv(void *, void *, void *, int);
void create__9TTecSiftaFPvPvPv(void *, void *, int);
s32 is_challenge_mode_active();
s32 rand();

extern s32 TItemMag__data_805D54A8;
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

    if (check_class_equip_permission(M2C_FIELD(arg0, u8 **, 0xF0), 0xD7) != 0) {
        v = (u8) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xF0), s16 *, 0x896);
    } else {
        v = (u8) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xF0), s16 *, 0x894);
    }
    v = v % 9;
    if (v >= 7) {
        v = lbl_805DAB98 * (lbl_805DAB9C * (f32) rand());
    }
    if (lbl_805DAB9C * (f32) rand() < lbl_805DABA0) {
        v += 9;
    }
    M2C_FIELD(arg0, u8 *, 0x1A6) = v;
}
extern int fold_flush_1;
#pragma pop

void call_preserve_flag__8TItemMagFPvi(void *arg0, s32 arg1) {
    u8 temp_r31;

    temp_r31 = M2C_FIELD(arg0, u8 *, 1);
    copy_to_item_data__5TItemFPvPv(arg1, arg0);
    M2C_FIELD(arg0, u8 *, 1) = temp_r31;
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
            set_flags64__8TItemMagFPvUi(self->subs[i], 2);
            spawn_item_timer__13TItemAttackerFiii(self->subs[i], (void *)clear_flag2__11TItemMagSubFPv, 0x1e);
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

    temp_r3 = obj_getS16_32C(M2C_FIELD(arg0, s32 *, 0xF0));
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
        M2C_FIELD(arg0, s32 *, 0x1B8) = (s32) M2C_FIELD(temp_r3, s16 *, 8);
        M2C_FIELD(arg0, u8 *, 0x1BC) = (u8) M2C_FIELD(temp_r3, u8 *, 0xB);
        ((M2C_UNK (*)(void *, void *, void *))TItemMag__sub_80111140)(arg0, temp_r3 + 0xC, temp_r3 + 0x10);
    }
}

void register_photon_blasts__8TItemMagFPv(u8 *arg0) {
    s32 temp_r3;
    s32 var_r30;
    assign_default_photon_blast_palette_slots(M2C_FIELD(arg0, s32 *, 0xF0) + 0x500);
    var_r30 = 0;
    do {
        temp_r3 = TItemMag__sub_801143E8(arg0 + 0x198, var_r30);
        if (temp_r3 != -1) {
            TItemMag__sub_80113EDC(M2C_FIELD(arg0, s32 *, 0xF0) + 0x4AC, (s16) temp_r3, ((u8 (*)(void *)) get_slot_count__14TItemProShieldFPv)(arg0));
            assign_photon_blast_palette_slot(M2C_FIELD(arg0, u8 **, 0xF0) + 0x500, (s16) temp_r3);
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

u8 has_feed_flag__11TItemMagSubFPv(void *arg0) {
    int var_r31;

    var_r31 = 0;
    if ((test_action_mask__10TObjPlayerFPvi(M2C_FIELD(arg0, s32 *, 0xF0), 4) != 0) || (test_action_mask__10TObjPlayerFPvi(M2C_FIELD(arg0, s32 *, 0xF0), 0x10) != 0)) {
        var_r31 = 1;
    }
    return (u8) var_r31;
}

s32 is_mag_active__11TItemMagSubFPv(void *arg0) {
    s32 var_r31;

    var_r31 = 0;
    if (((u32) M2C_FIELD(arg0, u32 *, 0xF0) != 0U) && (is_active__8TItemMagFPv(M2C_FIELD(arg0, u32 *, 0xF0)) != 0)) {
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

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x19A);
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
    if ((u8) M2C_FIELD(temp_r4, u8 *, 0x1BD) != 0) {
        temp_r0_2 = M2C_FIELD(temp_r4, u8 *, 0x1C1);
        switch ((s32) temp_r0_2) {
        case 0:
            var_r31 = M2C_FIELD(arg0, u8 *, 0x1BC);
            break;
        case 1:
            var_r31 = M2C_FIELD(arg0, u8 *, 0x1BC) + var_r5;
            break;
        case 2:
            var_r31 = var_r5;
            break;
        case 3:
            temp_r3 = M2C_FIELD(arg0, u8 *, 0x1BC);
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

void TItemMag__sub_80111140(TItemMag_80111140 *self, void *a, void *b) {
    memcpy(self->a, a, 4);
    memcpy(self->b, b, 4);
}

void apply_transform_action__8TItemMagFPvUc(u8 *arg0, u8 arg1) {
    u8 temp_r31;
    temp_r31 = ((u8 (*)(void *))get_field_ed__10TObjPlayerFPv)((void *) (arg0));
    switch ((s32) arg1) {
    case 0:
        if (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xF0), u8 *, 0x88C) & 1) {
            ((M2C_UNK (*)(void *, int))try_add_action__8TItemMagFii)((void *) (arg0), (int) (0x1D));
        } else {
            ((M2C_UNK (*)(void *, int))try_add_action__8TItemMagFii)((void *) (arg0), (int) (0x21));
        }
        break;
    case 1:
        if (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xF0), u8 *, 0x88C) & 1) {
            ((M2C_UNK (*)(void *, int))try_add_action__8TItemMagFii)((void *) (arg0), (int) (0x22));
        } else {
            ((M2C_UNK (*)(void *, int))try_add_action__8TItemMagFii)((void *) (arg0), (int) (0x27));
        }
        break;
    case 2:
        ((M2C_UNK (*)(void *, int))try_add_action__8TItemMagFii)((void *) (arg0), (int) (0x28));
        break;
    case 3:
        ((M2C_UNK (*)(void *, int))try_add_action__8TItemMagFii)((void *) (arg0), (int) (0x29));
        break;
    case 4:
        ((M2C_UNK (*)(void *, int))try_add_action__8TItemMagFii)((void *) (arg0), (int) (0x2A));
        break;
    case 5:
        ((M2C_UNK (*)(void *, int))try_add_action__8TItemMagFii)((void *) (arg0), (int) (0x2B));
        break;
    }
    if (temp_r31 != ((u8 (*)(void *))get_field_ed__10TObjPlayerFPv)((void *) (arg0))) {
        ((M2C_UNK (*)(void *))apply_form_change__8TItemMagFPv)((void *) (arg0));
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
                set_type__8TItemMagFPvi(o, self->types[i][lv - 1]);
            } else if (lv >= 6 && lv < 8) {
                set_type__8TItemMagFPvi(o, self->types[i][5]);
            } else if (lv == 8) {
                set_type__8TItemMagFPvi(o, self->types[i][3]);
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
        return M2C_FIELD(M2C_FIELD(get_type__8TItemMagFPv(TItemMag__data_805D54A8), s32 *, 0x14), s8 *, var_r31);
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
    if (M2C_FIELD(arg0, u8 **, 0xF0) != NULL && TItemMagSub__sub_8011455C(arg0 + 0x198) >= 100) {
        group = (s8)M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xF0), u8 *, 0x88C) % 3;
        pct = ((s16 (*)(s32))get_mag_item_percent)((s32)arg0);
        level = get_mag_level((s32)arg0);
        data = get_mag_item_data((s32)arg0);
        stat = ((s16 (*)(s32))get_mag_item_stat_percent)((s32)arg0);
        idx = (u32)__cntlzw(check_class_equip_permission(M2C_FIELD(arg0, u8 **, 0xF0), 0x7F)) >> 5;
        idx += group * 2;
        if (check_class_equip_permission(M2C_FIELD(arg0, u8 **, 0xF0), 0xF9) == 0) {
            if (check_class_equip_permission(M2C_FIELD(arg0, u8 **, 0xF0), 0xFA) != 0) {
                idx += 6;
            } else if (check_class_equip_permission(M2C_FIELD(arg0, u8 **, 0xF0), 0xFC) != 0) {
                idx += 12;
            }
        }
        if (check_class_equip_permission(M2C_FIELD(arg0, u8 **, 0xF0), 0xF9) != 0) {
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
        } else if (check_class_equip_permission(M2C_FIELD(arg0, u8 **, 0xF0), 0xFA) != 0) {
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
        } else if (check_class_equip_permission(M2C_FIELD(arg0, u8 **, 0xF0), 0xFC) != 0) {
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

    if ((void *) M2C_FIELD(arg0, void **, 0xF0) != NULL) {
        temp_r25 = ((s32 (*)(void))get_max_stat_flags__8TItemMagFi)();
        temp_r4 = M2C_FIELD(arg0, void **, 0xF0);
        temp_r28 = (s8) M2C_FIELD(temp_r4, u8 *, 0x88C);
        temp_r29 = ((s16 (*)(void *, void *))get_mag_item_percent)(arg0, temp_r4);
        temp_r30 = ((s16 (*)(void *))get_mag_level)(arg0);
        temp_r31 = ((s16 (*)(void *))get_mag_item_data)(arg0);
        temp_r26 = ((s16 (*)(void *))get_mag_item_stat_percent)(arg0);
        if (((s32 (*)(void *, M2C_UNK))check_class_equip_permission)(M2C_FIELD(arg0, void **, 0xF0), 0xF9) != 0) {
            if (temp_r25 & 0x108) {
                if (!(temp_r28 & 1)) {
                    if (temp_r31 <= temp_r30) {
                        ((M2C_UNK (*)(void *, M2C_UNK))try_add_action__8TItemMagFii)((void *)(arg0), (M2C_UNK)(5));
                        return;
                    }
                    ((M2C_UNK (*)(void *, M2C_UNK))try_add_action__8TItemMagFii)((void *)(arg0), (M2C_UNK)(0xC));
                    return;
                }
                if (temp_r31 <= temp_r30) {
                    ((M2C_UNK (*)(void *, M2C_UNK))try_add_action__8TItemMagFii)((void *)(arg0), (M2C_UNK)(6));
                    return;
                }
                ((M2C_UNK (*)(void *, M2C_UNK))try_add_action__8TItemMagFii)((void *)(arg0), (M2C_UNK)(8));
                return;
            }
            if (temp_r25 & 0x10) {
                if (!(temp_r28 & 1)) {
                    if (temp_r29 <= temp_r31) {
                        ((M2C_UNK (*)(void *, M2C_UNK))try_add_action__8TItemMagFii)((void *)(arg0), (M2C_UNK)(0x13));
                        return;
                    }
                    ((M2C_UNK (*)(void *, M2C_UNK))try_add_action__8TItemMagFii)((void *)(arg0), (M2C_UNK)(0x17));
                    return;
                }
                if (temp_r29 <= temp_r31) {
                    ((M2C_UNK (*)(void *, M2C_UNK))try_add_action__8TItemMagFii)((void *)(arg0), (M2C_UNK)(0x10));
                    return;
                }
                ((M2C_UNK (*)(void *, M2C_UNK))try_add_action__8TItemMagFii)((void *)(arg0), (M2C_UNK)(0x12));
                return;
            }
            if (temp_r25 & 0x20) {
                if (!(temp_r28 & 1)) {
                    if (temp_r30 <= temp_r29) {
                        ((M2C_UNK (*)(void *, M2C_UNK))try_add_action__8TItemMagFii)((void *)(arg0), (M2C_UNK)(0x1E));
                        return;
                    }
                    ((M2C_UNK (*)(void *, M2C_UNK))try_add_action__8TItemMagFii)((void *)(arg0), (M2C_UNK)(7));
                    return;
                }
                if (temp_r30 <= temp_r29) {
                    ((M2C_UNK (*)(void *, M2C_UNK))try_add_action__8TItemMagFii)((void *)(arg0), (M2C_UNK)(0x24));
                    return;
                }
                ((M2C_UNK (*)(void *, M2C_UNK))try_add_action__8TItemMagFii)((void *)(arg0), (M2C_UNK)(0x16));
            }
        } else if (((s32 (*)(void *, M2C_UNK))check_class_equip_permission)(M2C_FIELD(arg0, void **, 0xF0), 0xFA) != 0) {
            if (temp_r25 & 0x110) {
                if (!(temp_r28 & 1)) {
                    if (temp_r29 <= temp_r31) {
                        ((M2C_UNK (*)(void *, M2C_UNK))try_add_action__8TItemMagFii)((void *)(arg0), (M2C_UNK)(6));
                        return;
                    }
                    ((M2C_UNK (*)(void *, M2C_UNK))try_add_action__8TItemMagFii)((void *)(arg0), (M2C_UNK)(0xC));
                    return;
                }
                if (temp_r29 <= temp_r31) {
                    ((M2C_UNK (*)(void *, M2C_UNK))try_add_action__8TItemMagFii)((void *)(arg0), (M2C_UNK)(5));
                    return;
                }
                ((M2C_UNK (*)(void *, M2C_UNK))try_add_action__8TItemMagFii)((void *)(arg0), (M2C_UNK)(0xA));
                return;
            }
            if (temp_r25 & 8) {
                if (!(temp_r28 & 1)) {
                    if (temp_r31 <= temp_r30) {
                        ((M2C_UNK (*)(void *, M2C_UNK))try_add_action__8TItemMagFii)((void *)(arg0), (M2C_UNK)(6));
                        return;
                    }
                    ((M2C_UNK (*)(void *, M2C_UNK))try_add_action__8TItemMagFii)((void *)(arg0), (M2C_UNK)(0xC));
                    return;
                }
                if (temp_r31 <= temp_r30) {
                    ((M2C_UNK (*)(void *, M2C_UNK))try_add_action__8TItemMagFii)((void *)(arg0), (M2C_UNK)(0x26));
                    return;
                }
                ((M2C_UNK (*)(void *, M2C_UNK))try_add_action__8TItemMagFii)((void *)(arg0), (M2C_UNK)(0xA));
                return;
            }
            if (temp_r25 & 0x20) {
                if (!(temp_r28 & 1)) {
                    if (temp_r30 <= temp_r29) {
                        ((M2C_UNK (*)(void *, M2C_UNK))try_add_action__8TItemMagFii)((void *)(arg0), (M2C_UNK)(5));
                        return;
                    }
                    ((M2C_UNK (*)(void *, M2C_UNK))try_add_action__8TItemMagFii)((void *)(arg0), (M2C_UNK)(8));
                    return;
                }
                if (temp_r30 <= temp_r29) {
                    ((M2C_UNK (*)(void *, M2C_UNK))try_add_action__8TItemMagFii)((void *)(arg0), (M2C_UNK)(0x1E));
                    return;
                }
                ((M2C_UNK (*)(void *, M2C_UNK))try_add_action__8TItemMagFii)((void *)(arg0), (M2C_UNK)(0x18));
            }
        } else if (((s32 (*)(void *, M2C_UNK))check_class_equip_permission)(M2C_FIELD(arg0, void **, 0xF0), 0xFC) != 0) {
            if (temp_r25 & 0x120) {
                if (temp_r26 <= 0x2C) {
                    if (!(temp_r28 & 1)) {
                        if (temp_r30 <= temp_r29) {
                            ((M2C_UNK (*)(void *, M2C_UNK))try_add_action__8TItemMagFii)((void *)(arg0), (M2C_UNK)(0x1C));
                            return;
                        }
                        ((M2C_UNK (*)(void *, M2C_UNK))try_add_action__8TItemMagFii)((void *)(arg0), (M2C_UNK)(0x1E));
                        return;
                    }
                    if (temp_r30 <= temp_r29) {
                        ((M2C_UNK (*)(void *, M2C_UNK))try_add_action__8TItemMagFii)((void *)(arg0), (M2C_UNK)(9));
                        return;
                    }
                    ((M2C_UNK (*)(void *, M2C_UNK))try_add_action__8TItemMagFii)((void *)(arg0), (M2C_UNK)(0x17));
                    return;
                }
                ((M2C_UNK (*)(void *, M2C_UNK))try_add_action__8TItemMagFii)((void *)(arg0), (M2C_UNK)(0x24));
                return;
            }
            if (temp_r25 & 8) {
                if (temp_r26 <= 0x2C) {
                    if (!(temp_r28 & 1)) {
                        if (temp_r31 <= temp_r30) {
                            ((M2C_UNK (*)(void *, M2C_UNK))try_add_action__8TItemMagFii)((void *)(arg0), (M2C_UNK)(0x25));
                            return;
                        }
                        ((M2C_UNK (*)(void *, M2C_UNK))try_add_action__8TItemMagFii)((void *)(arg0), (M2C_UNK)(0x1F));
                        return;
                    }
                    if (temp_r31 <= temp_r30) {
                        ((M2C_UNK (*)(void *, M2C_UNK))try_add_action__8TItemMagFii)((void *)(arg0), (M2C_UNK)(0x20));
                        return;
                    }
                    ((M2C_UNK (*)(void *, M2C_UNK))try_add_action__8TItemMagFii)((void *)(arg0), (M2C_UNK)(0x1C));
                    return;
                }
                ((M2C_UNK (*)(void *, M2C_UNK))try_add_action__8TItemMagFii)((void *)(arg0), (M2C_UNK)(0x23));
                return;
            }
            if (temp_r25 & 0x10) {
                if (temp_r26 <= 0x2C) {
                    if (!(temp_r28 & 1)) {
                        if (temp_r29 <= temp_r31) {
                            ((M2C_UNK (*)(void *, M2C_UNK))try_add_action__8TItemMagFii)((void *)(arg0), (M2C_UNK)(0x11));
                            return;
                        }
                        ((M2C_UNK (*)(void *, M2C_UNK))try_add_action__8TItemMagFii)((void *)(arg0), (M2C_UNK)(0x15));
                        return;
                    }
                    if (temp_r29 <= temp_r31) {
                        ((M2C_UNK (*)(void *, M2C_UNK))try_add_action__8TItemMagFii)((void *)(arg0), (M2C_UNK)(0xC));
                        return;
                    }
                    ((M2C_UNK (*)(void *, M2C_UNK))try_add_action__8TItemMagFii)((void *)(arg0), (M2C_UNK)(0x12));
                    return;
                }
                ((M2C_UNK (*)(void *, M2C_UNK))try_add_action__8TItemMagFii)((void *)(arg0), (M2C_UNK)(0x24));
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
            ((M2C_UNK (*)(void *, M2C_UNK))try_add_action__8TItemMagFii)((void *)(arg0), (M2C_UNK)(0xE));
            return;
        }
        if (temp_r31 & 0x10) {
            ((M2C_UNK (*)(void *, M2C_UNK))try_add_action__8TItemMagFii)((void *)(arg0), (M2C_UNK)(0xF));
            return;
        }
        if (temp_r31 & 0x20) {
            ((M2C_UNK (*)(void *, M2C_UNK))try_add_action__8TItemMagFii)((void *)(arg0), (M2C_UNK)(4));
        }
        break;
    case 13:
        if (temp_r31 & 0x110) {
            ((M2C_UNK (*)(void *, M2C_UNK))try_add_action__8TItemMagFii)((void *)(arg0), (M2C_UNK)(2));
            return;
        }
        if (temp_r31 & 8) {
            ((M2C_UNK (*)(void *, M2C_UNK))try_add_action__8TItemMagFii)((void *)(arg0), (M2C_UNK)(3));
            return;
        }
        if (temp_r31 & 0x20) {
            ((M2C_UNK (*)(void *, M2C_UNK))try_add_action__8TItemMagFii)((void *)(arg0), (M2C_UNK)(0xB));
            return;
        }
        break;
    case 25:
        if (temp_r31 & 0x120) {
            ((M2C_UNK (*)(void *, M2C_UNK))try_add_action__8TItemMagFii)((void *)(arg0), (M2C_UNK)(0x1A));
            return;
        }
        if (temp_r31 & 8) {
            ((M2C_UNK (*)(void *, M2C_UNK))try_add_action__8TItemMagFii)((void *)(arg0), (M2C_UNK)(0x1B));
            return;
        }
        if (temp_r31 & 0x10) {
            ((M2C_UNK (*)(void *, M2C_UNK))try_add_action__8TItemMagFii)((void *)(arg0), (M2C_UNK)(0x14));
        }
        break;
    }
}

void evolve_first_form__8TItemMagFPv(u8 *arg0) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xF0));
    if (temp_r3 != NULL) {
        if (((s32 (*)(void *, M2C_UNK))check_class_equip_permission)((void *)(temp_r3), (M2C_UNK)(0xF9)) != 0) {
            ((M2C_UNK (*)(void *, M2C_UNK))try_add_action__8TItemMagFii)((void *)((s32) arg0), (M2C_UNK)(1));
            return;
        }
        if (((s32 (*)(void *, M2C_UNK))check_class_equip_permission)((void *)(M2C_FIELD(arg0, u8 **, 0xF0)), (M2C_UNK)(0xFA)) != 0) {
            ((M2C_UNK (*)(void *, M2C_UNK))try_add_action__8TItemMagFii)((void *)((s32) arg0), (M2C_UNK)(0xD));
            return;
        }
        if (((s32 (*)(void *, M2C_UNK))check_class_equip_permission)((void *)(M2C_FIELD(arg0, u8 **, 0xF0)), (M2C_UNK)(0xFC)) != 0) {
            ((M2C_UNK (*)(void *, M2C_UNK))try_add_action__8TItemMagFii)((void *)((s32) arg0), (M2C_UNK)(0x19));
        }
    }
}

void apply_form_change__8TItemMagFPv(u8 *arg0) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(((u8 * (*)(int))get_pmt_record__10TObjPlayerFi)((s32) get_field_ed__10TObjPlayerFPv((s32)(arg0))));
    if (temp_r3 != NULL) {
        add_photon_blast__8TItemMagFPvUc((void *) (arg0 + 0x198), (int) (M2C_FIELD(temp_r3, u8 *, 0xA)));
    }
    if (TObjPlayer__sub_80102C30(arg0) == 2) {
        ((VObj_18_8b050c *)(arg0))->m45();
        M2C_FIELD(arg0, s32 *, 0x18C) = (s32) (M2C_FIELD(arg0, s32 *, 0x18C) | 0x40);
        ((VObj_18_8b050c *)(arg0))->m44();
        ((M2C_UNK (*)(void *))register_photon_blasts__8TItemMagFPv)((void *) (arg0));
    }
    if (get_flag_40__8TItemMagFPv(arg0) == 0) {
        play_sound_effect((int) (0x4000B20A), (int) (M2C_FIELD(arg0, s32 *, 0xF0) + 0x38), (int) (0), (int) (0));
    }
    ((void (*)(void *))copy_owner_data__8TItemMagFPv)(arg0);
}

void apply_natural_evolution__8TItemMagFPv(Self_801124C4 *self) {
  unsigned int new_var;
  s32 stage;
  s16 level;
  u8 before;
  stage = ((s8 (*)(void *))get_evolution_stage__8TItemMagFPv)(self);
  level = TItemMagSub__sub_8011455C(self->data);
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
        if (((s32 (*)(void *, M2C_UNK))check_action_probability__8TItemMagFPvi)(arg0, 0) != 0) {
            ((M2C_UNK (*)(void *, u8))request_support_action__8TItemMagFPvi)(arg0, M2C_FIELD(arg0, u8 *, 0x1BD));
        }
    } else if (arg1 & 1) {
        if (((s32 (*)(void *, M2C_UNK))check_action_probability__8TItemMagFPvi)(arg0, 1) != 0) {
            ((M2C_UNK (*)(void *, u8))request_support_action__8TItemMagFPvi)(arg0, M2C_FIELD(arg0, u8 *, 0x1BE));
        }
    } else if (arg1 & 2) {
        if (((s32 (*)(void *, M2C_UNK))check_action_probability__8TItemMagFPvi)(arg0, 2) != 0) {
            ((M2C_UNK (*)(void *, u8))request_support_action__8TItemMagFPvi)(arg0, M2C_FIELD(arg0, u8 *, 0x1BF));
        }
    } else if (arg1 & 0x80) {
        if (((s32 (*)(void *, M2C_UNK))check_action_probability__8TItemMagFPvi)(arg0, 3) != 0) {
            ((M2C_UNK (*)(void *, u8))request_support_action__8TItemMagFPvi)(arg0, M2C_FIELD(arg0, u8 *, 0x1C0));
        }
    } else {
        if (arg1 & 0x20) {
            ((M2C_UNK (*)(void *, u8))request_support_action__8TItemMagFPvi)(arg0, 2U);
            return;
        }
        if (arg1 & 0x10) {
            ((M2C_UNK (*)(void *, u8))request_support_action__8TItemMagFPvi)(arg0, 3U);
            return;
        }
        if (arg1 & 4) {
            ((M2C_UNK (*)(void *, u8))request_support_action__8TItemMagFPvi)(arg0, 5U);
            return;
        }
        if (arg1 & 8) {
            ((M2C_UNK (*)(void *, u8))request_support_action__8TItemMagFPvi)(arg0, 4U);
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

    if (!(M2C_FIELD(arg0, s32 *, 0x18C) & 1)) {
        return 0;
    }
    delta = 0;
    cur = obj_getS16_32C(M2C_FIELD(arg0, s32 *, 0xF0));
    lim = get_field_2b8__14TItemProShieldFPv(M2C_FIELD(arg0, void **, 0xF0));
    ev = 0;
    if (M2C_FIELD(arg0, s16 *, 0x1DC) != cur) {
        if (cur < M2C_FIELD(arg0, s16 *, 0x1DC)) {
            delta = M2C_FIELD(arg0, s16 *, 0x1DC) - cur;
        }
        M2C_FIELD(arg0, s16 *, 0x1DC) = cur;
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
    if (M2C_FIELD(arg0, s16 *, 0x19A) < 0x1E) {
        if (test_flags__8TItemMagFPvUi(arg0 + 0x1D4, 4) == 0) {
            ev |= 4;
            set_flags__8TItemMagFPvUi(arg0 + 0x1D4, 4);
        }
    } else if (M2C_FIELD(arg0, s16 *, 0x19A) > 0x64) {
        if (test_flags__8TItemMagFPvUi(arg0 + 0x1D4, 8) == 0) {
            ev |= 8;
            set_flags__8TItemMagFPvUi(arg0 + 0x1D4, 8);
        }
    } else {
        clear_feed_flags__8TItemMagFPvUi(arg0 + 0x1D4, 0xC);
    }
    if (M2C_FIELD(arg0, s16 *, 0x1D4) < M2C_FIELD(arg0, VObj_80112720 **, 0xF0)->m14()) {
        M2C_FIELD(arg0, s16 *, 0x1D4) = M2C_FIELD(arg0, VObj_80112720 **, 0xF0)->m14();
        ev |= 0x20;
    }
    g = get_global_state__14TOKeyMachine01Fv();
    if (M2C_FIELD(arg0, s16 *, 0x1D6) != g) {
        M2C_FIELD(arg0, s16 *, 0x1D6) = g;
        if (is_boss_area() == 1) {
            ev |= 0x80;
        }
    }
    if (lbl_805DABAC == (f32)get_sub_value__8TItemMagFi(M2C_FIELD(arg0, void **, 0xF0)) &&
        test_flags__8TItemMagFPvUi(arg0 + 0x1D4, 0x40) == 0) {
        set_flags__8TItemMagFPvUi(arg0 + 0x1D4, 0x40);
        ev |= 0x40;
    } else if ((f32)get_sub_value__8TItemMagFi(M2C_FIELD(arg0, void **, 0xF0)) < lbl_805DABAC &&
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
            tbl = get_mag_feed_result(M2C_FIELD(arg0, s32 *, 0x1B8), *rec);
            if (tbl != NULL) {
                stats.c = (s8)tbl[0];
                stats.d = (s8)tbl[1];
                stats.e = (s8)tbl[2];
                stats.f = (s8)tbl[3];
                stats.a = (s8)tbl[4];
                stats.b = (s8)tbl[5];
                set_flags__8TItemMagFPvUi(arg0 + 0x1D4, 0x10);
                if (TItemMag__data_805DABA4 != M2C_FIELD(arg0, f32 *, 0x190)) {
                    M2C_FIELD(arg0, f32 *, 0x194) = M2C_FIELD(arg0, f32 *, 0x194) + TItemMag__data_805DABA8;
                } else {
                    M2C_FIELD(arg0, f32 *, 0x190) = lbl_805DABB0;
                }
            }
        }
    }
    if (((s32 (*)(void *))get_flag_40__8TItemMagFPv)(arg0) == 0) {
        for (i = 0; i != 2; i++) {
            if (((Mag_80112A3C *)arg0)->subs[i] != NULL &&
                ((s32 (*)(u8 *, void *))get_world_position__11TItemMagSubFPvUi)(((Mag_80112A3C *)arg0)->subs[i], pos) != 0) {
                spawn_particle_effect(pos, 0x9B);
            }
        }
        ((void (*)(int, int, int, int))play_sound_effect)(0x5B211, M2C_FIELD(arg0, s32 *, 0xF0) + 0x38, 0, 0);
    }
    return apply_feed_stats__8TItemMagFPvPv(arg0, (u8 *)&stats);
}

void cast_support_technique__8TItemMagFPvi(u8 *self, s32 technique) {
    TargetList_80112BC4 targets;
    s32 level = M2C_FIELD(self, s16 *, 0x198) / 40;
    if (M2C_FIELD(self, u8 **, 0xF0) == NULL) {
        return;
    }
    switch (technique) {
    case 13:
        create__9TTecSiftaFPvPvPv(M2C_FIELD(self, u8 **, 0xF0), M2C_FIELD(self, u8 **, 0xF0) + 0x38, level);
        break;
    case 10:
        create__10TTecDebandFiii(M2C_FIELD(self, u8 **, 0xF0), M2C_FIELD(self, u8 **, 0xF0) + 0x38, level);
        break;
    case 15:
        create__9TTecRestaFPvPvPv(M2C_FIELD(self, u8 **, 0xF0), M2C_FIELD(self, u8 **, 0xF0) + 0x38, level);
        break;
    case 17:
        construct_target_cursor_records__10TObjPlayerFi(&targets);
        targets.count = 1;
        targets.ids[0] = obj_getField1c(M2C_FIELD(self, u8 **, 0xF0));
        targets.ids[1] = 0;
        create__12TTecReverserFPvPvPvPv(M2C_FIELD(self, u8 **, 0xF0), M2C_FIELD(self, u8 **, 0xF0) + 0x38, &targets, level);
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
        mag_feed_add_def((void *) (arg0 + 0x198), (int) (M2C_FIELD(arg1, s16 *, 4)));
        TItemMag__sub_8011423C((void *) (arg0 + 0x198), (int) (M2C_FIELD(arg1, s16 *, 6)));
        mag_feed_add_mind((void *) (arg0 + 0x198), (int) (M2C_FIELD(arg1, s16 *, 0xA)));
        TItemMag__sub_80114198((void *) (arg0 + 0x198), (int) (M2C_FIELD(arg1, s16 *, 8)));
        add_stat_clamped__8TItemMagFPvi((void *) (arg0 + 0x198), (int) (M2C_FIELD(arg1, s16 *, 0)));
        add_clamped_stat__8TItemMagFPvi((void *) (arg0 + 0x198), (int) (M2C_FIELD(arg1, s16 *, 2)));
        set_field_EE__8TItemMagFPvUc((void *) (arg0), (void *) (((u8 (*)(void *))TItemMagSub__sub_8011455C)((void *) (arg0 + 0x198))));
        if (TObjPlayer__sub_80102C30((void *) (arg0)) == 2) {
            refresh_owner_stats__5TItemFPv((void *) (arg0));
            if (obj_isState2_324((int) (M2C_FIELD(arg0, s32 *, 0xF0))) == 0) {
                arg1 = (u8 *) get_item_field_6__10TObjPlayerFPv((int) (M2C_FIELD(arg0, s32 *, 0xF0)));
                if ((arg1 != NULL) && (get_item_info__10TObjPlayerFiiPv((int) (arg1), (int) (M2C_FIELD(arg0, s32 *, 0xF0)), (int) (0)) == 0)) {
                    send_6x26_unequip_item__10TObjPlayerFPvPv((int) (M2C_FIELD(arg0, s32 *, 0xF0)), (int) (get_field_d8__10TObjPlayerFPv((int) (arg1))));
                }
            }
        }
        ((M2C_UNK (*)(void *))apply_natural_evolution__8TItemMagFPv)((void *) (arg0));
        return 1;
    }
    return 0;
}

void TItemMag__vt15(void* p, s32 _w1) { select_support_action__8TItemMagFPvi((u8 *)(p), (s32)(_w1)); }

void select_support_action__8TItemMagFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r4;
    apply_feed_delta__8TItemMagFPv((u8 *)(arg0));
    M2C_FIELD(arg0, s32 *, 0x18C) = (s32) (M2C_FIELD(arg0, s32 *, 0x18C) & 0xF0);
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x18C) | arg1;
    M2C_FIELD(arg0, s32 *, 0x18C) = temp_r4;
    M2C_FIELD(arg0, f32 *, 0x1C8) = (f32) lbl_805DABB4;
    M2C_FIELD(arg0, s32 *, 0x1CC) = 0;
    ((M2C_UNK (*)(void *, int))select_action_motion__8TItemMagFPv)((void *) (arg0), (int) (temp_r4));
    ((M2C_UNK (*)(void *, int))set_subs_visible__8TItemMagFPvi)((void *) (arg0), (int) (1));
}

void request_support_action__8TItemMagFPvi(void *arg0, s32 arg1) {
    if ((is_flag_set__6TLobbyFv() != 0 || is_challenge_mode_active() != 0) && (arg1 == 7 || arg1 == 6)) {
        return;
    }
    if (is_quest_active() != 0 && arg1 == 7) {
        return;
    }
    if (arg1 != 1) {
        if (get_status_flag__8TItemMagFPv(arg0) != 0 && !(TItemMag__data_805DABA4 < M2C_FIELD(arg0, f32 *, 0x1C8)) && check_feed_state__8TItemMagFPvi(arg0, arg1) != 0) {
            send_6x61_activate_mag_effect(arg0, arg1);
        }
    } else {
        select_support_action__8TItemMagFPvi((u8 *)arg0, arg1);
    }
}

void transfer_energy__8TItemMagFPv(void *arg0) {
    u32 temp_r3;
    s32 temp_r4;

    temp_r3 = M2C_FIELD(arg0, u32 *, 0xF0);
    if ((temp_r3 != 0U) && (get_mag_id__8TItemMagFPv(temp_r3 + 0x644) == 0)) {
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x1D0) - M2C_FIELD(arg0, s32 *, 0x1CC);
        if (temp_r4 > 0) {
            set_type__10TObjPlayerFPvi(M2C_FIELD(arg0, u32 *, 0xF0) + 0x644, temp_r4);
        }
    }
}

void apply_feed_delta__8TItemMagFPv(u8 *arg0) {
    s32 temp_r4;

    if (((u32) M2C_FIELD(arg0, u32 *, 0xF0) != 0U) && (test_flags__8TItemMagFPvUi(arg0 + 0x1D4, 0x100) != 0U)) {
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x1D0) - M2C_FIELD(arg0, s32 *, 0x1CC);
        if (temp_r4 > 0) {
            decrement_clamp__10TObjPlayerFPvi(M2C_FIELD(arg0, u32 *, 0xF0) + 0x644, temp_r4);
        }
        clear_feed_flags__8TItemMagFPvUi(arg0 + 0x1D4, 0x100);
    }
}

void update_protection__8TItemMagFv(u8 *self) {
    M2C_FIELD(self, s32 *, 0x1D0) = (s32) (lbl_805DABB4 * (f32) ((((s16) get_sync__8TItemMagFPv(self + 0x198) + (s16) get_item_type__8TItemMagFPv(self + 0x198)) / 3) + 40));
    if (M2C_FIELD(self, s32 *, 0x1D0) > 900) {
        M2C_FIELD(self, s32 *, 0x1D0) = 900;
    }
    if (M2C_FIELD(self, u32 *, 0xF0) != 0 && get_mag_id__8TItemMagFPv(M2C_FIELD(self, u32 *, 0xF0) + 0x644) < M2C_FIELD(self, s32 *, 0x1D0)) {
        set_type__10TObjPlayerFPvi(M2C_FIELD(self, s32 *, 0xF0) + 0x644, M2C_FIELD(self, s32 *, 0x1D0));
        set_flags__8TItemMagFPvUi(self + 0x1D4, 0x100);
    }
}

void update_feed_timer__8TItemMagFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1CC) == 0) {
        ((M2C_UNK (*)(void))update_protection__8TItemMagFv)();
    }
    transfer_energy__8TItemMagFPv((void *)(arg0));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1D0) <= (s32) M2C_FIELD(arg0, s32 *, 0x1CC)) {
        apply_feed_delta__8TItemMagFPv((u8 *)((u8 *)(arg0)));
        request_support_action__8TItemMagFPvi((void *)((void*)(arg0)), (s32)((void*)(1)));
    }
    if ((M2C_FIELD(arg0, s32 *, 0x1CC) % 60) == 0) {
        apply_switch_attack__5TItemFPvi(arg0, 0x6C);
    }
}

void feed_if_over_90__8TItemMagFPv(void* p) { if (*(int*)((char*)p + 0x1cc) > 90) { request_support_action__8TItemMagFPvi((void *)((void*)(p)), (s32)((void*)((void*)1))); } }

void feed_if_over_45__8TItemMagFPv(void* p) { if (*(int*)((char*)p + 0x1cc) > 45) { request_support_action__8TItemMagFPvi((void *)((void*)(p)), (s32)((void*)((void*)1))); } }

void update_feed__8TItemMagFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1CC);
    if ((temp_r0 != 0x5A) && (temp_r0 > 0x5A)) {
        request_support_action__8TItemMagFPvi((void *)((void*)(arg0)), (s32)((void*)(1)));
    }
}

void check_level_cap__8TItemMagFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1CC);
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

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1CC);
    if (temp_r0 == 0x5A) {
        if (obj_getS16_32C(M2C_FIELD(arg0, s32 *, 0xF0)) > 0) {
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
        cast_support_technique__8TItemMagFPvi((u8 *)((void *)(arg0)), (s32)((M2C_UNK)(0xD)));
        cast_support_technique__8TItemMagFPvi((u8 *)((void *)(arg0)), (s32)((M2C_UNK)(0xA)));
        return;
    }
    if (temp_r0 > 0x5A) {
        request_support_action__8TItemMagFPvi((void *)((void*)(arg0)), (s32)((void*)(1)));
    }
}

}
