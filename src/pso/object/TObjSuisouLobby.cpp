#include "types.h"
#include "pso/object/TObjSuisouLobby.h"

struct RecoveredGlobal_80369DF0_lbl_804F33E0 { s32 value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_80369DF0_lbl_804F33E0_size[sizeof(RecoveredGlobal_80369DF0_lbl_804F33E0) == 0x10 ? 1 : -1];

struct Suisou_80369BF4 {
    u8 pad[0xC8];
    s32 state;
    f32 cc;
};

struct VBase_80369ED4 { char pad[0x18]; };

struct VObj_80369ED4 : VBase_80369ED4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5(void *);
};

struct Vec_80369ED4 { s32 x, y, z; };

struct Self_80369ED4 {
    u8 pad0[0x24]; s32 x24; u8 pad28[0xC]; s32 x34; u8 x38[0x28]; s32 x60;
    u8 pad64[0x64]; s32 state; f32 cc; s32 padd0; void *p1; void *p2;
};

extern "C" {
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFv(void *);
s32 get_lobby_type__6TLobbyFv(void);
extern u32 TObjSuisouLobby__instance;
extern s32 TObjSuisouLobby__lobby_type;
s32 check_demo_mode__10TObjPlayerFv();
s32 is_connected__6TLobbyFv();
s32 is_lobby_obj_active__6TLobbyFv();
void TObjSuisouLobby__sub_80369B5C(void);
void run_task__15TObjSuisouLobbyFv(Suisou_80369BF4 *self);
u32 create_particle_emitter(void *, int);
s32 enable__13TParticleCtrlFPv(void *);
s32 init_map_object_base(void *, void *);
s32 is_lobby_event_active(void);
void TObjSuisouLobby__sub_80369D68(void);
s32 matrix_mult_vec(int, void *, void *);
s32 set_matrix_identity(int);
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);
extern u32 TObjSuisouLobby__instance;
extern s32 TObjSuisouLobby__lobby_type;
void *TObjSuisouLobby__ct(void *arg0, void *arg1, void *arg2);
}

extern "C" {

void TObjSuisouLobby__sub_80369B5C(void);
void TObjSuisouLobby__sub_80369D68(void);
void *__dt__15TObjSuisouLobbyFv(void *arg0, s16 arg1);
void render__15TObjSuisouLobbyFv(u8 *arg0);
void TLobby__sub_8001FE7C(void*, int);
s32 post_translate_matrix(void *);
s32 scale_matrix(int, f32, f32, f32);
s32 draw_ginja_object(int);
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
s32 begin_effect_render__13TParticleCtrlFv();
s32 clear_active_flag__13TParticleCtrlFv(void *);
void destroy_key_base__5TOKeyFs(void *, int);
s32 enable__13TParticleCtrlFPv(void *);
s32 end_effect_render__13TParticleCtrlFv();
void queue_destruction__7TObjectFv(void *);
s32 set_global_param__8TObjFishFl(int);

void *__dt__15TObjSuisouLobbyFv(void *arg0, s16 arg1);
void render__15TObjSuisouLobbyFv(u8 *arg0);
void render_shadows__7TObjectFv(); void TLobby__sub_801A1FD8(); void apply_object_set_data(); void release_member_90__10TObjPlayerFv();
void TParticleCtrl__sub_801A2124(); void update_object_view_visibility(); void classify_actor_view_detail();
void TObjRoomId__sub_801A1E2C(); void TObjPlayer__sub_80019568();
#pragma readonly_strings on
__declspec(section ".data") void *bm_obj_lobby_suisou_model_names[2] = { (void *)"lobby_suisou_s_waku.gj", 0 };
#pragma explicit_zero_data on
void *bm_obj_lobby_suisou_motion_names = (void *)0;
#pragma explicit_zero_data reset
void *lobby_suisou_resource_descriptor[4] = { (void *)"bm_obj_lobby_suisou.bml", (void *)bm_obj_lobby_suisou_model_names, (void *)&bm_obj_lobby_suisou_motion_names, (void *)0x10000 };
char *lbl_805D44C4 = "TObjSuisouLobby";
void *__vt__15TObjSuisouLobby[14] = {
    0, 0, (void *)__dt__15TObjSuisouLobbyFv, (void *)run_task__15TObjSuisouLobbyFv, (void *)render__15TObjSuisouLobbyFv,
    (void *)render_shadows__7TObjectFv, (void *)TLobby__sub_801A1FD8, (void *)apply_object_set_data,
    (void *)release_member_90__10TObjPlayerFv, (void *)TParticleCtrl__sub_801A2124, (void *)update_object_view_visibility,
    (void *)classify_actor_view_detail, (void *)TObjRoomId__sub_801A1E2C, (void *)TObjPlayer__sub_80019568,
};
const f32 lbl_8047A3D0[1][3] = { { 0.0f, 0.0f, 60.0f } };
const f32 lbl_8047A3DC[1][3] = { { 0.0f, 0.0f, -60.0f } };
#define lobby_suisou_resource_descriptor (*(RecoveredGlobal_80369DF0_lbl_804F33E0 *)lobby_suisou_resource_descriptor)
#define lbl_8047A3D0 ((const Vec_80369ED4 *)lbl_8047A3D0)
#define lbl_8047A3DC ((const Vec_80369ED4 *)lbl_8047A3DC)
void TObjSuisouLobby__sub_80369B5C(void) {  }

void render__15TObjSuisouLobbyFv(u8 *arg0) {
    f32 temp_f1;

    if (((s32) *(s32 *)((s8 *)arg0 + 0xC8) != 0) && ((u32) *(u32 *)((s8 *)arg0 + 0x24) != 0U)) {
        begin_effect_render__13TParticleCtrlFv();
        set_global_param__8TObjFishFl((int) (*(u32 *)((s8 *)arg0 + 0x24)));
        push_matrix();
        post_translate_matrix((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (*(s32 *)((s8 *)arg0 + 0x60)));
        if ((s32) *(s32 *)((s8 *)arg0 + 0xC8) != 3) {
            temp_f1 = *(f32 *)((s8 *)arg0 + 0xCC);
            scale_matrix((int) (0), (f32) (temp_f1), 1.0f, (f32) (temp_f1));
        }
        draw_ginja_object((int) (*(s32 *)((s8 *)arg0 + 0x34)));
        pop_matrix();
        end_effect_render__13TParticleCtrlFv();
    }
}

void run_task__15TObjSuisouLobbyFv(Suisou_80369BF4 *self) {
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        ((void (*)(void *))TObjSuisouLobby__sub_80369B5C)(self);
    }
    switch (self->state) {
    case 0:
        if (is_connected__6TLobbyFv() != 0) {
            self->state = 2;
        }
        break;
    case 2:
        self->cc += 0.1f;
        if (self->cc >= 1.0f) {
            self->cc = 1.0f;
            self->state = 3;
        }
        break;
    case 1:
        self->cc -= 0.1f;
        if (self->cc <= 0.0f) {
            self->cc = 0.0f;
            self->state = 0;
        }
        break;
    case 3:
    default:
        if (is_lobby_obj_active__6TLobbyFv() != 0) {
            self->state = 1;
        }
        break;
    }
    ((TObjSuisouLobby *)self)->update_particle();
}

void TObjSuisouLobby::update_particle() {
    if ((s32) *(s32 *)((s8 *)this + 0xC8) == 3) {
        if ((u32) *(u32 *)((s8 *)this + 0xD4) != 0U) {
            clear_active_flag__13TParticleCtrlFv(*(void **)((s8 *)this + 0xD4));
        }
        if ((u32) *(u32 *)((s8 *)this + 0xD8) != 0U) {
            clear_active_flag__13TParticleCtrlFv(*(void **)((s8 *)this + 0xD8));
        }
    } else {
        if ((u32) *(u32 *)((s8 *)this + 0xD4) != 0U) {
            enable__13TParticleCtrlFPv(*(void **)((s8 *)this + 0xD4));
        }
        if ((u32) *(u32 *)((s8 *)this + 0xD8) != 0U) {
            enable__13TParticleCtrlFPv(*(void **)((s8 *)this + 0xD8));
        }
    }
}
void TObjSuisouLobby__sub_80369D68(void) {  }

extern void *tl_05;

void *TObjSuisouLobby::create() {
    void *o = __nw__7TObjectFUl(0xDC);
    if (o != NULL) {
        o = TObjSuisouLobby__ct((void *)(o), (void *)(tl_05), (void *)(this));
    }
    return o;
}

extern u32 TObjSuisouLobby__instance;

void TObjSuisouLobby::destroy_instance() {
    if ((u32) TObjSuisouLobby__instance != 0U) {
        TLobby__sub_8001FE7C((void*)TObjSuisouLobby__instance, 1);
        TObjSuisouLobby__instance = 0U;
    }
}

void TObjSuisouLobby::load_resources() {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 5, &lobby_suisou_resource_descriptor.value, 0, 0, 0));
    }
    (*(s32 *)&TObjSuisouLobby__instance) = var_r0;
    TObjSuisouLobby__lobby_type = get_lobby_type__6TLobbyFv();
}

void *__dt__15TObjSuisouLobbyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = (s32 *)__vt__15TObjSuisouLobby;
        if (*(void **)((s8 *)arg0 + 0xD4) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0xD4)); *(s32 *)((s8 *)arg0 + 0xD4) = 0; }
        if (*(void **)((s8 *)arg0 + 0xD8) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0xD8)); *(s32 *)((s8 *)arg0 + 0xD8) = 0; }
        destroy_key_base__5TOKeyFs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
#pragma push
#pragma opt_common_subs off
#define self ((Self_80369ED4 *)arg0)
void *TObjSuisouLobby__ct(void *arg0, void *arg1, void *arg2) {
    init_map_object_base(arg0, arg1);
    *(void ***)((u8 *)arg0 + 0x18) = ((void * *)__vt__15TObjSuisouLobby);
    *(s32 *)arg0 = (s32)lbl_805D44C4;
    ((VObj_80369ED4 *)arg0)->m5(arg2);
    {
        Vec_80369ED4 v = lbl_8047A3D0[0];
        push_matrix();
        set_matrix_identity(0);
        post_translate_matrix(self->x38);
        rotate_matrix_y(0, self->x60);
        matrix_mult_vec(0, &v, &v);
        self->p1 = (void *)create_particle_emitter(&v, 0x222);
        pop_matrix();
        if (self->p1 != NULL) {
            enable__13TParticleCtrlFPv(self->p1);
        }
    }
    {
        Vec_80369ED4 v = lbl_8047A3DC[0];
        push_matrix();
        set_matrix_identity(0);
        post_translate_matrix(self->x38);
        rotate_matrix_y(0, self->x60);
        matrix_mult_vec(0, &v, &v);
        self->p2 = (void *)create_particle_emitter(&v, 0x222);
        pop_matrix();
        if (self->p2 != NULL) {
            enable__13TParticleCtrlFPv(self->p2);
        }
    }
    if (is_lobby_event_active() != 0) {
        self->state = 0;
    } else {
        self->state = 3;
    }
    ((void (*)(void *))TObjSuisouLobby__sub_80369D68)(arg0);
    self->cc = 1.0f;
    self->x34 = *(s32 *)(*(u8 **)((u8 *)TObjSuisouLobby__instance + 0x42C) + 8);
    self->x24 = TObjSuisouLobby__lobby_type;
    return arg0;
}
#pragma pop

}
