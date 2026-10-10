#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VObjBase_80192174 { char pad[0x18]; };
struct VObj_80192174 : VObjBase_80192174 {
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

struct RecoveredGlobal_801922C4___vt__9TKomorebi {
    M2C_UNK value;
    u8 remaining[0x34];
};

struct Node_80192434 { u32 flags; void *model; u8 pad8[0x24]; Node_80192434 *child; Node_80192434 *sibling; };

struct Fish_80192434 { u8 pad0[0x8C]; s32 f8C; u8 pad90[0x2C]; Node_80192434 *fBC; Node_80192434 *fC0; s32 fC4; void *fC8[4]; };

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 TObjFish__sub_8001EDB0(void *, int);
s32 get_bml_model(void *, int);
s32 copy_xyz__10TObjPlayerFPvPv(void *, void *);
s32 construct_world_actor_base(void *);
extern M2C_UNK __vt__9TKomorebi[];
extern s32 komorebi_class_name;
extern u32 TKomorebi__resource_bundle;
u8 *TKomorebi__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
u8 *load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
extern u8 TKomorebi__resource_descriptor[];
extern u32 TKomorebi__resource_bundle;
extern s32 komorebi_last_uv_update_frame;
void load_resources__9TKomorebiFv(void);
s32 get_bml_motion(s32, s32);
s32 get_bml_model(void *, int);
extern s32 lazer_fence_norm_bml_resource;
void init_models__8TObjFishFPv(Fish_80192434 *arg0);
}

extern "C" {

void *TKomorebi__create(void *arg0);
void *__dt__9TKomorebiFv(void *arg0, s16 arg1);
void free_static__9TKomorebiFv(void);
void render__9TKomorebiFv(u8 *arg0);
void run_task__9TKomorebiFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK scroll_ginja_mesh_uvs(s32, M2C_UNK, s32, M2C_UNK, M2C_UNK);
M2C_UNK post_translate_matrix(void *);
M2C_UNK scale_matrix(M2C_UNK, f32, f32, f32);
M2C_UNK draw_ginja_object(void *);
M2C_UNK rotate_matrix_yxz(M2C_UNK, s32, s32, s32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
void destroy_particle__13TParticleCtrlFPvs(void *, int);
M2C_UNK end_effect_render__13TParticleCtrlFv();
f32 xz_distance_squared(void *, s32);
M2C_UNK set_global_param__8TObjFishFi(s32);

extern s32 camera_ctrl_instance;
extern s32 actor_frame_tick;
extern s32 komorebi_last_uv_update_frame;
extern const f32 lbl_805DBE48;
extern const f32 lbl_805DBE4C;
extern const f32 lbl_805DBE50;

void render__9TKomorebiFv(u8 *arg0) {
    f32 temp_f1;

    if ((((VObj_80192174*)arg0)->m8(lbl_805DBE48, lbl_805DBE4C) != 0) && !(xz_distance_squared(arg0 + 0x38, camera_ctrl_instance + 0x178) < lbl_805DBE50)) {
        begin_effect_render__13TParticleCtrlFv();
        if ((s32) actor_frame_tick != (s32) komorebi_last_uv_update_frame) {
            scroll_ginja_mesh_uvs(M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), s32 *, 4), 0, (s32) M2C_FIELD(arg0, f32 *, 0x68), 0, 1);
            komorebi_last_uv_update_frame = actor_frame_tick;
        }
        push_matrix();
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_yxz(0, M2C_FIELD(arg0, s32 *, 0x5C), M2C_FIELD(arg0, s32 *, 0x60), M2C_FIELD(arg0, s32 *, 0x64));
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x70);
        scale_matrix(0, temp_f1, M2C_FIELD(arg0, f32 *, 0x6C), temp_f1);
        draw_ginja_object(M2C_FIELD(arg0, void **, 0x34));
        pop_matrix();
        end_effect_render__13TParticleCtrlFv();
    }
}

void run_task__9TKomorebiFv(void) {  }

extern M2C_UNK __vt__9TKomorebi[];

void *__dt__9TKomorebiFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__9TKomorebi;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_05;

typedef char RecoveredGlobal_801922C4___vt__9TKomorebi_size[sizeof(RecoveredGlobal_801922C4___vt__9TKomorebi) == 0x38 ? 1 : -1];
u8 *TKomorebi__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    construct_world_actor_base((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_801922C4___vt__9TKomorebi *)&__vt__9TKomorebi).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) komorebi_class_name;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (arg2 + 0xC));
    copy_xyz__10TObjPlayerFPvPv((void *) (arg0 + 0x5C), (void *) (arg2 + 0x18));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x68), (void *) (arg2 + 0x24));
    M2C_FIELD(arg0, s32 *, 0x34) = get_bml_model((void *) ((*(s32 *)&TKomorebi__resource_bundle)), (int) (0));
    M2C_FIELD(arg0, s32 *, 0x24) = TObjFish__sub_8001EDB0((void *) ((*(s32 *)&TKomorebi__resource_bundle)), (int) (0));
    return arg0;
}

void *TKomorebi__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x90);
    if (o != NULL) {
        o = TKomorebi__ct((u8 *)(o), (M2C_UNK)(tl_05), (s32)(arg0));
    }
    return o;
}

extern u32 TKomorebi__resource_bundle;
extern s32 komorebi_last_uv_update_frame;

void free_static__9TKomorebiFv(void) {
    if ((u32) TKomorebi__resource_bundle != 0U) {
        TLobby__sub_8001FE7C((void*)TKomorebi__resource_bundle, 1);
        TKomorebi__resource_bundle = 0U;
    }
    komorebi_last_uv_update_frame = 0;
}
void load_resources__9TKomorebiFv(void) {
    u8 *p = (u8 *)alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    if (p != 0) {
        p = load_resource_from_descriptor(p, 1, TKomorebi__resource_descriptor, 0, 0, 0);
    }
    TKomorebi__resource_bundle = (u32)p;
    komorebi_last_uv_update_frame = 0;
}
void init_models__8TObjFishFPv(Fish_80192434 *arg0) {
    s32 i;
    Node_80192434 *node;
    s32 j;
    if (arg0->f8C % 2 == 0) {
        arg0->fBC = (Node_80192434 *)get_bml_model((void *)lazer_fence_norm_bml_resource, 1);
        arg0->fC0 = (Node_80192434 *)get_bml_model((void *)lazer_fence_norm_bml_resource, 0);
        arg0->fC4 = get_bml_motion(lazer_fence_norm_bml_resource, 0);
    } else {
        arg0->fBC = (Node_80192434 *)get_bml_model((void *)lazer_fence_norm_bml_resource, 3);
        arg0->fC0 = (Node_80192434 *)get_bml_model((void *)lazer_fence_norm_bml_resource, 2);
        arg0->fC4 = get_bml_motion(lazer_fence_norm_bml_resource, 1);
    }
    for (j = 0; j < 4; j++) {
        arg0->fC8[j] = 0;
    }
    i = 0;
    node = arg0->fC0->child;
    if (node != 0) {
        arg0->fC8[i++] = node->model;
        node = node->sibling;
        while (node != 0 && i < 4) {
            arg0->fC8[i++] = node->model;
            node = node->sibling;
        }
    }
}

}
