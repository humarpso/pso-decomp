#include "types.h"
#include "pso/object/TObjMotion.h"
#include "pso/item/TItem.h"
#include "pso/item/TItemProShield.h"
#include "pso/TParticleCtrl.h"
#include "pso/item/TItemEquipBase.h"
#include "pso/player/TObjPlayer.h"

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
    virtual s32 m17(s32);
};

struct RecoveredGlobal_801186EC___vt__14TItemProShield { s32 value; u8 remaining[0xCC]; };

struct Status_80118558 { s8 a; u8 b; u8 pad[2]; u32 c; s32 d; s32 e; s32 f; };

extern "C" {
s32 set_dfp_bonus__9TItemDataFs(s32 a0, int a1);
s32 set_bswapped_field_8__9TItemDataFs(s32 a0, int a1);
void TItemProShield__vt16(void *arg0, void *arg1);
int TItemEquipBase__sub_8010A82C(void*);
s32 play_sound_effect(int, int, int, int);
s32 ct_init__14TItemEffShieldFPvPvs(int, int, void *);
s32 TObjPlayer__sub_8010A1D0(int, int, void *, int);
s32 __nw__7TObjectFUl(int);
s32 __nw__15TItemHeapObjectFUl(int);
s32 construct_timer_event__13TUnk_804A0628Fv(int, int, void *, int);
s32 get_flag_40__8TItemMagFv(void *);
s32 get_id__13TItemProArmorFv(void *);
s32 init_item_timer_event__13TUnk_804A0648Fv(int, int, void *, int);
int fn_800F953C(void*);
    extern int TItemProShield__shield_table;
s32 bswap_32__FPUl(s32);
s32 fn_800F955C(s32);
extern s32 lbl_805D2C3C;
extern int TItemProShield__shield_table;
void __dt__14TItemEquipBaseFv(void *, int);
void free_obj_heap__10TObjPlayerFPv(void *);
extern s32 __vt__14TItemProShield[];
void *__dt__14TItemProShieldFv(void *arg0, s16 arg1);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
u8 * TItemEquipBase__ct(void *);
s16 get_bswap16_field8__9TItemDataFPv(void *);
s16 getS16_06__9TItemDataFPv(void *);
s32 lookup_item_pmt_record(void *);
extern s32 __vt__14TItemProShield[];
extern s32 lbl_805D2C38;
extern int TItemProShield__shield_table;
u8 *TItemProShield__ct(u8 *arg0, s32 arg1, u8 *arg2);
s32 add_actor_tp(u32, s32);
s32 add_actor_hp(u32, s32);
s16 obj_getS16_2BA(u32);
s32 get_id__13TItemProArmorFv(void *);
s32 get_flag_40__8TItemMagFv(void *);
s32 create_shield_effect__14TItemProShieldFlUsUl(s32, s32, s32);
s32 play_shield_sound_cue(Status_80118558 *);
extern s32 tl_05;
extern const f32 lbl_805DABF0;
}

extern "C" {

void set_params__14TItemProShieldFiPv(s32 arg0, void *arg1);
int TItemEquipBase__sub_8010A82C(void*);
s32 register_technique_boosts__14TItemEquipBaseFPvPv(void *, s32);
s32 draw_ginja_object(u32);
s32 refresh_owner_stats__5TItemFPv(void *);
s32 set_model_fade_alpha__10TObjPlayerFf();
s32 TObjPlayer__sub_8036414C();
s32 TObjPlayer__sub_80364198();
s32 push_matrix_from();
s32 pop_matrix();
s32 get_mag_scale__10TObjPlayerFv(void *);
s32 obj_testFlags30(void *, s32);

extern s32 model_render_flags;

void TItemProShield::deactivate_shield_effect(s32 arg1) {
    if (((u32) this->m_f4 != 0U) && ((u32) this->m_f0 != 0U) && (obj_testFlags30(this, 0x08000000) == 0) && (get_flag_40__8TItemMagFv((void *)(this)) == 0)) {
        ((TObjMotion *)(this->m_f0))->get_item_ptr(arg1);
        push_matrix_from();
        TObjPlayer__sub_80364198();
        model_render_flags &= 0xFFFFFFEF;
        get_mag_scale__10TObjPlayerFv(this);
        set_model_fade_alpha__10TObjPlayerFf();
        if (*(s32 *)&this->m_19c & 2) {
            TParticleCtrl::begin_effect_render();
        }
        TObjPlayer::notify_fish_if_valid(this->texture_id);
        draw_ginja_object(this->m_f4);
        if (*(s32 *)&this->m_19c & 2) {
            TParticleCtrl::end_effect_render();
        }
        TObjPlayer::warn_if_gauge_low();
        TObjPlayer__sub_8036414C();
        pop_matrix();
    }
}

void TItemProShield::vfunc_46() { update_with_player(); }
void TItemProShield::vfunc_51() {  }
void set_params__14TItemProShieldFiPv(s32 arg0, void *arg1) {
    set_dfp_bonus__9TItemDataFs(arg0, *(u8 *)((s8 *)arg1 + 0x198));
    set_bswapped_field_8__9TItemDataFs(arg0, *(u8 *)((s8 *)arg1 + 0x199));
}

void TItemProShield::vfunc_14() {
    u8 *arg0 = (u8 *)this;
    if ((u8) *(u8 *)((s8 *)arg0 + 0x19A) < (u8) *(u8 *)((s8 *)arg0 + 0x198)) {
        *(u8 *)((s8 *)arg0 + 0x198) = 0U;
    }
    if ((u8) *(u8 *)((s8 *)arg0 + 0x19B) < (u8) *(u8 *)((s8 *)arg0 + 0x199)) {
        *(u8 *)((s8 *)arg0 + 0x199) = 0U;
    }
}

void TItemProShield::vfunc_16() {
    ((VObj_80118334_801181D0 *)this)->m51();
    register_technique_boosts__14TItemEquipBaseFPvPv(this, *(s32 *)((s8 *)this + 0x194));
    if (*(s32 *)((s8 *)this + 0x19C) & 4) {
        refresh_owner_stats__5TItemFPv(this);
    }
    ((TItemEquipBase *)this)->bind_loaded_resources();
}
void TItemProShield__vt16(void *arg0, void *arg1) {
    set_dfp_bonus__9TItemDataFs((s32)(arg1), (int)(*(u8 *)((s8 *)arg0 + 0x198)));
    set_bswapped_field_8__9TItemDataFs((s32)(arg1), (int)(*(u8 *)((s8 *)arg0 + 0x199)));
}
void TItemProShield::vfunc_45() { TItemEquipBase__sub_8010A82C(this); }
void TItemProShield::vfunc_44() {
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r3_4;
    s32 temp_r3_5;
    u8 temp_r3;
    if (get_flag_40__8TItemMagFv((void *)(((u8 *)this))) == 0) {
        play_sound_effect((int) (0x4000B20A), (int) (*(s32 *)((s8 *)((u8 *)this) + 0xF0) + 0x38), (int) (0), (int) (0));
    }
    if ((u32) *(u32 *)((s8 *)((u8 *)this) + 0x174) != 0U) {
        temp_r3 = ((TItemProShield *)((u8 *)this))->get_slot_count();
        switch ((s32) temp_r3) {
        case 39:
            if ((u32) *(u32 *)((s8 *)((u8 *)this) + 0x174) != 0U) {
                temp_r3_2 = __nw__15TItemHeapObjectFUl((int) (0x2C));
                if (temp_r3_2 != 0) {
                    init_item_timer_event__13TUnk_804A0648Fv((int) (temp_r3_2), (int) (*(u32 *)((s8 *)((u8 *)this) + 0x174)), (void *) (get_id__13TItemProArmorFv((void *) (((u8 *)this)))), (int) (0x1C2));
                }
                temp_r3_3 = __nw__15TItemHeapObjectFUl((int) (0x2C));
                if (temp_r3_3 != 0) {
                    construct_timer_event__13TUnk_804A0628Fv((int) (temp_r3_3), (int) (*(u32 *)((s8 *)((u8 *)this) + 0x174)), (void *) (get_id__13TItemProArmorFv((void *) (((u8 *)this)))), (int) (0x1C2));
                }
            }
            break;
        case 26:
            if ((u32) *(u32 *)((s8 *)((u8 *)this) + 0x174) != 0U) {
                temp_r3_4 = __nw__7TObjectFUl((int) (0x2C));
                if (temp_r3_4 != 0) {
                    ct_init__14TItemEffShieldFPvPvs((int) (temp_r3_4), (int) (*(u32 *)((s8 *)((u8 *)this) + 0x174)), (void *) (get_id__13TItemProArmorFv((void *) (((u8 *)this)))));
                }
            }
            break;
        }
        if ((temp_r3 >= 0x53U) && (temp_r3 <= 0x82U)) {
            temp_r3_5 = __nw__7TObjectFUl((int) (0x30));
            if (temp_r3_5 != 0) {
                TObjPlayer__sub_8010A1D0((int) (temp_r3_5), (int) (*(u32 *)((s8 *)((u8 *)this) + 0x174)), (void *) (get_id__13TItemProArmorFv((void *) (((u8 *)this)))), (int) (temp_r3));
            }
        }
    }
}

void TItemProShield::vfunc_30() {
    Status_80118558 st;
    if ((u32) *(u32 *)((s8 *)this + 0xF0) != 0U) {
        if (get_flag_40__8TItemMagFv(this) == 0) {
            create_shield_effect__14TItemProShieldFlUsUl(tl_05, get_id__13TItemProArmorFv(this), *(s32 *)((s8 *)this + 0x190));
            ((TObjPlayer *)(&st))->reset_status_block();
            st.a = ((TItem *)this)->get_field_ed();
            st.b = ((TItemProShield *)this)->get_slot_count();
            st.c = *(u32 *)((s8 *)this + 0xF0);
            play_shield_sound_cue(&st);
        }
        if (*(s32 *)((s8 *)this + 0x19C) & 1) {
            switch (((TItemProShield *)this)->get_slot_count()) {
            case 34:
                add_actor_hp(*(u32 *)((s8 *)this + 0xF0), (s32) (lbl_805DABF0 * (f32)((TItemProShield *)(*(u32 *)((s8 *)this + 0xF0)))->get_field_2b8()));
                break;
            case 35:
                add_actor_hp(*(u32 *)((s8 *)this + 0xF0), (s32) (lbl_805DABF0 * (f32)((TItemProShield *)(*(u32 *)((s8 *)this + 0xF0)))->get_field_2b8()));
                add_actor_tp(*(u32 *)((s8 *)this + 0xF0), (s32) (lbl_805DABF0 * (f32)obj_getS16_2BA(*(u32 *)((s8 *)this + 0xF0))));
                break;
            }
        }
    }
}

u8 *TItemProShield__ct(u8 *arg0, s32 arg1, u8 *arg2) {
    TItemEquipBase__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_801186EC___vt__14TItemProShield *)&__vt__14TItemProShield).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D2C38;
    ((VObj_18_1a8f71 *)(arg0))->m17(3);
    *(s32 *)((s8 *)arg0 + 0x18C) = lookup_item_pmt_record(arg2);
    *(s32 *)((s8 *)arg0 + 0x190) = (s32) ((*(s32 *)&TItemProShield__shield_table) + ((s8) *(u8 *)((s8 *)(*(s32 *)((s8 *)arg0 + 0x18C)) + 0xD) * 0x2C));
    *(s32 *)((s8 *)arg0 + 0x194) = TObjPlayer::get_shield_pmt_entry(*(u8 *)((s8 *)(*(s32 *)((s8 *)arg0 + 0x18C)) + 0x19));
    *(u8 *)((s8 *)arg0 + 0x19A) = (u8) *(u8 *)((s8 *)(*(s32 *)((s8 *)arg0 + 0x18C)) + 0x17);
    *(u8 *)((s8 *)arg0 + 0x19B) = (u8) *(u8 *)((s8 *)(*(s32 *)((s8 *)arg0 + 0x18C)) + 0x16);
    *(s8 *)((s8 *)arg0 + 0x198) = getS16_06__9TItemDataFPv(arg2);
    *(s8 *)((s8 *)arg0 + 0x199) = get_bswap16_field8__9TItemDataFPv(arg2);
    *(s32 *)((s8 *)arg0 + 0x19C) = 0;
    ((TItemEquipBase *)arg0)->set_equip_flag((int) (0x24));
    ((TItemProShield *)arg0)->sub_80117FEC();
    return arg0;
}

u8 *TItemProShield::create_instance() {
    s32 arg0 = (s32)this;
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != 0) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1A0));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(TItemProShield__ct((u8 *)(temp_r3), (s32)(tl_05), (u8 *)(arg0)));
        }
        return var_r0;
    }
    return NULL;
}

void TItemProShield::free() { fn_800F953C((void*)(TItemProShield__shield_table)); TItemProShield__shield_table = 0; }
void TItemProShield::load_data() {
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
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__14TItemProShield;
        __dt__14TItemEquipBaseFv(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}
