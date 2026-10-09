#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase800AFB60_800AFB28 { char pad[0x18]; };
struct VObj800AFB60_800AFB28 : VBase800AFB60_800AFB28 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

#include "pso/enemy/TObjEneMoja.h"
struct MojaResourceEntry {u8 unknown[8];void* model;void* textures;};

struct MojaResources {u8 unknown[0x42C];MojaResourceEntry* models;};

typedef s32 M2C_UNK;
struct Vec_800AFBF0 { f32 x, y, z; };

struct Base_800AFBF0 { char pad[0x18]; };

struct VObj_800AFBF0 : Base_800AFBF0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual s32 v8(f32, f32);
    virtual s32 v9(f32, f32, f32);
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
    virtual void v87();
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
    virtual void v100();
    virtual void v101();
    virtual void v102();
    virtual void v103();
    virtual void v104();
};

struct VBase_800AFDC8 { char pad[0x18]; };

struct VObj_800AFDC8 : VBase_800AFDC8 {
    virtual M2C_UNK m0(); virtual M2C_UNK m1(); virtual M2C_UNK m2();
    virtual M2C_UNK m3(); virtual M2C_UNK m4(); virtual M2C_UNK m5();
    virtual M2C_UNK m6(); virtual M2C_UNK m7(); virtual M2C_UNK m8();
    virtual M2C_UNK m9(); virtual M2C_UNK m10(); virtual M2C_UNK m11();
    virtual M2C_UNK m12(); virtual M2C_UNK m13(); virtual M2C_UNK m14();
    virtual M2C_UNK m15(); virtual M2C_UNK m16(); virtual M2C_UNK m17();
    virtual M2C_UNK m18(); virtual M2C_UNK m19(); virtual M2C_UNK m20();
    virtual M2C_UNK m21(); virtual M2C_UNK m22(); virtual M2C_UNK m23();
    virtual M2C_UNK m24(); virtual M2C_UNK m25(); virtual M2C_UNK m26();
    virtual M2C_UNK m27(); virtual M2C_UNK m28(); virtual M2C_UNK m29();
    virtual M2C_UNK m30(); virtual M2C_UNK m31(); virtual M2C_UNK m32();
    virtual M2C_UNK m33(); virtual M2C_UNK m34(); virtual M2C_UNK m35();
    virtual M2C_UNK m36(); virtual M2C_UNK m37(); virtual M2C_UNK m38();
    virtual M2C_UNK m39(); virtual M2C_UNK m40(); virtual M2C_UNK m41();
    virtual M2C_UNK m42(); virtual M2C_UNK m43(); virtual M2C_UNK m44();
    virtual M2C_UNK m45(); virtual M2C_UNK m46(); virtual M2C_UNK m47();
    virtual M2C_UNK m48(); virtual M2C_UNK m49(); virtual M2C_UNK m50();
    virtual M2C_UNK m51(); virtual M2C_UNK m52(); virtual M2C_UNK m53();
    virtual M2C_UNK m54(); virtual M2C_UNK m55(); virtual M2C_UNK m56();
    virtual M2C_UNK m57(); virtual M2C_UNK m58(); virtual M2C_UNK m59();
    virtual M2C_UNK m60(); virtual M2C_UNK m61(); virtual M2C_UNK m62();
    virtual M2C_UNK m63(); virtual M2C_UNK m64(); virtual M2C_UNK m65();
    virtual M2C_UNK m66(); virtual M2C_UNK m67(); virtual M2C_UNK m68();
    virtual M2C_UNK m69(); virtual M2C_UNK m70(); virtual M2C_UNK m71();
    virtual M2C_UNK m72(); virtual M2C_UNK m73(); virtual M2C_UNK m74();
    virtual M2C_UNK m75(); virtual M2C_UNK m76(); virtual M2C_UNK m77();
    virtual M2C_UNK m78(); virtual M2C_UNK m79(); virtual M2C_UNK m80();
    virtual M2C_UNK m81(); virtual M2C_UNK m82(); virtual M2C_UNK m83();
    virtual M2C_UNK m84(); virtual M2C_UNK m85(); virtual M2C_UNK m86();
    virtual M2C_UNK m87(); virtual M2C_UNK m88(); virtual M2C_UNK m89();
    virtual M2C_UNK m90(); virtual M2C_UNK m91(); virtual M2C_UNK m92();
    virtual M2C_UNK m93(); virtual M2C_UNK m94(); virtual M2C_UNK m95();
    virtual M2C_UNK m96();
};

extern "C" {
extern MojaResources* lbl_805D50D8;
s32 check_demo_mode__10TObjPlayerFv();
s32 is_main_phase_15__9TObjEneDDFv();
M2C_UNK clear_global_flag_400__9TObjEneDDFv();
M2C_UNK update_player_state__9TObjEneDDFPv(void *, M2C_UNK, M2C_UNK);
M2C_UNK update_primary_light__9TObjEneDDFPv(void *);
M2C_UNK update_secondary_light__9TObjEneDDFPv(void *);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK restore_default_scene();
M2C_UNK set_scene_override(M2C_UNK);
M2C_UNK render_world_model__10TObjPlayerFPv(void *);
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK translate_matrix(M2C_UNK, f32, f32, f32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK set_global_param__8TObjFishFi(s32);
extern Vec_800AFBF0 lbl_8043B10C;
extern const f32 lbl_805D9E84;
extern const f32 lbl_805D9E88;
void render__13TObjEneBm3FlyFv(VObj_800AFBF0 *o);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *);
void clamp_flight_height__13TObjEneBm3FlyFPv(u8 *arg0);
void update_dd_flag__13TObjEneBm3FlyFPv(void *arg0);
M2C_UNK remove_child__17TObjEneBm3FlyNestFPvPv(u32, void *);
M2C_UNK refresh_and_send_entity_flags__12TBoss8DragonFPv(void *, s32);
M2C_UNK TBoss8Dragon__sub_800BB7DC(void *);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
M2C_UNK spawn_effect_at_ground__10TObjPlayerFPvi(void *, M2C_UNK);
M2C_UNK spawn_landing_dead_spot(void *, M2C_UNK);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
M2C_UNK advance_animation_playback();
u32 find_entity_by_id(u16);
M2C_UNK play_sound_effect(M2C_UNK, void *, M2C_UNK, M2C_UNK);
void state_death_fall__13TObjEneBm3FlyFPvi(u8 *arg0, s32 arg1);
}
#define clamp_flight_height__13TObjEneBm3FlyFPv (*(M2C_UNK (*)(void *))&clamp_flight_height__13TObjEneBm3FlyFPv)
#define update_dd_flag__13TObjEneBm3FlyFPv (*(M2C_UNK (*)(void *, f32, f32, f32))&update_dd_flag__13TObjEneBm3FlyFPv)

extern "C" {

struct BaseB0_800AFB28 { char pad[0x18]; };
struct VObjB0_800AFB28 : BaseB0_800AFB28 {
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
    virtual void m92();
    virtual void m93();
    virtual void m94();
};

void TObjEneBm3Fly__vt103(void);
void TObjEneBm3Fly__vt104(u8 *arg0);
void action__13TObjEneBm3FlyFPvi(u8 *arg0, s32 arg1);
f32 get_pos_x__14TObjEneGibblesFPv(void* p);
void handle_message__13TObjEneBm3FlyFPvi(void *arg0, s32 arg1);
M2C_UNK TBoss8Dragon__sub_800BB7D8(void *, M2C_UNK, f32);
M2C_UNK post_translate_matrix(void *);
M2C_UNK draw_chunk_object(s32);
M2C_UNK create_breakup_mdl__12TBoss3VoloptFiiiii(s32, M2C_UNK *, s32, void *, s32);
s32 queue_destruction__7TObjectFv();

f32 get_pos_x__14TObjEneGibblesFPv(void* p) { return *(f32*)((char*)p + 0x10); }

void TObjEneMoja::bindModel(int index) {
    model=lbl_805D50D8->models[index].model;
    textures=lbl_805D50D8->models[index].textures;
}

void TObjEneBm3Fly__vt104(u8 *arg0) {
    if (((VObj800AFB60_800AFB28 *) arg0)->m8((4e+02f), (15.0f)) != 0) {
        update_player_state__9TObjEneDDFPv(arg0, 0, 0);
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        clear_global_flag_400__9TObjEneDDFv();
        toggle_particle_effect__10TObjPlayerFv();
        draw_chunk_object(M2C_FIELD(arg0, s32 *, 0x34));
        end_effect_render__13TParticleCtrlFv();
        pop_matrix();
    }
}

void render__13TObjEneBm3FlyFv(VObj_800AFBF0 *o) {
    s32 kind;
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        o->v104();
        return;
    }
    if (M2C_FIELD(o, s32 *, 0x428) & 1) {
        return;
    }
    if (is_main_phase_15__9TObjEneDDFv() != 0) {
        kind = o->v9(lbl_805D9E88, lbl_805D9E84, (15.0f));
    } else if (o->v8((4e+02f), (15.0f)) != 0) {
        kind = 1;
    } else {
        kind = 0;
    }
    if (kind != 0) {
        if (M2C_FIELD(o, s32 *, 0x428) & 2) {
            Vec_800AFBF0 v = lbl_8043B10C;
            update_player_state__9TObjEneDDFPv(o, (M2C_UNK)&v, 0);
        }
        update_secondary_light__9TObjEneDDFPv(o);
        set_global_param__8TObjFishFi(M2C_FIELD(o, s32 *, 0x24));
        push_matrix();
        translate_matrix(0, M2C_FIELD(o, f32 *, 0x38), M2C_FIELD(o, f32 *, 0x42C), M2C_FIELD(o, f32 *, 0x40));
        rotate_matrix_y(0, M2C_FIELD(o, s32 *, 0x60));
        clear_global_flag_400__9TObjEneDDFv();
        toggle_particle_effect__10TObjPlayerFv();
        set_scene_override(0x8F);
        if (kind == 1) {
            draw__16TObjEneRe7BeruraFPv(o);
        } else {
            render_world_model__10TObjPlayerFPv(o);
        }
        restore_default_scene();
        end_effect_render__13TParticleCtrlFv();
        pop_matrix();
        update_primary_light__9TObjEneDDFPv(o);
    }
}

void TObjEneBm3Fly__vt103(void) {  }
void handle_message__13TObjEneBm3FlyFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s32 *, 0x428) = (s32) (M2C_FIELD(arg0, s32 *, 0x428) | 1);
        M2C_FIELD(arg0, s32 *, 0x428) = (s32) (M2C_FIELD(arg0, s32 *, 0x428) & 0xFFFFFFFD);
        return;
    case 3:
        queue_destruction__7TObjectFv();
    case 5:
    case 0:
        return;
    }
}

extern M2C_UNK lbl_8043B0D0[];
extern s32 TObjEneBm3Fly__breakup_model;

void state_death_fall__13TObjEneBm3FlyFPvi(u8 *arg0, s32 arg1) {
    f32 temp_f0;
    s32 temp_r0;
    u32 temp_photon;
    M2C_UNK temp_copy;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 4;
        ((VObj_800AFDC8 *)arg0)->m94();
        M2C_FIELD(arg0, s32 *, 0x428) = (s32) (M2C_FIELD(arg0, s32 *, 0x428) & 0xFFFFFFFE);
        M2C_FIELD(arg0, s32 *, 0x428) = (s32) (M2C_FIELD(arg0, s32 *, 0x428) | 2);
        ((M2C_UNK (*)(void *))refresh_and_send_entity_flags__12TBoss8DragonFPv)(arg0);
        temp_photon = find_entity_by_id(M2C_FIELD(arg0, u16 *, 0x418));
        if (temp_photon != 0U) {
            remove_child__17TObjEneBm3FlyNestFPvPv(temp_photon, arg0);
        }
        TBoss8Dragon__sub_800BB7DC(arg0);
        M2C_FIELD(arg0, s32 *, 0x3C0) = 0;
        M2C_FIELD(arg0, s32 *, 0x3C4) = 0;
        M2C_FIELD(arg0, f32 *, 0x3E0) = (f32) (0.0f);
        M2C_FIELD(arg0, f32 *, 0x430) = (f32) M2C_FIELD(arg0, f32 *, 0x308);
        M2C_FIELD(arg0, f32 *, 0x438) = (f32) M2C_FIELD(arg0, f32 *, 0x310);
        M2C_FIELD(arg0, f32 *, 0x3E4) = clamp_velocity__15TObjBoss2TunnelFPv(arg0 + 0x430);
        temp_copy = copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003E425);
        play_sound_effect(temp_copy, arg0 + 0x38, 0, 0);
        return;
    case 3:
        if ((M2C_FIELD(arg0, f32 *, 0x42C) - M2C_FIELD(arg0, f32 *, 0x3C)) < (-2e+01f)) {
            transition_enemy_state(arg0, 9);
        }
        break;
    case 0:
        advance_animation_playback();
        switch (M2C_FIELD(arg0, s32 *, 0x3C0)) {
        case 0:
        case 1:
            update_dd_flag__13TObjEneBm3FlyFPv(arg0, M2C_FIELD(arg0, f32 *, 0x430), M2C_FIELD(arg0, f32 *, 0x438), M2C_FIELD(arg0, f32 *, 0x3E4));
            M2C_FIELD(arg0, f32 *, 0x3E0) = (f32) (M2C_FIELD(arg0, f32 *, 0x3E0) - (0.1f));
            M2C_FIELD(arg0, f32 *, 0x42C) = (f32) (M2C_FIELD(arg0, f32 *, 0x42C) + M2C_FIELD(arg0, f32 *, 0x3E0));
            if (M2C_FIELD(arg0, f32 *, 0x42C) < (1.2f) + M2C_FIELD(arg0, f32 *, 0x3C)) {
                M2C_FIELD(arg0, f32 *, 0x42C) = (1.2f) + M2C_FIELD(arg0, f32 *, 0x3C);
                if (((s32) M2C_FIELD(arg0, s32 *, 0x3C0) == 0) && (get_flag_b4__21TObjEneMe3ShinowaRealFPv(arg0) == 0)) {
                    M2C_FIELD(arg0, s32 *, 0x3C0) = 1;
                    M2C_FIELD(arg0, f32 *, 0x3E0) = (f32) (0.5f);
                    M2C_FIELD(arg0, f32 *, 0x3E4) *= (0.98f);
                } else {
                    M2C_FIELD(arg0, s32 *, 0x3C0) = 2;
                    M2C_FIELD(arg0, f32 *, 0x3E4) = (f32) (0.0f);
                    M2C_FIELD(arg0, s32 *, 0x428) = (s32) (M2C_FIELD(arg0, s32 *, 0x428) & 0xFFFFFFFD);
                    spawn_landing_dead_spot(arg0 + 0x38, 0xA);
                    spawn_effect_at_ground__10TObjPlayerFPvi(arg0 + 0x38, 0x1E);
                }
            }
            clamp_flight_height__13TObjEneBm3FlyFPv(arg0);
            break;
        case 2:
            M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C4) + 1);
            M2C_FIELD(arg0, f32 *, 0x42C) = (f32) (M2C_FIELD(arg0, f32 *, 0x42C) - (0.1f));
            break;
        }
        M2C_FIELD(arg0, f32 *, 0x3E4) *= (0.98f);
        break;
    case 1:
    case 5:
        break;
    }
}

void action__13TObjEneBm3FlyFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r4;
    u32 temp_ret;

    switch (arg1) {
    case 4:
        ((VObjB0_800AFB28 *)arg0)->m94();
        M2C_FIELD(arg0, s32 *, 0x428) = (s32) (M2C_FIELD(arg0, s32 *, 0x428) | 1);
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x428) & 0xFFFFFFFD;
        M2C_FIELD(arg0, s32 *, 0x428) = temp_r4;
        M2C_FIELD(arg0, s32 *, 0x80) = 0;
        refresh_and_send_entity_flags__12TBoss8DragonFPv(arg0, temp_r4);
        temp_ret = find_entity_by_id(M2C_FIELD(arg0, u16 *, 0x418));
        if (temp_ret != 0U) {
            remove_child__17TObjEneBm3FlyNestFPvPv(temp_ret, arg0);
        }
        TBoss8Dragon__sub_800BB7DC(arg0);
        TBoss8Dragon__sub_800BB7D8(arg0, 0xF1, (1.0f));
        play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003E425), arg0 + 0x38, 0, 0);
        create_breakup_mdl__12TBoss3VoloptFiiiii(TObjEneBm3Fly__breakup_model, lbl_8043B0D0, M2C_FIELD(arg0, s32 *, 0x24), arg0 + 0x2FC, M2C_FIELD(arg0, s32 *, 0x60));
        M2C_FIELD(arg0, s32 *, 0x3C0) = 0;
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3C0) >= 2) {
            transition_enemy_state(arg0, 9);
        }
    case 5:
        return;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) + 1);
        break;
    }
}

}

#undef clamp_flight_height__13TObjEneBm3FlyFPv
#undef update_dd_flag__13TObjEneBm3FlyFPv

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBaseB0_800b07d0 { char pad[0x18]; };
struct VObjB0_800b07d0 : VBaseB0_800b07d0 {
    virtual void v0();  virtual void v1();  virtual void v2();  virtual void v3();
    virtual void v4();  virtual void v5();  virtual void v6();  virtual void v7();
    virtual void v8();  virtual void v9();  virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual s32 v18(void *, f32);
    virtual void v19(); virtual void v20(void *, f32);
    virtual void v21(); virtual void v22(); virtual void v23(void *, f32);
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43();
    virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
    virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51();
    virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55();
    virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59();
    virtual void v60(); virtual void v61(); virtual void v62(); virtual void v63();
    virtual void v64(); virtual void v65(); virtual void v66(); virtual void v67();
    virtual void v68(); virtual void v69(); virtual void v70(); virtual void v71();
    virtual void v72(); virtual void v73(); virtual void v74(); virtual void v75();
    virtual void v76(); virtual void v77(); virtual void v78(); virtual void v79();
    virtual void v80(); virtual void v81(); virtual void v82(); virtual void v83();
    virtual void v84(); virtual void v85(); virtual void v86(); virtual void v87();
    virtual void v88(); virtual void v89(); virtual void v90(); virtual void v91();
    virtual void v92(); virtual void v93(); virtual void v94();
};

struct VBase_800B0B20 { char pad[0x18]; };
struct VObj_800B0B20 : VBase_800B0B20 {
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
    virtual s32 m102(f32);
};

struct Vec_800B0B20 { f32 x, y, z; };
extern "C" {
void update__13TObjEneBm3FlyFPv(void *arg0);
M2C_UNK vec3_add_to(void *, void *);
f32 vec3_dot(void *, void *);
M2C_UNK subtract_vector(void *, void *);
}

struct VBase_18_b7c757 { char pad[0x18]; };

struct VObj_18_b7c757 : VBase_18_b7c757 {
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
    virtual M2C_UNK m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual M2C_UNK m94();
};

typedef s32 M2C_UNK;
struct Base_800B012C { u8 pad[0x18]; };

struct Ene_800B012C : Base_800B012C {
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
    virtual void m87();
    virtual void v88();
    virtual void v89();
    virtual void v90();
    virtual void v91();
    virtual void v92();
    virtual void v93();
    virtual void m94();
    virtual void v95();
    virtual void v96();
    virtual s32 m97();
    virtual void v98();
    virtual void v99();
    virtual void v100();
    virtual void v101();
    virtual void m102(f32);
};

struct V3_800B012C { f32 x, y, z; };

struct P_800B012C { u8 pad[0x430]; V3_800B012C v; };

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
    virtual M2C_UNK m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual M2C_UNK m93();
};

struct VBase_800B044C { char pad[0x18]; };

struct VObj_800B044C : VBase_800B044C {
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
    virtual s32 m102(f32);
};

struct VBase_18_aab587 { char pad[0x18]; };

struct VObj_18_aab587 : VBase_18_aab587 {
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
    virtual M2C_UNK m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual M2C_UNK m93();
};

struct Vec_800B0F70 { f32 x, y, z; };

extern "C" {
M2C_UNK play_effect_if_v2__10TObjPlayerFi(int);
s32 play_persistent_sound(void *, void *, void *, int, int);
void TObjEneBm3Fly__sub_800B1574(s32 arg0);
void play_pitched_cue__13TObjEneBm3FlyFi(s32 arg0);
f32 calc_scaled_value__15TObjBoss2TunnelFif(int, int, f32, f32);
void TObjEneBm3Fly__sub_800B1634(u8 *arg0);
f32 approach_value__13TObjEneBm3FlyFff(f32 farg0, f32 farg1);
void update_state_flag__13TObjEneBm3FlyFPv(void *arg0);
s32 update_linked_position__14TObjEneEpsilonFPv(f32);
M2C_UNK update_velocity__9TObjEneDDFPv(void *);
M2C_UNK transform_part_positions__9TObjEneDDFPv(void *);
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
void TObjEneBm3Fly__sub_800B02C8(u8 *arg0, s32 arg1);
struct Fly_800B1684;
void choose_attack__13TObjEneBm3FlyFPv(Fly_800B1684 *s);
M2C_UNK clear_attack_receipts();
M2C_UNK noop__12TBoss8DragonFv(void *);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, s16);
void update_recoil_state__13TObjEneBm3FlyFv(u8 *arg0, s32 arg1);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
f32 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
f32 update_scale__15TObjBoss2TunnelFPv(void *);
void update_collide_flag__13TObjEneBm3FlyFPv(void *arg0);
M2C_UNK enemy_clear_target(void *);
extern const f64 TObjEneBm3Fly__data_8043B118[];
extern const f32 lbl_805D9E80;
void TObjEneBm3Fly__sub_800B1214(u8 *arg0, s32 arg1);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
void circle_destination__13TObjEneBm3FlyFPvi(void *arg0, s32 arg1);
s32 update_death_check__14TObjEneEpsilonFPv(void *);
extern const f64 TObjEneBm3Fly__data_8043B118[];
void state_circle_target__13TObjEneBm3FlyFPvi(u8 *arg0, s32 arg1);
s32 is_vec_xz_cross_negative(void *, void *);
f32 calc_elapsed_scaled__9TObjEneDDFv(void *);
void TObjEneBm3Fly__sub_800B0F70(u8 *arg0, s32 arg1);
}

extern "C" {

struct Base_800B150C_800B07D0 { char pad[0x18]; };
struct VObj_800B150C_800B07D0 : Base_800B150C_800B07D0 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51();
    virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55();
    virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63();
    virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67();
    virtual void m68(); virtual void m69(); virtual void m70(); virtual void m71();
    virtual void m72(); virtual void m73(); virtual void m74(); virtual void m75();
    virtual void m76(); virtual void m77(); virtual void m78(); virtual void m79();
    virtual void m80(); virtual void m81(); virtual void m82(); virtual void m83();
    virtual void m84(); virtual void m85(); virtual void m86(); virtual void m87();
    virtual void m88(); virtual void m89(); virtual void m90(); virtual void m91();
    virtual void m92(); virtual void m93(); virtual void m94(); virtual void m95();
    virtual void m96(); virtual int m97();
};

void TObjEneBm3Fly__vt102(void *arg0, f32 farg0);
void execute_action__13TObjEneBm3FlyFPvi(u8 *arg0, s32 arg1);
s32 can_attack_target__13TObjEneBm3FlyFPv(u8 *arg0);
M2C_UNK inflict_poison__9TObjEneDDFiPv(void *, void *);
s32 check_v2_mode__9TObjEneDDFv();
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK select_and_apply_target__14TObjEneEpsilonFPvf(void *, f32);
M2C_UNK spawn_part__14TObjEneEpsilonFi(void *, f32);
void update_height_offset__13TObjEneBm3FlyFPv(void *arg0);

extern u8 *lbl_805D50EC;

#pragma push
#pragma opt_common_subs off
typedef void (*Fv_800B012C)(void *);
typedef s32 (*Fi_800B012C)(void *);
typedef void (*Ff_800B012C)(void *, f32);
#define VT(o, off, T) (*(T *)(*(u8 **)((u8 *)(o) + 0x18) + (off)))
void update_recoil_state__13TObjEneBm3FlyFv(u8 *arg0, s32 arg1) {
    s32 t;
    f32 v;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 3;
        ((Ene_800B012C *)arg0)->m94();
        M2C_FIELD(arg0, u32 *, 0x428) &= ~1;
        M2C_FIELD(arg0, u32 *, 0x428) |= 2;
        set_field_378__9TObjEneDDFPvi(arg0, M2C_FIELD(arg0, s16 *, 0x326));
        noop__12TBoss8DragonFv(arg0);
        play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003E425), arg0 + 0x38, 0, 0);
        M2C_FIELD(arg0, s32 *, 0x3C0) = 0;
        break;
    case 3:
        if (M2C_FIELD(arg0, u32 *, 0xB0) & 0x10) {
            if (((Ene_800B012C *)arg0)->m97() != 0) {
                ((Ene_800B012C *)arg0)->m102((2e+02f));
            }
#define update__13TObjEneBm3FlyFPv (*(M2C_UNK (*)(void *))&update__13TObjEneBm3FlyFPv)
#define copy_target_state__14TObjEnePanarmsFPvPv (*(void * (*)(void *, int))&copy_target_state__14TObjEnePanarmsFPvPv)
#define TObjEneBm3Fly__sub_800B1634 (*(M2C_UNK (*)(void *))&TObjEneBm3Fly__sub_800B1634)
#define approach_value__13TObjEneBm3FlyFff (*(f32 (*)(void *, f32, f32))&approach_value__13TObjEneBm3FlyFff)
#define clamp_flight_height__13TObjEneBm3FlyFPv (*(M2C_UNK (*)(void *))&clamp_flight_height__13TObjEneBm3FlyFPv)
#define update_state_flag__13TObjEneBm3FlyFPv (*(M2C_UNK (*)(void *))&update_state_flag__13TObjEneBm3FlyFPv)
#define transition_enemy_state (*(M2C_UNK (*)(void *, int))&transition_enemy_state)
#define clamp_velocity__15TObjBoss2TunnelFPv (*(f32 (*)(void *, s32))&clamp_velocity__15TObjBoss2TunnelFPv)
#define choose_attack__13TObjEneBm3FlyFPv (*(M2C_UNK (*)(void *))&choose_attack__13TObjEneBm3FlyFPv)
#define update_dd_flag__13TObjEneBm3FlyFPv (*(M2C_UNK (*)(void *, f32, f32, f32))&update_dd_flag__13TObjEneBm3FlyFPv)
#define play_sound_effect (*(M2C_UNK (*)(void *, void *, int, int))&play_sound_effect)
#define update_collide_flag__13TObjEneBm3FlyFPv (*(M2C_UNK (*)(void *))&update_collide_flag__13TObjEneBm3FlyFPv)
#define circle_destination__13TObjEneBm3FlyFPvi (*(M2C_UNK (*)(void *, int))&circle_destination__13TObjEneBm3FlyFPvi)
#define can_attack_target__13TObjEneBm3FlyFPv (*(s32 (*)(void *))&can_attack_target__13TObjEneBm3FlyFPv)
#define update_height_offset__13TObjEneBm3FlyFPv (*(M2C_UNK (*)(void *))&update_height_offset__13TObjEneBm3FlyFPv)
            if (M2C_FIELD(arg0, s32 *, 0x378) == 3) {
                choose_attack__13TObjEneBm3FlyFPv(arg0);
            } else {
                transition_enemy_state(arg0, M2C_FIELD(arg0, s32 *, 0x378));
            }
        }
        break;
    case 0:
        advance_animation_playback();
        t = M2C_FIELD(arg0, s32 *, 0x3C0);
        M2C_FIELD(arg0, s32 *, 0x3C0) = t + 1;
        ((P_800B012C *)arg0)->v.x = M2C_FIELD(arg0, f32 *, 0x308);
        ((P_800B012C *)arg0)->v.z = M2C_FIELD(arg0, f32 *, 0x310);
        v = clamp_velocity__15TObjBoss2TunnelFPv(&((P_800B012C *)arg0)->v, t);
        update_dd_flag__13TObjEneBm3FlyFPv(arg0, ((P_800B012C *)arg0)->v.x, ((P_800B012C *)arg0)->v.z, v);
        clamp_flight_height__13TObjEneBm3FlyFPv(arg0);
        M2C_FIELD(arg0, f32 *, 0x308) *= (0.5f);
        M2C_FIELD(arg0, f32 *, 0x310) *= (0.5f);
        ((Ene_800B012C *)arg0)->m87();
        break;
    case 5:
        clear_attack_receipts();
        break;
    }
}
#pragma pop

#pragma push
#pragma fp_contract on
void TObjEneBm3Fly__sub_800B02C8(u8 *arg0, s32 arg1) {
    u8 *temp_r4;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        ((VObj_18_b7c757 *)(arg0))->m94();
        M2C_FIELD(arg0, s32 *, 0x428) = (s32) (M2C_FIELD(arg0, s32 *, 0x428) & 0xFFFFFFFE);
        M2C_FIELD(arg0, s32 *, 0x428) = (s32) (M2C_FIELD(arg0, s32 *, 0x428) | 2);
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x01000000);
        TObjEneBm3Fly__sub_800B1634((void *) (arg0));
        M2C_FIELD(arg0, f32 *, 0x394) = (f32) (((3e+01f) * sin_table_lookup((int) (M2C_FIELD(arg0, s32 *, 0x448)))) + M2C_FIELD(arg0, f32 *, 0x41C));
        M2C_FIELD(arg0, f32 *, 0x398) = (f32) M2C_FIELD(arg0, f32 *, 0x444);
        M2C_FIELD(arg0, f32 *, 0x39C) = (f32) (((3e+01f) * cos_table_lookup((int) (M2C_FIELD(arg0, s32 *, 0x448)))) + M2C_FIELD(arg0, f32 *, 0x424));
        temp_r4 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x350));
        M2C_FIELD(arg0, f32 *, 0x3E0) = (f32) ((2.0f) + calc_scaled_value__15TObjBoss2TunnelFif((int) (M2C_FIELD(temp_r4, s32 *, 8)), (int) (temp_r4), (f32) (M2C_FIELD(temp_r4, f32 *, 4)), (f32) ((3e+01f))));
        update_velocity__9TObjEneDDFPv((void *) (arg0));
        break;
    case 3:
        if (update_linked_position__14TObjEneEpsilonFPv((f32) ((2e+02f))) != 0) {
            transition_enemy_state((void *) (arg0), (int) (2));
        } else if (M2C_FIELD(arg0, f32 *, 0x3AC) < M2C_FIELD(arg0, f32 *, 0x3E0)) {
            transition_enemy_state((void *) (arg0), (int) (1));
        }
        break;
    case 5:
        break;
    case 0:
        advance_animation_playback();
        update_velocity__9TObjEneDDFPv((void *) (arg0));
        M2C_FIELD(arg0, f32 *, 0x42C) = approach_value__13TObjEneBm3FlyFff((void *) (arg0), (f32) (M2C_FIELD(arg0, f32 *, 0x42C)), (f32) (M2C_FIELD(arg0, f32 *, 0x398)));
        update_state_flag__13TObjEneBm3FlyFPv((void *) (arg0));
        ((VObj_18_b7c757 *)(arg0))->m86();
        clamp_flight_height__13TObjEneBm3FlyFPv((void *) (arg0));
        transform_part_positions__9TObjEneDDFPv((void *) (arg0));
        play_pitched_cue__13TObjEneBm3FlyFi((s32) arg0);
        break;
    }
}
#pragma pop

#define I(o) M2C_FIELD(arg0, s32 *, o)
#define R(o) M2C_FIELD(arg0, f32 *, o)
#define P(o) M2C_FIELD(arg0, u8 **, o)
#define V ((VObj_800B044C *)(arg0))
void state_circle_target__13TObjEneBm3FlyFPvi(u8 *arg0, s32 arg1) {
    f32 speed;
    f32 vertical;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        V->m94();
        I(0x428) &= ~1;
        I(0x428) |= 2;
        I(0x30) |= 0x01000000;
        if (M2C_FIELD(arg0, s16 *, 0x326) == 4) {
            I(0x3C0) = 2;
            I(0x3CC) = 0;
        } else {
            I(0x3C0) = 0;
            I(0x3D0) = I(0x60) + 0x8000;
            I(0x3D4) = 0;
            I(0x3CC) = 0;
            I(0x3D8) = 0;
        }
        break;
    case 3:
        if (P(0x390) == NULL) {
            transition_enemy_state(arg0, 5);
        } else if (I(0x3CC) > 0x8000 || I(0x3CC) < -0x8000) {
            choose_attack__13TObjEneBm3FlyFPv(arg0);
        }
        break;
    case 0:
        advance_animation_playback();
        if (update_death_check__14TObjEneEpsilonFPv(arg0) == 0 && V->m102((2e+02f)) == 0) {
            break;
        }
        switch (I(0x3C0)) {
        case 0:
            circle_destination__13TObjEneBm3FlyFPvi(arg0, I(0x3D0));
            update_velocity__9TObjEneDDFPv(arg0);
            vertical = (0.0f);
            speed = M2C_FIELD(P(0x350), f32 *, 4);
            if (R(0x3AC) < (14.0f)) {
                if (calc_boss4_scale__10TObjPlayerFi(arg0) > (0.5f)) {
                    I(0x3D4) = (s32)(((-65536.0f) * speed) / (439.82288f));
                } else {
                    I(0x3D4) = (s32)(((65536.0f) * speed) / (439.82288f));
                }
                I(0x3C0) = 1;
            }
            break;
        case 1:
            I(0x3D0) += I(0x3D4) / 2;
            I(0x3CC) += I(0x3D4) / 2;
            circle_destination__13TObjEneBm3FlyFPvi(arg0, I(0x3D0));
            update_velocity__9TObjEneDDFPv(arg0);
            speed = M2C_FIELD(P(0x350), f32 *, 4);
            vertical = (0.0f);
            if (R(0x3AC) < speed) {
                I(0x3C0) = 2;
            }
            break;
        case 2:
            I(0x3D0) += I(0x3D4);
            I(0x3CC) += I(0x3D4);
            circle_destination__13TObjEneBm3FlyFPvi(arg0, I(0x3D0));
            update_velocity__9TObjEneDDFPv(arg0);
            speed = M2C_FIELD(P(0x350), f32 *, 4);
            vertical = (1e+01f) * sin_table_lookup(I(0x3D8));
            I(0x3D8) += 0x380;
            break;
        }
        VecCopy__FP3VecPC3Vec(arg0 + 0x430, arg0 + 0x3A0);
        update_dd_flag__13TObjEneBm3FlyFPv(arg0, R(0x430), R(0x438), speed);
        R(0x42C) = approach_value__13TObjEneBm3FlyFff(arg0, R(0x42C), R(0x398) + vertical);
        clamp_flight_height__13TObjEneBm3FlyFPv(arg0);
        I(0x60) = (s32)(TObjEneBm3Fly__data_8043B118[0] * get_ad_end_text_start__10TObjPlayerFv(
            M2C_FIELD(P(0x390), f32 *, 0x38) - R(0x38), M2C_FIELD(P(0x390), f32 *, 0x40) - R(0x40)));
        V->m87();
        play_pitched_cue__13TObjEneBm3FlyFi((s32)arg0);
        break;
    case 1:
        break;
    case 5:
        break;
    }
}

void execute_action__13TObjEneBm3FlyFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r0_2;
    u8 *temp_r3;
    u8 *temp_r3_2;
    u8 *temp_r3_3;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        ((VObjB0_800b07d0 *)arg0)->v94();
        M2C_FIELD(arg0, s32 *, 0x428) = (s32) (M2C_FIELD(arg0, s32 *, 0x428) & 0xFFFFFFFE);
        M2C_FIELD(arg0, s32 *, 0x428) = (s32) (M2C_FIELD(arg0, s32 *, 0x428) | 2);
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFEFFFFFF);
        M2C_FIELD(arg0, s32 *, 0x3C4) = 0;
        M2C_FIELD(arg0, s32 *, 0x3C0) = 0;
        M2C_FIELD(arg0, s32 *, 0x454) = 1;
        return;
    case 3:
        if (M2C_FIELD(arg0, f32 *, 0x3AC) > (4.5e+02f)) {
            transition_enemy_state((void *) (arg0), (int) (5));
            return;
        }
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x3C0);
        switch (temp_r0) {
        case 0:
        case 1:
            if ((void *) M2C_FIELD(arg0, void **, 0x390) == NULL) {
                transition_enemy_state((void *) (arg0), (int) (5));
            }
        case 2:
            return;
        case 3:
            transition_enemy_state((void *) (arg0), (int) (4));
            return;
        }
        break;
    case 0:
        advance_animation_playback();
        if (update_death_check__14TObjEneEpsilonFPv((void *) (arg0)) == 0) {
            enemy_clear_target((void *) (arg0));
        }
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x3C0);
        switch (temp_r0_2) {
        case 0:
            if ((void *) M2C_FIELD(arg0, void **, 0x390) != NULL) {
                update_height_offset__13TObjEneBm3FlyFPv((void *) (arg0));
            }
            update_velocity__9TObjEneDDFPv((void *) (arg0));
            M2C_FIELD(arg0, f32 *, 0x430) = sin_table_lookup((int) (M2C_FIELD(arg0, s32 *, 0x60)));
            M2C_FIELD(arg0, f32 *, 0x438) = cos_table_lookup((int) (M2C_FIELD(arg0, s32 *, 0x60)));
            update_state_flag__13TObjEneBm3FlyFPv((void *) (arg0));
            M2C_FIELD(arg0, f32 *, 0x42C) = approach_value__13TObjEneBm3FlyFff((void *) (arg0), (f32) (M2C_FIELD(arg0, f32 *, 0x42C)), (f32) (M2C_FIELD(arg0, f32 *, 0x398)));
            clamp_flight_height__13TObjEneBm3FlyFPv((void *) (arg0));
            if (can_attack_target__13TObjEneBm3FlyFPv((void *) (arg0)) != 0) {
                M2C_FIELD(arg0, s16 *, 0xB8) = 0;
                M2C_FIELD(arg0, s32 *, 0x3C0) = 1;
            }
            break;
        case 1:
            M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C4) + 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x3C4) >= (s32) M2C_FIELD(lbl_805D50EC, s32 *, 0x1C)) {
                M2C_FIELD(arg0, s32 *, 0x3C4) = 0;
                M2C_FIELD(arg0, s32 *, 0x3C0) = 2;
                M2C_FIELD(arg0, s16 *, 0xB8) = 2;
            }
            update_collide_flag__13TObjEneBm3FlyFPv((void *) (arg0));
            break;
        case 2:
            if (objInBand__FP7GameObjf((void *) (arg0), (f32) ((9.0f))) != 0) {
                M2C_FIELD(arg0, s32 *, 0x440) = (s32) (M2C_FIELD(arg0, s32 *, 0x440) + 1);
                temp_r3 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x390));
                if ((temp_r3 != NULL) && (((VObjB0_800b07d0 *)temp_r3)->v18(arg0, (1.0f)) != 0)) {
                    temp_r3_2 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x390));
                    ((VObjB0_800b07d0 *)temp_r3_2)->v20(arg0, (1.0f));
                    temp_r3_3 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x390));
                    ((VObjB0_800b07d0 *)temp_r3_3)->v23(arg0, (3.0f));
                    if ((check_v2_mode__9TObjEneDDFv() != 0) && (calc_boss4_scale__10TObjPlayerFi((void *) (arg0)) < (0.05f))) {
                        inflict_poison__9TObjEneDDFiPv((void *) (arg0), (void *) (M2C_FIELD(arg0, void **, 0x390)));
                    }
                }
                play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x4003A524)), (void *) (arg0 + 0x38), (int) (0), (int) (0));
                play_effect_if_v2__10TObjPlayerFi((int) (-0x400));
            }
            if (get_flag_b4__21TObjEneMe3ShinowaRealFPv((void *) (arg0)) != 0) {
                if ((s32) M2C_FIELD(arg0, s32 *, 0x440) >= 4) {
                    M2C_FIELD(arg0, s32 *, 0x440) = 0;
                    M2C_FIELD(arg0, s32 *, 0x3C0) = 3;
                } else {
                    M2C_FIELD(arg0, s16 *, 0xB8) = 1;
                    M2C_FIELD(arg0, s32 *, 0x3C0) = 0;
                }
            }
            update_collide_flag__13TObjEneBm3FlyFPv((void *) (arg0));
            break;
        }
        ((VObjB0_800b07d0 *)arg0)->v87();
        play_pitched_cue__13TObjEneBm3FlyFi((s32)((void *) (arg0)));
        return;
    case 5:
        M2C_FIELD(arg0, s32 *, 0x454) = 0;
        break;
    }
}

#pragma push
#pragma fp_contract on
#undef I
#undef R
#undef P
#undef V
#define I(o) M2C_FIELD(arg0, s32 *, o)
#define R(o) M2C_FIELD(arg0, f32 *, o)
#define P(o) M2C_FIELD(arg0, u8 **, o)
#define V ((VObj_800B0B20 *)(arg0))

void TObjEneBm3Fly__sub_800B0B20(u8 *arg0, s32 arg1) {
    Vec_800B0B20 *pos;
    Vec_800B0B20 *off;
    Vec_800B0B20 *vel;
    Vec_800B0B20 p;
    Vec_800B0B20 d;
    f32 z;
    f32 x;
    f32 s;
    f32 len;

    vel = (Vec_800B0B20 *)(arg0 + 0x3E8);
    pos = (Vec_800B0B20 *)(arg0 + 0x3F4);
    off = (Vec_800B0B20 *)(arg0 + 0x400);

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        V->m94();
        I(0x428) &= ~1;
        I(0x428) |= 2;
        I(0x30) |= 0x01000000;
        vel->x = R(0x430) * R(0x43C);
        vel->y = (0.0f);
        vel->z = R(0x438) * R(0x43C);
        if (is_vec_xz_cross_negative(arg0 + 0x430, arg0 + 0x3A0) != 0) {
            I(0x3CC) = 0x8000;
        } else {
            I(0x3CC) = 0;
        }
        I(0x3C4) = 0;
        off->x = (0.0f);
        off->y = (0.0f);
        off->z = (0.0f);
        pos->x = (0.0f);
        pos->y = R(0x42C) - R(0x3C);
        pos->z = (0.0f);
        break;
    case 3:
        if (R(0x3AC) > (4.5e+02f) || P(0x390) == NULL) {
            transition_enemy_state(arg0, 5);
        } else if (R(0x3AC) < (1e+02f)) {
            ((M2C_UNK (*)())choose_attack__13TObjEneBm3FlyFPv)();
        }
        break;
    case 0:
        advance_animation_playback();
        if (update_death_check__14TObjEneEpsilonFPv(arg0) == 0 && V->m102((2e+02f)) == 0) {
            break;
        }
        update__13TObjEneBm3FlyFPv(arg0);
        update_velocity__9TObjEneDDFPv(arg0);
        VecCopy__FP3VecPC3Vec(pos, arg0 + 0x2FC);
        subtract_vector(pos, off);
        if (I(0x3C4) == 0) {
            if ((0.0f) == R(0x430) && (0.0f) == R(0x438)) {
                R(0x430) = sin_table_lookup(I(0x60));
                R(0x438) = cos_table_lookup(I(0x60));
            }
            if (vec3_dot(arg0 + 0x430, arg0 + 0x3A0) < (0.99f)) {
                if (is_vec_xz_cross_negative(arg0 + 0x430, arg0 + 0x3A0) != 0) {
                    x = -R(0x438);
                    z = R(0x430);
                } else {
                    x = R(0x438);
                    z = -R(0x430);
                }
                vel->x = (0.18f) * x + vel->x;
                vel->y = (0.0f);
                vel->z = (0.18f) * z + vel->z;
                VecCopy__FP3VecPC3Vec(arg0 + 0x430, vel);
                update_scale__15TObjBoss2TunnelFPv(arg0 + 0x430);
            } else {
                I(0x3C4) = 1;
                VecCopy__FP3VecPC3Vec(arg0 + 0x430, arg0 + 0x3A0);
            }
        } else {
            VecCopy__FP3VecPC3Vec(arg0 + 0x430, arg0 + 0x3A0);
            s = (5.0f) * sin_table_lookup(I(0x3CC));
            I(0x3CC) += 0x600;
            off->x = R(0x3A8) * s;
            off->y = (0.0f);
            off->z = -R(0x3A0) * s;
        }
        if (R(0x43C) > M2C_FIELD(P(0x350), f32 *, 4)) {
            R(0x43C) *= (0.96f);
        } else {
            R(0x43C) = M2C_FIELD(P(0x350), f32 *, 4);
        }
        vel->x = R(0x430) * R(0x43C);
        vel->y = (0.0f);
        vel->z = R(0x438) * R(0x43C);
        pos->x += vel->x;
        pos->z += vel->z;
        VecCopy__FP3VecPC3Vec(&p, pos);
        vec3_add_to(&p, off);
        VecCopy__FP3VecPC3Vec(&d, &p);
        subtract_vector(&d, arg0 + 0x38);
        d.y = (0.0f);
        len = ((f32 (*)(void *))clamp_velocity__15TObjBoss2TunnelFPv)(&d);
        update_dd_flag__13TObjEneBm3FlyFPv(arg0, d.x, d.z, len);
        R(0x42C) = approach_value__13TObjEneBm3FlyFff(arg0, pos->y, R(0x398));
        pos->y = R(0x42C);
        clamp_flight_height__13TObjEneBm3FlyFPv(arg0);
        I(0x60) = (s32)(TObjEneBm3Fly__data_8043B118[0] * get_ad_end_text_start__10TObjPlayerFv(R(0x430), R(0x438)));
        V->m87();
        pos->x -= R(0x38);
        pos->y -= R(0x42C);
        pos->z -= R(0x40);
        play_pitched_cue__13TObjEneBm3FlyFi((s32)arg0);
        break;
    case 5:
        R(0x43C) = M2C_FIELD(P(0x350), f32 *, 4);
        break;
    }
}

#pragma pop
#undef I
#undef R
#undef P
#undef V

#pragma push
#pragma fp_contract on
#pragma opt_common_subs off
#define F_800B(off, T) M2C_FIELD(arg0, T *, off)

#pragma push
#pragma fp_contract on
#define I(o) M2C_FIELD(arg0, s32 *, o)
#define R(o) M2C_FIELD(arg0, f32 *, o)
void TObjEneBm3Fly__sub_800B0F70(u8 *arg0, s32 arg1) {
    Vec_800B0F70 d;
    f32 radius;
    s32 a;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        ((VObj_18_aab587 *)(arg0))->m93();
        I(0x428) &= ~1;
        I(0x428) |= 2;
        I(0x30) |= 0x01000000;
        I(0x3CC) = 0;
        I(0x3D0) = (s32)((512.0f) * calc_elapsed_scaled__9TObjEneDDFv(arg0)) + 0x800;
        I(0x3D4) = I(0x448);
        I(0x3D8) = (s32)((512.0f) * calc_elapsed_scaled__9TObjEneDDFv(arg0)) + 0xA00;
        d.x = R(0x38) - R(0x41C);
        d.y = (0.0f);
        d.z = R(0x40) - R(0x424);
        if (is_vec_xz_cross_negative(&d, arg0 + 0x430) != 0) {
            I(0x3D8) *= -1;
        }
        enemy_clear_target(arg0);
        I(0x3C8) = -1;
        break;
    case 3:
        if (update_linked_position__14TObjEneEpsilonFPv((2e+02f)) != 0) {
            transition_enemy_state(arg0, 2);
        }
        break;
    case 0:
        advance_animation_playback();
        I(0x3C4)++;
        if (I(0x3C4) > 300) {
            I(0x3C4) = 0;
            I(0x3D8) = (s32)((512.0f) * calc_elapsed_scaled__9TObjEneDDFv(arg0)) + 0xA00;
        }
        I(0x3CC) += I(0x3D0);
        radius = (3e+01f) * cos_table_lookup(I(0x3CC) / 2);
        I(0x3D4) += I(0x3D8);
        a = I(0x3D4);
        R(0x38) = radius * sin_table_lookup(a) + R(0x41C);
        R(0x42C) = (1e+01f) * sin_table_lookup(I(0x3D4)) + R(0x444);
        R(0x40) = radius * cos_table_lookup(a) + R(0x424);
        I(0x60) = a - 0x4000;
        update_collide_flag__13TObjEneBm3FlyFPv(arg0);
        R(0x44) = R(0x2FC);
        R(0x4C) = R(0x304);
        ((VObj_18_aab587 *)(arg0))->m86();
        TObjEneBm3Fly__sub_800B1574((s32)arg0);
        break;
    case 5:
        R(0x430) = R(0x38) - R(0x44);
        R(0x434) = (0.0f);
        R(0x438) = R(0x40) - R(0x4C);
        R(0x43C) = update_scale__15TObjBoss2TunnelFPv(arg0 + 0x430);
        break;
    }
}
#pragma pop

void TObjEneBm3Fly__sub_800B1214(u8 *arg0, s32 arg1) {
    f32 *p = (f32 *)(arg0 + 0x3E8);
    switch (arg1) {
    case 4:
        F_800B(0xB8, s16) = 1;
        ((VObj_18 *)(arg0))->m93();
        F_800B(0x428, s32) &= ~1;
        F_800B(0x428, s32) |= 2;
        F_800B(0x30, s32) |= 0x01000000;
        TObjEneBm3Fly__sub_800B1634(arg0);
        F_800B(0x3C0, s32) = 0;
        F_800B(0x3C4, s32) = 0;
        p[0] = (3e+01f) * sin_table_lookup(F_800B(0x448, s32)) + F_800B(0x41C, f32);
        p[1] = F_800B(0x444, f32);
        p[2] = (3e+01f) * cos_table_lookup(F_800B(0x448, s32)) + F_800B(0x424, f32);
        F_800B(0x60, s32) = (s32)(TObjEneBm3Fly__data_8043B118[0] * get_ad_end_text_start__10TObjPlayerFv(F_800B(0x40C, f32), F_800B(0x414, f32)));
        enemy_clear_target(arg0);
        break;
    case 3:
        if (F_800B(0x3C4, s32) == 2) {
            transition_enemy_state(arg0, 1);
        }
        break;
    case 5:
        break;
    case 0:
        advance_animation_playback();
        switch (F_800B(0x3C4, s32)) {
        case 0:
            F_800B(0x38, f32) += F_800B(0x40C, f32);
            F_800B(0x42C, f32) += F_800B(0x410, f32);
            F_800B(0x40, f32) += F_800B(0x414, f32);
            F_800B(0x40C, f32) *= (0.9f);
            F_800B(0x410, f32) += lbl_805D9E80;
            F_800B(0x414, f32) *= (0.9f);
            F_800B(0x3C0, s32)++;
            if (F_800B(0x3C0, s32) > 40) {
                F_800B(0x3C4, s32) = 1;
                F_800B(0x3C0, s32) = 0;
                F_800B(0x43C, f32) = (0.0f);
            }
            break;
        case 1:
            VecCopy__FP3VecPC3Vec(arg0 + 0x430, p);
            F_800B(0x430, f32) -= F_800B(0x38, f32);
            F_800B(0x434, f32) -= F_800B(0x42C, f32);
            F_800B(0x438, f32) -= F_800B(0x40, f32);
            F_800B(0x3E0, f32) = update_scale__15TObjBoss2TunnelFPv(arg0 + 0x430);
            if (F_800B(0x43C, f32) < (2.0f)) {
                F_800B(0x43C, f32) += (0.1f);
            }
            if (F_800B(0x3E0, f32) < (2.0f)) {
                VecCopy__FP3VecPC3Vec(arg0 + 0x38, p);
                F_800B(0x3C4, s32) = 2;
            } else {
                F_800B(0x38, f32) = F_800B(0x430, f32) * F_800B(0x43C, f32) + F_800B(0x38, f32);
                F_800B(0x42C, f32) = F_800B(0x434, f32) * F_800B(0x43C, f32) + F_800B(0x42C, f32);
                F_800B(0x40, f32) = F_800B(0x438, f32) * F_800B(0x43C, f32) + F_800B(0x40, f32);
            }
            F_800B(0x60, s32) = (s32)(TObjEneBm3Fly__data_8043B118[0] * get_ad_end_text_start__10TObjPlayerFv(F_800B(0x430, f32), F_800B(0x438, f32)));
            break;
        }
        update_collide_flag__13TObjEneBm3FlyFPv(arg0);
        F_800B(0x44, f32) = F_800B(0x2FC, f32);
        F_800B(0x4C, f32) = F_800B(0x304, f32);
        clamp_flight_height__13TObjEneBm3FlyFPv(arg0);
        ((VObj_18 *)(arg0))->m86();
        break;
    }
}
#pragma pop

void TObjEneBm3Fly__vt102(void *arg0, f32 farg0) {
    if (((VObj_800B150C_800B07D0 *)arg0)->m97() != 0) {
        select_and_apply_target__14TObjEneEpsilonFPvf(arg0, farg0);
        return;
    }
    spawn_part__14TObjEneEpsilonFi(arg0, farg0);
}
void TObjEneBm3Fly__sub_800B1574(s32 arg0) {
    play_persistent_sound((void *) (((s32)copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x4003AB23)))), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (0));
    play_effect_if_v2__10TObjPlayerFi((int) (-0x400));
}
void play_pitched_cue__13TObjEneBm3FlyFi(s32 arg0) {
    play_persistent_sound((void *) (((s32)copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x40039E22)))), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (0));
    play_effect_if_v2__10TObjPlayerFi((int) (-0x400));
}

}

#undef update__13TObjEneBm3FlyFPv
#undef copy_target_state__14TObjEnePanarmsFPvPv
#undef TObjEneBm3Fly__sub_800B1634
#undef approach_value__13TObjEneBm3FlyFff
#undef clamp_flight_height__13TObjEneBm3FlyFPv
#undef update_state_flag__13TObjEneBm3FlyFPv
#undef transition_enemy_state
#undef clamp_velocity__15TObjBoss2TunnelFPv
#undef choose_attack__13TObjEneBm3FlyFPv
#undef update_dd_flag__13TObjEneBm3FlyFPv
#undef play_sound_effect
#undef update_collide_flag__13TObjEneBm3FlyFPv
#undef circle_destination__13TObjEneBm3FlyFPvi
#undef can_attack_target__13TObjEneBm3FlyFPv
#undef update_height_offset__13TObjEneBm3FlyFPv

#define cos_table_lookup (*(f32 (*)())&cos_table_lookup)
#define transition_enemy_state (*(M2C_UNK (*)(void *, int))&transition_enemy_state)
#define find_entity_by_id (*(void * (*)(u16))&find_entity_by_id)
#define clamp_flight_height__13TObjEneBm3FlyFPv (*(int (*)(void*))&clamp_flight_height__13TObjEneBm3FlyFPv)

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_67c185 { char pad[0x18]; };

struct VObj_18_67c185 : VBase_18_67c185 {
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
    virtual void m92();
    virtual void m93();
    virtual void m94();
    virtual M2C_UNK m95();
    virtual M2C_UNK m96();
};

typedef s32 M2C_UNK;
typedef struct Cand_800B1684 {
    u16 id;
    u16 pad;
    f32 dist;
} Cand_800B1684;

typedef struct Fly_800B1684 {
    u8 pad0[0x38C];
    u16 f38C;
    u8 pad38E[0x418 - 0x38E];
    u16 nest;
    u8 pad41A[0x454 - 0x41A];
    s32 f454;
} Fly_800B1684;

extern "C" {
void TObjEneBm3Fly__vt86(u8 *arg0);
M2C_UNK get_field_0c__10TObjPlayerFPv(int);
f32 get_pos_x__10TObjPlayerFPv(int);
f32 get_random_float__8TObjFishFv(f32);
extern s32 TObjEneBm3Fly__data_805D50E4;
s32 get_random_scaled__9TObjEneDDFv(void *);
s32 has_free_attack_slot__17TObjEneBm3FlyNestFPvUs(void *, u16);
M2C_UNK enemy_set_target_id(void *, u16);
s32 collect_enemy_target_candidates(void *, Cand_800B1684 *, f32);
}

extern "C" {

void TObjEneBm3Fly__vt87(void* p);
u16 get_active_id__13TObjEneBm3FlyFPv(void *arg0);
int TObjEneDD__vt86(void*);

u16 get_active_id__13TObjEneBm3FlyFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x454) != 0) {
        return M2C_FIELD(arg0, u16 *, 0x38C);
    }
    return 0xFFFFU;
}

#pragma push
#pragma fp_contract on
void TObjEneBm3Fly__sub_800B1634(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x444) = (f32) (((2.0f) * calc_elapsed_scaled__9TObjEneDDFv((void *) (arg0))) + ((45.0f) + M2C_FIELD(arg0, f32 *, 0x420)));
    M2C_FIELD(arg0, s32 *, 0x448) = get_random_scaled__9TObjEneDDFv((void *) (arg0));
}
#pragma pop

void choose_attack__13TObjEneBm3FlyFPv(Fly_800B1684 *s) {
    Cand_800B1684 players[4];
    void *nest;
    s32 count;
    u16 id;
    s32 i;
    nest = find_entity_by_id(s->nest);
    if (nest == NULL) {
        transition_enemy_state(s, 4);
        s->f454 = 0;
    }
    if (has_free_attack_slot__17TObjEneBm3FlyNestFPvUs(nest, s->f38C) != 0) {
        transition_enemy_state(s, 3);
        return;
    }
    count = collect_enemy_target_candidates(s, players, (1e+04f));
    for (i = 0; i < count; i++) {
        id = players[i].id;
        if (id != s->f38C && has_free_attack_slot__17TObjEneBm3FlyNestFPvUs(nest, id) != 0) {
            enemy_set_target_id(s, id);
            transition_enemy_state(s, 3);
            return;
        }
    }
    transition_enemy_state(s, 4);
    s->f454 = 0;
}

s32 can_attack_target__13TObjEneBm3FlyFPv(u8 *arg0) {
    f32 temp_f31;
    if ((M2C_FIELD(arg0, f32 *, 0x3AC) < ((5.0f) + get_pos_x__10TObjPlayerFPv((int) (TObjEneBm3Fly__data_805D50E4)))) && (get_random_float__8TObjFishFv((f32) (M2C_FIELD(arg0, f32 *, 0x42C) - M2C_FIELD(arg0, f32 *, 0x398))) < (1.0f))) {
        temp_f31 = vec3_dot((void *) (arg0 + 0x430), (void *) (arg0 + 0x3A0));
        get_field_0c__10TObjPlayerFPv((int) (M2C_FIELD(arg0, s32 *, 0x318)));
        if (temp_f31 >= cos_table_lookup()) {
            return 1;
        }
    }
    return 0;
}

f32 approach_value__13TObjEneBm3FlyFff(f32 farg0, f32 farg1) {
    f32 temp_f31;
    f32 var_f1;
    f32 cap;

    temp_f31 = farg1 - farg0;
    if (get_random_float__8TObjFishFv(temp_f31) < (0.2f)) {
        return farg1;
    }
    var_f1 = (0.1f);
    var_f1 = temp_f31 * var_f1;
    if (var_f1 > (1.5f)) {
        var_f1 = (1.5f);
    } else if (var_f1 < (-1.5f)) {
        var_f1 = (-1.5f);
    }
    return farg0 + var_f1;
}

void TObjEneBm3Fly__vt86(u8 *arg0) {
    f32 temp_f31;
    temp_f31 = M2C_FIELD(arg0, f32 *, 0x42C) - M2C_FIELD(arg0, f32 *, 0x3C);
    if (temp_f31 >= (3e+01f)) {
        ((VObj_18_67c185 *)(arg0))->m95();
    } else {
        ((VObj_18_67c185 *)(arg0))->m96();
    }
    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), f32 *, 4) = temp_f31;
}

void TObjEneBm3Fly__vt87(void* p) { TObjEneDD__vt86(p); clamp_flight_height__13TObjEneBm3FlyFPv(p); }

}

#undef cos_table_lookup
#undef transition_enemy_state
#undef find_entity_by_id
#undef clamp_flight_height__13TObjEneBm3FlyFPv

#define lbl_805D50EC (*(f32 * *)&lbl_805D50EC)
#define TObjEneBm3Fly__breakup_model (*(void * *)&TObjEneBm3Fly__breakup_model)
#define VBase_18 VBase_18__p3
#define VObj_18 VObj_18__p3

#include "types.h"
#include "pso/enemy/TObjEneBm3Fly.h"
#include <stddef.h>
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_800B3EB8 { char pad[0x18]; };
struct VObj_800B3EB8 : VBase_800B3EB8 {
    virtual void p0();
    virtual void p1();
    virtual void p2();
    virtual void p3();
    virtual void p4();
    virtual void p5();
    virtual void p6();
    virtual void p7();
    virtual void p8();
    virtual void p9();
    virtual void p10();
    virtual void p11();
    virtual void p12();
    virtual void p13();
    virtual void p14();
    virtual void p15();
    virtual void p16();
    virtual void p17();
    virtual void p18();
    virtual void p19();
    virtual void p20();
    virtual void p21();
    virtual void p22();
    virtual void p23();
    virtual void p24();
    virtual void p25();
    virtual void p26();
    virtual void p27();
    virtual void p28();
    virtual void p29();
    virtual void p30();
    virtual void p31();
    virtual void p32();
    virtual void p33();
    virtual void p34();
    virtual void p35();
    virtual void p36();
    virtual void p37();
    virtual void p38();
    virtual void p39();
    virtual void p40();
    virtual void p41();
    virtual void p42();
    virtual void p43();
    virtual void p44();
    virtual void p45();
    virtual void p46();
    virtual void p47();
    virtual void p48();
    virtual void p49();
    virtual void p50();
    virtual void p51();
    virtual void p52();
    virtual void p53();
    virtual void p54();
    virtual void p55();
    virtual void p56();
    virtual void p57();
    virtual void p58();
    virtual void p59();
    virtual void p60();
    virtual void p61();
    virtual void p62();
    virtual void p63();
    virtual void p64();
    virtual void p65();
    virtual void p66();
    virtual void p67();
    virtual void p68();
    virtual void p69();
    virtual void p70();
    virtual void p71();
    virtual void p72();
    virtual void p73();
    virtual void p74();
    virtual void p75();
    virtual void p76();
    virtual void p77();
    virtual void p78();
    virtual void p79();
    virtual void p80();
    virtual void p81();
    virtual void p82();
    virtual void p83();
    virtual void p84();
    virtual void m85(s16, int);
    virtual void m86();
};

extern "C" {
extern const f32 lbl_805D9CF8;
extern const f32 lbl_805D9D6C;
void init_vertex_table__17TObjEneBm3FlyNestFv(void);
}

extern "C" {

struct Base_800B1A90_800B1978 { char pad[0x18]; };

struct VObj_800B1A90_800B1978 : Base_800B1A90_800B1978 {
    virtual void v0();
virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void v6();virtual void v7();virtual void v8();virtual void v9();virtual void v10();
virtual void v11();virtual void v12();virtual void v13();virtual void v14();virtual void v15();virtual void v16();virtual void v17();virtual void v18();virtual void v19();virtual void v20();
virtual void v21();virtual void v22();virtual void v23();virtual void v24();virtual void v25();virtual void v26();virtual void v27();virtual void v28();virtual void v29();virtual void v30();
virtual void v31();virtual void v32();virtual void v33();virtual void v34();virtual void v35();virtual void v36();virtual void v37();virtual void v38();virtual void v39();virtual void v40();
virtual void v41();virtual void v42();virtual void v43();virtual void v44();virtual void v45();virtual void v46();virtual void v47();virtual void v48();virtual void v49();virtual void v50();
virtual void v51();virtual void v52();virtual void v53();virtual void v54();virtual void v55();virtual void v56();virtual void v57();virtual void v58();virtual void v59();virtual void v60();
virtual void v61();virtual void v62();virtual void v63();virtual void v64();virtual void v65();virtual void v66();virtual void v67();virtual void v68();virtual void v69();virtual void v70();
virtual void v71();virtual void v72();virtual void v73();virtual void v74();virtual void v75();virtual void v76();virtual void v77();virtual void v78();virtual void v79();virtual void v80();
virtual void v81();virtual void v82();virtual void v83();virtual void v84();virtual void v85();virtual void v86();virtual void v87();virtual void v88();virtual void v89();virtual void v90();
virtual void v91();virtual void v92();virtual void v93();virtual void v94();virtual void v95();virtual void v96();virtual void v97();virtual void v98();virtual void v99();
    virtual u32 v102();
};

struct Base_800B2214_800B1978 { char pad[0xC]; };

struct VObj_800B2214_800B1978 : Base_800B2214_800B1978 {
    virtual void m2(int);
};

struct VBase_18_6eb1ad
{
  char pad[0x18];
};

struct VObj_18_6eb1ad : VBase_18_6eb1ad {
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
    virtual s32 m81();
    virtual void m82();
    virtual M2C_UNK m83();
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
    virtual M2C_UNK m98();
    virtual void m99();
    virtual void m100();
    virtual void m101();
    virtual void m102();
    virtual M2C_UNK m103();
};

struct Stack_800B22C8 {
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
};

struct RecoveredGlobal_800B22C8_lbl_8043B0FC {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_800B22C8_lbl_80491B4C {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_800B2168___vt__13TObjEneBm3Fly {
    M2C_UNK value;
    u8 remaining[0x1A8];
};

struct VBase_18_800B23A0 { char pad[0x18]; };

struct VObj_18_800B23A0 : VBase_18_800B23A0 {
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

struct Vec_800B23A0 { s32 x, y, z; };

struct Ent_800B23A0 { s32 a; u32 count; };

struct Pair_800B23A0 { s32 k; Ent_800B23A0 *e; };

typedef struct VBase_18_6eb1ad VBase_18_6eb1ad;

typedef struct VObj_18_6eb1ad VObj_18_6eb1ad;

typedef char RecoveredGlobal_800B2168___vt__13TObjEneBm3Fly_size[sizeof(RecoveredGlobal_800B2168___vt__13TObjEneBm3Fly) == 0x1AC ? 1 : -1];

typedef char RecoveredGlobal_800B22C8_lbl_8043B0FC_size[sizeof(RecoveredGlobal_800B22C8_lbl_8043B0FC) == 0x10 ? 1 : -1];

typedef char RecoveredGlobal_800B22C8_lbl_80491B4C_size[sizeof(RecoveredGlobal_800B22C8_lbl_80491B4C) == 0x2C ? 1 : -1];

struct RecoveredGlobal_800B2948_lbl_8043B2A4 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_800B2948_lbl_80500B00 {
    M2C_UNK value;
    u8 remaining[0x3C];
};

struct NestAttachmentPoint { f32 x,y,z; };

struct Obj_800B2A5C { u8 pad[0x3b0]; s32 count; u8 pad2[4]; u16 ids[6]; };

struct Obj_800B2AF4 { u8 pad[0x3b0]; s32 count; u8 pad2[4]; u16 ids[6]; };

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

struct VBase_18_113a45 { char pad[0x18]; };

struct VObj_18_113a45 : VBase_18_113a45 {
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
    virtual M2C_UNK m103();
};

struct Vec_800B264C { f32 x, y, z; };

struct Cam_800B264C { u8 b[0x1C]; };

struct Nest_800B264C {
    u8 pad0[0x24];
    s32 f24;
    u8 pad28[0x38 - 0x28];
    u8 f38[0x60 - 0x38];
    s32 f60;
    u8 pad64[0x2FC - 0x64];
    Vec_800B264C f2FC;
    u8 pad308[0x326 - 0x308];
    s16 f326;
    u8 pad328[0x3AC - 0x328];
    s32 f3AC;
    u8 pad3B0[0x3C8 - 0x3B0];
    Vec_800B264C f3C8;
    u8 pad3D4[0x3E0 - 0x3D4];
    u8 f3E0[0x440 - 0x3E0];
    Cam_800B264C cams[4];
    f32 f4B0;
};

struct VBase_18_9c7b63 { char pad[0x18]; };

struct VObj_18_9c7b63 : VBase_18_9c7b63 {
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
    virtual void m92();
    virtual void m93();
    virtual M2C_UNK m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual M2C_UNK m100();
};

struct Vec_800B2C24 { f32 x, y, z; };

struct Base_800B2BAC_800B2A14 { char pad[0x18]; };

struct VObj_800B2BAC_800B2A14 : Base_800B2BAC_800B2A14 {
    virtual void m0();
    virtual void m1();  virtual void m2();  virtual void m3();  virtual void m4();
    virtual void m5();  virtual void m6();  virtual void m7();  virtual void m8();
    virtual void m9();  virtual void m10(); virtual void m11(); virtual void m12();
    virtual void m13(); virtual void m14(); virtual void m15(); virtual void m16();
    virtual void m17(); virtual void m18(); virtual void m19(); virtual void m20();
    virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24();
    virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28();
    virtual void m29(); virtual void m30(); virtual void m31(); virtual void m32();
    virtual void m33(); virtual void m34(); virtual void m35(); virtual void m36();
    virtual void m37(); virtual void m38(); virtual void m39(); virtual void m40();
    virtual void m41(); virtual void m42(); virtual void m43(); virtual void m44();
    virtual void m45(); virtual void m46(); virtual void m47(); virtual void m48();
    virtual void m49(); virtual void m50(); virtual void m51(); virtual void m52();
    virtual void m53(); virtual void m54(); virtual void m55(); virtual void m56();
    virtual void m57(); virtual void m58(); virtual void m59(); virtual void m60();
    virtual void m61(); virtual void m62(); virtual void m63(); virtual void m64();
    virtual void m65(); virtual void m66(); virtual void m67(); virtual void m68();
    virtual void m69(); virtual void m70(); virtual void m71(); virtual void m72();
    virtual void m73(); virtual void m74(); virtual void m75(); virtual void m76();
    virtual void m77(); virtual void m78(); virtual void m79(); virtual void m80();
    virtual void m81(); virtual void m82(); virtual void m83(); virtual void m84();
    virtual void m85(); virtual void m86(); virtual void m87(); virtual void m88();
    virtual void m89(); virtual void m90(); virtual void m91(); virtual void m92();
    virtual void m93();
};

typedef char RecoveredGlobal_800B2948_lbl_8043B2A4_size[sizeof(RecoveredGlobal_800B2948_lbl_8043B2A4) == 0x20 ? 1 : -1];

typedef char RecoveredGlobal_800B2948_lbl_80500B00_size[sizeof(RecoveredGlobal_800B2948_lbl_80500B00) == 0x40 ? 1 : -1];

struct Base_800b2e8c { char pad[0x18]; };

struct VObj_800b2e8c : Base_800b2e8c {
    virtual void m00(); virtual void m01(); virtual void m02(); virtual void m03();
    virtual void m04(); virtual void m05(); virtual void m06(); virtual void m07();
    virtual void m08(); virtual void m09(); virtual void m0a(); virtual void m0b();
    virtual void m0c(); virtual void m0d(); virtual void m0e(); virtual void m0f();
    virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13();
    virtual void m14(); virtual void m15(); virtual void m16(); virtual void m17();
    virtual void m18(); virtual void m19(); virtual void m1a(); virtual void m1b();
    virtual void m1c(); virtual void m1d(); virtual void m1e(); virtual void m1f();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m2a(); virtual void m2b();
    virtual void m2c(); virtual void m2d(); virtual void m2e(); virtual void m2f();
    virtual void m30(); virtual void m31(); virtual void m32(); virtual void m33();
    virtual void m34(); virtual void m35(); virtual void m36(); virtual void m37();
    virtual void m38(); virtual void m39(); virtual void m3a(); virtual void m3b();
    virtual void m3c(); virtual void m3d(); virtual void m3e(); virtual void m3f();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m4a(); virtual void m4b();
    virtual void m4c(); virtual void m4d(); virtual void m4e(); virtual void m4f();
    virtual void m50(); virtual void m51(); virtual void m52(); virtual void m53();
    virtual void m54(); virtual void m55(); virtual void m56(); virtual void m57();
    virtual void m58(); virtual void m59(); virtual void m5a(); virtual void m5b();
    virtual void m5c(); virtual void m5d();
    virtual void m180();
    virtual void pad1(); virtual void pad2(); virtual void pad3(); virtual void pad4(); virtual void pad5();
    virtual void m198();
};

struct VBase18_800b2fd0 { char pad[0x18]; };

struct VObj18_800b2fd0 : VBase18_800b2fd0 {
    virtual void vpad0();
    virtual void vpad1();
    virtual void vpad2();
    virtual void vpad3();
    virtual void vpad4();
    virtual void vpad5();
    virtual void vpad6();
    virtual void vpad7();
    virtual void vpad8();
    virtual void vpad9();
    virtual void vpad10();
    virtual void vpad11();
    virtual void vpad12();
    virtual void vpad13();
    virtual void vpad14();
    virtual void vpad15();
    virtual void vpad16();
    virtual void vpad17();
    virtual void vpad18();
    virtual void vpad19();
    virtual void vpad20();
    virtual void vpad21();
    virtual void vpad22();
    virtual void vpad23();
    virtual void vpad24();
    virtual void vpad25();
    virtual void vpad26();
    virtual void vpad27();
    virtual void vpad28();
    virtual void vpad29();
    virtual void vpad30();
    virtual void vpad31();
    virtual void vpad32();
    virtual void vpad33();
    virtual void vpad34();
    virtual void vpad35();
    virtual void vpad36();
    virtual void vpad37();
    virtual void vpad38();
    virtual void vpad39();
    virtual void vpad40();
    virtual void vpad41();
    virtual void vpad42();
    virtual void vpad43();
    virtual void vpad44();
    virtual void vpad45();
    virtual void vpad46();
    virtual void vpad47();
    virtual void vpad48();
    virtual void vpad49();
    virtual void vpad50();
    virtual void vpad51();
    virtual void vpad52();
    virtual void vpad53();
    virtual void vpad54();
    virtual void vpad55();
    virtual void vpad56();
    virtual void vpad57();
    virtual void vpad58();
    virtual void vpad59();
    virtual void vpad60();
    virtual void vpad61();
    virtual void vpad62();
    virtual void vpad63();
    virtual void vpad64();
    virtual void vpad65();
    virtual void vpad66();
    virtual void vpad67();
    virtual void vpad68();
    virtual void vpad69();
    virtual void vpad70();
    virtual void vpad71();
    virtual void vpad72();
    virtual void vpad73();
    virtual void vpad74();
    virtual void vpad75();
    virtual void vpad76();
    virtual void vpad77();
    virtual void vpad78();
    virtual void vpad79();
    virtual void vpad80();
    virtual void vpad81();
    virtual void vpad82();
    virtual void vpad83();
    virtual void vpad84();
    virtual void vpad85();
    virtual void vpad86();
    virtual void vpad87();
    virtual void vpad88();
    virtual void vpad89();
    virtual void vpad90();
    virtual void vpad91();
    virtual void vpad92();
    virtual void vpad93();
    virtual void vf180();
    virtual void vpad95();
    virtual void vpad96();
    virtual void vpad97();
    virtual void vpad98();
    virtual void vpad99();
    virtual void vf198();
};

struct VBase18_800b30b0 { char pad[0x18]; };

struct VObj18_800b30b0 : VBase18_800b30b0 {
    virtual void vpad0();
    virtual void vpad1();
    virtual void vpad2();
    virtual void vpad3();
    virtual void vpad4();
    virtual void vpad5();
    virtual void vpad6();
    virtual void vpad7();
    virtual void vpad8();
    virtual void vpad9();
    virtual void vpad10();
    virtual void vpad11();
    virtual void vpad12();
    virtual void vpad13();
    virtual void vpad14();
    virtual void vpad15();
    virtual void vpad16();
    virtual void vpad17();
    virtual void vpad18();
    virtual void vpad19();
    virtual void vpad20();
    virtual void vpad21();
    virtual void vpad22();
    virtual void vpad23();
    virtual void vpad24();
    virtual void vpad25();
    virtual void vpad26();
    virtual void vpad27();
    virtual void vpad28();
    virtual void vpad29();
    virtual void vpad30();
    virtual void vpad31();
    virtual void vpad32();
    virtual void vpad33();
    virtual void vpad34();
    virtual void vpad35();
    virtual void vpad36();
    virtual void vpad37();
    virtual void vpad38();
    virtual void vpad39();
    virtual void vpad40();
    virtual void vpad41();
    virtual void vpad42();
    virtual void vpad43();
    virtual void vpad44();
    virtual void vpad45();
    virtual void vpad46();
    virtual void vpad47();
    virtual void vpad48();
    virtual void vpad49();
    virtual void vpad50();
    virtual void vpad51();
    virtual void vpad52();
    virtual void vpad53();
    virtual void vpad54();
    virtual void vpad55();
    virtual void vpad56();
    virtual void vpad57();
    virtual void vpad58();
    virtual void vpad59();
    virtual void vpad60();
    virtual void vpad61();
    virtual void vpad62();
    virtual void vpad63();
    virtual void vpad64();
    virtual void vpad65();
    virtual void vpad66();
    virtual void vpad67();
    virtual void vpad68();
    virtual void vpad69();
    virtual void vpad70();
    virtual void vpad71();
    virtual void vpad72();
    virtual void vpad73();
    virtual void vpad74();
    virtual void vpad75();
    virtual void vpad76();
    virtual void vpad77();
    virtual void vpad78();
    virtual void vpad79();
    virtual void vpad80();
    virtual void vpad81();
    virtual void vpad82();
    virtual void vpad83();
    virtual void vpad84();
    virtual void vpad85();
    virtual void vpad86();
    virtual void vpad87();
    virtual void vpad88();
    virtual void vpad89();
    virtual void vpad90();
    virtual void vpad91();
    virtual void vpad92();
    virtual void vpad93();
    virtual void vf180();
    virtual void vpad95();
    virtual void vpad96();
    virtual void vpad97();
    virtual void vpad98();
    virtual void vpad99();
    virtual void vf198();
};

struct Base_800B3354_800B30B0 { char pad[0x18]; };

struct VObj_800B3354_800B30B0 : Base_800B3354_800B30B0 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51();
    virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55();
    virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63();
    virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67();
    virtual void m68(); virtual void m69(); virtual void m70(); virtual void m71();
    virtual void m72(); virtual void m73(); virtual void m74(); virtual void m75();
    virtual void m76(); virtual void m77(); virtual void m78(); virtual void m79();
    virtual void m80(); virtual void m81(); virtual void m82(); virtual void m83();
    virtual void m84(); virtual void m85(); virtual void m86(); virtual void m87();
    virtual void m88(); virtual void m89(); virtual void m90(); virtual void m91();
    virtual void m92(); virtual void m93();
    virtual void m94();
    virtual void m95(); virtual void m96(); virtual void m97(); virtual void m98();
    virtual void m99();
    virtual void m100();
};

struct Base_800B3428_800B30B0 { char pad[0x18]; };

struct VObj_800B3428_800B30B0 : Base_800B3428_800B30B0 {
virtual void f151();
virtual void f152();
virtual void f153();
virtual void f154();
virtual void f155();
virtual void f156();
virtual void f157();
virtual void f158();
virtual void f159();
virtual void f160();
virtual void f161();
virtual void f162();
virtual void f163();
virtual void f164();
virtual void f165();
virtual void f166();
virtual void f167();
virtual void f168();
virtual void f169();
virtual void f170();
virtual void f171();
virtual void f172();
virtual void f173();
virtual void f174();
virtual void f175();
virtual void f176();
virtual void f177();
virtual void f178();
virtual void f179();
virtual void f180();
virtual void f181();
virtual void f182();
virtual void f183();
virtual void f184();
virtual void f185();
virtual void f186();
virtual void f187();
virtual void f188();
virtual void f189();
virtual void f190();
virtual void f191();
virtual void f192();
virtual void f193();
virtual void f194();
virtual void f195();
virtual void f196();
virtual void f197();
virtual void f198();
virtual void f199();
virtual void f200();
virtual void f201();
virtual void f202();
virtual void f203();
virtual void f204();
virtual void f205();
virtual void f206();
virtual void f207();
virtual void f208();
virtual void f209();
virtual void f210();
virtual void f211();
virtual void f212();
virtual void f213();
virtual void f214();
virtual void f215();
virtual void f216();
virtual void f217();
virtual void f218();
virtual void f219();
virtual void f220();
virtual void f221();
virtual void f222();
virtual void f223();
virtual void f224();
virtual void f225();
virtual void f226();
virtual void f227();
virtual void f228();
virtual void f229();
virtual void f230();
virtual void f231();
virtual void f232();
virtual void f233();
virtual void f234();
virtual void f235();
virtual void f236();
virtual void f237();
virtual void f238();
virtual void f239();
virtual void f240();
virtual void f241();
virtual void f242();
virtual void f243();
virtual void f244();
    virtual void m94();
virtual void f246();
virtual void f247();
virtual void f248();
virtual void f249();
virtual void f250();
    virtual void m100();
};

struct VBase_18_e9c804 { char pad[0x18]; };

struct VObj_18_e9c804 : VBase_18_e9c804 {
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
    virtual M2C_UNK m89();
    virtual M2C_UNK m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual M2C_UNK m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual M2C_UNK m100();
};

struct Stack_800B318C {
    f32 sp8;
    u8 pad_C[0x4];
    f32 sp10;
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
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual M2C_UNK m93();
};

struct VBase_18_800B36F8 { char pad[0x18]; };

struct VObj_18_800B36F8 : VBase_18_800B36F8 {
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

struct Elem_800B36F8 { f32 x, y, z; };

struct Self_800B36F8 { u8 pad[0x3E0]; Elem_800B36F8 arr[6]; };

struct VObj_18_p5 : VBase_18 {
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
    virtual s32 m81();
    virtual void m82();
    virtual M2C_UNK m83();
    virtual void m84();
    virtual void m85();
    virtual M2C_UNK m86();
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
    virtual M2C_UNK m98();
    virtual void m99();
    virtual void m100();
    virtual void m101();
    virtual M2C_UNK m102();
};

struct Obj_800B3E40 { u8 pad[0x18]; void *vtbl; u8 pad2[0x440 - 0x1c]; u8 arr[4][0x1c]; };

typedef struct Vec_800B39CC {
    f32 x, y, z;
} Vec_800B39CC;

typedef struct Nest_800B39CC {
    u8 pad0[0x2C];
    s16 f2C;
    u8 pad2E[0x38 - 0x2E];
    Vec_800B39CC pos;
    u8 pad44[0x3B0 - 0x44];
    s32 count;
    s32 spawned;
    u16 ids[6];
    u16 nextId;
    u8 pad3C6[0x3D4 - 0x3C6];
    u8 f3D4[0xC];
} Nest_800B39CC;

struct Anim_800B41E8 { s32 motions, actions, initial_action, counts; };

struct Vec_800B41E8 { f32 x, y, z; };

struct Coll_800B41E8 { u8 pad[0xC]; f32 radius; };

struct Res_800B41E8 { u8 pad[0x42C]; u8 *bodies; s32 motions; };

struct Bodies_800B41E8 { u8 pad0[0xC]; s32 textures; u8 pad1[0x18 - 0x10]; s32 model; };

struct Vec_800B4688 { f32 x, y, z; };

struct Vec_800B4388 { f32 x, y, z; };

u16 obj_getField1c(void *);
s32 is_split_screen();
s32 dispatch_shared_handler_a__6TLobbyFPv(int);
s32 register_object__6TLobbyFPv(int);
s32 dispatch_shared_handler_b__6TLobbyFPv(int);
s32 register_boss__6TLobbyFPv(int);
void TLobby__sub_8001FE7C(void*, int);
s32 get_camera_mode__11TCameraCtrlFv();
M2C_UNK rotate_xz_pair_by_angle(void *, void *, int);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(int);
M2C_UNK spawn_particle_effect(void *, int);
u8 * create_particle_emitter(void *, s32);
s32 enable__13TParticleCtrlFPv(int);
s32 init_from_model__11TBreakUpMdlFPvi(int, void *);
void TObjEneBm3Fly__sub_800B0B20(u8 *arg0, s32 arg1);
void store_position__13TObjEneBm3FlyFPv(u8 *arg0);
void TObjEneBm3Fly__vt59(void);
void TObjEneBm3Fly__vt60(void* p);
void TObjEneBm3Fly__vt61(u8 *arg0);
void TObjEneBm3Fly__vt26(void);
void TObjEneBm3Fly__vt85(s32 arg0, u32 arg1, s32 arg2);
void * __dt__13TObjEneBm3FlyFv(void *arg0, s16 arg1);
M2C_UNK init_child_params__13TObjEneBm3FlyFv(void *arg0);
u8 * TObjEneBm3Fly__ct(u8 *arg0, M2C_UNK arg1, u8 *arg2, s32 arg3, s32 arg4, u8 *arg5, u8 *arg6);
void release_shared_data__13TObjEneBm3FlyFv(void);
void * create__13TObjEneBm3FlyFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
void load_resources__13TObjEneBm3FlyFv(void);
void render_with_state_debug__10TObjPlayerFPv(u8 *arg0);
void render__17TObjEneBm3FlyNestFPv(u8 *arg0);
void handle_attachment_sample__17TObjEneBm3FlyNestFi(s32 arg0);
void capture_attachment__17TObjEneBm3FlyNestFv(void * _w0);
int init__17TObjEneBm3FlyNestFPv(void* p);
int copy_target_state__17TObjEneBm3FlyNestFPv(void* p);
void* TObjEneBm3FlyNest__sub_800B2A54(void* p);
void handle_state__17TObjEneBm3FlyNestFPvi(void *arg0, s32 arg1);
void state_dying__17TObjEneBm3FlyNestFPvi(u8 *arg0, s32 arg1);
void handle_motion_event__17TObjEneBm3FlyNestFPvi(u8 *arg0, s32 arg1);
void state_spawn__17TObjEneBm3FlyNestFPvi(void *arg0, s32 arg1);
void update_state__17TObjEneBm3FlyNestFPvi(void *arg0, s32 arg1);
void TObjEneBm3FlyNest__sub_800B318C(u8 *arg0, s32 arg1);
void handle_event__17TObjEneBm3FlyNestFPvi(void *arg0, s32 arg1);
void state_wait__17TObjEneBm3FlyNestFPvi(void *arg0, s32 arg1);
void state_initial_emit__17TObjEneBm3FlyNestFPvi(u8 *arg0, s32 arg1);
void handle_appear__17TObjEneBm3FlyNestFPvi(u8 *arg0, s32 arg1);
void init_params__17TObjEneBm3FlyNestFPv(void *arg0);
void spawn_child__17TObjEneBm3FlyNestFPv(Nest_800B39CC *s);
s32 TObjEneBm3FlyNest__sub_800B3AC8(u8 *arg0);
void update_replenish__17TObjEneBm3FlyNestFPv(u8 *arg0);
void init_nest_sub__17TObjEneBm3FlyNestFPv(void* p);
void copy_pos__17TObjEneBm3FlyNestFPv(void* p);
void TObjEneBm3FlyNest__sub_800B3BE8(void);
void update_state__17TObjEneBm3FlyNestFPv(void *arg0);
void update_state_action__17TObjEneBm3FlyNestFPv(void *arg0);
void TObjEneBm3FlyNest__sub_800B3CBC(void);
void dispatch_state__17TObjEneBm3FlyNestFiUii(s32 arg0, u32 arg1, s32 arg2);
void run_task__17TObjEneBm3FlyNestFPv(u8 *arg0);
Obj_800B3E40 * TObjEneBm3FlyNest__sub_800B3E40(Obj_800B3E40 *self, s16 flag);
void * TObjEneBm3FlyNest__ct(void *, void *, void *);
int TObjEneBm3FlyNest__sub_800B4158(void);
void free_fly__17TObjEneBm3FlyNestFv(void);
void * create__17TObjEneBm3FlyNestFPv(void *arg0);
void load_resources__17TObjEneBm3FlyNestFv(void);
void render_parts__17TObjEneBm3FlyNestFPv(u8 *arg0);
void * TObjEneBm3FlyNest__sub_800B4630(void *arg0, s16 arg1);
u8 * construct_carrier__17TObjEneBm3FlyNestFPvPviiiii(u8 *self, void *parent, s32 a, s32 b, s32 unused, s32 c, s32 d);
u32 TObjEneEpsilon__sub_800B92F8(void *, void *, f32);
s32 enemy_copy_target_destination();
void __dt__9TObjEneDDFv(void *, int);
u8 * init_object__9TObjEneDDFPv(void *);
void get_camera_ctrl__9TObjEneDDFPv(s32, s32);
f32 rand_range__9TObjEneDDFff(void *, f32, f32);
int set_part_local_pos__9TObjEneDDFPvPvi(void*, void*, void*);
u32 move_with_wall_slide_commit__9TObjEneDDFPvfff();
s32 was_hit_by_ranged__9TObjEneDDFPv();
M2C_UNK TBoss8Dragon__sub_800BB7D4(void *, M2C_UNK);
s32 set_player_state_default__12TBoss8DragonFPv(void *);
M2C_UNK init_common_from__9TObjEneDDFPvPv(void *, void *);
s32 get_target_info__9TObjEneDDFPv(void *);
s32 TObjEneDD__sub_800BB878(s32, s32);
u32 load_enemy_bml_resource_named(void *, void *);
u32 load_enemy_bml_resource(void *);
void TObjEneDD__vt0(void *, int);
s32 updateFromCamera__15RenderFadeStateFPCf(void *, void *);
M2C_UNK update_obstruction_fade(void *);
void TObjPlayer__sub_800D7C58(void *);
M2C_UNK set_field_e4__10TObjPlayerFii(void *, int, f32);
M2C_UNK spawn_dead_spot_scale15(void *, int);
M2C_UNK refresh_lobby_state__10TObjPlayerFPv(void *);
void free_collision_body_parts(void *);
M2C_UNK send_entity_set_flags__6TLobbyFPv();
s32 toggle_flag_9__10TObjPlayerFPv(void *);
void __dl__7TObjectFPv(void *);
void * __nw__7TObjectFUl(int);
s32 all_parents_unqueued_for_destruction__7TObjectFv(int);
void __dt__7TObjectFv(void *, int);
M2C_UNK __ct__7TObjectFP7TObject(void *, void *);
s32 spawn_npc_enemy__6TLobbyFsiiiff(int, int, int, void *, f32, f32);
void __destroy_arr(void *, void *, u32, u32);
void debug_printf_at(s32, const char *, ...);
void draw_model_motion(s32, Ent_800B23A0 *, f32);
void set_global_flag__10TObjPlayerFv(void);
void clear_global_state__10TObjPlayerFv(void);
M2C_UNK set_global_state__16TObjEneRe7BeruraFi(void *);

void TLobby__sub_801A1FD8();
void TObjEneDD__vt100();
void TObjEneDD__vt77();
void TObjEneDD__vt81();
void TObjEneDD__vt82();
void TObjEneDD__vt83();
void TObjEneDD__vt84();
void TObjEneDD__vt87();
void TObjEneDD__vt88();
void TObjEneDD__vt89();
void TObjEneDD__vt90();
void TObjEneDD__vt91();
void TObjEneDD__vt92();
void TObjEneDD__vt93();
void TObjEneDD__vt94();
void TObjEneDD__vt95();
void TObjEneDD__vt96();
void TObjEneDD__vt97();
void TObjEneDD__vt98();
void TObjEneDD__vt99();
void TObjPlayer__sub_8000FF3C();
void TObjPlayer__sub_80010A80();
void consume_timer_field__10TObjPlayerFPvi();
void TObjPlayer__sub_80014830();
void TObjPlayer__sub_80014838();
void TObjPlayer__sub_80014840();
void TObjPlayer__sub_80014890();
void TObjPlayer__sub_80014894();
void TObjPlayer__sub_80014898();
void apply_slow_status__10TObjPlayerFPv();
void update_shock_clock__10TObjPlayerFPv();
void TObjPlayer__sub_800172CC();
void TObjPlayer__sub_80018E6C();
void TObjPlayer__sub_80019568();
void TObjPlayer__sub_800F65D0();
void apply_hit_message_flags__10TObjPlayerFPvPv();
void add_actor_exp();
void apply_action_hold_status();
void apply_anti_technique__10TObjPlayerFv();
void apply_attack_stat_status__10TObjPlayerFv();
void apply_confusion_status__10TObjPlayerFv();
void apply_defense_stat_status__10TObjPlayerFv();
void apply_knockback_from_attacker();
void apply_movement_ailment__10TObjPlayerFv();
void apply_object_set_data();
void apply_paralysis__10TObjPlayerFv();
void apply_poison_status__10TObjPlayerFv();
void apply_set_data__9TObjEnemyFPvPv();
void apply_shock_status__10TObjPlayerFv();
void apply_switch_attack__10TObjPlayerFi();
void calc_distance_accuracy_penalty__10TObjPlayerFv();
void classify_actor_view_detail();
void clear_all_status_effects();
void clear_harmful_statuses__10TObjPlayerFv();
void cure_paralysis__10TObjPlayerFv();
void cure_poison_ailment();
void enemy_spawn_jellen_effect();
void enemy_spawn_zalure_effect();
void fn_80010EBC();
void fn_80010EC0();
void fn_80010EC4();
void fn_80010EC8();
void clear_lobby_object_state();
void get_actor_body_center();
void get_actor_level_index();
void get_enemy_name__14TObjEnePanarmsFPv();
void get_pos__10TObjPlayerFii();
void has_flag_0x800__10TObjPlayerFPv();
void is_actor_cadence_frame();
void is_target_in_attack_range__10TObjPlayerFv();
void receive_direct_attack__10TObjPlayerFv();
void receive_physical_attack__10TObjPlayerFv();
void receive_weapon_special_attack__10TObjPlayerFv();
void render_shadow__17TObjEneBm3FlyNestFv();
void reset_actor_action_state();
void reset_pose__10TObjPlayerFPv();
void roll_physical_accuracy__10TObjPlayerFv();
void select_melee_contact_body__10TObjPlayerFv();
void test_flag30_512__10TObjPlayerFPv();
void test_flag_1000__10TObjPlayerFPv();
void test_flag_256__10TObjPlayerFPv();
void trigger_switch_attack__10TObjPlayerFi();
void try_start_action__10TObjPlayerFPvii();
void update_action_hold_status__10TObjPlayerFv();
void update_action_timer__10TObjPlayerFPv();
void update_actor_ground_y();
void update_attack_stat_status();
void update_defense_stat_status();
void update_flag30_timer__10TObjPlayerFPv();
void update_movement_status__10TObjPlayerFv();
void update_object_view_visibility();
void update_poison_status__10TObjPlayerFv();
extern char lbl_8043B120[];
extern char lbl_8043B130[];
extern char lbl_8043B140[];
extern char lbl_8043B158[];
extern char lbl_8043B170[];
extern char lbl_8043B184[];
extern char lbl_8043B19C[];
extern char lbl_8043B1B0[];
extern char lbl_8043B1C4[];
extern char lbl_8043B1DC[];
extern char lbl_8043B1F4[];
extern char lbl_8043B20C[];
extern char lbl_8043B220[];
extern char lbl_8043B238[];
extern char lbl_8043B24C[];
extern char lbl_8043B264[];
extern char lbl_8043B27C[];
extern char lbl_8043B290[];
extern s32 TObjEneBm3Fly__data_805D50E4;
extern RecoveredGlobal_800B22C8_lbl_8043B0FC lbl_8043B0FC;
extern RecoveredGlobal_800B2948_lbl_8043B2A4 lbl_8043B2A4;
extern Anim_800B41E8 lbl_8043B2F4;
extern Vec_800B39CC lbl_8043B304[];
extern Vec_800B264C lbl_8043B310;
extern const Vec_800B23A0 lbl_8043B31C;
extern char lbl_8043B328[];
extern char lbl_8043B338[];
extern char lbl_8043B348[];
extern char lbl_8043B358[];
extern char lbl_8043B368[];
extern u8 lbl_8043B380[];
extern const f64 lbl_8043B398[];
extern M2C_UNK lbl_804920B4[];
typedef struct Ctl_800B47C4 {
    f32 *pv;
    s32 *pc;
    s32 d;
    s32 e;
    s32 f;
} Ctl_800B47C4;
extern s32 lbl_805D28B8;
extern s32 lbl_805D2A10;
extern s32 lbl_805D2A1C;
extern s32 lbl_805D50E0;
extern s32 lbl_805D50E8;
extern u8 *bm3_fly_nest_resources;
extern s32 lbl_805D50F8;
extern s32 lbl_805D50FC;
extern s32 lbl_805D5100;
extern s32 lbl_805D5104;
extern u32 lbl_805D5108;
extern s32 lbl_805D510C;
extern NestAttachmentPoint *TObjEneBm3FlyNest_attachment_point_ptr;
extern s32 lbl_805D5114;
extern s32 bm3_fly_nest_attachment_index;
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 lbl_805D7780;
extern s32 lbl_805D7784;
extern const f32 lbl_805D9CF8;
extern const f32 lbl_805D9CFC;
extern const f32 lbl_805D9D00;
extern const f32 lbl_805D9D04;
extern const f32 lbl_805D9D08;
extern const f32 lbl_805D9D0C;
extern const f32 lbl_805D9D10;
extern const f32 lbl_805D9D14;
extern const f32 lbl_805D9D18;
extern const f32 lbl_805D9D1C;
extern const f32 lbl_805D9D20;
extern const f32 lbl_805D9D24;
extern const f32 lbl_805D9D28;
extern const f32 lbl_805D9D2C;
extern const f32 lbl_805D9D30;
extern const f32 lbl_805D9D34;
extern const f32 lbl_805D9D38;
extern const f32 lbl_805D9D3C;
extern const f32 lbl_805D9D40;
extern const f32 lbl_805D9D44;
extern const f32 lbl_805D9D48;
extern const f32 lbl_805D9D4C;
extern const f32 lbl_805D9D50;
extern const f32 lbl_805D9D54;
extern const f32 lbl_805D9D58;
extern const f32 lbl_805D9D5C;
extern const f32 lbl_805D9D60;
extern const f32 lbl_805D9D64;
extern const f32 lbl_805D9D68;
extern const f32 lbl_805D9D6C;
extern const f32 lbl_805D9E84;
extern const f32 lbl_805D9E88;
extern s32 some_id_805c6f74;
extern void *tl_04;

extern "C" void TObjEneEpsilon__vt81();
extern "C" void render_actor_shadows_default();
extern "C" void run_task__13TObjEneBm3FlyFv();
void *lbl_80491B30[7] = {
    (void *)0x43610000, (void *)0x3f6d097b, (void *)0x600, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
void *lbl_80491B4C[11] = {
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x40e00000,
    (void *)0x0, (void *)0x0, (void *)0x8003, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
void *lbl_80491B78[20] = {
    (void *)0x10000, (void *)0xa, (void *)0x3f19999a, (void *)0x0,
    (void *)0x10001, (void *)0xc, (void *)0x3f19999a, (void *)0x0,
    (void *)0x30002, (void *)0x0, (void *)0x3f800000, (void *)0x0,
    (void *)0x30000, (void *)0x1, (void *)0x3f800000, (void *)0x0,
    (void *)0x30004, (void *)0x3, (void *)0x3f800000, (void *)0x0,
};
void *__vt__13TObjEneBm3Fly[107] = {
    (void *)0x0, (void *)0x0, (void *)&__dt__13TObjEneBm3FlyFv, (void *)&run_task__13TObjEneBm3FlyFv,
    (void *)&render__13TObjEneBm3FlyFv, (void *)&render_actor_shadows_default, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&reset_actor_action_state, (void *)&get_actor_body_center, (void *)&update_object_view_visibility, (void *)&classify_actor_view_detail,
    (void *)&get_enemy_name__14TObjEnePanarmsFPv, (void *)&TObjPlayer__sub_80019568, (void *)&add_actor_exp, (void *)&consume_timer_field__10TObjPlayerFPvi,
    (void *)&get_actor_level_index, (void *)&update_actor_ground_y, (void *)&TObjPlayer__sub_80018E6C, (void *)&is_actor_cadence_frame,
    (void *)&select_melee_contact_body__10TObjPlayerFv, (void *)&calc_distance_accuracy_penalty__10TObjPlayerFv, (void *)&receive_physical_attack__10TObjPlayerFv, (void *)&receive_direct_attack__10TObjPlayerFv,
    (void *)&receive_weapon_special_attack__10TObjPlayerFv, (void *)&apply_knockback_from_attacker, (void *)&try_start_action__10TObjPlayerFPvii, (void *)&roll_physical_accuracy__10TObjPlayerFv,
    (void *)&TObjEneBm3Fly__vt26, (void *)&TObjPlayer__sub_8000FF3C, (void *)&is_target_in_attack_range__10TObjPlayerFv, (void *)&test_flag_256__10TObjPlayerFPv,
    (void *)&test_flag30_512__10TObjPlayerFPv, (void *)&has_flag_0x800__10TObjPlayerFPv, (void *)&test_flag_1000__10TObjPlayerFPv, (void *)&update_poison_status__10TObjPlayerFv,
    (void *)&update_action_hold_status__10TObjPlayerFv, (void *)&update_action_timer__10TObjPlayerFPv, (void *)&update_flag30_timer__10TObjPlayerFPv, (void *)&update_movement_status__10TObjPlayerFv,
    (void *)&update_shock_clock__10TObjPlayerFPv, (void *)&update_attack_stat_status, (void *)&update_defense_stat_status, (void *)&TObjPlayer__sub_800172CC,
    (void *)&apply_poison_status__10TObjPlayerFv, (void *)&apply_paralysis__10TObjPlayerFv, (void *)&apply_slow_status__10TObjPlayerFPv, (void *)&apply_confusion_status__10TObjPlayerFv,
    (void *)&apply_movement_ailment__10TObjPlayerFv, (void *)&apply_shock_status__10TObjPlayerFv, (void *)&clear_harmful_statuses__10TObjPlayerFv, (void *)&apply_attack_stat_status__10TObjPlayerFv,
    (void *)&apply_defense_stat_status__10TObjPlayerFv, (void *)&cure_poison_ailment, (void *)&cure_paralysis__10TObjPlayerFv, (void *)&clear_all_status_effects,
    (void *)&apply_action_hold_status, (void *)&apply_anti_technique__10TObjPlayerFv, (void *)&TObjPlayer__sub_80014898, (void *)&TObjPlayer__sub_80014894,
    (void *)&TObjPlayer__sub_80014890, (void *)&TObjEneBm3Fly__vt59, (void *)&TObjEneBm3Fly__vt60, (void *)&TObjEneBm3Fly__vt61,
    (void *)&reset_pose__10TObjPlayerFPv, (void *)&TObjPlayer__sub_80014840, (void *)&TObjPlayer__sub_80014838, (void *)&TObjPlayer__sub_80014830,
    (void *)&get_pos__10TObjPlayerFii, (void *)&apply_switch_attack__10TObjPlayerFi, (void *)&enemy_spawn_jellen_effect, (void *)&trigger_switch_attack__10TObjPlayerFi,
    (void *)&enemy_spawn_zalure_effect, (void *)&TObjPlayer__sub_80010A80, (void *)&TObjPlayer__sub_800F65D0, (void *)&fn_80010EC8,
    (void *)&fn_80010EC4, (void *)&fn_80010EC0, (void *)&fn_80010EBC, (void *)&TObjEneDD__vt77,
    (void *)&apply_hit_message_flags__10TObjPlayerFPvPv, (void *)&apply_set_data__9TObjEnemyFPvPv, (void *)&clear_lobby_object_state, (void *)&TObjEneEpsilon__vt81,
    (void *)&TObjEneDD__vt82, (void *)&TObjEneDD__vt83, (void *)&TObjEneDD__vt84, (void *)&TObjEneBm3Fly__vt85,
    (void *)&TObjEneBm3Fly__vt86, (void *)&TObjEneBm3Fly__vt87, (void *)&TObjEneDD__vt87, (void *)&TObjEneDD__vt88,
    (void *)&TObjEneDD__vt89, (void *)&TObjEneDD__vt90, (void *)&TObjEneDD__vt91, (void *)&TObjEneDD__vt92,
    (void *)&TObjEneDD__vt93, (void *)&TObjEneDD__vt94, (void *)&TObjEneDD__vt95, (void *)&TObjEneDD__vt96,
    (void *)&TObjEneDD__vt97, (void *)&TObjEneDD__vt98, (void *)&TObjEneDD__vt99, (void *)&TObjEneDD__vt100,
    (void *)&TObjEneBm3Fly__vt102, (void *)&TObjEneBm3Fly__vt103, (void *)&TObjEneBm3Fly__vt104,
};
#define lbl_80491B4C (*(RecoveredGlobal_800B22C8_lbl_80491B4C *)lbl_80491B4C)
#define __vt__13TObjEneBm3Fly ((M2C_UNK *)__vt__13TObjEneBm3Fly)

#pragma push
#pragma opt_common_subs off
void clamp_flight_height__13TObjEneBm3FlyFPv(u8 *arg0) {
    if ((M2C_FIELD(arg0, f32 *, 0x42C) - M2C_FIELD(arg0, f32 *, 0x3C)) < (1.2f)) {
        M2C_FIELD(arg0, f32 *, 0x42C) = (1.2f) + M2C_FIELD(arg0, f32 *, 0x3C);
    }
#define get_ad_end_text_start__10TObjPlayerFv (*(f64 (*)(f32, f32))&get_ad_end_text_start__10TObjPlayerFv)
#define queue_destruction__7TObjectFv (*(void (*)(void *))&queue_destruction__7TObjectFv)
#define update_scale__15TObjBoss2TunnelFPv (*(M2C_UNK (*)(void *))&update_scale__15TObjBoss2TunnelFPv)
#define handle_message__13TObjEneBm3FlyFPvi (*(s32 (*)(void *, void *))&handle_message__13TObjEneBm3FlyFPvi)
#define state_death_fall__13TObjEneBm3FlyFPvi (*(s32 (*)(void *, void *))&state_death_fall__13TObjEneBm3FlyFPvi)
#define action__13TObjEneBm3FlyFPvi (*(s32 (*)(void *, void *))&action__13TObjEneBm3FlyFPvi)
#define update_recoil_state__13TObjEneBm3FlyFv (*(s32 (*)(void *, void *))&update_recoil_state__13TObjEneBm3FlyFv)
#define TObjEneBm3Fly__sub_800B02C8 (*(s32 (*)(void *, void *))&TObjEneBm3Fly__sub_800B02C8)
#define state_circle_target__13TObjEneBm3FlyFPvi (*(s32 (*)(void *, void *))&state_circle_target__13TObjEneBm3FlyFPvi)
#define execute_action__13TObjEneBm3FlyFPvi (*(s32 (*)(void *, void *))&execute_action__13TObjEneBm3FlyFPvi)
#define TObjEneBm3Fly__sub_800B0B20 (*(s32 (*)(void *, void *))&TObjEneBm3Fly__sub_800B0B20)
#define TObjEneBm3Fly__sub_800B0F70 (*(s32 (*)(void *, void *))&TObjEneBm3Fly__sub_800B0F70)
#define TObjEneBm3Fly__sub_800B1214 (*(s32 (*)(void *, void *))&TObjEneBm3Fly__sub_800B1214)
#define get_active_id__13TObjEneBm3FlyFPv (*(u16 (*)(void *))&get_active_id__13TObjEneBm3FlyFPv)
#define remove_child__17TObjEneBm3FlyNestFPvPv (*(void (*)(Obj_800B2A5C *, u8 *))&remove_child__17TObjEneBm3FlyNestFPvPv)
#define has_free_attack_slot__17TObjEneBm3FlyNestFPvUs (*(s32 (*)(Obj_800B2AF4 *, u16))&has_free_attack_slot__17TObjEneBm3FlyNestFPvUs)
#define clear_global_flag_400__9TObjEneDDFv (*(void (*)(void))&clear_global_flag_400__9TObjEneDDFv)
#define update_player_state__9TObjEneDDFPv (*(void (*)(void *, Vec_800B23A0 *, s32))&update_player_state__9TObjEneDDFPv)
#define set_field_378__9TObjEneDDFPvi (*(M2C_UNK (*)(void *, M2C_UNK))&set_field_378__9TObjEneDDFPvi)
#define transition_enemy_state (*(M2C_UNK (*)(void *, s32))&transition_enemy_state)
#define toggle_particle_effect__10TObjPlayerFv (*(void (*)(void))&toggle_particle_effect__10TObjPlayerFv)
#define copy_target_state__14TObjEnePanarmsFPvPv (*(int (*)(void*))&copy_target_state__14TObjEnePanarmsFPvPv)
#define advance_animation_playback (*(M2C_UNK (*)(void *))&advance_animation_playback)
#define find_entity_by_id (*(u8 * (*)(u16))&find_entity_by_id)
#define end_effect_render__13TParticleCtrlFv (*(void (*)(void))&end_effect_render__13TParticleCtrlFv)
#define play_persistent_sound (*(M2C_UNK (*)(s32, void *, s32, s32, s32))&play_persistent_sound)
#define play_sound_effect (*(s32 (*)(void *, void *, int, int))&play_sound_effect)
#define rotate_matrix_y (*(void (*)(s32, s32))&rotate_matrix_y)
#define translate_matrix (*(void (*)(s32, f32, f32, f32))&translate_matrix)
#define set_global_param__8TObjFishFi (*(void (*)(s32))&set_global_param__8TObjFishFi)
#define draw_chunk_object (*(void (*)(s32))&draw_chunk_object)
#define TObjEneDD__vt86 (*(void (*)())&TObjEneDD__vt86)
#define TObjEneBm3Fly__vt102 (*(void (*)())&TObjEneBm3Fly__vt102)
#define TObjEneBm3Fly__vt104 (*(void (*)())&TObjEneBm3Fly__vt104)
#define TObjEneBm3Fly__vt86 (*(void (*)())&TObjEneBm3Fly__vt86)
#define TObjEneBm3Fly__vt87 (*(void (*)())&TObjEneBm3Fly__vt87)
#define render__13TObjEneBm3FlyFv (*(void (*)())&render__13TObjEneBm3FlyFv)
    M2C_FIELD(arg0, f32 *, 0x300) = M2C_FIELD(arg0, f32 *, 0x42C);
}
#pragma pop

void store_position__13TObjEneBm3FlyFPv(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x2FC) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
    M2C_FIELD(arg0, f32 *, 0x304) = (f32) M2C_FIELD(arg0, f32 *, 0x40);
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x2FC);
}

void update_state_flag__13TObjEneBm3FlyFPv(void *arg0) {
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 0x350);
    if (TObjEneEpsilon__sub_800B92F8(arg0, M2C_FIELD(temp_r5, void **, 8), *lbl_805D50EC) != 0U) {
        M2C_FIELD(arg0, s32 *, 0x428) = (s32) (M2C_FIELD(arg0, s32 *, 0x428) | 2);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x428) = (s32) (M2C_FIELD(arg0, s32 *, 0x428) & 0xFFFFFFFD);
}

void update_dd_flag__13TObjEneBm3FlyFPv(void *arg0) {
    if (move_with_wall_slide_commit__9TObjEneDDFPvfff() != 0U) {
        M2C_FIELD(arg0, s32 *, 0x428) = (s32) (M2C_FIELD(arg0, s32 *, 0x428) | 2);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x428) = (s32) (M2C_FIELD(arg0, s32 *, 0x428) & 0xFFFFFFFD);
}

void update_collide_flag__13TObjEneBm3FlyFPv(void *arg0) {
    if (((VObj_800B1A90_800B1978 *)arg0)->v102() != 0U) {
        M2C_FIELD(arg0, s32 *, 0x428) = (s32) (M2C_FIELD(arg0, s32 *, 0x428) | 2);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x428) = (s32) (M2C_FIELD(arg0, s32 *, 0x428) & 0xFFFFFFFD);
}

#pragma push
#pragma fp_contract on
void circle_destination__13TObjEneBm3FlyFPvi(void *arg0, s32 arg1) {
    f32 temp_f1;
    enemy_copy_target_destination();
    M2C_FIELD(arg0, f32 *, 0x394) = (f32) (((7e+01f) * ((f32 (*)(s32))sin_table_lookup)(arg1)) + M2C_FIELD(arg0, f32 *, 0x394));
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x3C);
    M2C_FIELD(arg0, f32 *, 0x398) = (f32) (temp_f1 + M2C_FIELD(arg0, f32 *, 0x44C));
    M2C_FIELD(arg0, f32 *, 0x39C) = (f32) (((7e+01f) * ((f32 (*)(s32))cos_table_lookup)(arg1)) + M2C_FIELD(arg0, f32 *, 0x39C));
}
extern int fold_flush_0;
#pragma pop

void update_height_offset__13TObjEneBm3FlyFPv(void *arg0) {
    enemy_copy_target_destination();
    M2C_FIELD(arg0, f32 *, 0x398) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) + M2C_FIELD(arg0, f32 *, 0x450));
}

void update__13TObjEneBm3FlyFPv(void *arg0) {
    enemy_copy_target_destination();
    M2C_FIELD(arg0, f32 *, 0x398) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) + M2C_FIELD(arg0, f32 *, 0x44C));
}

void TObjEneBm3Fly__vt59(void) {  }

void TObjEneBm3Fly__vt60(void* p) { if (*(short*)((char*)p + 0x326) != 6) { ((int (*)(void*, void*))transition_enemy_state)(p, (void*)6); } }

void TObjEneBm3Fly__vt61(u8 *arg0) {
    s16 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if ((temp_r0 != 8) && (temp_r0 != 9) && (temp_r0 != 7)) {
        if (was_hit_by_ranged__9TObjEneDDFPv() != 0) {
            ((int (*)(void*, void*))transition_enemy_state)((void*)((void *) (arg0)), (void*)((int) (7)));
            return;
        }
        ((int (*)(void*, void*))transition_enemy_state)((void*)((void *) (arg0)), (void*)((int) (8)));
    }
}

void TObjEneBm3Fly__vt26(void) {  }

void TObjEneBm3Fly__vt85(s32 arg0, u32 arg1, s32 arg2) {
    switch (arg1) {
    case 0:
        TObjEneBm3Fly__sub_800B1214((void *) (arg0), (void *) (arg2));
        return;
    case 1:
        TObjEneBm3Fly__sub_800B0F70((void *) (arg0), (void *) (arg2));
        return;
    case 2:
        TObjEneBm3Fly__sub_800B0B20((void *) (arg0), (void *) (arg2));
        return;
    case 3:
        execute_action__13TObjEneBm3FlyFPvi((void *) (arg0), (void *) (arg2));
        return;
    case 4:
        state_circle_target__13TObjEneBm3FlyFPvi((void *) (arg0), (void *) (arg2));
        return;
    case 6:
        update_recoil_state__13TObjEneBm3FlyFv((void *) (arg0), (void *) (arg2));
        return;
    case 8:
        state_death_fall__13TObjEneBm3FlyFPvi((void *) (arg0), (void *) (arg2));
        return;
    case 5:
        TObjEneBm3Fly__sub_800B02C8((void *) (arg0), (void *) (arg2));
        return;
    case 7:
        action__13TObjEneBm3FlyFPvi((void *) (arg0), (void *) (arg2));
        return;
    case 9:
        handle_message__13TObjEneBm3FlyFPvi((void *) (arg0), (void *) (arg2));
    default:
        return;
    }
}

}
void TObjEneBm3Fly::run_task() {
  u8* arg0 = (u8*)this;
  f32 temp_f2;
  f32 temp_f31;
  f32 var_f30;
  s16 temp_r0;
  u32 temp_r3;
  u8 *temp_r3_2;
  u8 *temp_r3_3;
  u8 *temp_r3_4;
  if (check_demo_mode__10TObjPlayerFv() != 0)
  {
    (((VObj_18_6eb1ad *)(arg0))->m103());
    return;
  }
  temp_r3 = ((u32 (*)(int))find_entity_by_id)((int) (owner_id));
  if ((temp_r3 == 0U) || (all_parents_unqueued_for_destruction__7TObjectFv((int) temp_r3) == 0))
  {
    queue_destruction__7TObjectFv((void *) arg0);
    return;
  }
  if ((((VObj_18_6eb1ad *)(arg0))->m81()) != 4)
  {
    (((VObj_18_6eb1ad *)(arg0))->m83());
    temp_r3_2 = (u8 *) (particle_effect);
    if (temp_r3_2 == 0)
    {
      particle_effect = create_particle_emitter(arg0 + 0x2FC, 0xC7);
      temp_r3_3 = (u8 *) (particle_effect);
      if (temp_r3_3 != 0)
      {
        enable__13TParticleCtrlFPv((int) temp_r3_3);
      }
    }
    else
    {
      ;
      if ((((animation_id) == 9) || ((animation_id) == 8)) || ((animation_id) == 7))
      {
        enable__13TParticleCtrlFPv((int) temp_r3_2);
      }
      else
      {
        if (((s32) (alternate_phase)) == 0)
        {
          var_f30 = (3.0f);
          alternate_phase = 1;
        }
        else
        {
          var_f30 = (-3.0f);
          alternate_phase = 0;
        }
        if (check_v2_mode__9TObjEneDDFv() != 0)
        {
          var_f30 *= (3.0f);
        }
        temp_f31 = var_f30 * ((f32 (*)(s32))cos_table_lookup)((s32)((int) (facing_angle)));
        temp_f2 = var_f30 * (-((f32 (*)(s32))sin_table_lookup)((s32)((int) (facing_angle))));
        *((f32 *) (((s8 *) (particle_effect)) + 0x60)) = (f32) ((position.x) + temp_f31);
        *((f32 *) (((s8 *) (particle_effect)) + 0x64)) = (f32) ((-1.5f) + (position.y));
        *((f32 *) (((s8 *) (particle_effect)) + 0x68)) = (f32) ((position.z) + temp_f2);
      }
    }
  }
  else
  {
    temp_r3_4 = (u8 *) (particle_effect);
    if (temp_r3_4 != 0)
    {
      enable__13TParticleCtrlFPv((int) temp_r3_4);
    }
  }
  store_position__13TObjEneBm3FlyFPv((u8 *)((void *) arg0));
  set_player_state_default__12TBoss8DragonFPv((void *) arg0);
  (((VObj_18_6eb1ad *)(arg0))->m98());
}

extern "C" {
void *__dt__13TObjEneBm3FlyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjEneBm3Fly;
        if (M2C_FIELD(arg0, void **, 0x458) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x458)); M2C_FIELD(arg0, M2C_UNK *, 0x458) = 0; }
        free_collision_body_parts(arg0);
        __dt__9TObjEneDDFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

#pragma push
#pragma fp_contract on
struct VBase_18_800B1F80 { char pad[0x18]; };
struct VObj_18_800B1F80 : VBase_18_800B1F80 {
#define VV(n) virtual void m##n();
    VV(0) VV(1) VV(2) VV(3) VV(4) VV(5) VV(6) VV(7) VV(8) VV(9)
    VV(10) VV(11) VV(12) VV(13) VV(14) VV(15) VV(16) VV(17) VV(18) VV(19)
    VV(20) VV(21) VV(22) VV(23) VV(24) VV(25) VV(26) VV(27) VV(28) VV(29)
    VV(30) VV(31) VV(32) VV(33) VV(34) VV(35) VV(36) VV(37) VV(38) VV(39)
    VV(40) VV(41) VV(42) VV(43) VV(44) VV(45) VV(46) VV(47) VV(48) VV(49)
    VV(50) VV(51) VV(52) VV(53) VV(54) VV(55) VV(56) VV(57) VV(58) VV(59)
    VV(60) VV(61) VV(62) VV(63) VV(64) VV(65) VV(66) VV(67) VV(68) VV(69)
    VV(70) VV(71) VV(72) VV(73) VV(74) VV(75) VV(76) VV(77) VV(78) VV(79)
    VV(80) VV(81) VV(82) VV(83) VV(84)
#undef VV
    virtual M2C_UNK m85(s16, s32);
};

void set_field_b8__14TObjEnePanarmsFPvs(void *, s16);
void set_field_dc__10TObjPlayerFPvi(void *, s32);
void set_field_d8__10TObjPlayerFPvi(void *, void *);
void enemy_init_validate_period(void *, s32);
void enemy_init_acquire_period(void *, s32);
void reset_hp__9TObjEneDDFPv(void *, s32, s32, s32);
void initialize_enemy_state__9TObjEneDDFPv(void *, s32);
void check_state_flag_1__9TObjEneDDFPv(void *);
void init_model__9TObjEneDDFPv(void *, void *, s32);
void set_active__9TObjEneDDFPv(void *);
void init_position_vectors__9TObjEneDDFPv(void *);
void set_animation__10TObjPlayerFPvs(void *, s16);

struct Sub_800B1F80 { u8 x[0x1C]; };
struct Data_800B1F80 { Sub_800B1F80 a; u8 b[0x2C]; u8 c[4]; };
extern s32 lbl_805D50E0;
extern s32 TObjEneBm3Fly__data_805D50E4;
extern s32 lbl_805D50E8;
extern u8 *bm3_fly_nest_resources;

M2C_UNK init_child_params__13TObjEneBm3FlyFv(void *arg0) {
    init_position_vectors__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, s32 *, 0x34) = M2C_FIELD(M2C_FIELD(bm3_fly_nest_resources, u8 **, 0x42C), s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = M2C_FIELD(M2C_FIELD(bm3_fly_nest_resources, u8 **, 0x42C), s32 *, 0xC);
    init_model__9TObjEneDDFPv(arg0, &lbl_80491B4C, 1);
    set_field_d8__10TObjPlayerFPvi(arg0, lbl_80491B78);
    set_field_dc__10TObjPlayerFPvi(arg0, M2C_FIELD(bm3_fly_nest_resources, s32 *, 0x430));
    M2C_FIELD(arg0, s16 *, 0xB8) = 0;
    set_animation__10TObjPlayerFPvs(arg0, M2C_FIELD(arg0, s16 *, 0xB8));
    set_field_b8__14TObjEnePanarmsFPvs(arg0, M2C_FIELD(arg0, s16 *, 0xB8));
    reset_hp__9TObjEneDDFPv(arg0, lbl_805D50E0, TObjEneBm3Fly__data_805D50E4, lbl_805D50E8);
    check_state_flag_1__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, void **, 0x350) = lbl_80491B30;
    initialize_enemy_state__9TObjEneDDFPv(arg0, 3);
    M2C_FIELD(arg0, f32 *, 0x37C) = (5.0f);
    enemy_init_acquire_period(arg0, 0xA);
    enemy_init_validate_period(arg0, 0xA);
    set_active__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, s32 *, 0x30) |= 0x01000000;
    M2C_FIELD(arg0, s32 *, 0x428) = 2;
    M2C_FIELD(arg0, f32 *, 0x42C) = M2C_FIELD(arg0, f32 *, 0x3C);
    M2C_FIELD(arg0, f32 *, 0x430) = (0.0f);
    M2C_FIELD(arg0, f32 *, 0x434) = (0.0f);
    M2C_FIELD(arg0, f32 *, 0x438) = (0.0f);
    M2C_FIELD(arg0, f32 *, 0x43C) = (0.0f);
    M2C_FIELD(arg0, s32 *, 0x440) = 0;
    M2C_FIELD(arg0, f32 *, 0x444) = (0.0f);
    M2C_FIELD(arg0, s32 *, 0x448) = 0;
    M2C_FIELD(arg0, f32 *, 0x44C) = (2.0f) * calc_elapsed_scaled__9TObjEneDDFv(arg0) + (45.0f);
    M2C_FIELD(arg0, f32 *, 0x450) = (2.0f) * calc_elapsed_scaled__9TObjEneDDFv(arg0) + (15.0f);
    M2C_FIELD(arg0, s32 *, 0x454) = 0;
    M2C_FIELD(arg0, s32 *, 0x458) = 0;
    M2C_FIELD(arg0, s32 *, 0x45C) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C0) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C4) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C8) = 0;
    M2C_FIELD(arg0, s32 *, 0x3CC) = 0;
    M2C_FIELD(arg0, s32 *, 0x3D0) = 0;
    M2C_FIELD(arg0, s32 *, 0x3D4) = 0;
    M2C_FIELD(arg0, s32 *, 0x3D8) = 0;
    M2C_FIELD(arg0, s32 *, 0x3DC) = 0;
    M2C_FIELD(arg0, f32 *, 0x3E0) = (0.0f);
    M2C_FIELD(arg0, f32 *, 0x3E4) = (0.0f);
    M2C_FIELD(arg0, f32 *, 0x3E8) = (0.0f);
    M2C_FIELD(arg0, f32 *, 0x3EC) = (0.0f);
    M2C_FIELD(arg0, f32 *, 0x3F0) = (0.0f);
    M2C_FIELD(arg0, f32 *, 0x3F4) = (0.0f);
    M2C_FIELD(arg0, f32 *, 0x3F8) = (0.0f);
    M2C_FIELD(arg0, f32 *, 0x3FC) = (0.0f);
    M2C_FIELD(arg0, f32 *, 0x400) = (0.0f);
    M2C_FIELD(arg0, f32 *, 0x404) = (0.0f);
    M2C_FIELD(arg0, f32 *, 0x408) = (0.0f);
    M2C_FIELD(arg0, s16 *, 0x326) = 0;
    return ((VObj_18_800B1F80 *)arg0)->m85(M2C_FIELD(arg0, s16 *, 0x326), 4);
}
#pragma pop

u8 *TObjEneBm3Fly__ct(u8 *arg0, M2C_UNK arg1, u8 *arg2, s32 arg3, s32 arg4, u8 *arg5, u8 *arg6) {
    init_object__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_800B2168___vt__13TObjEneBm3Fly *)__vt__13TObjEneBm3Fly).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2A10;
    M2C_FIELD(arg0, u16 *, 0x418) = obj_getField1c(arg2);
    init_common_from__9TObjEneDDFPvPv((void *) (arg0), (void *) (arg2));
    M2C_FIELD(arg0, s16 *, 0x1C) = arg3;
    M2C_FIELD(arg0, s16 *, 0x2C) = arg4;
    VecCopy__FP3VecPC3Vec((void *)((void *) (arg0 + 0x38)), (void *)((void *) (arg5)));
    VecCopy__FP3VecPC3Vec((void *)((void *) (arg0 + 0x41C)), (void *)((void *) (arg2 + 0x38)));
    VecCopy__FP3VecPC3Vec((void *)((void *) (arg0 + 0x40C)), (void *)((void *) (arg6)));
    init_child_params__13TObjEneBm3FlyFv((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0x80) = 0;
    return arg0;
}

void release_shared_data__13TObjEneBm3FlyFv(void) {
    void *obj = TObjEneBm3Fly__breakup_model;
    if (obj != NULL) {
        if (obj != NULL) {
            ((VObj_800B2214_800B1978 *)obj)->m2(1);
        }
        TObjEneBm3Fly__breakup_model = NULL;
    }
}

void * create__13TObjEneBm3FlyFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    void *o;
    o = __nw__7TObjectFUl(0x4A8);
    if (o != NULL) {
        o = TObjEneBm3Fly__ct((u8 *)(o), (M2C_UNK)(tl_04), (u8 *)(arg0), (s32)(arg1), (s32)(arg2), (u8 *)(arg3), (u8 *)(arg4));
    }
    return o;
}

void load_resources__13TObjEneBm3FlyFv(void) {
    typedef char sp8_offset[(offsetof(Stack_800B22C8, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_800B22C8, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_800B22C8, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_800B22C8, sp14) == 0xC) ? 1 : -1];
    Stack_800B22C8 stack;
    s32 temp_r3;
    s32 var_r0;
    u8 *temp_r5;
    bm3_fly_nest_resources = ((u8 * (*)(void))TObjEneBm3FlyNest__sub_800B4158)();
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x10));
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = init_from_model__11TBreakUpMdlFPvi((int) (temp_r3), (void *) (M2C_FIELD(M2C_FIELD(bm3_fly_nest_resources, u8 **, 0x42C), s32 *, 8)));
    }
    (*(s32 *)&TObjEneBm3Fly__breakup_model) = var_r0;
    lbl_805D50E0 = register_boss__6TLobbyFPv((int) (0));
    TObjEneBm3Fly__data_805D50E4 = dispatch_shared_handler_b__6TLobbyFPv((int) (0));
    lbl_805D50E8 = register_object__6TLobbyFPv((int) (0));
    (*(s32 *)&lbl_805D50EC) = dispatch_shared_handler_a__6TLobbyFPv((int) (0));
    stack.sp8 = M2C_FIELD(&lbl_8043B0FC.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_8043B0FC.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_8043B0FC.value, s32 *, 8);
    stack.sp14 = M2C_FIELD(&lbl_8043B0FC.value, s32 *, 0xC);
    stack.sp8 = M2C_FIELD(bm3_fly_nest_resources, s32 *, 0x430);
    temp_r5 = (u8 *)(M2C_FIELD(bm3_fly_nest_resources, u8 **, 0x42C));
    spawn_npc_enemy__6TLobbyFsiiiff((int) (7), (int) (M2C_FIELD(temp_r5, s32 *, 8)), (int) (M2C_FIELD(temp_r5, s32 *, 0xC)), (void *) (&stack.sp8), (f32) (M2C_FIELD(&lbl_80491B4C.value, f32 *, 0xC)), (f32) ((15.0f)));
}

}

#undef get_ad_end_text_start__10TObjPlayerFv
#undef queue_destruction__7TObjectFv
#undef update_scale__15TObjBoss2TunnelFPv
#undef handle_message__13TObjEneBm3FlyFPvi
#undef state_death_fall__13TObjEneBm3FlyFPvi
#undef action__13TObjEneBm3FlyFPvi
#undef update_recoil_state__13TObjEneBm3FlyFv
#undef TObjEneBm3Fly__sub_800B02C8
#undef state_circle_target__13TObjEneBm3FlyFPvi
#undef execute_action__13TObjEneBm3FlyFPvi
#undef TObjEneBm3Fly__sub_800B0B20
#undef TObjEneBm3Fly__sub_800B0F70
#undef TObjEneBm3Fly__sub_800B1214
#undef get_active_id__13TObjEneBm3FlyFPv
#undef remove_child__17TObjEneBm3FlyNestFPvPv
#undef has_free_attack_slot__17TObjEneBm3FlyNestFPvUs
#undef clear_global_flag_400__9TObjEneDDFv
#undef update_player_state__9TObjEneDDFPv
#undef set_field_378__9TObjEneDDFPvi
#undef transition_enemy_state
#undef toggle_particle_effect__10TObjPlayerFv
#undef copy_target_state__14TObjEnePanarmsFPvPv
#undef advance_animation_playback
#undef find_entity_by_id
#undef end_effect_render__13TParticleCtrlFv
#undef play_persistent_sound
#undef play_sound_effect
#undef rotate_matrix_y
#undef translate_matrix
#undef set_global_param__8TObjFishFi
#undef draw_chunk_object
#undef TObjEneDD__vt86
#undef TObjEneBm3Fly__vt102
#undef TObjEneBm3Fly__vt104
#undef TObjEneBm3Fly__vt86
#undef TObjEneBm3Fly__vt87
#undef render__13TObjEneBm3FlyFv
#undef VBase_18
#undef VObj_18

#undef TObjEneBm3Fly__breakup_model
#undef lbl_805D50EC
