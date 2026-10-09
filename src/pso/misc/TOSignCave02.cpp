#include "pso/misc/TOSignCave02.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

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

struct RecoveredGlobal_80176B0C_lbl_804B4350 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_80176B0C_lbl_804B4350_size[sizeof(RecoveredGlobal_80176B0C_lbl_804B4350) == 0x10 ? 1 : -1];

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_80176BB4___vt__12TOSignCave02 {
    M2C_UNK value;
    u8 remaining[0x34];
};

extern "C" {
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
s32 rotate_matrix_y(int, int);
s32 translate_matrix(int, f32, f32, f32);
s32 push_matrix();
s32 pop_matrix();
f32 post_translate_matrix(void *);
s32 set_global_param__8TObjFishFi(int);
s32 draw_ginja_model(int);
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_80176B0C_lbl_804B4350 lbl_804B4350;
extern u32 TOSignCave02__shared_resource;
void load_shared_resource__12TOSignCave02Fv(void);
s32 init_map_object_base(void *, void *);
extern M2C_UNK __vt__12TOSignCave02[];
extern s32 lbl_805D3164;
extern u32 TOSignCave02__shared_resource;
extern const f32 lbl_805DB9D8;
extern const f32 lbl_805DB9DC;
u8 *TOSignCave02__ct(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void *__dt__12TOSignCave02Fv(void *arg0, s16 arg1);
void *create__12TOSignCave02FPv(void *arg0);
void free_static_model__12TOSignCave02Fv(void);
void TLobby__sub_8001FE7C(void*, int);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_key_base__5TOKeyFPvs(void *, int);

extern void *tl_05;

}

void TOSignCave02::render() {
    CaveSignModel *node1;
    CaveSignModel *node2;
    CaveSignModel *node3;
    CaveSignModel *node4;
    CaveSignModel *node5;
    CaveSignModel *node6;
    CaveSignModel *node7;
    CaveSignModel *node8;
    CaveSignModel *node9;
    if (((VObj_18_26a62c *)(this))->m8(field_c0, field_c4) != 0) {
        set_global_param__8TObjFishFi(render_parameter);
        push_matrix();
        post_translate_matrix(transform);
        rotate_matrix_y(0, angle);
        node1 = model;
        translate_matrix(0, node1->x, node1->y, node1->z);
        draw_ginja_model(node1->model);
        push_matrix();
        node2 = node1->child;
        translate_matrix(0, node2->x, node2->y, node2->z);
        draw_ginja_model(node2->model);
        begin_effect_render__13TParticleCtrlFv();
        push_matrix();
        node3 = node2->child;
        translate_matrix(0, node3->x, node3->y, node3->z);
        draw_ginja_model(node3->model);
        push_matrix();
        node4 = node3->child;
        translate_matrix(0, node4->x, node4->y, node4->z);
        draw_ginja_model(node4->model);
        pop_matrix();
        pop_matrix();
        end_effect_render__13TParticleCtrlFv();
        pop_matrix();
        push_matrix();
        node5 = model->child->sibling;
        translate_matrix(0, node5->x, node5->y, node5->z);
        draw_ginja_model(node5->model);
        begin_effect_render__13TParticleCtrlFv();
        push_matrix();
        node6 = node5->child;
        translate_matrix(0, node6->x, node6->y, node6->z);
        draw_ginja_model(node6->model);
        pop_matrix();
        end_effect_render__13TParticleCtrlFv();
        pop_matrix();
        push_matrix();
        node7 = model->child->sibling->sibling;
        translate_matrix(0, node7->x, node7->y, node7->z);
        draw_ginja_model(node7->model);
        begin_effect_render__13TParticleCtrlFv();
        push_matrix();
        node8 = node7->child;
        translate_matrix(0, node8->x, node8->y, node8->z);
        draw_ginja_model(node8->model);
        push_matrix();
        node9 = node8->child;
        translate_matrix(0, node9->x, node9->y, node9->z);
        draw_ginja_model(node9->model);
        pop_matrix();
        pop_matrix();
        end_effect_render__13TParticleCtrlFv();
        pop_matrix();
        pop_matrix();
    }
}

extern "C" {

void *create__12TOSignCave02FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC8);
    if (o != NULL) {
        o = TOSignCave02__ct((u8 *)(o), (s32)(tl_05), (s32)(arg0));
    }
    return o;
}

extern u32 TOSignCave02__shared_resource;

void free_static_model__12TOSignCave02Fv(void) {
    if ((u32) TOSignCave02__shared_resource != 0U) {
        TLobby__sub_8001FE7C((void*)TOSignCave02__shared_resource, 1);
        TOSignCave02__shared_resource = 0U;
    }
}

extern M2C_UNK __vt__12TOSignCave02[];

void load_shared_resource__12TOSignCave02Fv(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 1, &lbl_804B4350.value, 0, 0, 0));
    }
    (*(s32 *)&TOSignCave02__shared_resource) = var_r0;
}

void *__dt__12TOSignCave02Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TOSignCave02;
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_80176BB4___vt__12TOSignCave02_size[sizeof(RecoveredGlobal_80176BB4___vt__12TOSignCave02) == 0x38 ? 1 : -1];
u8 *TOSignCave02__ct(u8 *arg0, s32 arg1, s32 arg2) {
    init_map_object_base((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80176BB4___vt__12TOSignCave02 *)&__vt__12TOSignCave02).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3164;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD((*(u8 * *)&TOSignCave02__shared_resource), u8 **, 0x42C), s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(M2C_FIELD((*(u8 * *)&TOSignCave02__shared_resource), u8 **, 0x42C), s32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DB9D8;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) lbl_805DB9DC;
    return arg0;
}

}
