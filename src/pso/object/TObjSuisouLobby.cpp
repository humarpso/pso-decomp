#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80369DF0_lbl_804F33E0 { M2C_UNK value; u8 remaining[0xC]; };
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
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
s32 get_lobby_type__6TLobbyFv(void);
extern u32 TObjSuisouLobby__instance;
extern s32 TObjSuisouLobby__lobby_type;
void load_resources__15TObjSuisouLobbyFv(void);
s32 check_demo_mode__10TObjPlayerFv();
s32 is_connected__6TLobbyFv();
s32 is_lobby_obj_active__6TLobbyFv();
void TObjSuisouLobby__sub_80369B5C(void);
void update_particle__15TObjSuisouLobbyFPv(void *arg0);
void run_task__15TObjSuisouLobbyFv(Suisou_80369BF4 *self);
u32 create_particle_emitter(void *, int);
s32 enable__13TParticleCtrlFPv(void *);
s32 init_map_object_base(void *, void *);
s32 is_lobby_event_active(void);
void TObjSuisouLobby__sub_80369D68(void);
s32 matrix_mult_vec(int, void *, void *);
s32 set_matrix_identity__10TObjPlayerFPv(int);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
extern u32 TObjSuisouLobby__instance;
extern s32 TObjSuisouLobby__lobby_type;
void *TObjSuisouLobby__ct(void *arg0, void *arg1, void *arg2);
}

extern "C" {

void TObjSuisouLobby__sub_80369B5C(void);
void TObjSuisouLobby__sub_80369D68(void);
void *__dt__15TObjSuisouLobbyFv(void *arg0, s16 arg1);
void *create__15TObjSuisouLobbyFPv(void *arg0);
void destroy_instance__15TObjSuisouLobbyFv(void);
void render__15TObjSuisouLobbyFv(u8 *arg0);
void update_particle__15TObjSuisouLobbyFPv(void *arg0);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK post_translate_matrix(void *);
M2C_UNK scale_matrix(int, f32, f32, f32);
M2C_UNK draw_ginja_object(int);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
s32 clear_active_flag__13TParticleCtrlFPv(void *);
void destroy_key_base__5TOKeyFPvs(void *, int);
s32 enable__13TParticleCtrlFPv(void *);
M2C_UNK end_effect_render__13TParticleCtrlFv();
void queue_destruction__7TObjectFv(void *);
M2C_UNK set_global_param__8TObjFishFi(int);

void *__dt__15TObjSuisouLobbyFv(void *arg0, s16 arg1);
void render__15TObjSuisouLobbyFv(u8 *arg0);
void render_shadows__7TObjectFv(); void TLobby__sub_801A1FD8(); void apply_object_set_data(); void release_member_90__10TObjPlayerFPv();
void TParticleCtrl__sub_801A2124(); void update_object_view_visibility(); void classify_actor_view_detail();
void TObjRoomId__sub_801A1E2C(); void TObjPlayer__sub_80019568();
#pragma readonly_strings on
__declspec(section ".data") void *lbl_804F33D8[2] = { (void *)"lobby_suisou_s_waku.gj", 0 };
#pragma explicit_zero_data on
void *lbl_805D44C0 = (void *)0;
#pragma explicit_zero_data reset
void *lobby_suisou_resource_descriptor[4] = { (void *)"bm_obj_lobby_suisou.bml", (void *)lbl_804F33D8, (void *)&lbl_805D44C0, (void *)0x10000 };
char *lbl_805D44C4 = "TObjSuisouLobby";
void *__vt__15TObjSuisouLobby[14] = {
    0, 0, (void *)__dt__15TObjSuisouLobbyFv, (void *)run_task__15TObjSuisouLobbyFv, (void *)render__15TObjSuisouLobbyFv,
    (void *)render_shadows__7TObjectFv, (void *)TLobby__sub_801A1FD8, (void *)apply_object_set_data,
    (void *)release_member_90__10TObjPlayerFPv, (void *)TParticleCtrl__sub_801A2124, (void *)update_object_view_visibility,
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

    if (((s32) M2C_FIELD(arg0, s32 *, 0xC8) != 0) && ((u32) M2C_FIELD(arg0, u32 *, 0x24) != 0U)) {
        begin_effect_render__13TParticleCtrlFv();
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, u32 *, 0x24)));
        push_matrix();
        post_translate_matrix((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        if ((s32) M2C_FIELD(arg0, s32 *, 0xC8) != 3) {
            temp_f1 = M2C_FIELD(arg0, f32 *, 0xCC);
            scale_matrix((int) (0), (f32) (temp_f1), 1.0f, (f32) (temp_f1));
        }
        draw_ginja_object((int) (M2C_FIELD(arg0, s32 *, 0x34)));
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
    update_particle__15TObjSuisouLobbyFPv(self);
}

void update_particle__15TObjSuisouLobbyFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC8) == 3) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0xD4) != 0U) {
            clear_active_flag__13TParticleCtrlFPv(M2C_FIELD(arg0, void **, 0xD4));
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0xD8) != 0U) {
            clear_active_flag__13TParticleCtrlFPv(M2C_FIELD(arg0, void **, 0xD8));
        }
    } else {
        if ((u32) M2C_FIELD(arg0, u32 *, 0xD4) != 0U) {
            enable__13TParticleCtrlFPv(M2C_FIELD(arg0, void **, 0xD4));
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0xD8) != 0U) {
            enable__13TParticleCtrlFPv(M2C_FIELD(arg0, void **, 0xD8));
        }
    }
}
void TObjSuisouLobby__sub_80369D68(void) {  }

extern void *tl_05;

void *create__15TObjSuisouLobbyFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xDC);
    if (o != NULL) {
        o = TObjSuisouLobby__ct((void *)(o), (void *)(tl_05), (void *)(arg0));
    }
    return o;
}

extern u32 TObjSuisouLobby__instance;

void destroy_instance__15TObjSuisouLobbyFv(void) {
    if ((u32) TObjSuisouLobby__instance != 0U) {
        TLobby__sub_8001FE7C((void*)TObjSuisouLobby__instance, 1);
        TObjSuisouLobby__instance = 0U;
    }
}

void load_resources__15TObjSuisouLobbyFv(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 5, &lobby_suisou_resource_descriptor.value, 0, 0, 0));
    }
    (*(s32 *)&TObjSuisouLobby__instance) = var_r0;
    TObjSuisouLobby__lobby_type = get_lobby_type__6TLobbyFv();
}

void *__dt__15TObjSuisouLobbyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = (M2C_UNK *)__vt__15TObjSuisouLobby;
        if (M2C_FIELD(arg0, void **, 0xD4) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xD4)); M2C_FIELD(arg0, M2C_UNK *, 0xD4) = 0; }
        if (M2C_FIELD(arg0, void **, 0xD8) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xD8)); M2C_FIELD(arg0, M2C_UNK *, 0xD8) = 0; }
        destroy_key_base__5TOKeyFPvs(arg0, 0);
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
        set_matrix_identity__10TObjPlayerFPv(0);
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
        set_matrix_identity__10TObjPlayerFPv(0);
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
