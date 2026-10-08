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
extern const f32 lbl_805D9C68;
extern const f32 TObjEneBm3Fly__data_805D9C6C;
extern const f32 lbl_805D9E84;
extern const f32 lbl_805D9E88;
void render__13TObjEneBm3FlyFv(VObj_800AFBF0 *o);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *);
M2C_UNK clamp_flight_height__13TObjEneBm3FlyFPv(void *);
M2C_UNK update_dd_flag__13TObjEneBm3FlyFPv(void *, f32, f32, f32);
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
extern const f32 TObjEneBm3Fly__data_805D9C70;
extern const f32 lbl_805D9C74;
extern const f32 TObjEneBm3Fly__data_805D9C78;
extern const f32 lbl_805D9C7C;
extern const f32 TObjEneBm3Fly__data_805D9C80;
extern const f32 lbl_805D9C84;
void state_death_fall__13TObjEneBm3FlyFPvi(u8 *arg0, s32 arg1);
}

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
M2C_UNK play_sound_effect(M2C_UNK, void *, M2C_UNK, M2C_UNK);
M2C_UNK TBoss8Dragon__sub_800BB7D8(void *, M2C_UNK, f32);
M2C_UNK TBoss8Dragon__sub_800BB7DC(void *);
M2C_UNK post_translate_matrix(void *);
M2C_UNK remove_child__17TObjEneBm3FlyNestFPvPv(u32, void *);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
M2C_UNK draw_chunk_object(s32);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
u32 find_entity_by_id(u16);
M2C_UNK clear_global_flag_400__9TObjEneDDFv();
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
M2C_UNK create_breakup_mdl__12TBoss3VoloptFiiiii(s32, M2C_UNK *, s32, void *, s32);
M2C_UNK end_effect_render__13TParticleCtrlFv();
s32 queue_destruction__7TObjectFv();
M2C_UNK refresh_and_send_entity_flags__12TBoss8DragonFPv(void *, s32);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK update_player_state__9TObjEneDDFPv(void *, M2C_UNK, M2C_UNK);

f32 get_pos_x__14TObjEneGibblesFPv(void* p) { return *(f32*)((char*)p + 0x10); }

extern const f32 lbl_805D9C68;
extern const f32 TObjEneBm3Fly__data_805D9C6C;

void TObjEneMoja::bindModel(int index) {
    model=lbl_805D50D8->models[index].model;
    textures=lbl_805D50D8->models[index].textures;
}

void TObjEneBm3Fly__vt104(u8 *arg0) {
    if (((VObj800AFB60_800AFB28 *) arg0)->m8(lbl_805D9C68, TObjEneBm3Fly__data_805D9C6C) != 0) {
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
        kind = o->v9(lbl_805D9E88, lbl_805D9E84, TObjEneBm3Fly__data_805D9C6C);
    } else if (o->v8(lbl_805D9C68, TObjEneBm3Fly__data_805D9C6C) != 0) {
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
extern const f32 TObjEneBm3Fly__data_805D9C88;

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
        M2C_FIELD(arg0, f32 *, 0x3E0) = (f32) TObjEneBm3Fly__data_805D9C70;
        M2C_FIELD(arg0, f32 *, 0x430) = (f32) M2C_FIELD(arg0, f32 *, 0x308);
        M2C_FIELD(arg0, f32 *, 0x438) = (f32) M2C_FIELD(arg0, f32 *, 0x310);
        M2C_FIELD(arg0, f32 *, 0x3E4) = clamp_velocity__15TObjBoss2TunnelFPv(arg0 + 0x430);
        temp_copy = copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003E425);
        play_sound_effect(temp_copy, arg0 + 0x38, 0, 0);
        return;
    case 3:
        if ((M2C_FIELD(arg0, f32 *, 0x42C) - M2C_FIELD(arg0, f32 *, 0x3C)) < lbl_805D9C74) {
            transition_enemy_state(arg0, 9);
        }
        break;
    case 0:
        advance_animation_playback();
        switch (M2C_FIELD(arg0, s32 *, 0x3C0)) {
        case 0:
        case 1:
            update_dd_flag__13TObjEneBm3FlyFPv(arg0, M2C_FIELD(arg0, f32 *, 0x430), M2C_FIELD(arg0, f32 *, 0x438), M2C_FIELD(arg0, f32 *, 0x3E4));
            M2C_FIELD(arg0, f32 *, 0x3E0) = (f32) (M2C_FIELD(arg0, f32 *, 0x3E0) - TObjEneBm3Fly__data_805D9C78);
            M2C_FIELD(arg0, f32 *, 0x42C) = (f32) (M2C_FIELD(arg0, f32 *, 0x42C) + M2C_FIELD(arg0, f32 *, 0x3E0));
            if (M2C_FIELD(arg0, f32 *, 0x42C) < lbl_805D9C7C + M2C_FIELD(arg0, f32 *, 0x3C)) {
                M2C_FIELD(arg0, f32 *, 0x42C) = lbl_805D9C7C + M2C_FIELD(arg0, f32 *, 0x3C);
                if (((s32) M2C_FIELD(arg0, s32 *, 0x3C0) == 0) && (get_flag_b4__21TObjEneMe3ShinowaRealFPv(arg0) == 0)) {
                    M2C_FIELD(arg0, s32 *, 0x3C0) = 1;
                    M2C_FIELD(arg0, f32 *, 0x3E0) = (f32) TObjEneBm3Fly__data_805D9C80;
                    M2C_FIELD(arg0, f32 *, 0x3E4) = (f32) (M2C_FIELD(arg0, f32 *, 0x3E4) * lbl_805D9C84);
                } else {
                    M2C_FIELD(arg0, s32 *, 0x3C0) = 2;
                    M2C_FIELD(arg0, f32 *, 0x3E4) = (f32) TObjEneBm3Fly__data_805D9C70;
                    M2C_FIELD(arg0, s32 *, 0x428) = (s32) (M2C_FIELD(arg0, s32 *, 0x428) & 0xFFFFFFFD);
                    spawn_landing_dead_spot(arg0 + 0x38, 0xA);
                    spawn_effect_at_ground__10TObjPlayerFPvi(arg0 + 0x38, 0x1E);
                }
            }
            clamp_flight_height__13TObjEneBm3FlyFPv(arg0);
            break;
        case 2:
            M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C4) + 1);
            M2C_FIELD(arg0, f32 *, 0x42C) = (f32) (M2C_FIELD(arg0, f32 *, 0x42C) - TObjEneBm3Fly__data_805D9C78);
            break;
        }
        M2C_FIELD(arg0, f32 *, 0x3E4) = (f32) (M2C_FIELD(arg0, f32 *, 0x3E4) * lbl_805D9C84);
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
        TBoss8Dragon__sub_800BB7D8(arg0, 0xF1, TObjEneBm3Fly__data_805D9C88);
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
