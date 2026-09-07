#include "pso/misc/TOSignCave01.h"

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

struct RecoveredGlobal_80176758_lbl_804B4300 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_80176758_lbl_804B4300_size[sizeof(RecoveredGlobal_80176758_lbl_804B4300) == 0x10 ? 1 : -1];

extern "C" {
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
s32 TObjPlayer__sub_803D9214(int, int);
s32 TObjPlayer__sub_803D9624(int, f32, f32, f32);
s32 TObjPlayer__sub_803D9B2C();
s32 TObjPlayer__sub_803D9B78();
f32 TOHangerMachine01__sub_803D9C00(void *);
s32 set_global_param__8TObjFishFi(int);
s32 TOSignCave03__sub_803DB510(int);
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_80176758_lbl_804B4300 lbl_804B4300;
extern u32 TOSignCave01__data_805D5AA8;
void TOSignCave01__sub_80176758(void);
}

extern "C" {

void *__dt__12TOSignCave01Fv(void *arg0, s16 arg1);
void *create__12TOSignCave01FPv(void *arg0);
void unload_static_data__12TOSignCave01Fv(void);
void TLobby__sub_8001FE7C(void*, int);
void *TOSignCave01__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_key_base__5TOKeyFPvs(void *, int);

extern void *tl_05;

}

void TOSignCave01::render() {
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
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(transform);
        TObjPlayer__sub_803D9214(0, angle);
        node1 = model;
        TObjPlayer__sub_803D9624(0, node1->x, node1->y, node1->z);
        TOSignCave03__sub_803DB510(node1->model);
        TObjPlayer__sub_803D9B2C();
        node2 = node1->child;
        TObjPlayer__sub_803D9624(0, node2->x, node2->y, node2->z);
        TOSignCave03__sub_803DB510(node2->model);
        begin_effect_render__13TParticleCtrlFv();
        TObjPlayer__sub_803D9B2C();
        node3 = node2->child;
        TObjPlayer__sub_803D9624(0, node3->x, node3->y, node3->z);
        TOSignCave03__sub_803DB510(node3->model);
        TObjPlayer__sub_803D9B2C();
        node4 = node3->child;
        TObjPlayer__sub_803D9624(0, node4->x, node4->y, node4->z);
        TOSignCave03__sub_803DB510(node4->model);
        TObjPlayer__sub_803D9B78();
        TObjPlayer__sub_803D9B78();
        end_effect_render__13TParticleCtrlFv();
        TObjPlayer__sub_803D9B78();
        TObjPlayer__sub_803D9B2C();
        node5 = model->child->sibling;
        TObjPlayer__sub_803D9624(0, node5->x, node5->y, node5->z);
        TOSignCave03__sub_803DB510(node5->model);
        begin_effect_render__13TParticleCtrlFv();
        TObjPlayer__sub_803D9B2C();
        node6 = node5->child;
        TObjPlayer__sub_803D9624(0, node6->x, node6->y, node6->z);
        TOSignCave03__sub_803DB510(node6->model);
        TObjPlayer__sub_803D9B78();
        end_effect_render__13TParticleCtrlFv();
        TObjPlayer__sub_803D9B78();
        TObjPlayer__sub_803D9B2C();
        node7 = model->child->sibling->sibling;
        TObjPlayer__sub_803D9624(0, node7->x, node7->y, node7->z);
        TOSignCave03__sub_803DB510(node7->model);
        begin_effect_render__13TParticleCtrlFv();
        TObjPlayer__sub_803D9B2C();
        node8 = node7->child;
        TObjPlayer__sub_803D9624(0, node8->x, node8->y, node8->z);
        TOSignCave03__sub_803DB510(node8->model);
        TObjPlayer__sub_803D9B2C();
        node9 = node8->child;
        TObjPlayer__sub_803D9624(0, node9->x, node9->y, node9->z);
        TOSignCave03__sub_803DB510(node9->model);
        TObjPlayer__sub_803D9B78();
        TObjPlayer__sub_803D9B78();
        end_effect_render__13TParticleCtrlFv();
        TObjPlayer__sub_803D9B78();
        TObjPlayer__sub_803D9B78();
    }
}

extern "C" {

void *create__12TOSignCave01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC8);
    if (o != NULL) {
        o = TOSignCave01__ct(o, tl_05, arg0);
    }
    return o;
}

extern u32 TOSignCave01__data_805D5AA8;

void unload_static_data__12TOSignCave01Fv(void) {
    if ((u32) TOSignCave01__data_805D5AA8 != 0U) {
        TLobby__sub_8001FE7C((void*)TOSignCave01__data_805D5AA8, 1);
        TOSignCave01__data_805D5AA8 = 0U;
    }
}

extern M2C_UNK __vt__12TOSignCave01[];

void TOSignCave01__sub_80176758(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 1, &lbl_804B4300.value, 0, 0, 0));
    }
    (*(s32 *)&TOSignCave01__data_805D5AA8) = var_r0;
}

void *__dt__12TOSignCave01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TOSignCave01;
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
