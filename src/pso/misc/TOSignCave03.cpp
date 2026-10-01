#include "pso/misc/TOSignCave03.h"

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

struct RecoveredGlobal_80176F50_lbl_804B43A0 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_80176F50_lbl_804B43A0_size[sizeof(RecoveredGlobal_80176F50_lbl_804B43A0) == 0x10 ? 1 : -1];

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_80176FF8___vt__12TOSignCave03 {
    M2C_UNK value;
    u8 remaining[0x34];
};

extern "C" {
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
s32 rotate_matrix_y(int, int);
s32 TObjPlayer__sub_803D9624(int, f32, f32, f32);
s32 TObjPlayer__sub_803D9B2C();
s32 TObjPlayer__sub_803D9B78();
f32 TOHangerMachine01__sub_803D9C00(void *);
s32 set_global_param__8TObjFishFi(int);
s32 TOSignCave03__sub_803DB510(int);
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_80176F50_lbl_804B43A0 lbl_804B43A0;
extern u32 TOSignCave03__data_805D5AB8;
void TOSignCave03__sub_80176F50(void);
s32 init_map_object_base(void *, void *);
extern M2C_UNK __vt__12TOSignCave03[];
extern s32 lbl_805D316C;
extern u32 TOSignCave03__data_805D5AB8;
extern const f32 lbl_805DB9E0;
extern const f32 lbl_805DB9E4;
u8 *TOSignCave03__ct(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void *__dt__12TOSignCave03Fv(void *arg0, s16 arg1);
void close_dialog_window__12TOSignCave03Fv(void);
void *create__12TOSignCave03FPv(void *arg0);
void TLobby__sub_8001FE7C(void*, int);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_key_base__5TOKeyFPvs(void *, int);

extern void *tl_05;

}

void TOSignCave03::render() {
    CaveSignModel *node1;
    CaveSignModel *node10;
    CaveSignModel *node11;
    CaveSignModel *node12;
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
        rotate_matrix_y(0, angle);
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
        TObjPlayer__sub_803D9B2C();
        node7 = node6->child;
        TObjPlayer__sub_803D9624(0, node7->x, node7->y, node7->z);
        TOSignCave03__sub_803DB510(node7->model);
        TObjPlayer__sub_803D9B78();
        TObjPlayer__sub_803D9B78();
        end_effect_render__13TParticleCtrlFv();
        TObjPlayer__sub_803D9B78();
        TObjPlayer__sub_803D9B2C();
        node8 = model->child->sibling->sibling;
        TObjPlayer__sub_803D9624(0, node8->x, node8->y, node8->z);
        TOSignCave03__sub_803DB510(node8->model);
        begin_effect_render__13TParticleCtrlFv();
        TObjPlayer__sub_803D9B2C();
        node9 = node8->child;
        TObjPlayer__sub_803D9624(0, node9->x, node9->y, node9->z);
        TOSignCave03__sub_803DB510(node9->model);
        TObjPlayer__sub_803D9B78();
        end_effect_render__13TParticleCtrlFv();
        TObjPlayer__sub_803D9B78();
        TObjPlayer__sub_803D9B2C();
        node10 = model->child->sibling->sibling->sibling;
        TObjPlayer__sub_803D9624(0, node10->x, node10->y, node10->z);
        TOSignCave03__sub_803DB510(node10->model);
        begin_effect_render__13TParticleCtrlFv();
        TObjPlayer__sub_803D9B2C();
        node11 = node10->child;
        TObjPlayer__sub_803D9624(0, node11->x, node11->y, node11->z);
        TOSignCave03__sub_803DB510(node11->model);
        TObjPlayer__sub_803D9B2C();
        node12 = node11->child;
        TObjPlayer__sub_803D9624(0, node12->x, node12->y, node12->z);
        TOSignCave03__sub_803DB510(node12->model);
        TObjPlayer__sub_803D9B78();
        TObjPlayer__sub_803D9B78();
        end_effect_render__13TParticleCtrlFv();
        TObjPlayer__sub_803D9B78();
        TObjPlayer__sub_803D9B78();
    }
}

extern "C" {

void *create__12TOSignCave03FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC8);
    if (o != NULL) {
        o = TOSignCave03__ct((u8 *)(o), (s32)(tl_05), (s32)(arg0));
    }
    return o;
}

extern u32 TOSignCave03__data_805D5AB8;

void close_dialog_window__12TOSignCave03Fv(void) {
    if ((u32) TOSignCave03__data_805D5AB8 != 0U) {
        TLobby__sub_8001FE7C((void*)TOSignCave03__data_805D5AB8, 1);
        TOSignCave03__data_805D5AB8 = 0U;
    }
}

extern M2C_UNK __vt__12TOSignCave03[];

void TOSignCave03__sub_80176F50(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 1, &lbl_804B43A0.value, 0, 0, 0));
    }
    (*(s32 *)&TOSignCave03__data_805D5AB8) = var_r0;
}

void *__dt__12TOSignCave03Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TOSignCave03;
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_80176FF8___vt__12TOSignCave03_size[sizeof(RecoveredGlobal_80176FF8___vt__12TOSignCave03) == 0x38 ? 1 : -1];
u8 *TOSignCave03__ct(u8 *arg0, s32 arg1, s32 arg2) {
    init_map_object_base((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80176FF8___vt__12TOSignCave03 *)&__vt__12TOSignCave03).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D316C;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD((*(u8 * *)&TOSignCave03__data_805D5AB8), u8 **, 0x42C), s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(M2C_FIELD((*(u8 * *)&TOSignCave03__data_805D5AB8), u8 **, 0x42C), s32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DB9E0;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) lbl_805DB9E4;
    return arg0;
}

}
