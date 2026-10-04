#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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

struct RecoveredGlobal_800975A8_lbl_805008A8 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct Vec_80097714 { f32 x, y, z; };

struct BringerBase_80097714 { char pad[0x18]; };

struct Bringer_80097714 : BringerBase_80097714 {
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

struct Fields_80097714 {
    u8 pad0[0xB8];
    s16 fieldB8;
    u8 padBA[0x308 - 0xBA];
    Vec_80097714 vel;
    u8 pad314[0x378 - 0x314];
    s32 field378;
    u8 pad37C[0x484 - 0x37C];
    s32 timer;
};

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
    virtual M2C_UNK m93();
    virtual void m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual M2C_UNK m100();
};

struct VB2_800987E8 { u8 pad0[0x14]; };

struct V2_800987E8 : VB2_800987E8 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual s32 m4();
};

struct VBase_14_aa9368 { char pad[0x14]; };

struct VObj_14_aa9368 : VBase_14_aa9368 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual M2C_UNK m6();
    virtual M2C_UNK m7();
};

struct VBase_18_1fdb47 { char pad[0x18]; };

struct VObj_18_1fdb47 : VBase_18_1fdb47 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
    virtual s32 m9(f32, f32, f32);
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
    virtual void m92();
    virtual void m93();
    virtual void m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual void m100();
    virtual void m101();
    virtual void m102();
    virtual void m103();
    virtual M2C_UNK m104();
};

struct Vec_800972B0 { f32 x, y, z; };

struct Ent_800972B0 { s32 a, b, c; };

struct Fade_800972B0 { u8 pad[0x1C]; };

struct Fields_800972B0 {
    u8 pad0[0x24];
    Ent_800972B0 **f24;
    u8 pad28[0x2FC - 0x28];
    Vec_800972B0 pos;
    u8 pad308[0x3E0 - 0x308];
    Fade_800972B0 fades[4];
    Vec_800972B0 pts[4];
    s32 f480;
};

extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 TObjPlayer__sub_800A04F0(void *);
s32 refresh_and_send_entity_flags__12TBoss8DragonFPv(void *);
s32 request_two_effects__10TObjPlayerFPv(void *);
s32 apply_effect_variant_b__10TObjPlayerFii(void *, int);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
M2C_UNK advance_animation_playback(void *);
s32 play_effect_if_v2__10TObjPlayerFi(int);
s32 play_sound_effect(void *, void *, int, int);
void TObjEneDf2Bringer__sub_80097620(u8 *arg0, s32 arg1);
M2C_UNK get_camera_ctrl__9TObjEneDDFPv(void *, int);
M2C_UNK rotate_matrix_x(int, int);
extern RecoveredGlobal_800975A8_lbl_805008A8 lbl_805008A8;
extern s32 TObjEneDf2Bringer__data_805D4FBC;
extern s32 TObjEneDf2Bringer__data_805D4FC0;
extern s32 TObjEneDf2Bringer__data_805D4FC4;
void TObjEneDf2Bringer__sub_800975A8(void);
void VecCopy__FP3VecPC3Vec(void *, const void *);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *);
s32 check_stage_advance__17TObjEneDf2BringerFPv(void *);
void clear_field_388__9TObjEneDDFPv(void *p);
void set_active__9TObjEneDDFPv(void *p);
void move_clamped_on_ground__9TObjEneDDFPvfff(void *arg0, f32 farg0, f32 farg1, f32 farg2);
void clear_attack_receipts(void *);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
M2C_UNK advance_animation_playback(void *);
extern const f32 lbl_805D97E4;
void TObjEneDf2Bringer__sub_80097714(Bringer_80097714 *obj, s32 mode);
s32 update_linked_position__14TObjEneEpsilonFPv(void *, f32);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
M2C_UNK advance_animation_playback(void *);
extern f32 TObjEneDf2Bringer__data_805D9820;
void TObjEneDf2Bringer__sub_800987E8(u8 *arg0, s32 arg1);
void VecCopy__FP3VecPC3Vec(void *, const void *);
s32 is_split_screen();
s32 get_camera_mode__11TCameraCtrlFv();
s32 check_demo_mode__10TObjPlayerFv();
s32 is_main_phase_15__9TObjEneDDFv();
M2C_UNK clear_global_flag_400__9TObjEneDDFv();
M2C_UNK update_player_state__9TObjEneDDFPv(void *, void *, int);
M2C_UNK update_primary_light__9TObjEneDDFPv(void *);
M2C_UNK update_secondary_light__9TObjEneDDFPv(void *);
s32 updateFromCamera__15RenderFadeStateFPCf(void *, void *);
M2C_UNK update_obstruction_fade(void *);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK scroll_strip_uvs(int, int, int);
M2C_UNK render_world_model__10TObjPlayerFPv(void *);
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK end_effect_render__13TParticleCtrlFv();
s32 toggle_flag_9__10TObjPlayerFPv(void *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(void *);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK clear_global_state__10TObjPlayerFv();
M2C_UNK set_global_state__16TObjEneRe7BeruraFi(void *);
void TObjEneDf2Bringer__sub_800975A8(void);
extern Vec_800972B0 lbl_8043A0D4[];
extern s32 TObjEneDf2Bringer__data_805D4FBC;
extern s32 TObjEneDf2Bringer__data_805D4FC0;
extern s32 TObjEneDf2Bringer__data_805D4FC4;
extern s32 TObjEneDf2Bringer__data_805D4FCC;
extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;
extern const f32 lbl_805D97D8;
extern const f32 lbl_805D97DC;
extern const f32 lbl_805D9E84;
extern const f32 lbl_805D9E88;
void render__17TObjEneDf2BringerFv(u8 *arg0);
}

extern "C" {

void action__17TObjEneDf2BringerFPvi(u8 *arg0, s32 arg1);
u32 create_particle_emitter(void *, M2C_UNK);
M2C_UNK play_persistent_sound(M2C_UNK, void *, void *, M2C_UNK, M2C_UNK);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
M2C_UNK enable__13TParticleCtrlFPv(void *);
M2C_UNK copy_pos__11TNowLoadingFPvPv(void *, void *);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv(void *);

struct TBase { char pad[0x18]; };
struct TObj : TBase {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76();
    virtual void v77();
    virtual void v78();
    virtual void v79();
    virtual void v80();
    virtual void v81();
    virtual void v82();
    virtual void v83();
    virtual void v84();
    virtual void v85();
    virtual void v86();
    virtual M2C_UNK v87();
    virtual void v88();
    virtual void v89();
    virtual void v90();
    virtual void v91();
    virtual void v92();
    virtual void v93();
    virtual void v94();
    virtual void v95();
    virtual void v96();
    virtual void v97();
    virtual void v98();
    virtual void v99();
    virtual M2C_UNK v100();
};

typedef char RecoveredGlobal_800975A8_lbl_805008A8_size[sizeof(RecoveredGlobal_800975A8_lbl_805008A8) == 0x10 ? 1 : -1];

#define S ((Fields_800972B0 *)arg0)
#pragma push
#pragma opt_loop_invariants off
void render__17TObjEneDf2BringerFv(u8 *arg0) {
    s32 var_r31;
    s32 temp_r29;
    Fade_800972B0 *temp_r28;
    s32 var_r27;
    s32 temp_r27;
    s32 mode;
    s32 i;
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        ((VObj_18_1fdb47 *)(arg0))->m104();
        return;
    }
    mode = 0;
    if (is_split_screen() != 0) {
        mode = get_camera_mode__11TCameraCtrlFv();
    }
    if (M2C_FIELD(arg0, s32 *, 0x3C0) & 1) {
        var_r31 = 0;
    } else if (is_main_phase_15__9TObjEneDDFv() != 0) {
        var_r31 = ((VObj_18_1fdb47 *)(arg0))->m9(lbl_805D9E88, lbl_805D9E84, lbl_805D97DC);
    } else if (((VObj_18_1fdb47 *)(arg0))->m8(lbl_805D97D8, lbl_805D97DC) != 0) {
        var_r31 = 1;
    } else {
        var_r31 = 0;
    }
    if (var_r31 != 0) {
        {
            Vec_800972B0 v = lbl_8043A0D4[0];
            update_player_state__9TObjEneDDFPv(arg0, &v, 0);
        }
        update_secondary_light__9TObjEneDDFPv((void *) (arg0));
        TObjEneDf2Bringer__data_805D4FBC = 0;
        TObjEneDf2Bringer__data_805D4FC0 = S->f480;
        TObjEneDf2Bringer__data_805D4FC4 = (s32) S->pts;
        lbl_805D5660 = some_id_805c6f74;
        clear_global_flag_400__9TObjEneDDFv();
        toggle_particle_effect__10TObjPlayerFv();
        temp_r28 = &S->fades[mode];
        var_r27 = 1;
        update_obstruction_fade(temp_r28);
        temp_r29 = updateFromCamera__15RenderFadeStateFPCf(temp_r28, (void *) ((u8 *)(arg0) + 0x2FC));
        if (M2C_FIELD(arg0, s32 *, 0x3C0) & 2) {
            ((VObj_14_aa9368 *)((u8 *)(arg0) + (964)))->m6();
            if (toggle_flag_9__10TObjPlayerFPv((void *) (arg0)) != 0) {
                var_r27 = 0;
            }
        } else if (temp_r29 != 0) {
            ((VObj_14_aa9368 *)(temp_r28))->m6();
            if (toggle_flag_9__10TObjPlayerFPv((void *) (arg0)) != 0) {
                var_r27 = 0;
            }
        }
        scroll_strip_uvs(TObjEneDf2Bringer__data_805D4FCC, (s16) M2C_FIELD(arg0, s32 *, 0x4A8), 0);
        set_global_param__8TObjFishFi(S->f24);
        {
            Ent_800972B0 *e = *S->f24;
            temp_r27 = M2C_FIELD(e, s32 *, 0x14);
            M2C_FIELD(e, s32 *, 0x14) = e[M2C_FIELD(arg0, s32 *, 0x488)].c;
        }
        if (var_r27 != 0) {
            push_matrix();
            post_translate_matrix((void *) ((u8 *)(arg0) + 0x38));
            rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
            set_global_state__16TObjEneRe7BeruraFi((void *) (&TObjEneDf2Bringer__sub_800975A8));
            set_global_flag__10TObjPlayerFv();
            if (var_r31 == 1) {
                draw__16TObjEneRe7BeruraFPv((void *) (arg0));
            } else {
                render_world_model__10TObjPlayerFPv((void *) (arg0));
            }
            clear_global_state__10TObjPlayerFv();
            set_global_state__16TObjEneRe7BeruraFi((void *) (NULL));
            pop_matrix();
        }
        if (M2C_FIELD(arg0, s32 *, 0x3C0) & 2) {
            ((VObj_14_aa9368 *)((u8 *)(arg0) + (964)))->m7();
        } else if (temp_r29 != 0) {
            ((VObj_14_aa9368 *)(temp_r28))->m7();
        }
        end_effect_render__13TParticleCtrlFv();
        some_id_805c6f74 = lbl_805D5660;
        update_primary_light__9TObjEneDDFPv((void *) (arg0));
        M2C_FIELD(*S->f24, s32 *, 0x14) = temp_r27;
        return;
    }
    for (i = 0; i < 4; i++) {
        VecCopy__FP3VecPC3Vec(&S->pts[i], &S->pos);
    }
}
#pragma pop

void TObjEneDf2Bringer__sub_800975A8(void) {
    s32 temp_r4;
    switch (TObjEneDf2Bringer__data_805D4FBC) {
    case 8:
        rotate_matrix_x((int) (0), (int) (TObjEneDf2Bringer__data_805D4FC0));
        break;
    case 11:
    case 16:
    case 26:
    case 41:
        temp_r4 = TObjEneDf2Bringer__data_805D4FC4;
        TObjEneDf2Bringer__data_805D4FC4 = temp_r4 + 0xC;
        get_camera_ctrl__9TObjEneDDFPv((void *) (&lbl_805008A8.value), (int) (temp_r4));
        break;
    }
    TObjEneDf2Bringer__data_805D4FBC += 1;
}

void TObjEneDf2Bringer__sub_80097620(u8 *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0xA;
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFFFC);
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) | 2);
        ((VObj_18_beae68 *)(arg0))->m92();
        refresh_and_send_entity_flags__12TBoss8DragonFPv((void *) (arg0));
        request_two_effects__10TObjPlayerFPv((void *) (arg0 + 0x2FC));
        TObjPlayer__sub_800A04F0((void *) (arg0 + 0x3C4));
        play_sound_effect((void *) (((s32)copy_target_state__14TObjEnePanarmsFPvPv((void *)((void *) (arg0)), (M2C_UNK)((int) (0x4003A511))))), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        play_effect_if_v2__10TObjPlayerFi((int) (-0x200));
        return;
    case 0:
        ((s32)advance_animation_playback((void *)((void *) (arg0))));
        if (((VObj_14_c1c33b *)((u8 *)(arg0) + (964)))->m4() != 0) {
            apply_effect_variant_b__10TObjPlayerFii((void *) (arg0 + 0x38), (int) (0));
            queue_destruction__7TObjectFv((void *) (arg0));
        }
    case 3:
    case 5:
        return;
    }
}

void TObjEneDf2Bringer__sub_80097714(Bringer_80097714 *obj, s32 mode) {
    Fields_80097714 *self = (Fields_80097714 *)obj;
    Vec_80097714 v;
    f32 speed;
    switch (mode) {
    case 4:
        self->fieldB8 = 6;
        advance_animation_playback(self);
        set_active__9TObjEneDDFPv(self);
        break;
    case 3:
        if (get_flag_b4__21TObjEneMe3ShinowaRealFPv(self) != 0 &&
            check_stage_advance__17TObjEneDf2BringerFPv(self) == 0) {
            transition_enemy_state((void *)(self), (M2C_UNK)(self->field378));
        }
        break;
    case 0:
        ((s32)advance_animation_playback(self));
        self->timer--;
        VecCopy__FP3VecPC3Vec(&v, &self->vel);
        speed = clamp_velocity__15TObjBoss2TunnelFPv(&v);
        move_clamped_on_ground__9TObjEneDDFPvfff(self, v.x, v.z, speed);
        self->vel.x *= lbl_805D97E4;
        self->vel.z *= lbl_805D97E4;
        obj->m87();
        break;
    case 5:
        clear_attack_receipts(self);
        clear_field_388__9TObjEneDDFPv(self);
        break;
    }
}

void action__17TObjEneDf2BringerFPvi(u8 *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 8;
        set_field_378__9TObjEneDDFPvi(arg0, 7);
        M2C_FIELD(arg0, u32 *, 0x4C4) = 0U;
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x484) <= 0) {
            transition_enemy_state(arg0, 4);
        }
        return;
    case 0:
        advance_animation_playback((void *)(arg0));
        M2C_FIELD(arg0, s32 *, 0x484) = (s32) (M2C_FIELD(arg0, s32 *, 0x484) - 1);
        if ((u32) M2C_FIELD(arg0, u32 *, 0x4C4) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x4C4) = create_particle_emitter(arg0 + 0x450, 0x100);
            if ((u32) M2C_FIELD(arg0, u32 *, 0x4C4) != 0U) {
                enable__13TParticleCtrlFPv(M2C_FIELD(arg0, void **, 0x4C4));
            }
        } else if (M2C_FIELD(arg0, s32 *, 0x484) & 1) {
            copy_pos__11TNowLoadingFPvPv(M2C_FIELD(arg0, void **, 0x4C4), arg0 + 0x450);
        } else {
            copy_pos__11TNowLoadingFPvPv(M2C_FIELD(arg0, void **, 0x4C4), arg0 + 0x45C);
        }
        ((TObj *)arg0)->v100();
        ((TObj *)arg0)->v87();
        play_persistent_sound(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003AD0F), arg0, arg0 + 0x38, 0, 0);
        return;
    case 5:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x4C4) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x4C4));
            M2C_FIELD(arg0, u32 *, 0x4C4) = 0U;
        }
        break;
    }
}
void TObjEneDf2Bringer__sub_800987E8(u8 *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r0_2;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        set_field_378__9TObjEneDDFPvi((void *)(arg0), (M2C_UNK)(3));
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFFF8);
        ((VObj_18 *)(arg0))->m93();
        M2C_FIELD(arg0, s32 *, 0x4AC) = 0;
        M2C_FIELD(arg0, s32 *, 0x4B0) = 0;
        return;
    case 3:
        if (M2C_FIELD(arg0, s32 *, 0x4AC) == 2) {
            transition_enemy_state((void *)(arg0), (M2C_UNK)(4));
        } else if (M2C_FIELD(arg0, s32 *, 0x4AC) == 3) {
            transition_enemy_state((void *)(arg0), (M2C_UNK)(1));
        }
        break;
    case 5:
        break;
    case 0:
        advance_animation_playback(arg0);
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x4AC);
        switch (temp_r0_2) {
        case 0:
            if (update_linked_position__14TObjEneEpsilonFPv((void *) (arg0), (f32) (TObjEneDf2Bringer__data_805D9820)) != 0) {
                M2C_FIELD(arg0, s32 *, 0x4AC) = 2;
            } else {
                M2C_FIELD(arg0, s32 *, 0x4B0) = (s32) (M2C_FIELD(arg0, s32 *, 0x4B0) + 1);
                if ((s32) M2C_FIELD(arg0, s32 *, 0x4B0) >= 0x3C) {
                    M2C_FIELD(arg0, s32 *, 0x4AC) = 1;
                    ((V2_800987E8 *)(arg0 + 0x3C4))->m2();
                    M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) | 2);
                }
            }
            break;
        case 1:
            if (((V2_800987E8 *)(arg0 + 0x3C4))->m4() != 0) {
                M2C_FIELD(arg0, s32 *, 0x4AC) = 3;
            }
            break;
        }
        ((VObj_18 *)(arg0))->m100();
        ((VObj_18 *)(arg0))->m87();
        break;
    }
}

}
