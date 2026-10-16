#include "types.h"
#include "pso/enemy/TObjEneDD_ST.h"

struct VBase800AFB60_800AFB28 { char pad[0x18]; };
struct VObj800AFB60_800AFB28 : VBase800AFB60_800AFB28 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

#include "pso/enemy/TObjEneMoja.h"
struct MojaResourceEntry {u8 unknown[8];void* model;void* textures;};

struct MojaResources {u8 unknown[0x42C];MojaResourceEntry* models;};

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
    virtual s32 m0(); virtual s32 m1(); virtual s32 m2();
    virtual s32 m3(); virtual s32 m4(); virtual s32 m5();
    virtual s32 m6(); virtual s32 m7(); virtual s32 m8();
    virtual s32 m9(); virtual s32 m10(); virtual s32 m11();
    virtual s32 m12(); virtual s32 m13(); virtual s32 m14();
    virtual s32 m15(); virtual s32 m16(); virtual s32 m17();
    virtual s32 m18(); virtual s32 m19(); virtual s32 m20();
    virtual s32 m21(); virtual s32 m22(); virtual s32 m23();
    virtual s32 m24(); virtual s32 m25(); virtual s32 m26();
    virtual s32 m27(); virtual s32 m28(); virtual s32 m29();
    virtual s32 m30(); virtual s32 m31(); virtual s32 m32();
    virtual s32 m33(); virtual s32 m34(); virtual s32 m35();
    virtual s32 m36(); virtual s32 m37(); virtual s32 m38();
    virtual s32 m39(); virtual s32 m40(); virtual s32 m41();
    virtual s32 m42(); virtual s32 m43(); virtual s32 m44();
    virtual s32 m45(); virtual s32 m46(); virtual s32 m47();
    virtual s32 m48(); virtual s32 m49(); virtual s32 m50();
    virtual s32 m51(); virtual s32 m52(); virtual s32 m53();
    virtual s32 m54(); virtual s32 m55(); virtual s32 m56();
    virtual s32 m57(); virtual s32 m58(); virtual s32 m59();
    virtual s32 m60(); virtual s32 m61(); virtual s32 m62();
    virtual s32 m63(); virtual s32 m64(); virtual s32 m65();
    virtual s32 m66(); virtual s32 m67(); virtual s32 m68();
    virtual s32 m69(); virtual s32 m70(); virtual s32 m71();
    virtual s32 m72(); virtual s32 m73(); virtual s32 m74();
    virtual s32 m75(); virtual s32 m76(); virtual s32 m77();
    virtual s32 m78(); virtual s32 m79(); virtual s32 m80();
    virtual s32 m81(); virtual s32 m82(); virtual s32 m83();
    virtual s32 m84(); virtual s32 m85(); virtual s32 m86();
    virtual s32 m87(); virtual s32 m88(); virtual s32 m89();
    virtual s32 m90(); virtual s32 m91(); virtual s32 m92();
    virtual s32 m93(); virtual s32 m94(); virtual s32 m95();
    virtual s32 m96();
};

extern "C" {
extern MojaResources* lbl_805D50D8;
s32 check_demo_mode__10TObjPlayerFv();
s32 is_main_phase_15__9TObjEneDDFv();
s32 clear_global_flag_400__9TObjEneDDFv();
s32 update_player_state__9TObjEneDDFv(void *, s32, s32);
s32 update_primary_light__9TObjEneDDFv(void *);
s32 update_secondary_light__9TObjEneDDFv(void *);
s32 toggle_particle_effect__10TObjPlayerFv();
s32 restore_default_scene();
s32 set_scene_override(s32);
s32 render_world_model__10TObjPlayerFv(void *);
s32 draw__16TObjEneRe7BeruraFv(void *);
s32 end_effect_render__13TParticleCtrlFv();
s32 rotate_matrix_y(s32, s32);
s32 translate_matrix(s32, f32, f32, f32);
s32 push_matrix();
s32 pop_matrix();
s32 set_global_param__8TObjFishFl(s32);
extern Vec_800AFBF0 lbl_8043B10C;
extern const f32 lbl_805D9E84;
extern const f32 lbl_805D9E88;
void render__13TObjEneBm3FlyFv(VObj_800AFBF0 *o);
s32 get_flag_b4__9TObjEneDDFv(void *);
f32 clamp_velocity__15TObjBoss2TunnelFv(void *);
void clamp_flight_height__13TObjEneBm3FlyFv(u8 *arg0);
void update_dd_flag__13TObjEneBm3FlyFPv(void *arg0);
s32 remove_child__17TObjEneBm3FlyNestFPUc(u32, void *);
s32 refresh_and_send_entity_flags__12TBoss8DragonFv(void *, s32);
s32 TBoss8Dragon__sub_800BB7DC(void *);
s32 transition_enemy_state(void *, s32);
s32 spawn_effect_at_ground__10TObjPlayerFl(void *, s32);
s32 spawn_landing_dead_spot(void *, s32);
s32 copy_target_state__14TObjEnePanarmsFPv(void *, s32);
s32 advance_animation_playback();
u32 find_entity_by_id(u16);
s32 play_sound_effect(s32, void *, s32, s32);
void state_death_fall__13TObjEneBm3FlyFPvi(u8 *arg0, s32 arg1);
}
#define clamp_flight_height__13TObjEneBm3FlyFv (*(s32 (*)(void *))&clamp_flight_height__13TObjEneBm3FlyFv)
#define update_dd_flag__13TObjEneBm3FlyFPv (*(s32 (*)(void *, f32, f32, f32))&update_dd_flag__13TObjEneBm3FlyFPv)

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
s32 TBoss8Dragon__sub_800BB7D8(void *, s32, f32);
s32 post_translate_matrix(void *);
s32 draw_chunk_object(s32);
s32 create_breakup_mdl__12TBoss3VoloptFlllll(s32, s32 *, s32, void *, s32);
s32 queue_destruction__7TObjectFv();

f32 get_pos_x__14TObjEneGibblesFPv(void* p) { return *(f32*)((char*)p + 0x10); }

void TObjEneMoja::bindModel(int index) {
    model=lbl_805D50D8->models[index].model;
    textures=lbl_805D50D8->models[index].textures;
}

void TObjEneBm3Fly__vt104(u8 *arg0) {
    if (((VObj800AFB60_800AFB28 *) arg0)->m8((4e+02f), (15.0f)) != 0) {
        update_player_state__9TObjEneDDFv(arg0, 0, 0);
        set_global_param__8TObjFishFl(*(s32 *)((s8 *)arg0 + 0x24));
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
        clear_global_flag_400__9TObjEneDDFv();
        toggle_particle_effect__10TObjPlayerFv();
        draw_chunk_object(*(s32 *)((s8 *)arg0 + 0x34));
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
    if (*(s32 *)((s8 *)o + 0x428) & 1) {
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
        if (*(s32 *)((s8 *)o + 0x428) & 2) {
            Vec_800AFBF0 v = lbl_8043B10C;
            update_player_state__9TObjEneDDFv(o, (s32)&v, 0);
        }
        update_secondary_light__9TObjEneDDFv(o);
        set_global_param__8TObjFishFl(*(s32 *)((s8 *)o + 0x24));
        push_matrix();
        translate_matrix(0, *(f32 *)((s8 *)o + 0x38), *(f32 *)((s8 *)o + 0x42C), *(f32 *)((s8 *)o + 0x40));
        rotate_matrix_y(0, *(s32 *)((s8 *)o + 0x60));
        clear_global_flag_400__9TObjEneDDFv();
        toggle_particle_effect__10TObjPlayerFv();
        set_scene_override(0x8F);
        if (kind == 1) {
            draw__16TObjEneRe7BeruraFv(o);
        } else {
            render_world_model__10TObjPlayerFv(o);
        }
        restore_default_scene();
        end_effect_render__13TParticleCtrlFv();
        pop_matrix();
        update_primary_light__9TObjEneDDFv(o);
    }
}

void TObjEneBm3Fly__vt103(void) {  }
void handle_message__13TObjEneBm3FlyFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        *(s32 *)((s8 *)arg0 + 0x428) = (s32) (*(s32 *)((s8 *)arg0 + 0x428) | 1);
        *(s32 *)((s8 *)arg0 + 0x428) = (s32) (*(s32 *)((s8 *)arg0 + 0x428) & 0xFFFFFFFD);
        return;
    case 3:
        queue_destruction__7TObjectFv();
    case 5:
    case 0:
        return;
    }
}

extern s32 bm3_fly_breakup_params[];
extern s32 TObjEneBm3Fly__breakup_model;

void state_death_fall__13TObjEneBm3FlyFPvi(u8 *arg0, s32 arg1) {
    f32 temp_f0;
    s32 temp_r0;
    u32 temp_photon;
    s32 temp_copy;
    switch (arg1) {
    case 4:
        *(s16 *)((s8 *)arg0 + 0xB8) = 4;
        ((VObj_800AFDC8 *)arg0)->m94();
        *(s32 *)((s8 *)arg0 + 0x428) = (s32) (*(s32 *)((s8 *)arg0 + 0x428) & 0xFFFFFFFE);
        *(s32 *)((s8 *)arg0 + 0x428) = (s32) (*(s32 *)((s8 *)arg0 + 0x428) | 2);
        ((s32 (*)(void *))refresh_and_send_entity_flags__12TBoss8DragonFv)(arg0);
        temp_photon = find_entity_by_id(*(u16 *)((s8 *)arg0 + 0x418));
        if (temp_photon != 0U) {
            remove_child__17TObjEneBm3FlyNestFPUc(temp_photon, arg0);
        }
        TBoss8Dragon__sub_800BB7DC(arg0);
        *(s32 *)((s8 *)arg0 + 0x3C0) = 0;
        *(s32 *)((s8 *)arg0 + 0x3C4) = 0;
        *(f32 *)((s8 *)arg0 + 0x3E0) = (f32) (0.0f);
        *(f32 *)((s8 *)arg0 + 0x430) = (f32) *(f32 *)((s8 *)arg0 + 0x308);
        *(f32 *)((s8 *)arg0 + 0x438) = (f32) *(f32 *)((s8 *)arg0 + 0x310);
        *(f32 *)((s8 *)arg0 + 0x3E4) = clamp_velocity__15TObjBoss2TunnelFv(arg0 + 0x430);
        temp_copy = copy_target_state__14TObjEnePanarmsFPv(arg0, 0x4003E425);
        play_sound_effect(temp_copy, arg0 + 0x38, 0, 0);
        return;
    case 3:
        if ((*(f32 *)((s8 *)arg0 + 0x42C) - *(f32 *)((s8 *)arg0 + 0x3C)) < (-2e+01f)) {
            transition_enemy_state(arg0, 9);
        }
        break;
    case 0:
        advance_animation_playback();
        switch (*(s32 *)((s8 *)arg0 + 0x3C0)) {
        case 0:
        case 1:
            update_dd_flag__13TObjEneBm3FlyFPv(arg0, *(f32 *)((s8 *)arg0 + 0x430), *(f32 *)((s8 *)arg0 + 0x438), *(f32 *)((s8 *)arg0 + 0x3E4));
            *(f32 *)((s8 *)arg0 + 0x3E0) = (f32) (*(f32 *)((s8 *)arg0 + 0x3E0) - (0.1f));
            *(f32 *)((s8 *)arg0 + 0x42C) = (f32) (*(f32 *)((s8 *)arg0 + 0x42C) + *(f32 *)((s8 *)arg0 + 0x3E0));
            if (*(f32 *)((s8 *)arg0 + 0x42C) < (1.2f) + *(f32 *)((s8 *)arg0 + 0x3C)) {
                *(f32 *)((s8 *)arg0 + 0x42C) = (1.2f) + *(f32 *)((s8 *)arg0 + 0x3C);
                if (((s32) *(s32 *)((s8 *)arg0 + 0x3C0) == 0) && (get_flag_b4__9TObjEneDDFv(arg0) == 0)) {
                    *(s32 *)((s8 *)arg0 + 0x3C0) = 1;
                    *(f32 *)((s8 *)arg0 + 0x3E0) = (f32) (0.5f);
                    *(f32 *)((s8 *)arg0 + 0x3E4) *= (0.98f);
                } else {
                    *(s32 *)((s8 *)arg0 + 0x3C0) = 2;
                    *(f32 *)((s8 *)arg0 + 0x3E4) = (f32) (0.0f);
                    *(s32 *)((s8 *)arg0 + 0x428) = (s32) (*(s32 *)((s8 *)arg0 + 0x428) & 0xFFFFFFFD);
                    spawn_landing_dead_spot(arg0 + 0x38, 0xA);
                    spawn_effect_at_ground__10TObjPlayerFl(arg0 + 0x38, 0x1E);
                }
            }
            clamp_flight_height__13TObjEneBm3FlyFv(arg0);
            break;
        case 2:
            *(s32 *)((s8 *)arg0 + 0x3C4) = (s32) (*(s32 *)((s8 *)arg0 + 0x3C4) + 1);
            *(f32 *)((s8 *)arg0 + 0x42C) = (f32) (*(f32 *)((s8 *)arg0 + 0x42C) - (0.1f));
            break;
        }
        *(f32 *)((s8 *)arg0 + 0x3E4) *= (0.98f);
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
        *(s32 *)((s8 *)arg0 + 0x428) = (s32) (*(s32 *)((s8 *)arg0 + 0x428) | 1);
        temp_r4 = *(s32 *)((s8 *)arg0 + 0x428) & 0xFFFFFFFD;
        *(s32 *)((s8 *)arg0 + 0x428) = temp_r4;
        *(s32 *)((s8 *)arg0 + 0x80) = 0;
        refresh_and_send_entity_flags__12TBoss8DragonFv(arg0, temp_r4);
        temp_ret = find_entity_by_id(*(u16 *)((s8 *)arg0 + 0x418));
        if (temp_ret != 0U) {
            remove_child__17TObjEneBm3FlyNestFPUc(temp_ret, arg0);
        }
        TBoss8Dragon__sub_800BB7DC(arg0);
        TBoss8Dragon__sub_800BB7D8(arg0, 0xF1, (1.0f));
        play_sound_effect(copy_target_state__14TObjEnePanarmsFPv(arg0, 0x4003E425), arg0 + 0x38, 0, 0);
        create_breakup_mdl__12TBoss3VoloptFlllll(TObjEneBm3Fly__breakup_model, bm3_fly_breakup_params, *(s32 *)((s8 *)arg0 + 0x24), arg0 + 0x2FC, *(s32 *)((s8 *)arg0 + 0x60));
        *(s32 *)((s8 *)arg0 + 0x3C0) = 0;
        return;
    case 3:
        if ((s32) *(s32 *)((s8 *)arg0 + 0x3C0) >= 2) {
            transition_enemy_state(arg0, 9);
        }
    case 5:
        return;
    case 0:
        *(s32 *)((s8 *)arg0 + 0x3C0) = (s32) (*(s32 *)((s8 *)arg0 + 0x3C0) + 1);
        break;
    }
}

}

#undef clamp_flight_height__13TObjEneBm3FlyFv
#undef update_dd_flag__13TObjEneBm3FlyFPv

#include "types.h"

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
s32 vec3_add_to(void *, void *);
f32 vec3_dot(void *, void *);
s32 subtract_vector(void *, void *);
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
    virtual s32 m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual s32 m94();
};

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
    virtual s32 m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual s32 m93();
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
    virtual s32 m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual s32 m93();
};

struct Vec_800B0F70 { f32 x, y, z; };

extern "C" {
s32 play_effect_if_v2__10TObjPlayerFl(int);
s32 play_persistent_sound(void *, void *, void *, int, int);
void TObjEneBm3Fly__play_orbit_flight_sound(s32 arg0);
void play_pitched_cue__13TObjEneBm3FlyFi(s32 arg0);
f32 calc_scaled_value__15TObjBoss2TunnelFlf(int, int, f32, f32);
void TObjEneBm3Fly__sub_800B1634(u8 *arg0);
f32 approach_value__13TObjEneBm3FlyFff(f32 farg0, f32 farg1);
void update_state_flag__13TObjEneBm3FlyFPv(void *arg0);
s32 update_linked_position__14TObjEneEpsilonFf(f32);
s32 update_velocity__9TObjEneDDFv(void *);
s32 transform_part_positions__9TObjEneDDFv(void *);
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
void TObjEneBm3Fly__sub_800B02C8(u8 *arg0, s32 arg1);
struct Fly_800B1684;
void choose_attack__13TObjEneBm3FlyFPv(Fly_800B1684 *s);
s32 clear_attack_receipts();
s32 noop__12TBoss8DragonFv(void *);
s32 set_field_378__9TObjEneDDFPvi(void *, s16);
void update_recoil_state__13TObjEneBm3FlyFv(u8 *arg0, s32 arg1);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
f32 atan2_float(f32, f32);
f32 update_scale__15TObjBoss2TunnelFv(void *);
void update_collide_flag__13TObjEneBm3FlyFv(void *arg0);
s32 enemy_clear_target(void *);
extern const f64 TObjEneBm3Fly__data_8043B118[];
extern const f32 lbl_805D9E80;
void TObjEneBm3Fly__sub_800B1214(u8 *arg0, s32 arg1);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
void circle_destination__13TObjEneBm3FlyFPvi(void *arg0, s32 arg1);
s32 update_death_check__14TObjEneEpsilonFv(void *);
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
s32 inflict_poison__9TObjEneDDFlPUc(void *, void *);
s32 check_v2_mode__9TObjEneDDFv();
s32 objInBand__FP7GameObjf(void *, f32);
s32 select_and_apply_target__14TObjEneEpsilonFf(void *, f32);
s32 spawn_part__14TObjEneEpsilonFi(void *, f32);
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
        *(s16 *)((s8 *)arg0 + 0xB8) = 3;
        ((Ene_800B012C *)arg0)->m94();
        *(u32 *)((s8 *)arg0 + 0x428) &= ~1;
        *(u32 *)((s8 *)arg0 + 0x428) |= 2;
        set_field_378__9TObjEneDDFPvi(arg0, *(s16 *)((s8 *)arg0 + 0x326));
        noop__12TBoss8DragonFv(arg0);
        play_sound_effect(copy_target_state__14TObjEnePanarmsFPv(arg0, 0x4003E425), arg0 + 0x38, 0, 0);
        *(s32 *)((s8 *)arg0 + 0x3C0) = 0;
        break;
    case 3:
        if (*(u32 *)((s8 *)arg0 + 0xB0) & 0x10) {
            if (((Ene_800B012C *)arg0)->m97() != 0) {
                ((Ene_800B012C *)arg0)->m102((2e+02f));
            }
#define update__13TObjEneBm3FlyFPv (*(s32 (*)(void *))&update__13TObjEneBm3FlyFPv)
#define copy_target_state__14TObjEnePanarmsFPv (*(void * (*)(void *, int))&copy_target_state__14TObjEnePanarmsFPv)
#define TObjEneBm3Fly__sub_800B1634 (*(s32 (*)(void *))&TObjEneBm3Fly__sub_800B1634)
#define approach_value__13TObjEneBm3FlyFff (*(f32 (*)(void *, f32, f32))&approach_value__13TObjEneBm3FlyFff)
#define clamp_flight_height__13TObjEneBm3FlyFv (*(s32 (*)(void *))&clamp_flight_height__13TObjEneBm3FlyFv)
#define update_state_flag__13TObjEneBm3FlyFPv (*(s32 (*)(void *))&update_state_flag__13TObjEneBm3FlyFPv)
#define transition_enemy_state (*(s32 (*)(void *, int))&transition_enemy_state)
#define clamp_velocity__15TObjBoss2TunnelFv (*(f32 (*)(void *, s32))&clamp_velocity__15TObjBoss2TunnelFv)
#define choose_attack__13TObjEneBm3FlyFPv (*(s32 (*)(void *))&choose_attack__13TObjEneBm3FlyFPv)
#define update_dd_flag__13TObjEneBm3FlyFPv (*(s32 (*)(void *, f32, f32, f32))&update_dd_flag__13TObjEneBm3FlyFPv)
#define play_sound_effect (*(s32 (*)(void *, void *, int, int))&play_sound_effect)
#define update_collide_flag__13TObjEneBm3FlyFv (*(s32 (*)(void *))&update_collide_flag__13TObjEneBm3FlyFv)
#define circle_destination__13TObjEneBm3FlyFPvi (*(s32 (*)(void *, int))&circle_destination__13TObjEneBm3FlyFPvi)
#define can_attack_target__13TObjEneBm3FlyFPv (*(s32 (*)(void *))&can_attack_target__13TObjEneBm3FlyFPv)
#define update_height_offset__13TObjEneBm3FlyFPv (*(s32 (*)(void *))&update_height_offset__13TObjEneBm3FlyFPv)
            if (*(s32 *)((s8 *)arg0 + 0x378) == 3) {
                choose_attack__13TObjEneBm3FlyFPv(arg0);
            } else {
                transition_enemy_state(arg0, *(s32 *)((s8 *)arg0 + 0x378));
            }
        }
        break;
    case 0:
        advance_animation_playback();
        t = *(s32 *)((s8 *)arg0 + 0x3C0);
        *(s32 *)((s8 *)arg0 + 0x3C0) = t + 1;
        ((P_800B012C *)arg0)->v.x = *(f32 *)((s8 *)arg0 + 0x308);
        ((P_800B012C *)arg0)->v.z = *(f32 *)((s8 *)arg0 + 0x310);
        v = clamp_velocity__15TObjBoss2TunnelFv(&((P_800B012C *)arg0)->v, t);
        update_dd_flag__13TObjEneBm3FlyFPv(arg0, ((P_800B012C *)arg0)->v.x, ((P_800B012C *)arg0)->v.z, v);
        clamp_flight_height__13TObjEneBm3FlyFv(arg0);
        *(f32 *)((s8 *)arg0 + 0x308) *= (0.5f);
        *(f32 *)((s8 *)arg0 + 0x310) *= (0.5f);
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
        *(s16 *)((s8 *)arg0 + 0xB8) = 1;
        ((VObj_18_b7c757 *)(arg0))->m94();
        *(s32 *)((s8 *)arg0 + 0x428) = (s32) (*(s32 *)((s8 *)arg0 + 0x428) & 0xFFFFFFFE);
        *(s32 *)((s8 *)arg0 + 0x428) = (s32) (*(s32 *)((s8 *)arg0 + 0x428) | 2);
        *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) | 0x01000000);
        TObjEneBm3Fly__sub_800B1634((void *) (arg0));
        *(f32 *)((s8 *)arg0 + 0x394) = (f32) (((3e+01f) * sin_table_lookup((int) (*(s32 *)((s8 *)arg0 + 0x448)))) + *(f32 *)((s8 *)arg0 + 0x41C));
        *(f32 *)((s8 *)arg0 + 0x398) = (f32) *(f32 *)((s8 *)arg0 + 0x444);
        *(f32 *)((s8 *)arg0 + 0x39C) = (f32) (((3e+01f) * cos_table_lookup((int) (*(s32 *)((s8 *)arg0 + 0x448)))) + *(f32 *)((s8 *)arg0 + 0x424));
        temp_r4 = (u8 *)(*(u8 **)((s8 *)arg0 + 0x350));
        *(f32 *)((s8 *)arg0 + 0x3E0) = (f32) ((2.0f) + calc_scaled_value__15TObjBoss2TunnelFlf((int) (*(s32 *)((s8 *)temp_r4 + 8)), (int) (temp_r4), (f32) (*(f32 *)((s8 *)temp_r4 + 4)), (f32) ((3e+01f))));
        update_velocity__9TObjEneDDFv((void *) (arg0));
        break;
    case 3:
        if (update_linked_position__14TObjEneEpsilonFf((f32) ((2e+02f))) != 0) {
            transition_enemy_state((void *) (arg0), (int) (2));
        } else if (*(f32 *)((s8 *)arg0 + 0x3AC) < *(f32 *)((s8 *)arg0 + 0x3E0)) {
            transition_enemy_state((void *) (arg0), (int) (1));
        }
        break;
    case 5:
        break;
    case 0:
        advance_animation_playback();
        update_velocity__9TObjEneDDFv((void *) (arg0));
        *(f32 *)((s8 *)arg0 + 0x42C) = approach_value__13TObjEneBm3FlyFff((void *) (arg0), (f32) (*(f32 *)((s8 *)arg0 + 0x42C)), (f32) (*(f32 *)((s8 *)arg0 + 0x398)));
        update_state_flag__13TObjEneBm3FlyFPv((void *) (arg0));
        ((VObj_18_b7c757 *)(arg0))->m86();
        clamp_flight_height__13TObjEneBm3FlyFv((void *) (arg0));
        transform_part_positions__9TObjEneDDFv((void *) (arg0));
        play_pitched_cue__13TObjEneBm3FlyFi((s32) arg0);
        break;
    }
}
#pragma pop

#define I(o) (*(s32 *)((s8 *)(arg0) + (o)))
#define R(o) (*(f32 *)((s8 *)(arg0) + (o)))
#define P(o) (*(u8 **)((s8 *)(arg0) + (o)))
#define V ((VObj_800B044C *)(arg0))
void state_circle_target__13TObjEneBm3FlyFPvi(u8 *arg0, s32 arg1) {
    f32 speed;
    f32 vertical;
    switch (arg1) {
    case 4:
        *(s16 *)((s8 *)arg0 + 0xB8) = 1;
        V->m94();
        I(0x428) &= ~1;
        I(0x428) |= 2;
        I(0x30) |= 0x01000000;
        if (*(s16 *)((s8 *)arg0 + 0x326) == 4) {
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
        if (update_death_check__14TObjEneEpsilonFv(arg0) == 0 && V->m102((2e+02f)) == 0) {
            break;
        }
        switch (I(0x3C0)) {
        case 0:
            circle_destination__13TObjEneBm3FlyFPvi(arg0, I(0x3D0));
            update_velocity__9TObjEneDDFv(arg0);
            vertical = (0.0f);
            speed = *(f32 *)((s8 *)(P(0x350)) + 4);
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
            update_velocity__9TObjEneDDFv(arg0);
            speed = *(f32 *)((s8 *)(P(0x350)) + 4);
            vertical = (0.0f);
            if (R(0x3AC) < speed) {
                I(0x3C0) = 2;
            }
            break;
        case 2:
            I(0x3D0) += I(0x3D4);
            I(0x3CC) += I(0x3D4);
            circle_destination__13TObjEneBm3FlyFPvi(arg0, I(0x3D0));
            update_velocity__9TObjEneDDFv(arg0);
            speed = *(f32 *)((s8 *)(P(0x350)) + 4);
            vertical = (1e+01f) * sin_table_lookup(I(0x3D8));
            I(0x3D8) += 0x380;
            break;
        }
        VecCopy__FP3VecPC3Vec(arg0 + 0x430, arg0 + 0x3A0);
        update_dd_flag__13TObjEneBm3FlyFPv(arg0, R(0x430), R(0x438), speed);
        R(0x42C) = approach_value__13TObjEneBm3FlyFff(arg0, R(0x42C), R(0x398) + vertical);
        clamp_flight_height__13TObjEneBm3FlyFv(arg0);
        I(0x60) = (s32)(TObjEneBm3Fly__data_8043B118[0] * atan2_float(
            *(f32 *)((s8 *)(P(0x390)) + 0x38) - R(0x38), *(f32 *)((s8 *)(P(0x390)) + 0x40) - R(0x40)));
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
        *(s16 *)((s8 *)arg0 + 0xB8) = 1;
        ((VObjB0_800b07d0 *)arg0)->v94();
        *(s32 *)((s8 *)arg0 + 0x428) = (s32) (*(s32 *)((s8 *)arg0 + 0x428) & 0xFFFFFFFE);
        *(s32 *)((s8 *)arg0 + 0x428) = (s32) (*(s32 *)((s8 *)arg0 + 0x428) | 2);
        *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) & 0xFEFFFFFF);
        *(s32 *)((s8 *)arg0 + 0x3C4) = 0;
        *(s32 *)((s8 *)arg0 + 0x3C0) = 0;
        *(s32 *)((s8 *)arg0 + 0x454) = 1;
        return;
    case 3:
        if (*(f32 *)((s8 *)arg0 + 0x3AC) > (4.5e+02f)) {
            transition_enemy_state((void *) (arg0), (int) (5));
            return;
        }
        temp_r0 = *(s32 *)((s8 *)arg0 + 0x3C0);
        switch (temp_r0) {
        case 0:
        case 1:
            if ((void *) *(void **)((s8 *)arg0 + 0x390) == NULL) {
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
        if (update_death_check__14TObjEneEpsilonFv((void *) (arg0)) == 0) {
            enemy_clear_target((void *) (arg0));
        }
        temp_r0_2 = *(s32 *)((s8 *)arg0 + 0x3C0);
        switch (temp_r0_2) {
        case 0:
            if ((void *) *(void **)((s8 *)arg0 + 0x390) != NULL) {
                update_height_offset__13TObjEneBm3FlyFPv((void *) (arg0));
            }
            update_velocity__9TObjEneDDFv((void *) (arg0));
            *(f32 *)((s8 *)arg0 + 0x430) = sin_table_lookup((int) (*(s32 *)((s8 *)arg0 + 0x60)));
            *(f32 *)((s8 *)arg0 + 0x438) = cos_table_lookup((int) (*(s32 *)((s8 *)arg0 + 0x60)));
            update_state_flag__13TObjEneBm3FlyFPv((void *) (arg0));
            *(f32 *)((s8 *)arg0 + 0x42C) = approach_value__13TObjEneBm3FlyFff((void *) (arg0), (f32) (*(f32 *)((s8 *)arg0 + 0x42C)), (f32) (*(f32 *)((s8 *)arg0 + 0x398)));
            clamp_flight_height__13TObjEneBm3FlyFv((void *) (arg0));
            if (can_attack_target__13TObjEneBm3FlyFPv((void *) (arg0)) != 0) {
                *(s16 *)((s8 *)arg0 + 0xB8) = 0;
                *(s32 *)((s8 *)arg0 + 0x3C0) = 1;
            }
            break;
        case 1:
            *(s32 *)((s8 *)arg0 + 0x3C4) = (s32) (*(s32 *)((s8 *)arg0 + 0x3C4) + 1);
            if ((s32) *(s32 *)((s8 *)arg0 + 0x3C4) >= (s32) *(s32 *)((s8 *)lbl_805D50EC + 0x1C)) {
                *(s32 *)((s8 *)arg0 + 0x3C4) = 0;
                *(s32 *)((s8 *)arg0 + 0x3C0) = 2;
                *(s16 *)((s8 *)arg0 + 0xB8) = 2;
            }
            update_collide_flag__13TObjEneBm3FlyFv((void *) (arg0));
            break;
        case 2:
            if (objInBand__FP7GameObjf((void *) (arg0), (f32) ((9.0f))) != 0) {
                *(s32 *)((s8 *)arg0 + 0x440) = (s32) (*(s32 *)((s8 *)arg0 + 0x440) + 1);
                temp_r3 = (unsigned char *) (*(void **)((s8 *)arg0 + 0x390));
                if ((temp_r3 != NULL) && (((VObjB0_800b07d0 *)temp_r3)->v18(arg0, (1.0f)) != 0)) {
                    temp_r3_2 = (unsigned char *) (*(void **)((s8 *)arg0 + 0x390));
                    ((VObjB0_800b07d0 *)temp_r3_2)->v20(arg0, (1.0f));
                    temp_r3_3 = (unsigned char *) (*(void **)((s8 *)arg0 + 0x390));
                    ((VObjB0_800b07d0 *)temp_r3_3)->v23(arg0, (3.0f));
                    if ((check_v2_mode__9TObjEneDDFv() != 0) && (calc_boss4_scale__10TObjPlayerFi((void *) (arg0)) < (0.05f))) {
                        inflict_poison__9TObjEneDDFlPUc((void *) (arg0), (void *) (*(void **)((s8 *)arg0 + 0x390)));
                    }
                }
                play_sound_effect(copy_target_state__14TObjEnePanarmsFPv((void *) (arg0), (int) (0x4003A524)), (void *) (arg0 + 0x38), (int) (0), (int) (0));
                play_effect_if_v2__10TObjPlayerFl((int) (-0x400));
            }
            if (get_flag_b4__9TObjEneDDFv((void *) (arg0)) != 0) {
                if ((s32) *(s32 *)((s8 *)arg0 + 0x440) >= 4) {
                    *(s32 *)((s8 *)arg0 + 0x440) = 0;
                    *(s32 *)((s8 *)arg0 + 0x3C0) = 3;
                } else {
                    *(s16 *)((s8 *)arg0 + 0xB8) = 1;
                    *(s32 *)((s8 *)arg0 + 0x3C0) = 0;
                }
            }
            update_collide_flag__13TObjEneBm3FlyFv((void *) (arg0));
            break;
        }
        ((VObjB0_800b07d0 *)arg0)->v87();
        play_pitched_cue__13TObjEneBm3FlyFi((s32)((void *) (arg0)));
        return;
    case 5:
        *(s32 *)((s8 *)arg0 + 0x454) = 0;
        break;
    }
}

#pragma push
#pragma fp_contract on
#undef I
#undef R
#undef P
#undef V
#define I(o) (*(s32 *)((s8 *)(arg0) + (o)))
#define R(o) (*(f32 *)((s8 *)(arg0) + (o)))
#define P(o) (*(u8 **)((s8 *)(arg0) + (o)))
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
        *(s16 *)((s8 *)arg0 + 0xB8) = 1;
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
            ((s32 (*)())choose_attack__13TObjEneBm3FlyFPv)();
        }
        break;
    case 0:
        advance_animation_playback();
        if (update_death_check__14TObjEneEpsilonFv(arg0) == 0 && V->m102((2e+02f)) == 0) {
            break;
        }
        update__13TObjEneBm3FlyFPv(arg0);
        update_velocity__9TObjEneDDFv(arg0);
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
                update_scale__15TObjBoss2TunnelFv(arg0 + 0x430);
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
        if (R(0x43C) > *(f32 *)((s8 *)(P(0x350)) + 4)) {
            R(0x43C) *= (0.96f);
        } else {
            R(0x43C) = *(f32 *)((s8 *)(P(0x350)) + 4);
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
        len = ((f32 (*)(void *))clamp_velocity__15TObjBoss2TunnelFv)(&d);
        update_dd_flag__13TObjEneBm3FlyFPv(arg0, d.x, d.z, len);
        R(0x42C) = approach_value__13TObjEneBm3FlyFff(arg0, pos->y, R(0x398));
        pos->y = R(0x42C);
        clamp_flight_height__13TObjEneBm3FlyFv(arg0);
        I(0x60) = (s32)(TObjEneBm3Fly__data_8043B118[0] * atan2_float(R(0x430), R(0x438)));
        V->m87();
        pos->x -= R(0x38);
        pos->y -= R(0x42C);
        pos->z -= R(0x40);
        play_pitched_cue__13TObjEneBm3FlyFi((s32)arg0);
        break;
    case 5:
        R(0x43C) = *(f32 *)((s8 *)(P(0x350)) + 4);
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
#define F_800B(off, T) (*(T *)((s8 *)(arg0) + (off)))

#pragma push
#pragma fp_contract on
#define I(o) (*(s32 *)((s8 *)(arg0) + (o)))
#define R(o) (*(f32 *)((s8 *)(arg0) + (o)))
void TObjEneBm3Fly__sub_800B0F70(u8 *arg0, s32 arg1) {
    Vec_800B0F70 d;
    f32 radius;
    s32 a;
    switch (arg1) {
    case 4:
        *(s16 *)((s8 *)arg0 + 0xB8) = 1;
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
        if (update_linked_position__14TObjEneEpsilonFf((2e+02f)) != 0) {
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
        update_collide_flag__13TObjEneBm3FlyFv(arg0);
        R(0x44) = R(0x2FC);
        R(0x4C) = R(0x304);
        ((VObj_18_aab587 *)(arg0))->m86();
        TObjEneBm3Fly__play_orbit_flight_sound((s32)arg0);
        break;
    case 5:
        R(0x430) = R(0x38) - R(0x44);
        R(0x434) = (0.0f);
        R(0x438) = R(0x40) - R(0x4C);
        R(0x43C) = update_scale__15TObjBoss2TunnelFv(arg0 + 0x430);
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
        F_800B(0x60, s32) = (s32)(TObjEneBm3Fly__data_8043B118[0] * atan2_float(F_800B(0x40C, f32), F_800B(0x414, f32)));
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
            F_800B(0x3E0, f32) = update_scale__15TObjBoss2TunnelFv(arg0 + 0x430);
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
            F_800B(0x60, s32) = (s32)(TObjEneBm3Fly__data_8043B118[0] * atan2_float(F_800B(0x430, f32), F_800B(0x438, f32)));
            break;
        }
        update_collide_flag__13TObjEneBm3FlyFv(arg0);
        F_800B(0x44, f32) = F_800B(0x2FC, f32);
        F_800B(0x4C, f32) = F_800B(0x304, f32);
        clamp_flight_height__13TObjEneBm3FlyFv(arg0);
        ((VObj_18 *)(arg0))->m86();
        break;
    }
}
#pragma pop

void TObjEneBm3Fly__vt102(void *arg0, f32 farg0) {
    if (((VObj_800B150C_800B07D0 *)arg0)->m97() != 0) {
        select_and_apply_target__14TObjEneEpsilonFf(arg0, farg0);
        return;
    }
    spawn_part__14TObjEneEpsilonFi(arg0, farg0);
}
void TObjEneBm3Fly__play_orbit_flight_sound(s32 arg0) {
    play_persistent_sound((void *) (((s32)copy_target_state__14TObjEnePanarmsFPv((void *) (arg0), (int) (0x4003AB23)))), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (0));
    play_effect_if_v2__10TObjPlayerFl((int) (-0x400));
}
void play_pitched_cue__13TObjEneBm3FlyFi(s32 arg0) {
    play_persistent_sound((void *) (((s32)copy_target_state__14TObjEnePanarmsFPv((void *) (arg0), (int) (0x40039E22)))), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (0));
    play_effect_if_v2__10TObjPlayerFl((int) (-0x400));
}

}

#undef update__13TObjEneBm3FlyFPv
#undef copy_target_state__14TObjEnePanarmsFPv
#undef TObjEneBm3Fly__sub_800B1634
#undef approach_value__13TObjEneBm3FlyFff
#undef clamp_flight_height__13TObjEneBm3FlyFv
#undef update_state_flag__13TObjEneBm3FlyFPv
#undef transition_enemy_state
#undef clamp_velocity__15TObjBoss2TunnelFv
#undef choose_attack__13TObjEneBm3FlyFPv
#undef update_dd_flag__13TObjEneBm3FlyFPv
#undef play_sound_effect
#undef update_collide_flag__13TObjEneBm3FlyFv
#undef circle_destination__13TObjEneBm3FlyFPvi
#undef can_attack_target__13TObjEneBm3FlyFPv
#undef update_height_offset__13TObjEneBm3FlyFPv

#define cos_table_lookup (*(f32 (*)())&cos_table_lookup)
#define transition_enemy_state (*(s32 (*)(void *, int))&transition_enemy_state)
#define find_entity_by_id (*(void * (*)(u16))&find_entity_by_id)
#define clamp_flight_height__13TObjEneBm3FlyFv (*(int (*)(void*))&clamp_flight_height__13TObjEneBm3FlyFv)

#include "types.h"

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
    virtual s32 m95();
    virtual s32 m96();
};

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
s32 get_field_0c__10TObjPlayerFv(int);
f32 get_pos_x__10TObjPlayerFv(int);
f32 fabs_float(f32);
extern s32 TObjEneBm3Fly__attack_params;
s32 get_random_scaled__9TObjEneDDFv(void *);
s32 has_free_attack_slot__17TObjEneBm3FlyNestFUs(void *, u16);
s32 enemy_set_target_id(void *, u16);
s32 collect_enemy_target_candidates(void *, Cand_800B1684 *, f32);
}

extern "C" {

void TObjEneBm3Fly__vt87(void* p);
u16 get_active_id__13TObjEneBm3FlyFPv(void *arg0);
int vfunc_89__9TObjEneDDFv(void*);

u16 get_active_id__13TObjEneBm3FlyFPv(void *arg0) {
    if ((s32) *(s32 *)((s8 *)arg0 + 0x454) != 0) {
        return *(u16 *)((s8 *)arg0 + 0x38C);
    }
    return 0xFFFFU;
}

#pragma push
#pragma fp_contract on
void TObjEneBm3Fly__sub_800B1634(u8 *arg0) {
    *(f32 *)((s8 *)arg0 + 0x444) = (f32) (((2.0f) * calc_elapsed_scaled__9TObjEneDDFv((void *) (arg0))) + ((45.0f) + *(f32 *)((s8 *)arg0 + 0x420)));
    *(s32 *)((s8 *)arg0 + 0x448) = get_random_scaled__9TObjEneDDFv((void *) (arg0));
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
    if (has_free_attack_slot__17TObjEneBm3FlyNestFUs(nest, s->f38C) != 0) {
        transition_enemy_state(s, 3);
        return;
    }
    count = collect_enemy_target_candidates(s, players, (1e+04f));
    for (i = 0; i < count; i++) {
        id = players[i].id;
        if (id != s->f38C && has_free_attack_slot__17TObjEneBm3FlyNestFUs(nest, id) != 0) {
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
    if ((*(f32 *)((s8 *)arg0 + 0x3AC) < ((5.0f) + get_pos_x__10TObjPlayerFv((int) (TObjEneBm3Fly__attack_params)))) && (fabs_float((f32) (*(f32 *)((s8 *)arg0 + 0x42C) - *(f32 *)((s8 *)arg0 + 0x398))) < (1.0f))) {
        temp_f31 = vec3_dot((void *) (arg0 + 0x430), (void *) (arg0 + 0x3A0));
        get_field_0c__10TObjPlayerFv((int) (*(s32 *)((s8 *)arg0 + 0x318)));
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
    if (fabs_float(temp_f31) < (0.2f)) {
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
    temp_f31 = *(f32 *)((s8 *)arg0 + 0x42C) - *(f32 *)((s8 *)arg0 + 0x3C);
    if (temp_f31 >= (3e+01f)) {
        ((VObj_18_67c185 *)(arg0))->m95();
    } else {
        ((VObj_18_67c185 *)(arg0))->m96();
    }
    *(f32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0xA4)) + 4) = temp_f31;
}

void TObjEneBm3Fly__vt87(void* p) { vfunc_89__9TObjEneDDFv(p); clamp_flight_height__13TObjEneBm3FlyFv(p); }

}

#undef cos_table_lookup
#undef transition_enemy_state
#undef find_entity_by_id
#undef clamp_flight_height__13TObjEneBm3FlyFv

#define lbl_805D50EC (*(f32 * *)&lbl_805D50EC)
#define TObjEneBm3Fly__breakup_model (*(void * *)&TObjEneBm3Fly__breakup_model)
#define VBase_18 VBase_18__p3
#define VObj_18 VObj_18__p3

#include "types.h"
#include "pso/enemy/TObjEneBm3Fly.h"
#include <stddef.h>
#include "pso/TObject.h"
#include "pso/boss/TBoss8Dragon.h"
#include "pso/enemy/TObjEneBm3FlyNest.h"
#include "pso/enemy/TObjEneDD.h"
#include "pso/enemy/TObjEneRe7Berura.h"
#include "pso/misc/RenderFadeState.h"
#include "pso/misc/TCameraCtrl.h"
#include "pso/misc/TLobby.h"
#include "pso/player/TObjPlayer.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

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
    virtual s32 m83();
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
    virtual s32 m98();
    virtual void m99();
    virtual void m100();
    virtual void m101();
    virtual void m102();
    virtual s32 m103();
};

struct Stack_800B22C8 {
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
};

struct RecoveredGlobal_800B22C8_lbl_8043B0FC {
    s32 value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_800B22C8_lbl_80491B4C {
    s32 value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_800B2168___vt__13TObjEneBm3Fly {
    s32 value;
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
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_800B2948_lbl_80500B00 {
    s32 value;
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
    virtual s32 m6();
    virtual s32 m7();
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
    virtual s32 m103();
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
    virtual s32 m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual s32 m100();
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
    virtual s32 m89();
    virtual s32 m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual s32 m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual s32 m100();
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
    virtual s32 m93();
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
    virtual s32 m93();
    virtual void m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual s32 m100();
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
    virtual s32 m83();
    virtual void m84();
    virtual void m85();
    virtual s32 m86();
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
    virtual s32 m98();
    virtual void m99();
    virtual void m100();
    virtual void m101();
    virtual s32 m102();
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
s32 dispatch_shared_handler_a__6TLobbyFl(int);
s32 register_object__6TLobbyFl(int);
s32 dispatch_shared_handler_b__6TLobbyFl(int);
s32 register_boss__6TLobbyFl(int);
void TLobby__sub_8001FE7C(void*, int);
s32 rotate_xz_pair_by_angle(void *, void *, int);
s32 spawn_particle_effect(void *, int);
u8 * create_particle_emitter(void *, s32);
s32 enable__13TParticleCtrlFPv(int);
s32 init_from_model__11TBreakUpMdlFPvi(int, void *);
void TObjEneBm3Fly__sub_800B0B20(u8 *arg0, s32 arg1);
void vfunc_61__13TObjEneBm3FlyFv(void);
void vfunc_62__13TObjEneBm3FlyFv(void* p);
void vfunc_63__13TObjEneBm3FlyFv(u8 *arg0);
void vfunc_28__13TObjEneBm3FlyFv(void);
void TObjEneBm3Fly__vt85(s32 arg0, u32 arg1, s32 arg2);
void * __dt__13TObjEneBm3FlyFv(void *arg0, s16 arg1);
u8 * TObjEneBm3Fly__ct(u8 *arg0, s32 arg1, u8 *arg2, s32 arg3, s32 arg4, u8 *arg5, u8 *arg6);
void render_with_state_debug__17TObjEneBm3FlyNestFv(u8 *arg0);
void render__17TObjEneBm3FlyNestFPv(u8 *arg0);
void handle_attachment_sample__17TObjEneBm3FlyNestFi(s32 arg0);
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
void state_initial_emit__17TObjEneBm3FlyNestFl(u8 *arg0, s32 arg1);
void handle_appear__17TObjEneBm3FlyNestFPvi(u8 *arg0, s32 arg1);
void init_params__17TObjEneBm3FlyNestFv(void *arg0);
s32 TObjEneBm3FlyNest__sub_800B3AC8(u8 *arg0);
void vfunc_88__17TObjEneBm3FlyNestFv(void* p);
void vfunc_61__17TObjEneBm3FlyNestFv(void);
void vfunc_62__17TObjEneBm3FlyNestFv(void *arg0);
void vfunc_63__17TObjEneBm3FlyNestFv(void *arg0);
void vfunc_28__17TObjEneBm3FlyNestFv(void);
void dispatch_state__17TObjEneBm3FlyNestFiUii(s32 arg0, u32 arg1, s32 arg2);
void run_task__17TObjEneBm3FlyNestFPv(u8 *arg0);
Obj_800B3E40 * TObjEneBm3FlyNest__sub_800B3E40(Obj_800B3E40 *self, s16 flag);
void * TObjEneBm3FlyNest__ct(void *, void *, void *);
int TObjEneBm3FlyNest__sub_800B4158(void);
void * destroy_monest_carrier(void *arg0, s16 arg1);
u8 * TObjEneBm3FlyNest_CarryFly__ct(u8 *self, void *parent, s32 a, s32 b, s32 unused, s32 c, s32 d);
u32 TObjEneEpsilon__sub_800B92F8(void *, void *, f32);
s32 enemy_copy_target_destination();
void __dt__9TObjEneDDFv(void *, int);
int set_part_local_pos__9TObjEneDDFPvPvi(void*, void*, void*);
u32 move_with_wall_slide_commit__9TObjEneDDFfff();
s32 was_hit_by_ranged__13TObjEneBm3FlyFv();
s32 TBoss8Dragon__sub_800BB7D4(void *, s32);
s32 init_common_from__9TObjEneDDFPvPv(void *, void *);
s32 get_target_info__9TObjEneDDFPv(void *);
s32 pack_debug_text_position(s32, s32);
u32 load_enemy_bml_resource_named(void *, void *);
u32 load_enemy_bml_resource(void *);
void TObjEneDD__vt0(void *, int);
s32 update_obstruction_fade(void *);
void TObjPlayer__sub_800D7C58(void *);
s32 spawn_dead_spot_scale15(void *, int);
void free_collision_body_parts(void *);
s32 send_entity_set_flags__6TLobbyFPv();
void __dl__7TObjectFPv(void *);
void * __nw__7TObjectFUl(int);
void __dt__7TObjectFv(void *, int);
s32 __ct__7TObjectFP7TObject(void *, void *);
void __destroy_arr(void *, void *, u32, u32);
void debug_printf_at(s32, const char *, ...);
void draw_model_motion(s32, Ent_800B23A0 *, f32);

void TLobby__sub_801A1FD8();
void vfunc_103__9TObjEneDDFPUc();
void vfunc_79__9TObjEneDDFv();
void vfunc_83__9TObjEneDDFv();
void TObjEneDD__vt82();
void vfunc_85__9TObjEneDDFv();
void vfunc_86__9TObjEneDDFv();
void vfunc_90__9TObjEneDDFv();
void vfunc_91__9TObjEneDDFv();
void vfunc_92__9TObjEneDDFv();
void vfunc_93__9TObjEneDDFv();
void vfunc_94__9TObjEneDDFv();
void vfunc_95__9TObjEneDDFv();
void vfunc_96__9TObjEneDDFv();
void vfunc_97__9TObjEneDDFv();
void vfunc_98__9TObjEneDDFv();
void vfunc_99__9TObjEneDDFv();
void vfunc_100__9TObjEneDDFv();
void vfunc_101__9TObjEneDDFPUc();
void vfunc_102__9TObjEneDDFv();
void vfunc_29__13TUnk_804806E8Fv();
void vfunc_73__13TUnk_804806E8Fv();
void consume_timer_field__10TObjPlayerFPvi();
void vfunc_67__13TUnk_804806E8Fv();
void vfunc_66__13TUnk_804806E8Fv();
void vfunc_65__13TUnk_804806E8Fll();
void vfunc_60__13TUnk_804806E8Fv();
void vfunc_59__13TUnk_804806E8Fv();
void vfunc_58__13TUnk_804806E8Fv();
void apply_slow_status__13TUnk_804806E8Fv();
void update_shock_clock__10TObjPlayerFPv();
void vfunc_43__13TUnk_804806E8Fv();
void TObjPlayer__sub_80018E6C();
void vfunc_13__13TUnk_804AF8A0Fl();
void vfunc_74__9TObjEnemyFl();
void apply_hit_message_flags__9TObjEnemyFPv();
void add_actor_exp();
void apply_action_hold_status();
void apply_anti_technique__13TUnk_804806E8Fl();
void apply_attack_stat_status__13TUnk_804806E8FPv();
void apply_confusion_status__13TUnk_804806E8Fv();
void apply_knockback_from_attacker();
void apply_movement_ailment__13TUnk_804806E8Fl();
void apply_object_set_data();
void apply_paralysis__13TUnk_804806E8Fv();
void apply_poison_status__13TUnk_804806E8Fv();
void apply_set_data__9TObjEnemyFPv();
void apply_shock_status__13TUnk_804806E8Fv();
void apply_switch_attack__10TObjPlayerFi();
void calc_distance_accuracy_penalty__10TObjPlayerFv();
void classify_actor_view_detail();
void clear_all_status_effects();
void clear_harmful_statuses__13TUnk_804806E8Fv();
void cure_paralysis__13TUnk_804806E8Fv();
void cure_poison_ailment();
void enemy_spawn_jellen_effect();
void enemy_spawn_zalure_effect();
void vfunc_78__13TUnk_804806E8Fl();
void vfunc_77__13TUnk_804806E8Fv();
void vfunc_76__13TUnk_804806E8Fv();
void vfunc_75__13TUnk_804806E8Ff();
void clear_lobby_object_state__9TObjEnemyFv();
void vfunc_9__13TUnk_804806E8Fv();
void get_actor_level_index();
void vfunc_12__9TObjEnemyFv();
void get_pos__13TUnk_804806E8Fl();
void is_actor_cadence_frame();
void is_target_in_attack_range__10TObjPlayerFv();
void receive_direct_attack__10TObjPlayerFv();
void receive_physical_attack__10TObjPlayerFv();
void receive_weapon_special_attack__10TObjPlayerFv();
void render_shadows__17TObjEneBm3FlyNestFv();
void reset_motion_fields__13TUnk_804806E8Fv();
void reset_pose__13TUnk_804806E8Fv();
void roll_physical_accuracy__13TUnk_804806E8FPvlf();
void select_melee_contact_body__10TObjPlayerFv();
void trigger_switch_attack__10TObjPlayerFi();
void try_start_action__13TUnk_804806E8Fll();
void update_action_hold_status__10TObjPlayerFv();
void update_action_timer__10TObjPlayerFPv();
void update_actor_ground_y();
void update_attack_stat_status();
void update_defense_stat_status();
void update_flag30_timer__10TObjPlayerFPv();
void update_movement_status__10TObjPlayerFv();
void update_object_view_visibility__13TUnk_804B9870Fff();
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
extern s32 TObjEneBm3Fly__attack_params;
extern RecoveredGlobal_800B22C8_lbl_8043B0FC bm3_fly_resource_binding_desc;
extern RecoveredGlobal_800B2948_lbl_8043B2A4 bm3_fly_nest_attachment_sample_table;
extern Anim_800B41E8 bm3_flynest_anim_binding;
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
extern s32 __vt__26TObjEneBm3FlyNest_CarryFly[];
typedef struct Ctl_800B47C4 {
    f32 *pv;
    s32 *pc;
    s32 d;
    s32 e;
    s32 f;
} Ctl_800B47C4;
extern s32 debug_chunk_object;
extern s32 TObjEneBm3Fly__name;
extern s32 TObjEneBm3FlyNest_CarryFly__name;
extern s32 bm3_fly_boss_stat_handle;
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
extern s32 chunk_polygon_flags_or_mask;
extern s32 chunk_polygon_flags_and_mask;
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
extern s32 model_render_flags;
extern void *tl_04;

extern "C" void vfunc_83__12TObjEneDD_STFv();
extern "C" void render_actor_shadows_default();
extern "C" void run_task__13TObjEneBm3FlyFv();
void *bm3_fly_decision_row[7] = {
    (void *)0x43610000, (void *)0x3f6d097b, (void *)0x600, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
void *bm3_fly_collider_params[11] = {
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x40e00000,
    (void *)0x0, (void *)0x0, (void *)0x8003, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
void *bm3_fly_action_table[20] = {
    (void *)0x10000, (void *)0xa, (void *)0x3f19999a, (void *)0x0,
    (void *)0x10001, (void *)0xc, (void *)0x3f19999a, (void *)0x0,
    (void *)0x30002, (void *)0x0, (void *)0x3f800000, (void *)0x0,
    (void *)0x30000, (void *)0x1, (void *)0x3f800000, (void *)0x0,
    (void *)0x30004, (void *)0x3, (void *)0x3f800000, (void *)0x0,
};
void *__vt__13TObjEneBm3Fly[107] = {
    (void *)0x0, (void *)0x0, (void *)&__dt__13TObjEneBm3FlyFv, (void *)&run_task__13TObjEneBm3FlyFv,
    (void *)&render__13TObjEneBm3FlyFv, (void *)&render_actor_shadows_default, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&reset_motion_fields__13TUnk_804806E8Fv, (void *)&vfunc_9__13TUnk_804806E8Fv, (void *)&update_object_view_visibility__13TUnk_804B9870Fff, (void *)&classify_actor_view_detail,
    (void *)&vfunc_12__9TObjEnemyFv, (void *)&vfunc_13__13TUnk_804AF8A0Fl, (void *)&add_actor_exp, (void *)&consume_timer_field__10TObjPlayerFPvi,
    (void *)&get_actor_level_index, (void *)&update_actor_ground_y, (void *)&TObjPlayer__sub_80018E6C, (void *)&is_actor_cadence_frame,
    (void *)&select_melee_contact_body__10TObjPlayerFv, (void *)&calc_distance_accuracy_penalty__10TObjPlayerFv, (void *)&receive_physical_attack__10TObjPlayerFv, (void *)&receive_direct_attack__10TObjPlayerFv,
    (void *)&receive_weapon_special_attack__10TObjPlayerFv, (void *)&apply_knockback_from_attacker, (void *)&try_start_action__13TUnk_804806E8Fll, (void *)&roll_physical_accuracy__13TUnk_804806E8FPvlf,
    (void *)&vfunc_28__13TObjEneBm3FlyFv, (void *)&vfunc_29__13TUnk_804806E8Fv, (void *)&is_target_in_attack_range__10TObjPlayerFv, (void *)&TObjPlayer::test_flag_256,
    (void *)&TObjPlayer::test_flag30_512, (void *)&TObjPlayer::has_flag_0x800, (void *)&TObjPlayer::test_flag_1000, (void *)&update_poison_status__10TObjPlayerFv,
    (void *)&update_action_hold_status__10TObjPlayerFv, (void *)&update_action_timer__10TObjPlayerFPv, (void *)&update_flag30_timer__10TObjPlayerFPv, (void *)&update_movement_status__10TObjPlayerFv,
    (void *)&update_shock_clock__10TObjPlayerFPv, (void *)&update_attack_stat_status, (void *)&update_defense_stat_status, (void *)&vfunc_43__13TUnk_804806E8Fv,
    (void *)&apply_poison_status__13TUnk_804806E8Fv, (void *)&apply_paralysis__13TUnk_804806E8Fv, (void *)&apply_slow_status__13TUnk_804806E8Fv, (void *)&apply_confusion_status__13TUnk_804806E8Fv,
    (void *)&apply_movement_ailment__13TUnk_804806E8Fl, (void *)&apply_shock_status__13TUnk_804806E8Fv, (void *)&clear_harmful_statuses__13TUnk_804806E8Fv, (void *)&apply_attack_stat_status__13TUnk_804806E8FPv,
    (void *)&TObjPlayer::apply_defense_stat_status, (void *)&cure_poison_ailment, (void *)&cure_paralysis__13TUnk_804806E8Fv, (void *)&clear_all_status_effects,
    (void *)&apply_action_hold_status, (void *)&apply_anti_technique__13TUnk_804806E8Fl, (void *)&vfunc_58__13TUnk_804806E8Fv, (void *)&vfunc_59__13TUnk_804806E8Fv,
    (void *)&vfunc_60__13TUnk_804806E8Fv, (void *)&vfunc_61__13TObjEneBm3FlyFv, (void *)&vfunc_62__13TObjEneBm3FlyFv, (void *)&vfunc_63__13TObjEneBm3FlyFv,
    (void *)&reset_pose__13TUnk_804806E8Fv, (void *)&vfunc_65__13TUnk_804806E8Fll, (void *)&vfunc_66__13TUnk_804806E8Fv, (void *)&vfunc_67__13TUnk_804806E8Fv,
    (void *)&get_pos__13TUnk_804806E8Fl, (void *)&apply_switch_attack__10TObjPlayerFi, (void *)&enemy_spawn_jellen_effect, (void *)&trigger_switch_attack__10TObjPlayerFi,
    (void *)&enemy_spawn_zalure_effect, (void *)&vfunc_73__13TUnk_804806E8Fv, (void *)&vfunc_74__9TObjEnemyFl, (void *)&vfunc_75__13TUnk_804806E8Ff,
    (void *)&vfunc_76__13TUnk_804806E8Fv, (void *)&vfunc_77__13TUnk_804806E8Fv, (void *)&vfunc_78__13TUnk_804806E8Fl, (void *)&vfunc_79__9TObjEneDDFv,
    (void *)&apply_hit_message_flags__9TObjEnemyFPv, (void *)&apply_set_data__9TObjEnemyFPv, (void *)&clear_lobby_object_state__9TObjEnemyFv, (void *)&vfunc_83__12TObjEneDD_STFv,
    (void *)&TObjEneDD__vt82, (void *)&vfunc_85__9TObjEneDDFv, (void *)&vfunc_86__9TObjEneDDFv, (void *)&TObjEneBm3Fly__vt85,
    (void *)&TObjEneBm3Fly__vt86, (void *)&TObjEneBm3Fly__vt87, (void *)&vfunc_90__9TObjEneDDFv, (void *)&vfunc_91__9TObjEneDDFv,
    (void *)&vfunc_92__9TObjEneDDFv, (void *)&vfunc_93__9TObjEneDDFv, (void *)&vfunc_94__9TObjEneDDFv, (void *)&vfunc_95__9TObjEneDDFv,
    (void *)&vfunc_96__9TObjEneDDFv, (void *)&vfunc_97__9TObjEneDDFv, (void *)&vfunc_98__9TObjEneDDFv, (void *)&vfunc_99__9TObjEneDDFv,
    (void *)&vfunc_100__9TObjEneDDFv, (void *)&vfunc_101__9TObjEneDDFPUc, (void *)&vfunc_102__9TObjEneDDFv, (void *)&vfunc_103__9TObjEneDDFPUc,
    (void *)&TObjEneBm3Fly__vt102, (void *)&TObjEneBm3Fly__vt103, (void *)&TObjEneBm3Fly__vt104,
};
#define bm3_fly_collider_params (*(RecoveredGlobal_800B22C8_lbl_80491B4C *)bm3_fly_collider_params)
#define __vt__13TObjEneBm3Fly ((s32 *)__vt__13TObjEneBm3Fly)

#pragma push
#pragma opt_common_subs off
void TObjEneBm3Fly::clamp_flight_height() {
    u8 *arg0 = (u8 *)this;
    if ((*(f32 *)((s8 *)arg0 + 0x42C) - *(f32 *)((s8 *)arg0 + 0x3C)) < (1.2f)) {
        *(f32 *)((s8 *)arg0 + 0x42C) = (1.2f) + *(f32 *)((s8 *)arg0 + 0x3C);
    }
#define atan2_float (*(f64 (*)(f32, f32))&atan2_float)
#define queue_destruction__7TObjectFv (*(void (*)(void *))&queue_destruction__7TObjectFv)
#define update_scale__15TObjBoss2TunnelFv (*(s32 (*)(void *))&update_scale__15TObjBoss2TunnelFv)
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
#define remove_child__17TObjEneBm3FlyNestFPUc (*(void (*)(Obj_800B2A5C *, u8 *))&remove_child__17TObjEneBm3FlyNestFPUc)
#define has_free_attack_slot__17TObjEneBm3FlyNestFUs (*(s32 (*)(Obj_800B2AF4 *, u16))&has_free_attack_slot__17TObjEneBm3FlyNestFUs)
#define clear_global_flag_400__9TObjEneDDFv (*(void (*)(void))&clear_global_flag_400__9TObjEneDDFv)
#define update_player_state__9TObjEneDDFv (*(void (*)(void *, Vec_800B23A0 *, s32))&update_player_state__9TObjEneDDFv)
#define set_field_378__9TObjEneDDFPvi (*(s32 (*)(void *, s32))&set_field_378__9TObjEneDDFPvi)
#define transition_enemy_state (*(s32 (*)(void *, s32))&transition_enemy_state)
#define toggle_particle_effect__10TObjPlayerFv (*(void (*)(void))&toggle_particle_effect__10TObjPlayerFv)
#define copy_target_state__14TObjEnePanarmsFPv (*(int (*)(void*))&copy_target_state__14TObjEnePanarmsFPv)
#define advance_animation_playback (*(s32 (*)(void *))&advance_animation_playback)
#define find_entity_by_id (*(u8 * (*)(u16))&find_entity_by_id)
#define end_effect_render__13TParticleCtrlFv (*(void (*)(void))&end_effect_render__13TParticleCtrlFv)
#define play_persistent_sound (*(s32 (*)(s32, void *, s32, s32, s32))&play_persistent_sound)
#define play_sound_effect (*(s32 (*)(void *, void *, int, int))&play_sound_effect)
#define rotate_matrix_y (*(void (*)(s32, s32))&rotate_matrix_y)
#define translate_matrix (*(void (*)(s32, f32, f32, f32))&translate_matrix)
#define set_global_param__8TObjFishFl (*(void (*)(s32))&set_global_param__8TObjFishFl)
#define draw_chunk_object (*(void (*)(s32))&draw_chunk_object)
#define vfunc_89__9TObjEneDDFv (*(void (*)())&vfunc_89__9TObjEneDDFv)
#define TObjEneBm3Fly__vt102 (*(void (*)())&TObjEneBm3Fly__vt102)
#define TObjEneBm3Fly__vt104 (*(void (*)())&TObjEneBm3Fly__vt104)
#define TObjEneBm3Fly__vt86 (*(void (*)())&TObjEneBm3Fly__vt86)
#define TObjEneBm3Fly__vt87 (*(void (*)())&TObjEneBm3Fly__vt87)
#define render__13TObjEneBm3FlyFv (*(void (*)())&render__13TObjEneBm3FlyFv)
    *(f32 *)((s8 *)arg0 + 0x300) = *(f32 *)((s8 *)arg0 + 0x42C);
}
#pragma pop

void TObjEneBm3Fly::store_position() {
    u8 *arg0 = (u8 *)this;
    *(f32 *)((s8 *)arg0 + 0x2FC) = (f32) *(f32 *)((s8 *)arg0 + 0x38);
    *(f32 *)((s8 *)arg0 + 0x304) = (f32) *(f32 *)((s8 *)arg0 + 0x40);
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x2FC);
}

void update_state_flag__13TObjEneBm3FlyFPv(void *arg0) {
    void *temp_r5;

    temp_r5 = *(void **)((s8 *)arg0 + 0x350);
    if (TObjEneEpsilon__sub_800B92F8(arg0, *(void **)((s8 *)temp_r5 + 8), *lbl_805D50EC) != 0U) {
        *(s32 *)((s8 *)arg0 + 0x428) = (s32) (*(s32 *)((s8 *)arg0 + 0x428) | 2);
        return;
    }
    *(s32 *)((s8 *)arg0 + 0x428) = (s32) (*(s32 *)((s8 *)arg0 + 0x428) & 0xFFFFFFFD);
}

void update_dd_flag__13TObjEneBm3FlyFPv(void *arg0) {
    if (move_with_wall_slide_commit__9TObjEneDDFfff() != 0U) {
        *(s32 *)((s8 *)arg0 + 0x428) = (s32) (*(s32 *)((s8 *)arg0 + 0x428) | 2);
        return;
    }
    *(s32 *)((s8 *)arg0 + 0x428) = (s32) (*(s32 *)((s8 *)arg0 + 0x428) & 0xFFFFFFFD);
}

void TObjEneBm3Fly::update_collide_flag() {
    if (((VObj_800B1A90_800B1978 *)this)->v102() != 0U) {
        *(s32 *)((s8 *)this + 0x428) = (s32) (*(s32 *)((s8 *)this + 0x428) | 2);
        return;
    }
    *(s32 *)((s8 *)this + 0x428) = (s32) (*(s32 *)((s8 *)this + 0x428) & 0xFFFFFFFD);
}

#pragma push
#pragma fp_contract on
void circle_destination__13TObjEneBm3FlyFPvi(void *arg0, s32 arg1) {
    f32 temp_f1;
    enemy_copy_target_destination();
    *(f32 *)((s8 *)arg0 + 0x394) = (f32) (((7e+01f) * ((f32 (*)(s32))sin_table_lookup)(arg1)) + *(f32 *)((s8 *)arg0 + 0x394));
    temp_f1 = *(f32 *)((s8 *)arg0 + 0x3C);
    *(f32 *)((s8 *)arg0 + 0x398) = (f32) (temp_f1 + *(f32 *)((s8 *)arg0 + 0x44C));
    *(f32 *)((s8 *)arg0 + 0x39C) = (f32) (((7e+01f) * ((f32 (*)(s32))cos_table_lookup)(arg1)) + *(f32 *)((s8 *)arg0 + 0x39C));
}
extern int fold_flush_0;
#pragma pop

void update_height_offset__13TObjEneBm3FlyFPv(void *arg0) {
    enemy_copy_target_destination();
    *(f32 *)((s8 *)arg0 + 0x398) = (f32) (*(f32 *)((s8 *)arg0 + 0x3C) + *(f32 *)((s8 *)arg0 + 0x450));
}

void update__13TObjEneBm3FlyFPv(void *arg0) {
    enemy_copy_target_destination();
    *(f32 *)((s8 *)arg0 + 0x398) = (f32) (*(f32 *)((s8 *)arg0 + 0x3C) + *(f32 *)((s8 *)arg0 + 0x44C));
}

void TObjEneBm3Fly::vfunc_61() {  }

void TObjEneBm3Fly::vfunc_62() { if (*(short *)&this->animation_id != 6) { ((int (*)(void*, void*))transition_enemy_state)(this, (void*)6); } }

void TObjEneBm3Fly::vfunc_63() {
    u8 *arg0 = (u8 *)this;
    s16 temp_r0;
    temp_r0 = this->animation_id;
    if ((temp_r0 != 8) && (temp_r0 != 9) && (temp_r0 != 7)) {
        if (was_hit_by_ranged__13TObjEneBm3FlyFv() != 0) {
            ((int (*)(void*, void*))transition_enemy_state)((void*)((void *) (arg0)), (void*)((int) (7)));
            return;
        }
        ((int (*)(void*, void*))transition_enemy_state)((void*)((void *) (arg0)), (void*)((int) (8)));
    }
}

void TObjEneBm3Fly::vfunc_28() {  }

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
  if ((temp_r3 == 0U) || (((TObject *)temp_r3)->all_parents_unqueued_for_destruction() == 0))
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
  ((TObjEneBm3Fly *)arg0)->store_position();
  ((TBoss8Dragon *)arg0)->set_player_state_default();
  (((VObj_18_6eb1ad *)(arg0))->m98());
}

extern "C" {
void *__dt__13TObjEneBm3FlyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__13TObjEneBm3Fly;
        if (*(void **)((s8 *)arg0 + 0x458) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x458)); *(s32 *)((s8 *)arg0 + 0x458) = 0; }
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
    virtual s32 m85(s16, s32);
};

void set_field_b8__10TObjMotionFs(void *, s16);
void set_field_dc__10TObjPlayerFl(void *, s32);
void set_field_d8__10TObjPlayerFl(void *, void *);
void enemy_init_validate_period(void *, s32);
void enemy_init_acquire_period(void *, s32);
void reset_hp__9TObjEneDDFv(void *, s32, s32, s32);
void initialize_enemy_state__9TObjEneDDFv(void *, s32);
void check_state_flag_1__9TObjEneDDFv(void *);
void init_model__9TObjEneDDFv(void *, void *, s32);
void set_active__9TObjEneDDFv(void *);
void init_position_vectors__9TObjEneDDFPv(void *);
void set_animation__10TObjPlayerFPvs(void *, s16);

struct Sub_800B1F80 { u8 x[0x1C]; };
struct Data_800B1F80 { Sub_800B1F80 a; u8 b[0x2C]; u8 c[4]; };
extern s32 bm3_fly_boss_stat_handle;
extern s32 TObjEneBm3Fly__attack_params;
extern s32 lbl_805D50E8;
extern u8 *bm3_fly_nest_resources;

s32 TObjEneBm3Fly::init_child_params() {
    init_position_vectors__9TObjEneDDFPv(this);
    *(s32 *)((s8 *)this + 0x34) = *(s32 *)((s8 *)(*(u8 **)((s8 *)bm3_fly_nest_resources + 0x42C)) + 8);
    *(s32 *)((s8 *)this + 0x24) = *(s32 *)((s8 *)(*(u8 **)((s8 *)bm3_fly_nest_resources + 0x42C)) + 0xC);
    init_model__9TObjEneDDFv(this, &bm3_fly_collider_params, 1);
    set_field_d8__10TObjPlayerFl(this, bm3_fly_action_table);
    set_field_dc__10TObjPlayerFl(this, *(s32 *)((s8 *)bm3_fly_nest_resources + 0x430));
    *(s16 *)((s8 *)this + 0xB8) = 0;
    set_animation__10TObjPlayerFPvs(this, *(s16 *)((s8 *)this + 0xB8));
    set_field_b8__10TObjMotionFs(this, *(s16 *)((s8 *)this + 0xB8));
    reset_hp__9TObjEneDDFv(this, bm3_fly_boss_stat_handle, TObjEneBm3Fly__attack_params, lbl_805D50E8);
    check_state_flag_1__9TObjEneDDFv(this);
    *(void **)((s8 *)this + 0x350) = bm3_fly_decision_row;
    initialize_enemy_state__9TObjEneDDFv(this, 3);
    *(f32 *)((s8 *)this + 0x37C) = (5.0f);
    enemy_init_acquire_period(this, 0xA);
    enemy_init_validate_period(this, 0xA);
    set_active__9TObjEneDDFv(this);
    *(s32 *)((s8 *)this + 0x30) |= 0x01000000;
    *(s32 *)((s8 *)this + 0x428) = 2;
    *(f32 *)((s8 *)this + 0x42C) = *(f32 *)((s8 *)this + 0x3C);
    *(f32 *)((s8 *)this + 0x430) = (0.0f);
    *(f32 *)((s8 *)this + 0x434) = (0.0f);
    *(f32 *)((s8 *)this + 0x438) = (0.0f);
    *(f32 *)((s8 *)this + 0x43C) = (0.0f);
    *(s32 *)((s8 *)this + 0x440) = 0;
    *(f32 *)((s8 *)this + 0x444) = (0.0f);
    *(s32 *)((s8 *)this + 0x448) = 0;
    *(f32 *)((s8 *)this + 0x44C) = (2.0f) * calc_elapsed_scaled__9TObjEneDDFv(this) + (45.0f);
    *(f32 *)((s8 *)this + 0x450) = (2.0f) * calc_elapsed_scaled__9TObjEneDDFv(this) + (15.0f);
    *(s32 *)((s8 *)this + 0x454) = 0;
    *(s32 *)&this->particle_effect = 0;
    this->alternate_phase = 0;
    *(s32 *)((s8 *)this + 0x3C0) = 0;
    *(s32 *)((s8 *)this + 0x3C4) = 0;
    *(s32 *)((s8 *)this + 0x3C8) = 0;
    *(s32 *)((s8 *)this + 0x3CC) = 0;
    *(s32 *)((s8 *)this + 0x3D0) = 0;
    *(s32 *)((s8 *)this + 0x3D4) = 0;
    *(s32 *)((s8 *)this + 0x3D8) = 0;
    *(s32 *)((s8 *)this + 0x3DC) = 0;
    *(f32 *)((s8 *)this + 0x3E0) = (0.0f);
    *(f32 *)((s8 *)this + 0x3E4) = (0.0f);
    *(f32 *)((s8 *)this + 0x3E8) = (0.0f);
    *(f32 *)((s8 *)this + 0x3EC) = (0.0f);
    *(f32 *)((s8 *)this + 0x3F0) = (0.0f);
    *(f32 *)((s8 *)this + 0x3F4) = (0.0f);
    *(f32 *)((s8 *)this + 0x3F8) = (0.0f);
    *(f32 *)((s8 *)this + 0x3FC) = (0.0f);
    *(f32 *)((s8 *)this + 0x400) = (0.0f);
    *(f32 *)((s8 *)this + 0x404) = (0.0f);
    *(f32 *)((s8 *)this + 0x408) = (0.0f);
    this->animation_id = 0;
    return ((VObj_18_800B1F80 *)this)->m85(this->animation_id, 4);
}
#pragma pop

u8 *TObjEneBm3Fly__ct(u8 *arg0, s32 arg1, u8 *arg2, s32 arg3, s32 arg4, u8 *arg5, u8 *arg6) {
    ((TObjEneDD_ST *)arg0)->init_object();
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_800B2168___vt__13TObjEneBm3Fly *)__vt__13TObjEneBm3Fly).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjEneBm3Fly__name;
    *(u16 *)((s8 *)arg0 + 0x418) = obj_getField1c(arg2);
    init_common_from__9TObjEneDDFPvPv((void *) (arg0), (void *) (arg2));
    *(s16 *)((s8 *)arg0 + 0x1C) = arg3;
    *(s16 *)((s8 *)arg0 + 0x2C) = arg4;
    VecCopy__FP3VecPC3Vec((void *)((void *) (arg0 + 0x38)), (void *)((void *) (arg5)));
    VecCopy__FP3VecPC3Vec((void *)((void *) (arg0 + 0x41C)), (void *)((void *) (arg2 + 0x38)));
    VecCopy__FP3VecPC3Vec((void *)((void *) (arg0 + 0x40C)), (void *)((void *) (arg6)));
    ((TObjEneBm3Fly *)arg0)->init_child_params();
    *(s32 *)((s8 *)arg0 + 0x80) = 0;
    return arg0;
}

void TObjEneBm3Fly::release_shared_data() {
    void *obj = TObjEneBm3Fly__breakup_model;
    if (obj != NULL) {
        if (obj != NULL) {
            ((VObj_800B2214_800B1978 *)obj)->m2(1);
        }
        TObjEneBm3Fly__breakup_model = NULL;
    }
}

void *TObjEneBm3Fly::create(void *arg1, void *arg2, void *arg3, void *arg4) {
    void *o;
    o = __nw__7TObjectFUl(0x4A8);
    if (o != NULL) {
        o = TObjEneBm3Fly__ct((u8 *)(o), (s32)(tl_04), (u8 *)(this), (s32)(arg1), (s32)(arg2), (u8 *)(arg3), (u8 *)(arg4));
    }
    return o;
}

void TObjEneBm3Fly::load_resources() {
    typedef char sp8_offset[(offsetof(Stack_800B22C8, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_800B22C8, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_800B22C8, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_800B22C8, sp14) == 0xC) ? 1 : -1];
    Stack_800B22C8 stack;
    s32 temp_r3;
    s32 var_r0;
    u8 *temp_r5;
    bm3_fly_nest_resources = ((u8 * (*)(void))TObjEneBm3FlyNest__sub_800B4158)();
    temp_r3 = ((TAdSinglePlyChrSelectGC *)0x10)->alloc();
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = init_from_model__11TBreakUpMdlFPvi((int) (temp_r3), (void *) (*(s32 *)((s8 *)(*(u8 **)((s8 *)bm3_fly_nest_resources + 0x42C)) + 8)));
    }
    (*(s32 *)&TObjEneBm3Fly__breakup_model) = var_r0;
    bm3_fly_boss_stat_handle = register_boss__6TLobbyFl((int) (0));
    TObjEneBm3Fly__attack_params = dispatch_shared_handler_b__6TLobbyFl((int) (0));
    lbl_805D50E8 = register_object__6TLobbyFl((int) (0));
    (*(s32 *)&lbl_805D50EC) = dispatch_shared_handler_a__6TLobbyFl((int) (0));
    stack.sp8 = *(s32 *)((s8 *)(&bm3_fly_resource_binding_desc.value) + 0);
    stack.spC = *(s32 *)((s8 *)(&bm3_fly_resource_binding_desc.value) + 4);
    stack.sp10 = *(s32 *)((s8 *)(&bm3_fly_resource_binding_desc.value) + 8);
    stack.sp14 = *(s32 *)((s8 *)(&bm3_fly_resource_binding_desc.value) + 0xC);
    stack.sp8 = *(s32 *)((s8 *)bm3_fly_nest_resources + 0x430);
    temp_r5 = (u8 *)(*(u8 **)((s8 *)bm3_fly_nest_resources + 0x42C));
    TLobby::spawn_npc_enemy((s16)((int) (7)), (s32)((int) (*(s32 *)((s8 *)temp_r5 + 8))), (s32)((int) (*(s32 *)((s8 *)temp_r5 + 0xC))), (s32)((void *) (&stack.sp8)), (f32)((f32) (*(f32 *)((s8 *)(&bm3_fly_collider_params.value) + 0xC))), (f32)((f32) ((15.0f))));
}

}

#undef atan2_float
#undef queue_destruction__7TObjectFv
#undef update_scale__15TObjBoss2TunnelFv
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
#undef remove_child__17TObjEneBm3FlyNestFPUc
#undef has_free_attack_slot__17TObjEneBm3FlyNestFUs
#undef clear_global_flag_400__9TObjEneDDFv
#undef update_player_state__9TObjEneDDFv
#undef set_field_378__9TObjEneDDFPvi
#undef transition_enemy_state
#undef toggle_particle_effect__10TObjPlayerFv
#undef copy_target_state__14TObjEnePanarmsFPv
#undef advance_animation_playback
#undef find_entity_by_id
#undef end_effect_render__13TParticleCtrlFv
#undef play_persistent_sound
#undef play_sound_effect
#undef rotate_matrix_y
#undef translate_matrix
#undef set_global_param__8TObjFishFl
#undef draw_chunk_object
#undef vfunc_89__9TObjEneDDFv
#undef TObjEneBm3Fly__vt102
#undef TObjEneBm3Fly__vt104
#undef TObjEneBm3Fly__vt86
#undef TObjEneBm3Fly__vt87
#undef render__13TObjEneBm3FlyFv
#undef VBase_18
#undef VObj_18

#undef TObjEneBm3Fly__breakup_model
#undef lbl_805D50EC
