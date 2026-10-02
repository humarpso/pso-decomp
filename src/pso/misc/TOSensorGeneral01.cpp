#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80176308_lbl_80442A80 {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_80176308_lbl_804B4278 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct VBase_801760A8 { char pad[0x18]; };

struct VObj_801760A8 : VBase_801760A8 {
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

struct Node_801760A8 {
    u8 pad0[4];
    s32 model;
    f32 x, y, z;
    u8 pad14[0x2C - 0x14];
    Node_801760A8 *child;
    Node_801760A8 *next;
};

struct Base_801763E4 { char pad[0x18]; };

struct VObj_801763E4 : Base_801763E4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5(void *);
};

extern "C" {
u8 *TLobby__sub_80020004(void *, s32, M2C_UNK *, s32, s32, s32);
u8 *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
s32 *alloc_buffer__11TOBoss4RockFPv(s32);
s32 TLanguage__sub_801E4874(void *);
extern RecoveredGlobal_80176308_lbl_80442A80 lbl_80442A80;
extern RecoveredGlobal_80176308_lbl_804B4278 lbl_804B4278;
extern u32 lbl_805D5AA0;
extern s32 *TOSensorGeneral01__data_805D5AA4;
void TOSensorGeneral01__sub_80176308(void);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK TObjPlayer__sub_803D9624(int, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK TOSignCave03__sub_803DB510(int);
extern s32 *TOSensorGeneral01__data_805D5AA4;
void render__17TOSensorGeneral01Fv(u8 *arg0);
M2C_UNK init_switch_id__5TOKeyFPv(void *);
M2C_UNK TOSensor__ct(void *, void *);
extern M2C_UNK __vt__17TOSensorGeneral01[];
extern s32 lbl_805D3154;
extern u32 lbl_805D5AA0;
extern s32 *TOSensorGeneral01__data_805D5AA4;
void *TOSensorGeneral01__ct(void *arg0, void *arg1, void *arg2);
}

extern "C" {

void TOSensorGeneral01__vt14(void *arg0);
void TOSensorGeneral01__vt15(void *arg0);
void *__dt__17TOSensorGeneral01Fv(void *arg0, s16 arg1);
void *create__17TOSensorGeneral01FPv(void *arg0);
void free_rocks__17TOSensorGeneral01Fv(void);
void TLobby__sub_8001FE7C(void*, int);
void __dl__7TObjectFPv(void *);
void __dt__8TOSensorFv(void *, int);
void *__nw__7TObjectFUl(int);
M2C_UNK free__11TOBoss4RockFUi(void*);
M2C_UNK free_if_valid__10TObjPlayerFi(s32);

void TOSensorGeneral01__vt15(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) + 0x147);
    M2C_FIELD(arg0, s32 *, 0xE8) = (s32) (M2C_FIELD(arg0, s32 *, 0xE8) + 0x28F);
}

extern M2C_UNK lbl_80442A78;
extern const f32 lbl_805DB9B0;
extern const f32 lbl_805DB9B4;
extern const f32 lbl_805DB9B8;
extern const f32 lbl_805DB9BC;

void TOSensorGeneral01__vt14(void *arg0) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0xE8) = (s32) (M2C_FIELD(arg0, s32 *, 0xE8) + 0x28F);
    M2C_FIELD(arg0, s32 *, 0xF0) = (s32) (M2C_FIELD(arg0, s32 *, 0xF0) - 1);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xF0);
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0xF0) = 0;
        M2C_FIELD(arg0, s32 *, 0xEC) = 0;
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) + 0xCCC);
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) + lbl_805DB9B0);
        return;
    }
    if ((f32) temp_r0 < lbl_805DB9B4) {
        M2C_FIELD(arg0, s32 *, 0xEC) = 1;
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) + 0x147);
        return;
    }
    if ((f32) temp_r0 < lbl_805DB9B8) {
        M2C_FIELD(arg0, s32 *, 0xEC) = 2;
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) + 0x147);
        return;
    }
    if ((f32) temp_r0 < lbl_805DB9BC) {
        M2C_FIELD(arg0, s32 *, 0xEC) = 3;
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) + 0x147);
    }
}

extern void *tl_05;

void render__17TOSensorGeneral01Fv(u8 *arg0) {
    Node_801760A8 *n;
    if (((VObj_801760A8 *)(arg0))->m8(M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4)) != 0) {
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) ((u8 *)(arg0) + 0x38));
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        n = M2C_FIELD(arg0, Node_801760A8 **, 0x34);
        TObjPlayer__sub_803D9624(0, n->x, n->y, n->z);
        set_global_param__8TObjFishFi(TOSensorGeneral01__data_805D5AA4[0]);
        TOSignCave03__sub_803DB510(n->model);
        begin_effect_render__13TParticleCtrlFv();
        n = n->child;
        TObjPlayer__sub_803D9624(0, n->x, n->y, n->z);
        set_global_param__8TObjFishFi(TOSensorGeneral01__data_805D5AA4[M2C_FIELD(arg0, s32 *, 0xEC) < 1]);
        TOSignCave03__sub_803DB510(n->model);
        n = n->next;
        TObjPlayer__sub_803D9624(0, n->x, n->y, n->z);
        set_global_param__8TObjFishFi(TOSensorGeneral01__data_805D5AA4[M2C_FIELD(arg0, s32 *, 0xEC) < 2]);
        TOSignCave03__sub_803DB510(n->model);
        n = n->next;
        TObjPlayer__sub_803D9624(0, n->x, n->y, n->z);
        set_global_param__8TObjFishFi(TOSensorGeneral01__data_805D5AA4[M2C_FIELD(arg0, s32 *, 0xEC) < 3]);
        TOSignCave03__sub_803DB510(n->model);
        end_effect_render__13TParticleCtrlFv();
        n = n->next;
        TObjPlayer__sub_803D9B2C();
        TObjPlayer__sub_803D9624(0, n->x, n->y, n->z);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0xE8));
        set_global_param__8TObjFishFi(TOSensorGeneral01__data_805D5AA4[1]);
        TOSignCave03__sub_803DB510(n->model);
        TObjPlayer__sub_803D9B78();
        TObjPlayer__sub_803D9B78();
    }
}

void *create__17TOSensorGeneral01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xF4);
    if (o != NULL) {
        o = TOSensorGeneral01__ct((void *)(o), (void *)(tl_05), (void *)(arg0));
    }
    return o;
}

extern u32 lbl_805D5AA0;
extern s32 *TOSensorGeneral01__data_805D5AA4;

void free_rocks__17TOSensorGeneral01Fv(void) {
    if ((s32 *) TOSensorGeneral01__data_805D5AA4 != NULL) {
        free_if_valid__10TObjPlayerFi(*TOSensorGeneral01__data_805D5AA4);
        if ((s32 *) TOSensorGeneral01__data_805D5AA4 != NULL) {
            free__11TOBoss4RockFUi((void*)TOSensorGeneral01__data_805D5AA4);
            TOSensorGeneral01__data_805D5AA4 = NULL;
        }
    }
    if ((u32) lbl_805D5AA0 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5AA0, 1);
        lbl_805D5AA0 = 0U;
    }
}

extern M2C_UNK __vt__17TOSensorGeneral01[];

typedef char RecoveredGlobal_80176308_lbl_80442A80_size[sizeof(RecoveredGlobal_80176308_lbl_80442A80) == 0x14 ? 1 : -1];
typedef char RecoveredGlobal_80176308_lbl_804B4278_size[sizeof(RecoveredGlobal_80176308_lbl_804B4278) == 0x10 ? 1 : -1];
void TOSensorGeneral01__sub_80176308(void) {
    s32 *temp_r3_2;
    u8 *temp_r3;
    u8 *var_r0;
    temp_r3 = (u8 *)(alloc__23TAdSinglePlyChrSelectGCFPv(0x440));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(TLobby__sub_80020004(temp_r3, 1, &lbl_804B4278.value, 0, 0, 0));
    }
    (*(u8 * *)&lbl_805D5AA0) = var_r0;
    temp_r3_2 = (s32 *)(alloc_buffer__11TOBoss4RockFPv(8));
    TOSensorGeneral01__data_805D5AA4 = temp_r3_2;
    M2C_FIELD(temp_r3_2, s32 *, 4) = (s32) M2C_FIELD(M2C_FIELD((*(u8 * *)&lbl_805D5AA0), u8 **, 0x42C), s32 *, 0xC);
    *TOSensorGeneral01__data_805D5AA4 = TLanguage__sub_801E4874((void *) (&lbl_80442A80.value));
}

void *__dt__17TOSensorGeneral01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TOSensorGeneral01;
        __dt__8TOSensorFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
void *TOSensorGeneral01__ct(void *arg0, void *arg1, void *arg2) {
    TOSensor__ct(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TOSensorGeneral01;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3154;
    ((VObj_801763E4 *)arg0)->m5(arg2);
    init_switch_id__5TOKeyFPv(arg0);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) *TOSensorGeneral01__data_805D5AA4;
    M2C_FIELD(arg0, void **, 0x34) = (void *) M2C_FIELD(M2C_FIELD((*(void * *)&lbl_805D5AA0), void **, 0x42C), void **, 8);
    M2C_FIELD(arg0, f32 *, 0xC0) = 400.0f;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), void **, 4), f32 *, 0x14);
    M2C_FIELD(arg0, f32 *, 0xCC) = 50.0f + M2C_FIELD(arg0, f32 *, 0x68);
    if (M2C_FIELD(arg0, f32 *, 0xCC) < 0.0f) {
        M2C_FIELD(arg0, f32 *, 0xCC) = 0.0f;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x88) < 0) {
        M2C_FIELD(arg0, s32 *, 0xD0) = 2;
    } else {
        M2C_FIELD(arg0, s32 *, 0xD0) = 1;
    }
    M2C_FIELD(arg0, s32 *, 0xE8) = 0;
    M2C_FIELD(arg0, s32 *, 0xEC) = 3;
    M2C_FIELD(arg0, s32 *, 0xF0) = 0x5A;
    return arg0;
}

}
