#include "types.h"
#include "pso/object/TObjLobbyMain.h"
#include "pso/TParticleCtrl.h"
#include "pso/boss/TBoss4Type2.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TNowLoading.h"
#include "pso/misc/TOKey.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"
#pragma readonly_strings on

struct Vec3_80352240 {
    f32 x;
    f32 y;
    f32 z;
};

extern "C" {
extern const s32 lbl_80479078[18] = {5, 5, 5, 5, 5, 5, 5, 0, 1, 2, 5, 5, 5, 5, 5, 3, 4, 4};
const char *lbl_805D4370 = "TObjLobbyMain";
}

struct Base_8035240C { u8 pad[0x18]; };

struct Obj_8035240C : Base_8035240C {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual s32 v8(f32, f32);
};

struct Obj_8035255C { u8 pad0[0xB0]; f32 f_b0; u8 padB4[0x1C]; s16 idx; };

struct Fish_8035255C { s32 a; u32 cnt; };

extern "C" {
void update_fade__13TObjLobbyMainFv(u8 *arg0);
void update_fade_in__13TObjLobbyMainFv(u8 *arg0);
s32 get_theme_lobby_type();
void resolve_theme_index__13TObjLobbyMainFv(u8 *arg0);
void set_mode_index_from_state__13TObjLobbyMainFv(u8 *arg0);
void matrix_mult_vec(int, Vec3_80352240 *, Vec3_80352240 *);
void set_matrix_identity(int);
void rotate_matrix_y(int, s32);
void push_matrix();
void pop_matrix();
void post_translate_matrix(void *);
void update_emitter_positions__13TObjLobbyMainFv(u8 *arg0);
s32 get_bml_motion(void *, s32);
s32 get_bml_model(void *, s32);
s32 scale_matrix(int, f32, f32, f32);
void rotate_matrix_y(int, s32);
void push_matrix();
void pop_matrix();
void post_translate_matrix(void *);
s32 draw_ginja_object();
s32 draw_ginja_model_with_motion(s32, s32, f32);
extern void *TObjLobbyMain__bml_resource;
extern void *lobby_main_lobby_type;
s32 get_bml_motion(void *, s32);
extern void *TObjLobbyMain__bml_resource;
void advance_motion_frame__13TObjLobbyMainFv(Obj_8035255C *o);
}

extern "C" {

void TObjLobbyMain__sub_803520D8(void);
void reset_state__13TObjLobbyMainFPv(void *arg0);
void update_computer_machines__13TObjLobbyMainFv(void);
void update_particles__13TObjLobbyMainFv(void *arg0);
s32 PPCSync();
s32 scroll_ginja_mesh_uvs(s32, s32, s32, s32, s32);
s32 enable__13TParticleCtrlFPv(void *);
s32 get_theme_lobby_type();

void TObjLobbyMain__sub_803520D8(void) {  }

void TObjLobbyMain::resolve_theme_index() {
    u8 *arg0 = (u8 *)this;
    u32 temp_r0;
    *(u32 *)((s8 *)arg0 + 0xCC) = ((u32)get_theme_lobby_type());
    temp_r0 = *(u32 *)((s8 *)arg0 + 0xCC);
    switch (temp_r0) {
    case 1:
        *(s16 *)((s8 *)arg0 + 0xD0) = 0xC;
        return;
    case 5:
        *(s16 *)((s8 *)arg0 + 0xD0) = 0xF;
        return;
    case 7:
        *(s16 *)((s8 *)arg0 + 0xD0) = 0xA;
        return;
    case 3:
        *(s16 *)((s8 *)arg0 + 0xD0) = 0x10;
        return;
    case 9:
        *(s16 *)((s8 *)arg0 + 0xD0) = 0x11;
        return;
    case 8:
        *(s16 *)((s8 *)arg0 + 0xD0) = 0xB;
        return;
    case 4:
        *(s16 *)((s8 *)arg0 + 0xD0) = 0xE;
        return;
    case 10:
        *(s16 *)((s8 *)arg0 + 0xD0) = 1;
        return;
    case 11:
        *(s16 *)((s8 *)arg0 + 0xD0) = 0xD;
        return;
    default:
        *(s16 *)((s8 *)arg0 + 0xD0) = (s16) *(s16 *)((s8 *)arg0 + 0xD2);
        return;
    }
}

void TObjLobbyMain::set_mode_index_from_state() {
    u8 *arg0 = (u8 *)this;
    u32 temp_r0;
    temp_r0 = *(u32 *)((s8 *)arg0 + 0x84);
    switch (temp_r0) {
    case 1:
        *(s16 *)((s8 *)arg0 + 0xD2) = 1;
        return;
    case 2:
        *(s16 *)((s8 *)arg0 + 0xD2) = 2;
        return;
    case 3:
        *(s16 *)((s8 *)arg0 + 0xD2) = 3;
        return;
    case 4:
        *(s16 *)((s8 *)arg0 + 0xD2) = 4;
        return;
    case 5:
        *(s16 *)((s8 *)arg0 + 0xD2) = 5;
        return;
    case 6:
        *(s16 *)((s8 *)arg0 + 0xD2) = 6;
        return;
    case 7:
        *(s16 *)((s8 *)arg0 + 0xD2) = 7;
        return;
    case 8:
        *(s16 *)((s8 *)arg0 + 0xD2) = 8;
        return;
    case 9:
        *(s16 *)((s8 *)arg0 + 0xD2) = 9;
        return;
    default:
        *(s16 *)((s8 *)arg0 + 0xD2) = 0;
        return;
    }
}

void TObjLobbyMain::update_emitter_positions() {
    u8 *arg0 = (u8 *)this;
    switch (*(s16 *)(arg0 + 0xD0)) {
    case 3:
    if (*(void **)(arg0 + 0xD8) != NULL) {
        Vec3_80352240 v = {0.0f, 0.0f, 18.0f};
        ((TBoss4Type2 *)(*(void **)(arg0 + 0xD8)))->set_param_ptr(0x222);
        push_matrix();
        set_matrix_identity(0);
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, *(s32 *)(arg0 + 0x60));
        matrix_mult_vec(0, &v, &v);
        ((TNowLoading *)(*(void **)(arg0 + 0xD8)))->copy_pos(&v);
        pop_matrix();
    }
    if (*(void **)(arg0 + 0xDC) != NULL) {
        Vec3_80352240 v = {0.0f, 0.0f, -18.0f};
        ((TBoss4Type2 *)(*(void **)(arg0 + 0xDC)))->set_param_ptr(0x222);
        push_matrix();
        set_matrix_identity(0);
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, *(s32 *)(arg0 + 0x60));
        matrix_mult_vec(0, &v, &v);
        ((TNowLoading *)(*(void **)(arg0 + 0xDC)))->copy_pos(&v);
        pop_matrix();
    }
        break;
    }
}

void TObjLobbyMain::update_particles() {
    if ((s32) *(s32 *)((s8 *)this + 0xC8) == 2) {
        switch ((s16) *(s16 *)((s8 *)this + 0xD0)) {
        case 3:
            if ((u32) *(u32 *)((s8 *)this + 0xD8) != 0U) {
                ((TParticleCtrl *)(*(void **)((s8 *)this + 0xD8)))->clear_active_flag();
            }
            if ((u32) *(u32 *)((s8 *)this + 0xDC) != 0U) {
                ((TParticleCtrl *)(*(void **)((s8 *)this + 0xDC)))->clear_active_flag();
            }
            break;
        default:
            if ((u32) *(u32 *)((s8 *)this + 0xD8) != 0U) {
                enable__13TParticleCtrlFPv(*(void **)((s8 *)this + 0xD8));
            }
            if ((u32) *(u32 *)((s8 *)this + 0xDC) != 0U) {
                enable__13TParticleCtrlFPv(*(void **)((s8 *)this + 0xDC));
            }
            break;
        }
    } else {
        if ((u32) *(u32 *)((s8 *)this + 0xD8) != 0U) {
            enable__13TParticleCtrlFPv(*(void **)((s8 *)this + 0xD8));
        }
        if ((u32) *(u32 *)((s8 *)this + 0xDC) != 0U) {
            enable__13TParticleCtrlFPv(*(void **)((s8 *)this + 0xDC));
        }
    }
}

extern s32 actor_frame_tick;
extern s32 lobby_main_computer_ginja_model;
extern s32 lobby_main_computer_ginja_model_b;
extern s32 lobby_computer_last_frame_tick;

void TObjLobbyMain::render() {
    u8 *arg0 = (u8 *)this;
    s16 idx;
    s32 r;
    if (lobby_main_lobby_type != NULL && ((Obj_8035240C *)arg0)->v8(this->m_c0, *(f32 *)&this->m_c4) != 0) {
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, this->rotation_y);
        if (*(s32 *)&this->m_c8 != 2) {
            scale_matrix(0, this->m_d4, (1.0f), this->m_d4);
        }
        TObjFish::set_global_param((s32)lobby_main_lobby_type);
        idx = this->m_d0;
        r = lbl_80479078[idx];
        if (r != 5) {
            r = get_bml_motion(TObjLobbyMain__bml_resource, r);
            draw_ginja_model_with_motion(get_bml_model(TObjLobbyMain__bml_resource, this->m_d0), r, this->m_b0);
        } else {
            get_bml_model(TObjLobbyMain__bml_resource, idx);
            draw_ginja_object();
        }
        pop_matrix();
    }
}

void update_computer_machines__13TObjLobbyMainFv(void) {
    if ((s32) lobby_computer_last_frame_tick != (s32) actor_frame_tick) {
        lobby_computer_last_frame_tick = actor_frame_tick;
        scroll_ginja_mesh_uvs(lobby_main_computer_ginja_model, 1, 1, 0xA, 1);
        scroll_ginja_mesh_uvs(lobby_main_computer_ginja_model_b, 0, -0x14, 0x1A, 1);
        PPCSync();
    }
}

void TObjLobbyMain::advance_motion_frame() {
    Obj_8035255C *o = (Obj_8035255C *)this;
    f32 a, b;
    s32 v = lbl_80479078[o->idx];
    if (v != 5) {
        a = (f32)((Fish_8035255C *)get_bml_motion(TObjLobbyMain__bml_resource, v))->cnt;
        b = a - 1.0f;
        o->f_b0 += 1.0f;
        if (b < o->f_b0) {
            o->f_b0 -= b;
        }
    }
}

void TObjLobbyMain::update_fade_in() {
    u8 *arg0 = (u8 *)this;
    *(f32 *)((s8 *)arg0 + 0xD4) += 0.1f;
    if (*(f32 *)((s8 *)arg0 + 0xD4) >= (1.0f)) {
        *(s32 *)((s8 *)arg0 + 0xC8) = 2;
        *(f32 *)((s8 *)arg0 + 0xD4) = (f32) (1.0f);
    }
}

void TObjLobbyMain::update_fade() {
    u8 *arg0 = (u8 *)this;
    *(f32 *)((s8 *)arg0 + 0xD4) -= 0.1f;
    if (*(f32 *)((s8 *)arg0 + 0xD4) <= (0.0f)) {
        *(s32 *)((s8 *)arg0 + 0xC8) = 1;
        *(f32 *)((s8 *)arg0 + 0xD4) = (f32) (0.0f);
        resolve_theme_index__13TObjLobbyMainFv((u8 *)(arg0));
        update_emitter_positions__13TObjLobbyMainFv((u8 *)((void *) (arg0)));
        *(f32 *)((s8 *)arg0 + 0xB0) = (f32) (0.0f);
    }
}

void reset_state__13TObjLobbyMainFPv(void *arg0) {
    if ((s32) *(s32 *)((s8 *)arg0 + 0xCC) != get_theme_lobby_type()) {
        *(s32 *)((s8 *)arg0 + 0xC8) = 0;
        *(f32 *)((s8 *)arg0 + 0xD4) = (f32) (1.0f);
    }
}

}

#define resolve_theme_index__13TObjLobbyMainFv ((s32 (*)(void *))resolve_theme_index__13TObjLobbyMainFv)
#define set_mode_index_from_state__13TObjLobbyMainFv ((s32 (*)(void *))set_mode_index_from_state__13TObjLobbyMainFv)
#define update_emitter_positions__13TObjLobbyMainFv ((s32 (*)(void *))update_emitter_positions__13TObjLobbyMainFv)
#define TObjLobbyMain__sub_803520D8 ((s32 (*)(void *))TObjLobbyMain__sub_803520D8)
#define advance_motion_frame__13TObjLobbyMainFv ((s32 (*)(void *))advance_motion_frame__13TObjLobbyMainFv)
#define update_fade_in__13TObjLobbyMainFv ((s32 (*)(void *))update_fade_in__13TObjLobbyMainFv)
#define update_fade__13TObjLobbyMainFv ((s32 (*)(void *))update_fade__13TObjLobbyMainFv)
#define reset_state__13TObjLobbyMainFPv ((s32 (*)(void *))reset_state__13TObjLobbyMainFPv)
#define update_computer_machines__13TObjLobbyMainFv ((s32 (*)(void *))update_computer_machines__13TObjLobbyMainFv)
#define update_particles__13TObjLobbyMainFv ((s32 (*)(void *))update_particles__13TObjLobbyMainFv)
#define enable__13TParticleCtrlFPv ((s32 (*)(int))enable__13TParticleCtrlFPv)
#define TObjLobbyMain__bml_resource (*(u32 *)&TObjLobbyMain__bml_resource)
#define lobby_main_lobby_type (*(s32 *)&lobby_main_lobby_type)
struct RecoveredGlobal_803527F0_lbl_804F0F24 { s32 value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_803527F0_lbl_804F0F24_size[sizeof(RecoveredGlobal_803527F0_lbl_804F0F24) == 0x10 ? 1 : -1];

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5(s32);
};

struct RecoveredGlobal_80352940_lbl_804F0F34 {
    s32 value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_80352940___vt__13TObjLobbyMain {
    s32 value;
    u8 remaining[0x34];
};

extern "C" {
s32 get_bml_model(void *, s32);
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
extern RecoveredGlobal_803527F0_lbl_804F0F24 bm_obj_lobby_main_resource_descriptor;
extern s32 lobby_main_computer_ginja_model;
extern s32 lobby_main_computer_ginja_model_b;
extern s32 lobby_computer_last_frame_tick;
u32 create_particle_emitter(void *, int);
s32 refresh_collision_body_centers(void *);
s32 init_collision_body_parts(void *, void *, int);
s32 init_map_object_base(void *);
extern RecoveredGlobal_80352940_lbl_804F0F34 lbl_804F0F34;
extern s32 __vt__13TObjLobbyMain[];
u8 *TObjLobbyMain__ct(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void *__dt__13TObjLobbyMainFv(void *arg0, s16 arg1);
void TLobby__sub_8001FE7C(void*, int);
void free_collision_body_parts(void *);
void unregister_object_by_id(void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void queue_destruction__7TObjectFv(void *);

void TObjLobbyMain::run_task() {
    s32 temp_r0;

    if (TObjPlayer::check_demo_mode() == 1) {
        TObjLobbyMain__sub_803520D8(this);
    }
    temp_r0 = *(s32 *)&this->m_c8;
    switch (temp_r0) {
    case 0:
        update_fade__13TObjLobbyMainFv(this);
        break;
    case 1:
        update_fade_in__13TObjLobbyMainFv(this);
        break;
    default:
    case 2:
        reset_state__13TObjLobbyMainFPv(this);
        break;
    }
    update_computer_machines__13TObjLobbyMainFv(this);
    advance_motion_frame__13TObjLobbyMainFv(this);
    update_particles__13TObjLobbyMainFv(this);
}

extern void *tl_05;

void *TObjLobbyMain::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE0);
    if (o != NULL) {
        o = TObjLobbyMain__ct((u8 *)(o), (s32)(tl_05), (s32)(arg0));
    }
    return o;
}

void TObjLobbyMain::release_static_instance() {
    if ((u32) TObjLobbyMain__bml_resource != 0U) {
        TLobby__sub_8001FE7C((void*)TObjLobbyMain__bml_resource, 1);
        TObjLobbyMain__bml_resource = 0U;
    }
}

extern s32 __vt__13TObjLobbyMain[];

void TObjLobbyMain::load_resources() {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = ((TAdSinglePlyChrSelectGC *)((void *)0x440))->alloc();
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 5, &bm_obj_lobby_main_resource_descriptor.value, 0, 0, 0));
    }
    (*(u8 * *)&TObjLobbyMain__bml_resource) = (unsigned char *) ((void *) var_r0);
    lobby_main_lobby_type = TLobby::get_lobby_type();
    lobby_main_computer_ginja_model = *(s32 *)((s8 *)(*(void **)((s8 *)(*(void **)((s8 *)(*(void **)((s8 *)(*(void **)((s8 *)(*(void **)((s8 *)(*(void **)((s8 *)(*(void **)((s8 *)(get_bml_model((*(u8 * *)&TObjLobbyMain__bml_resource), 6)) + 0x2C)) + 0x30)) + 0x30)) + 0x30)) + 0x30)) + 0x30)) + 0x30)) + 4);
    lobby_main_computer_ginja_model_b = *(s32 *)((s8 *)(*(void **)((s8 *)(*(void **)((s8 *)(*(void **)((s8 *)(*(void **)((s8 *)(get_bml_model((*(u8 * *)&TObjLobbyMain__bml_resource), 2)) + 0x2C)) + 0x30)) + 0x30)) + 0x30)) + 4);
    lobby_computer_last_frame_tick = 0;
}

void *__dt__13TObjLobbyMainFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__13TObjLobbyMain;
        if (*(void **)((s8 *)arg0 + 0xD8) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0xD8)); *(s32 *)((s8 *)arg0 + 0xD8) = 0; }
        if (*(void **)((s8 *)arg0 + 0xDC) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0xDC)); *(s32 *)((s8 *)arg0 + 0xDC) = 0; }
        unregister_object_by_id(arg0);
        free_collision_body_parts(arg0);
        ((TOKey *)arg0)->destroy_key_base(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_80352940_lbl_804F0F34_size[sizeof(RecoveredGlobal_80352940_lbl_804F0F34) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_80352940___vt__13TObjLobbyMain_size[sizeof(RecoveredGlobal_80352940___vt__13TObjLobbyMain) == 0x38 ? 1 : -1];
u8 *TObjLobbyMain__ct(u8 *arg0, s32 arg1, s32 arg2) {
    u32 temp_r3;
    u32 temp_r3_2;
    init_map_object_base((void *) (arg0));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80352940___vt__13TObjLobbyMain *)&__vt__13TObjLobbyMain).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D4370;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    *(u32 *)((s8 *)arg0 + 0xD8) = create_particle_emitter((void *) (arg0 + 0x38), (int) (0x222));
    temp_r3 = *(u32 *)((s8 *)arg0 + 0xD8);
    if (temp_r3 != 0U) {
        ((TBoss4Type2 *)temp_r3)->set_flags((int) (0x40));
        enable__13TParticleCtrlFPv((int) (*(u32 *)((s8 *)arg0 + 0xD8)));
    }
    *(u32 *)((s8 *)arg0 + 0xDC) = create_particle_emitter((void *) (arg0 + 0x38), (int) (0x222));
    temp_r3_2 = *(u32 *)((s8 *)arg0 + 0xDC);
    if (temp_r3_2 != 0U) {
        ((TBoss4Type2 *)temp_r3_2)->set_flags((int) (0x40));
        enable__13TParticleCtrlFPv((int) (*(u32 *)((s8 *)arg0 + 0xDC)));
    }
    set_mode_index_from_state__13TObjLobbyMainFv((void *) (arg0));
    resolve_theme_index__13TObjLobbyMainFv((void *) (arg0));
    update_emitter_positions__13TObjLobbyMainFv((void *) (arg0));
    *(f32 *)((s8 *)arg0 + 0xD4) = (f32) (1.0f);
    *(s32 *)((s8 *)arg0 + 0xC8) = 2;
    *(f32 *)((s8 *)arg0 + 0xC4) = (f32) (1.2e+02f);
    *(f32 *)((s8 *)arg0 + 0xB0) = (f32) (0.0f);
    init_collision_body_parts((void *) (arg0), (void *) (&lbl_804F0F34.value), (int) (1));
    refresh_collision_body_centers((void *) (arg0));
    ((TObjPlayer *)arg0)->reset_photon_effect();
    return arg0;
}

}

#undef resolve_theme_index__13TObjLobbyMainFv
#undef set_mode_index_from_state__13TObjLobbyMainFv
#undef update_emitter_positions__13TObjLobbyMainFv
#undef TObjLobbyMain__sub_803520D8
#undef advance_motion_frame__13TObjLobbyMainFv
#undef update_fade_in__13TObjLobbyMainFv
#undef update_fade__13TObjLobbyMainFv
#undef reset_state__13TObjLobbyMainFPv
#undef update_computer_machines__13TObjLobbyMainFv
#undef update_particles__13TObjLobbyMainFv
#undef enable__13TParticleCtrlFPv
#undef TObjLobbyMain__bml_resource
#undef lobby_main_lobby_type
