#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80118334_801181D0 { char pad[0x18]; };
struct VObj_80118334_801181D0 : Base_80118334_801181D0 {
    virtual void m0();
    virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4();
    virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8();
    virtual void m9(); virtual void m10(); virtual void m11(); virtual void m12();
    virtual void m13(); virtual void m14(); virtual void m15(); virtual void m16();
    virtual void m17(); virtual void m18(); virtual void m19(); virtual void m20();
    virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24();
    virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28();
    virtual void m29(); virtual void m30(); virtual void m31(); virtual void m32();
    virtual void m33(); virtual void m34(); virtual void m35(); virtual void m36();
    virtual void m37(); virtual void m38(); virtual void m39(); virtual void m40();
    virtual void m41(); virtual void m42(); virtual void m43(); virtual void m44();
    virtual void m45(); virtual void m46(); virtual void m47(); virtual void m48();
    virtual void m51();
};

struct VBase_18_1a8f71 { char pad[0x18]; };

struct VObj_18_1a8f71 : VBase_18_1a8f71 {
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
    virtual M2C_UNK m17(M2C_UNK);
};

struct RecoveredGlobal_801186EC___vt__14TItemProShield { M2C_UNK value; u8 remaining[0xCC]; };

struct Status_80118558 { s8 a; u8 b; u8 pad[2]; u32 c; s32 d; s32 e; s32 f; };

extern "C" {
void TItemProShield__vt12(u8 *arg0);
s32 set_dfp_bonus__9TItemDataFPvs(s32 a0, int a1);
s32 set_bswapped_field_8__9TItemDataFPvs(s32 a0, int a1);
void TItemProShield__vt16(void *arg0, void *arg1);
int TItemEquipBase__sub_8010A82C(void*);
int TItemProShield__vt43(void* p);
M2C_UNK play_sound_effect(int, int, int, int);
M2C_UNK ct_init__14TItemEffShieldFPvPvs(int, int, void *);
M2C_UNK TObjPlayer__sub_8010A1D0(int, int, void *, int);
s32 __nw__7TObjectFUl(int);
s32 __nw__15TItemHeapObjectFUl(int);
M2C_UNK construct_timer_event__10TObjPlayerFPv(int, int, void *, int);
s32 get_flag_40__8TItemMagFPv(void *);
s32 get_id__13TItemProArmorFPv(void *);
u8 get_slot_count__14TItemProShieldFPv(void *);
M2C_UNK init_item_timer_event__10TObjPlayerFPv(int, int, void *, int);
void TItemProShield__vt42(u8 *arg0);
int fn_800F953C(void*);
    extern int TItemProShield__shield_table;
void free__14TItemProShieldFv(void);
M2C_UNK bswap_32__FPUl(s32);
s32 fn_800F955C(s32);
extern s32 lbl_805D2C3C;
extern int TItemProShield__shield_table;
void load_data__14TItemProShieldFv(void);
void __dt__14TItemEquipBaseFv(void *, int);
void free_obj_heap__10TObjPlayerFPv(void *);
extern M2C_UNK __vt__14TItemProShield[];
void *__dt__14TItemProShieldFv(void *arg0, s16 arg1);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *create_instance__14TItemProShieldFi(s32 arg0);
u8 * TItemEquipBase__ct(void *);
s16 get_bswap16_field8__9TItemDataFPv(void *);
s16 getS16_06__9TItemDataFPv(void *);
s32 lookup_item_pmt_record(void *);
s32 get_shield_pmt_entry__10TObjPlayerFUc(u8);
M2C_UNK set_equip_flag__14TItemEquipBaseFPvUc(void *, int);
M2C_UNK fn_80117FEC(void *);
extern M2C_UNK __vt__14TItemProShield[];
extern s32 lbl_805D2C38;
extern int TItemProShield__shield_table;
u8 *TItemProShield__ct(u8 *arg0, M2C_UNK arg1, u8 *arg2);
M2C_UNK add_actor_tp(u32, s32);
M2C_UNK add_actor_hp(u32, s32);
s16 obj_getS16_2BA(u32);
s8 get_field_ed__10TObjPlayerFPv(void *);
s16 get_field_2b8__14TItemProShieldFPv(u32);
s32 get_id__13TItemProArmorFPv(void *);
s32 get_flag_40__8TItemMagFPv(void *);
M2C_UNK create_shield_effect__14TItemProShieldFiUsUi(s32, s32, s32);
u8 get_slot_count__14TItemProShieldFPv(void *);
M2C_UNK play_shield_sound_cue(Status_80118558 *);
M2C_UNK reset_status_block__10TObjPlayerFPv(Status_80118558 *);
extern s32 tl_05;
extern const f32 lbl_805DABF0;
void TItemProShield__vt28(void *arg0);
}

extern "C" {

void TItemProShield__vt14(void *arg0);
int TItemProShield__vt44(void* p);
void TItemProShield__vt49(void);
void deactivate_shield_effect__14TItemProShieldFPvi(void *arg0, s32 arg1);
void set_params__14TItemProShieldFiPv(s32 arg0, void *arg1);
M2C_UNK bind_loaded_resources__14TItemEquipBaseFPv(void *);
int TItemEquipBase__sub_8010A82C(void*);
M2C_UNK register_technique_boosts__14TItemEquipBaseFPvPv(void *, s32);
M2C_UNK draw_ginja_object(u32);
M2C_UNK refresh_owner_stats__5TItemFPv(void *);
M2C_UNK set_model_fade_alpha__10TObjPlayerFf();
M2C_UNK TObjPlayer__sub_8036414C();
M2C_UNK TObjPlayer__sub_80364198();
M2C_UNK push_matrix_from();
M2C_UNK pop_matrix();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK get_item_ptr__10TObjPlayerFPvi(u32, s32);
M2C_UNK get_mag_scale__10TObjPlayerFPv(void *);
M2C_UNK notify_fish_if_valid__10TObjPlayerFUi(s32);
s32 obj_testFlags30(void *, M2C_UNK);
int update_with_player__14TItemEquipBaseFi(void*);
M2C_UNK warn_if_gauge_low__10TObjPlayerFv();

extern s32 some_id_805c6f74;

void deactivate_shield_effect__14TItemProShieldFPvi(void *arg0, s32 arg1) {
    if (((u32) M2C_FIELD(arg0, u32 *, 0xF4) != 0U) && ((u32) M2C_FIELD(arg0, u32 *, 0xF0) != 0U) && (obj_testFlags30(arg0, 0x08000000) == 0) && (get_flag_40__8TItemMagFPv((void *)(arg0)) == 0)) {
        get_item_ptr__10TObjPlayerFPvi(M2C_FIELD(arg0, u32 *, 0xF0), arg1);
        push_matrix_from();
        TObjPlayer__sub_80364198();
        some_id_805c6f74 &= 0xFFFFFFEF;
        get_mag_scale__10TObjPlayerFPv(arg0);
        set_model_fade_alpha__10TObjPlayerFf();
        if (M2C_FIELD(arg0, s32 *, 0x19C) & 2) {
            begin_effect_render__13TParticleCtrlFv();
        }
        notify_fish_if_valid__10TObjPlayerFUi(M2C_FIELD(arg0, s32 *, 0x24));
        draw_ginja_object(M2C_FIELD(arg0, u32 *, 0xF4));
        if (M2C_FIELD(arg0, s32 *, 0x19C) & 2) {
            end_effect_render__13TParticleCtrlFv();
        }
        warn_if_gauge_low__10TObjPlayerFv();
        TObjPlayer__sub_8036414C();
        pop_matrix();
    }
}

int TItemProShield__vt44(void* p) { return update_with_player__14TItemEquipBaseFi(p); }
void TItemProShield__vt49(void) {  }
void set_params__14TItemProShieldFiPv(s32 arg0, void *arg1) {
    set_dfp_bonus__9TItemDataFPvs(arg0, M2C_FIELD(arg1, u8 *, 0x198));
    set_bswapped_field_8__9TItemDataFPvs(arg0, M2C_FIELD(arg1, u8 *, 0x199));
}

void TItemProShield__vt12(u8 *arg0) {
    if ((u8) M2C_FIELD(arg0, u8 *, 0x19A) < (u8) M2C_FIELD(arg0, u8 *, 0x198)) {
        M2C_FIELD(arg0, u8 *, 0x198) = 0U;
    }
    if ((u8) M2C_FIELD(arg0, u8 *, 0x19B) < (u8) M2C_FIELD(arg0, u8 *, 0x199)) {
        M2C_FIELD(arg0, u8 *, 0x199) = 0U;
    }
}

void TItemProShield__vt14(void *arg0) {
    ((VObj_80118334_801181D0 *)arg0)->m51();
    register_technique_boosts__14TItemEquipBaseFPvPv(arg0, M2C_FIELD(arg0, s32 *, 0x194));
    if (M2C_FIELD(arg0, s32 *, 0x19C) & 4) {
        refresh_owner_stats__5TItemFPv(arg0);
    }
    bind_loaded_resources__14TItemEquipBaseFPv(arg0);
}
void TItemProShield__vt16(void *arg0, void *arg1) {
    set_dfp_bonus__9TItemDataFPvs((s32)(arg1), (int)(M2C_FIELD(arg0, u8 *, 0x198)));
    set_bswapped_field_8__9TItemDataFPvs((s32)(arg1), (int)(M2C_FIELD(arg0, u8 *, 0x199)));
}
int TItemProShield__vt43(void* p) { return TItemEquipBase__sub_8010A82C(p); }
void TItemProShield__vt42(u8 *arg0) {
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r3_4;
    s32 temp_r3_5;
    u8 temp_r3;
    if (get_flag_40__8TItemMagFPv((void *)(arg0)) == 0) {
        play_sound_effect((int) (0x4000B20A), (int) (M2C_FIELD(arg0, s32 *, 0xF0) + 0x38), (int) (0), (int) (0));
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x174) != 0U) {
        temp_r3 = get_slot_count__14TItemProShieldFPv((void *) (arg0));
        switch ((s32) temp_r3) {
        case 39:
            if ((u32) M2C_FIELD(arg0, u32 *, 0x174) != 0U) {
                temp_r3_2 = __nw__15TItemHeapObjectFUl((int) (0x2C));
                if (temp_r3_2 != 0) {
                    init_item_timer_event__10TObjPlayerFPv((int) (temp_r3_2), (int) (M2C_FIELD(arg0, u32 *, 0x174)), (void *) (get_id__13TItemProArmorFPv((void *) (arg0))), (int) (0x1C2));
                }
                temp_r3_3 = __nw__15TItemHeapObjectFUl((int) (0x2C));
                if (temp_r3_3 != 0) {
                    construct_timer_event__10TObjPlayerFPv((int) (temp_r3_3), (int) (M2C_FIELD(arg0, u32 *, 0x174)), (void *) (get_id__13TItemProArmorFPv((void *) (arg0))), (int) (0x1C2));
                }
            }
            break;
        case 26:
            if ((u32) M2C_FIELD(arg0, u32 *, 0x174) != 0U) {
                temp_r3_4 = __nw__7TObjectFUl((int) (0x2C));
                if (temp_r3_4 != 0) {
                    ct_init__14TItemEffShieldFPvPvs((int) (temp_r3_4), (int) (M2C_FIELD(arg0, u32 *, 0x174)), (void *) (get_id__13TItemProArmorFPv((void *) (arg0))));
                }
            }
            break;
        }
        if ((temp_r3 >= 0x53U) && (temp_r3 <= 0x82U)) {
            temp_r3_5 = __nw__7TObjectFUl((int) (0x30));
            if (temp_r3_5 != 0) {
                TObjPlayer__sub_8010A1D0((int) (temp_r3_5), (int) (M2C_FIELD(arg0, u32 *, 0x174)), (void *) (get_id__13TItemProArmorFPv((void *) (arg0))), (int) (temp_r3));
            }
        }
    }
}

void TItemProShield__vt28(void *arg0) {
    Status_80118558 st;
    if ((u32) M2C_FIELD(arg0, u32 *, 0xF0) != 0U) {
        if (get_flag_40__8TItemMagFPv(arg0) == 0) {
            create_shield_effect__14TItemProShieldFiUsUi(tl_05, get_id__13TItemProArmorFPv(arg0), M2C_FIELD(arg0, s32 *, 0x190));
            reset_status_block__10TObjPlayerFPv(&st);
            st.a = get_field_ed__10TObjPlayerFPv(arg0);
            st.b = get_slot_count__14TItemProShieldFPv(arg0);
            st.c = M2C_FIELD(arg0, u32 *, 0xF0);
            play_shield_sound_cue(&st);
        }
        if (M2C_FIELD(arg0, s32 *, 0x19C) & 1) {
            switch (get_slot_count__14TItemProShieldFPv(arg0)) {
            case 34:
                add_actor_hp(M2C_FIELD(arg0, u32 *, 0xF0), (s32) (lbl_805DABF0 * (f32)get_field_2b8__14TItemProShieldFPv(M2C_FIELD(arg0, u32 *, 0xF0))));
                break;
            case 35:
                add_actor_hp(M2C_FIELD(arg0, u32 *, 0xF0), (s32) (lbl_805DABF0 * (f32)get_field_2b8__14TItemProShieldFPv(M2C_FIELD(arg0, u32 *, 0xF0))));
                add_actor_tp(M2C_FIELD(arg0, u32 *, 0xF0), (s32) (lbl_805DABF0 * (f32)obj_getS16_2BA(M2C_FIELD(arg0, u32 *, 0xF0))));
                break;
            }
        }
    }
}

u8 *TItemProShield__ct(u8 *arg0, M2C_UNK arg1, u8 *arg2) {
    TItemEquipBase__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_801186EC___vt__14TItemProShield *)&__vt__14TItemProShield).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2C38;
    ((VObj_18_1a8f71 *)(arg0))->m17(3);
    M2C_FIELD(arg0, s32 *, 0x18C) = lookup_item_pmt_record(arg2);
    M2C_FIELD(arg0, s32 *, 0x190) = (s32) ((*(s32 *)&TItemProShield__shield_table) + ((s8) M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x18C), u8 *, 0xD) * 0x2C));
    M2C_FIELD(arg0, s32 *, 0x194) = get_shield_pmt_entry__10TObjPlayerFUc(M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x18C), u8 *, 0x19));
    M2C_FIELD(arg0, u8 *, 0x19A) = (u8) M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x18C), u8 *, 0x17);
    M2C_FIELD(arg0, u8 *, 0x19B) = (u8) M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x18C), u8 *, 0x16);
    M2C_FIELD(arg0, s8 *, 0x198) = getS16_06__9TItemDataFPv(arg2);
    M2C_FIELD(arg0, s8 *, 0x199) = get_bswap16_field8__9TItemDataFPv(arg2);
    M2C_FIELD(arg0, s32 *, 0x19C) = 0;
    set_equip_flag__14TItemEquipBaseFPvUc((void *) (arg0), (int) (0x24));
    fn_80117FEC((void *) (arg0));
    return arg0;
}

u8 *create_instance__14TItemProShieldFi(s32 arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != 0) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1A0));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(TItemProShield__ct((u8 *)(temp_r3), (M2C_UNK)(tl_05), (u8 *)(arg0)));
        }
        return var_r0;
    }
    return NULL;
}

void free__14TItemProShieldFv(void) { fn_800F953C((void*)(TItemProShield__shield_table)); TItemProShield__shield_table = 0; }
void load_data__14TItemProShieldFv(void) {
    s32 temp_r3;
    s32 var_r31;
    s32 var_r30;
    s32 var_r29;
    s32 var_r28;
    temp_r3 = fn_800F955C(lbl_805D2C3C);
    (*(s32 *)&TItemProShield__shield_table) = temp_r3;
    var_r31 = 0;
    var_r28 = temp_r3;
    do {
        var_r29 = var_r28;
        var_r30 = 0;
loop_2:
        bswap_32__FPUl(var_r29);
        var_r30 += 1;
        var_r29 += 4;
        if (var_r30 < 8) {
            goto loop_2;
        }
        bswap_32__FPUl(var_r28 + 0x20);
        bswap_32__FPUl(var_r28 + 0x24);
        bswap_32__FPUl(var_r28 + 0x28);
        var_r31 += 1;
        var_r28 += 0x2C;
    } while (var_r31 != 0x32);
}
void *__dt__14TItemProShieldFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TItemProShield;
        __dt__14TItemEquipBaseFv(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}
