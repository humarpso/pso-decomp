#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_80303204 {
    M2C_UNK sp8;
    f32 spC;
    u8 trailing_storage[0x4];
};

struct RecoveredGlobal_80303204_lbl_804E6B54 { M2C_UNK value; u8 remaining[0x18]; };
typedef char RecoveredGlobal_80303204_lbl_804E6B54_size[sizeof(RecoveredGlobal_80303204_lbl_804E6B54) == 0x1C ? 1 : -1];

struct VBase_18_c44d0a { char pad[0x18]; };

struct VObj_18_c44d0a : VBase_18_c44d0a {
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
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
    virtual void m78();
    virtual void m79();
    virtual void m80();
    virtual void m81();
    virtual void m82();
    virtual void m83();
    virtual void m84();
    virtual void m85();
    virtual void m86();
    virtual M2C_UNK m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual void m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual M2C_UNK m100();
};

struct Stack_803040D0 {
    M2C_UNK sp8;
    f32 spC;
};

struct VBase_18_beae68 { char pad[0x18]; };

struct VObj_18_beae68 : VBase_18_beae68 {
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
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
    virtual void m78();
    virtual void m79();
    virtual void m80();
    virtual void m81();
    virtual void m82();
    virtual void m83();
    virtual void m84();
    virtual void m85();
    virtual void m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual M2C_UNK m92();
};

struct VBase_14_c1c33b { char pad[0x14]; };

struct VObj_14_c1c33b : VBase_14_c1c33b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual s32 m4();
};

struct RecoveredFields_8030390C_arg0 {
    u8 unknown_0[0xB8];
    s16 field_B8;
    u8 unknown_BA[0x306];
    s32 field_3C0;
    u8 unknown_3C4[0x108];
    s32 field_4CC;
};

struct RecoveredGlobal_80303894_lbl_80541E48 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct VBase_18_fd6cbb { char pad[0x18]; };

struct VObj_18_fd6cbb : VBase_18_fd6cbb {
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
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
    virtual void m78();
    virtual void m79();
    virtual void m80();
    virtual void m81();
    virtual void m82();
    virtual void m83();
    virtual void m84();
    virtual void m85();
    virtual void m86();
    virtual void m87();
};

struct Vec_80303AA0 { f32 x; f32 y; f32 z; };

struct VBase_18_26a62c { char pad[0x18]; };

struct VObj_18_26a62c : VBase_18_26a62c {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

struct Vec_8030338C { s32 x; s32 y; s32 z; };

extern "C" {
s32 obj_isState2_324(void *);
M2C_UNK obj_getField1c(void *);
s32 is_alive__9TObjEneDDFPv(void *);
s32 TObjEneDD__sub_800BA828();
extern const f32 lbl_805DEFB0;
extern const f32 lbl_805DEFB4;
void TObjEneDellBiter__sub_803030D8(u8 *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 rotate_xz_pair_by_angle(void *, void *, int);
s32 is_vec_xz_cross_negative(void *, void *);
s32 __ct__7TObjectFP7TObject(void *, void *);
f32 TBoss8Dragon__sub_803D64C0(int);
f32 TBoss8Dragon__sub_803D64DC(int);
f32 TBoss6Type1__sub_803D9370(void *, void *);
extern M2C_UNK lbl_804E6B54[];
extern s32 lbl_805D4070;
extern const f32 lbl_805DEFAC;
u8 *TObjEneDellBiter__sub_80303204(u8 *arg0, s32 arg1, u8 *arg2, s32 arg3, f32 farg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
u32 create_particle_emitter(void *, int);
s32 copy_pos__11TNowLoadingFPvPv(int, void *);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, int);
M2C_UNK transition_enemy_state(void *, int);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, void *);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK play_sound_effect(int, void *, int, int);
s32 TObjEneDellBiter__sub_80305688(void *);
extern const f32 TObjEneDellBiter__data_805DEFD8;
extern const f32 TObjEneDellBiter__data_805DEFE0;
extern const f32 TObjEneDellBiter__data_805DEFE4;
extern const f32 lbl_805DEFEC;
void TObjEneDellBiter__sub_803040D0(u8 *arg0, s32 arg1);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
s32 get_global_state__14TOKeyMachine01Fv(void);
M2C_UNK play_sound_effect(int, void *, int, int);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK TObjPlayer__sub_800A04F0(void *);
M2C_UNK refresh_and_send_entity_flags__12TBoss8DragonFPv(void *);
M2C_UNK request_two_effects__10TObjPlayerFPv(void *);
M2C_UNK apply_effect_variant_b__10TObjPlayerFii(void *, int);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, void *);
M2C_UNK advance_animation_playback(void *);
void TObjEneDellBiter__sub_8030390C(u8 *arg0, s32 arg1);
M2C_UNK get_camera_ctrl__9TObjEneDDFPv(void *, int);
M2C_UNK rotate_matrix_x(int, int);
extern RecoveredGlobal_80303894_lbl_80541E48 lbl_80541E48;
extern s32 TObjEneDellBiter__data_805D6A34;
extern s32 TObjEneDellBiter__data_805D6A38;
extern s32 TObjEneDellBiter__data_805D6A3C;
void TObjEneDellBiter__sub_80303894(void);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *);
M2C_UNK clear_field_388__9TObjEneDDFPv(void *);
M2C_UNK set_active__9TObjEneDDFPv(void *);
M2C_UNK TObjEneDD__sub_800BACA4(void *, f32, f32, f32);
M2C_UNK clear_attack_receipts(void *);
M2C_UNK transition_enemy_state(void *, int);
M2C_UNK advance_animation_playback(void *);
s32 TObjEneDellBiter__sub_803054A8(void *);
s32 TObjEneDellBiter__sub_803054FC(void *);
s32 TObjEneDellBiter__sub_80305550(void *);
extern const f32 lbl_805DEFC8;
void TObjEneDellBiter__sub_80303AA0(u8 *arg0, s32 arg1);
M2C_UNK update_player_state__9TObjEneDDFPv(void *, void *, int);
int get_target_info__9TObjEneDDFPv(void*);
s32 TObjEneDD__sub_800BB878(s32, s32);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK TObjEneBm5GibonU__sub_803D853C(s32, const char *, ...);
M2C_UNK scale_matrix(int, f32, f32, f32);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK draw_chunk_object(int);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK clear_global_state__10TObjPlayerFv();
extern M2C_UNK lbl_804752A0[];
extern char lbl_804752AC[];
extern char lbl_804752BC[];
extern char lbl_804752D0[];
extern char lbl_804752E4[];
extern char lbl_804752F8[];
extern char lbl_8047530C[];
extern char lbl_80475318[];
extern const f32 TObjEneDellBiter__data_805DEFB8;
extern const f32 lbl_805DEFBC;
extern const f32 TObjEneDellBiter__data_805DEFC0;
void TObjEneDellBiter__vt104(u8 *arg0);
}

extern "C" {

struct VObjBase_803042b0_803030D4 { char pad_[0x18]; };
struct VObj_803042b0_803030D4 : VObjBase_803042b0_803030D4 {
#define VS8(n) virtual M2C_UNK m##n##0(); virtual M2C_UNK m##n##1(); virtual M2C_UNK m##n##2(); virtual M2C_UNK m##n##3(); virtual M2C_UNK m##n##4(); virtual M2C_UNK m##n##5(); virtual M2C_UNK m##n##6(); virtual M2C_UNK m##n##7(); virtual M2C_UNK m##n##8(); virtual M2C_UNK m##n##9();
    VS8(0) VS8(1) VS8(2) VS8(3) VS8(4) VS8(5) VS8(6) VS8(7) VS8(8) VS8(9)
    virtual M2C_UNK m100();
};

void TObjEneDellBiter__sub_803030D4(void);
void *TObjEneDellBiter__sub_803031AC(void *arg0, s16 arg1);
void TObjEneDellBiter__vt103(void* p);
void handle_attack_event__16TObjEneDellBiterFPvi(u8 *arg0, s32 arg1);
s32 render_model_if_visible__16TObjEneDellBiterFPv(u8 *arg0);
M2C_UNK play_sound_effect(int, void *, int, int);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK scale_matrix(int, f32, f32, f32);
s32 TObjBoss2Tunnel__sub_8007E5A0(int, int, int, int, int);
M2C_UNK transition_enemy_state(void *, int);
s32 TObjEneDellBiter__sub_803054FC(void *);
M2C_UNK TObjEneDellBiter__sub_80305B60(void *);
M2C_UNK TObjEneDellBiter__sub_80305E1C(void *);
int TObjEneDellBiter__sub_80305F58(void*);
s32 TObjEneRecon__sub_8029E960(void *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, void *);
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK fn_8002B094(int);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
s32 get_mode__11TCameraCtrlFPv(void *);
int get_target_info__9TObjEneDDFPv(void*);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK reset_timer__11TBoss4Type3FPv(int);
M2C_UNK restore_render_scissor(int);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, int);
M2C_UNK set_global_param__8TObjFishFi(int);

void TObjEneDellBiter__sub_803030D4(void) {  }

extern M2C_UNK lbl_804E6B54[];

void TObjEneDellBiter__sub_803030D8(u8 *arg0) {
    f32 temp_f1;
    obj_getField1c((void *) (M2C_FIELD(arg0, u8 **, 0x1C)));
    if (TObjEneDD__sub_800BA828() != 0) {
        queue_destruction__7TObjectFv((void *)((void *) (arg0)));
        return;
    }
    if (is_alive__9TObjEneDDFPv((void *) (M2C_FIELD(arg0, u8 **, 0x1C))) == 0) {
        queue_destruction__7TObjectFv((void *)((void *) (arg0)));
        return;
    }
    if (obj_isState2_324((void *) (M2C_FIELD(arg0, u8 **, 0x1C))) != 0) {
        queue_destruction__7TObjectFv((void *)((void *) (arg0)));
        return;
    }
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x2C);
    if (temp_f1 <= lbl_805DEFB0) {
        queue_destruction__7TObjectFv((void *)((void *) (arg0)));
        return;
    }
    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x1C), f32 *, 0x308) = (f32) (M2C_FIELD(arg0, f32 *, 0x20) * temp_f1);
    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x1C), f32 *, 0x310) = (f32) (M2C_FIELD(arg0, f32 *, 0x28) * M2C_FIELD(arg0, f32 *, 0x2C));
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) (M2C_FIELD(arg0, f32 *, 0x2C) * lbl_805DEFB4);
}

void *TObjEneDellBiter__sub_803031AC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E6B54;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK main_task[];
extern const f32 TObjEneDellBiter__data_805DEFB8;

u8 *TObjEneDellBiter__sub_80303204(u8 *arg0, s32 arg1, u8 *arg2, s32 arg3, f32 farg0) {
    typedef char sp8_offset[(offsetof(Stack_80303204, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80303204, spC) == 0x4) ? 1 : -1];
    Stack_80303204 stack;
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80303204_lbl_804E6B54 *)&lbl_804E6B54).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D4070;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg3;
    M2C_FIELD(arg0, f32 *, 0x2C) = farg0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg3 + 0x38));
    TBoss6Type1__sub_803D9370((void *) (&stack.sp8), (void *) (arg2 + 0x38));
    stack.spC = lbl_805DEFAC;
    M2C_FIELD(arg0, f32 *, 0x20) = TBoss8Dragon__sub_803D64C0((int) (M2C_FIELD(arg2, s32 *, 0x60)));
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) lbl_805DEFAC;
    M2C_FIELD(arg0, f32 *, 0x28) = TBoss8Dragon__sub_803D64DC((int) (M2C_FIELD(arg2, s32 *, 0x60)));
    if (is_vec_xz_cross_negative((void *) (arg0 + 0x20), (void *) (&stack.sp8)) != 0) {
        rotate_xz_pair_by_angle((void *) (arg0 + 0x20), (void *) (arg0 + 0x28), (int) (-0x1800));
    } else {
        rotate_xz_pair_by_angle((void *) (arg0 + 0x20), (void *) (arg0 + 0x28), (int) (0x1800));
    }
    return arg0;
}

s32 render_model_if_visible__16TObjEneDellBiterFPv(u8 *arg0) {
    if (get_mode__11TCameraCtrlFPv(main_task) & 0x20) {
        if (TObjEneRecon__sub_8029E960((void *) (arg0 + 0x3C8)) != 0) {
            set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
            TObjPlayer__sub_803D9B2C();
            TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
            rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
            scale_matrix((int) (0), (f32) (TObjEneDellBiter__data_805DEFB8), (f32) (TObjEneDellBiter__data_805DEFB8), (f32) (TObjEneDellBiter__data_805DEFB8));
            draw__16TObjEneRe7BeruraFPv((void *) (arg0));
            pop_matrix();
            restore_render_scissor((int) (1));
        }
        return 1;
    }
    return 0;
}

void TObjEneDellBiter__vt104(u8 *arg0) {
    if (get_target_info__9TObjEneDDFPv(arg0) != 0) {
        TObjEneBm5GibonU__sub_803D853C(TObjEneDD__sub_800BB878(0, 2), lbl_804752AC);
        TObjEneBm5GibonU__sub_803D853C(TObjEneDD__sub_800BB878(0, 3), lbl_804752BC);
        TObjEneBm5GibonU__sub_803D853C(TObjEneDD__sub_800BB878(0, 4), lbl_804752D0);
        TObjEneBm5GibonU__sub_803D853C(TObjEneDD__sub_800BB878(0, 5), lbl_804752E4);
        TObjEneBm5GibonU__sub_803D853C(TObjEneDD__sub_800BB878(0, 6), lbl_804752F8);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x4BC) == 1) {
            TObjEneBm5GibonU__sub_803D853C(TObjEneDD__sub_800BB878(0, 9), lbl_8047530C);
        } else {
            TObjEneBm5GibonU__sub_803D853C(TObjEneDD__sub_800BB878(0, 9), lbl_80475318);
        }
    }
    if (((VObj_18_26a62c *)(arg0))->m8(lbl_805DEFBC, TObjEneDellBiter__data_805DEFC0) != 0) {
        Vec_8030338C v = *(Vec_8030338C *)lbl_804752A0;
        update_player_state__9TObjEneDDFPv(arg0, &v, 0);
        toggle_particle_effect__10TObjPlayerFv();
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        scale_matrix((int) (0), (f32) (TObjEneDellBiter__data_805DEFB8), (f32) (TObjEneDellBiter__data_805DEFB8), (f32) (TObjEneDellBiter__data_805DEFB8));
        set_global_flag__10TObjPlayerFv();
        draw_chunk_object((int) (M2C_FIELD(arg0, s32 *, 0x34)));
        clear_global_state__10TObjPlayerFv();
        pop_matrix();
        end_effect_render__13TParticleCtrlFv();
    }
}

void TObjEneDellBiter__vt103(void* p) { if (get_target_info__9TObjEneDDFPv(p) != 0) { TObjEneDellBiter__sub_80305F58(p); } }

extern u8 *TObjEneDellBiter__data_805D6A2C;
extern const f32 TObjEneDellBiter__data_805DEFE4;
extern const f32 lbl_805DEFF0;

typedef char RecoveredFields_8030390C_arg0_B8_offset[offsetof(RecoveredFields_8030390C_arg0, field_B8) == 0xB8 ? 1 : -1];
typedef char RecoveredFields_8030390C_arg0_3C0_offset[offsetof(RecoveredFields_8030390C_arg0, field_3C0) == 0x3C0 ? 1 : -1];
typedef char RecoveredFields_8030390C_arg0_4CC_offset[offsetof(RecoveredFields_8030390C_arg0, field_4CC) == 0x4CC ? 1 : -1];

typedef char RecoveredGlobal_80303894_lbl_80541E48_size[sizeof(RecoveredGlobal_80303894_lbl_80541E48) == 0x10 ? 1 : -1];
void TObjEneDellBiter__sub_80303894(void) {
    s32 temp_r4;
    switch (TObjEneDellBiter__data_805D6A34) {
    case 9:
    case 10:
    case 11:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
        break;
    case 8:
        rotate_matrix_x((int) (0), (int) (TObjEneDellBiter__data_805D6A38));
        break;
    case 12:
    case 22:
    case 32:
        temp_r4 = TObjEneDellBiter__data_805D6A3C;
        TObjEneDellBiter__data_805D6A3C = temp_r4 + 0xC;
        get_camera_ctrl__9TObjEneDDFPv((void *) (&lbl_80541E48.value), (int) (temp_r4));
        break;
    }
    TObjEneDellBiter__data_805D6A34 += 1;
}

void TObjEneDellBiter__sub_8030390C(u8 *arg0, s32 arg1) {
    s32 temp_r0;
    switch (arg1) {
    case 4:
        ((RecoveredFields_8030390C_arg0 *)arg0)->field_B8 = 9;
        ((RecoveredFields_8030390C_arg0 *)arg0)->field_3C0 = (s32) (((RecoveredFields_8030390C_arg0 *)arg0)->field_3C0 & 0xFFFFFFFC);
        ((RecoveredFields_8030390C_arg0 *)arg0)->field_3C0 = (s32) (((RecoveredFields_8030390C_arg0 *)arg0)->field_3C0 | 2);
        ((VObj_18_beae68 *)(arg0))->m92();
        refresh_and_send_entity_flags__12TBoss8DragonFPv((void *) (arg0));
        TObjPlayer__sub_800A04F0((void *) (arg0 + 0x3D4));
        if (get_global_state__14TOKeyMachine01Fv() == 0x23) {
            play_sound_effect((int)(0x4003A358), (void *)((u32) (arg0 + 0x38)), (int)(0), (int)(0));
        } else {
            play_sound_effect((int)(copy_target_state__14TObjEnePanarmsFPvPv((void *)((void *) (arg0)), (void *)((int) (0x4003A31A)))), (void *)((u32) (arg0 + 0x38)), (int)(0), (int)(0));
        }
        ((RecoveredFields_8030390C_arg0 *)arg0)->field_4CC = 0;
        return;
    case 3:
        if ((s32) ((RecoveredFields_8030390C_arg0 *)arg0)->field_4CC == 2) {
            queue_destruction__7TObjectFv((void *)(arg0));
        }
        return;
    case 0:
        advance_animation_playback((void *)(arg0));
        temp_r0 = ((RecoveredFields_8030390C_arg0 *)arg0)->field_4CC;
        switch (temp_r0) {
        case 0:
            if (get_flag_b4__21TObjEneMe3ShinowaRealFPv(arg0) != 0) {
                request_two_effects__10TObjPlayerFPv((void *) (arg0 + 0x2FC));
                play_sound_effect((int)(0x4003A830), (void *)((u32) (arg0 + 0x2FC)), (int)(0), (int)(0));
                ((RecoveredFields_8030390C_arg0 *)arg0)->field_4CC = 1;
                return;
            }
            break;
        case 1:
            if (((VObj_14_c1c33b *)((u8 *)(arg0) + (980)))->m4() != 0) {
                apply_effect_variant_b__10TObjPlayerFii((void *) (arg0 + 0x38), (int) (0));
                ((RecoveredFields_8030390C_arg0 *)arg0)->field_4CC = 2;
                return;
            }
            break;
        default:
            ((RecoveredFields_8030390C_arg0 *)arg0)->field_4CC = 2;
            return;
        }
        break;
    case 5:
        queue_destruction__7TObjectFv((void *)(arg0));
        break;
    }
}

void TObjEneDellBiter__sub_80303AA0(u8 *arg0, s32 arg1) {
    Vec_80303AA0 v;
    f32 len;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 6;
        advance_animation_playback(arg0);
        set_active__9TObjEneDDFPv(arg0);
        break;
    case 3:
        if (get_flag_b4__21TObjEneMe3ShinowaRealFPv(arg0) != 0 && TObjEneDellBiter__sub_80305550(arg0) == 0 &&
            TObjEneDellBiter__sub_803054A8(arg0) == 0 && TObjEneDellBiter__sub_803054FC(arg0) == 0) {
            transition_enemy_state(arg0, M2C_FIELD(arg0, s32 *, 0x378));
        }
        break;
    case 0:
        advance_animation_playback(arg0);
        VecCopy__FP3VecPC3Vec(&v, arg0 + 0x308);
        len = clamp_velocity__15TObjBoss2TunnelFPv(&v);
        TObjEneDD__sub_800BACA4(arg0, v.x, v.z, len);
        M2C_FIELD(arg0, f32 *, 0x308) *= lbl_805DEFC8;
        M2C_FIELD(arg0, f32 *, 0x310) *= lbl_805DEFC8;
        ((VObj_18_fd6cbb *)(arg0))->m87();
        break;
    case 5:
        clear_attack_receipts(arg0);
        clear_field_388__9TObjEneDDFPv(arg0);
        break;
    }
}

void TObjEneDellBiter__sub_803040D0(u8 *arg0, s32 arg1) {
    typedef char sp8_offset[(offsetof(Stack_803040D0, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_803040D0, spC) == 0x4) ? 1 : -1];
    Stack_803040D0 stack;
    f32 temp_f1;
    u32 temp_r3;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 8;
        set_field_378__9TObjEneDDFPvi((void *) (arg0), (int) (5));
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFFFC);
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) | 4);
        M2C_FIELD(arg0, s32 *, 0x4CC) = 0;
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x4CC) == 1) {
            transition_enemy_state((void *) (arg0), (int) (5));
        }
        return;
    case 0:
        ((s32)advance_animation_playback((void *)((void *)((void *) (arg0)))));
        if (get_flag_b4__21TObjEneMe3ShinowaRealFPv((void *) (arg0)) != 0) {
            M2C_FIELD(arg0, s32 *, 0x4CC) = 1;
        } else {
            if ((u32) M2C_FIELD(arg0, u32 *, 0x4C0) != 0U) {
                if (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805DEFEC)) != 0) {
                    queue_destruction__7TObjectFv((void *)((void *)((int) (M2C_FIELD(arg0, u32 *, 0x4C0)))));
                    M2C_FIELD(arg0, u32 *, 0x4C0) = 0U;
                } else {
                    temp_f1 = M2C_FIELD(arg0, f32 *, 0xC0);
                    if ((temp_f1 >= TObjEneDellBiter__data_805DEFD8) && (temp_f1 <= lbl_805DEFEC)) {
                        VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg0 + 0x38));
                        stack.spC += TObjEneDellBiter__data_805DEFE0;
                        copy_pos__11TNowLoadingFPvPv((int) (M2C_FIELD(arg0, u32 *, 0x4C0)), (void *) (&stack.sp8));
                    }
                }
            } else if (objInBand__FP7GameObjf((void *) (arg0), (f32) (TObjEneDellBiter__data_805DEFD8)) != 0) {
                M2C_FIELD(arg0, u32 *, 0x4C0) = create_particle_emitter((void *) (arg0 + 0x38), (int) (0x211));
            }
            if (objInBand__FP7GameObjf((void *) (arg0), (f32) (TObjEneDellBiter__data_805DEFE4)) != 0) {
                TObjEneDellBiter__sub_80305688((void *) (arg0));
                play_sound_effect((int)((void *) (copy_target_state__14TObjEnePanarmsFPvPv((void *)((void *) (arg0)), (void *)((int) (0x40039E15))))), (void *)((void *) (arg0 + 0x38)), (int)((int) (0)), (int)((int) (0)));
            }
        }
        ((VObj_18_c44d0a *)(arg0))->m100();
        ((VObj_18_c44d0a *)(arg0))->m87();
        return;
    case 5:
        temp_r3 = M2C_FIELD(arg0, u32 *, 0x4C0);
        if (temp_r3 != 0U) {
            queue_destruction__7TObjectFv((void *)((void *)((int) (temp_r3))));
            M2C_FIELD(arg0, u32 *, 0x4C0) = 0U;
        }
        break;
    }
}

void handle_attack_event__16TObjEneDellBiterFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r3;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 4;
        set_field_378__9TObjEneDDFPvi((void *) (arg0), (int) (5));
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFFFC);
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) | 4);
        fn_8002B094((int) (M2C_FIELD(arg0, s32 *, 0x4A0)));
        reset_timer__11TBoss4Type3FPv((int) (M2C_FIELD(arg0, s32 *, 0x4A4)));
        M2C_FIELD(arg0, s32 *, 0x4CC) = 0;
        M2C_FIELD(arg0, s32 *, 0x4D0) = 0;
        M2C_FIELD(arg0, s32 *, 0x48C) = 0;
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x4D0) == 2) {
            M2C_FIELD(arg0, s32 *, 0x488) = (s32) (M2C_FIELD(arg0, s32 *, 0x488) + 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x488) >= 2) {
                M2C_FIELD(arg0, s32 *, 0x488) = 0;
                M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFFF7);
            }
            if (TObjEneDellBiter__sub_803054FC((void *) (arg0)) == 0) {
                transition_enemy_state((void *) (arg0), (int) (5));
            }
        }
        break;
    case 0:
        advance_animation_playback((void *)((void *)(arg0)));
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x60);
        M2C_FIELD(arg0, s32 *, 0x484) = TObjBoss2Tunnel__sub_8007E5A0((int) (temp_r3), (int) (M2C_FIELD(arg0, s32 *, 0x484)), (int) (temp_r3), (int) (0x200), (int) (0x2000));
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x4D0);
        switch (temp_r0) {
        case 0:
            if (objInBand__FP7GameObjf((void *) (arg0), (f32) (TObjEneDellBiter__data_805DEFE4)) != 0) {
                TObjEneDellBiter__sub_80305B60((void *) (arg0));
            }
            TObjEneDellBiter__sub_80305E1C((void *) (arg0));
            if (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805DEFF0)) != 0) {
                play_sound_effect((int) (copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (void *) (0x40039E16))), (void *) (arg0 + 0x38), (int) (0), (int) (0));
            }
            if (get_flag_b4__21TObjEneMe3ShinowaRealFPv((void *) (arg0)) != 0) {
                M2C_FIELD(arg0, s16 *, 0xB8) = 0;
                M2C_FIELD(arg0, s32 *, 0x4D0) = 1;
                M2C_FIELD(arg0, s32 *, 0x4CC) = 0;
            }
            break;
        case 1:
            M2C_FIELD(arg0, s32 *, 0x4CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x4CC) + 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x4CC) >= (s32) M2C_FIELD(TObjEneDellBiter__data_805D6A2C, s32 *, 0x18)) {
                M2C_FIELD(arg0, s32 *, 0x4D0) = 2;
            }
            break;
        }
        ((VObj_803042b0_803030D4 *) arg0)->m100();
        ((VObj_803042b0_803030D4 *) arg0)->m87();
        break;
    case 5:
        break;
    }
}

}
