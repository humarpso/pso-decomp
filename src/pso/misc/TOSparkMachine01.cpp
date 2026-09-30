#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80177330_lbl_804B43F0 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_80177330_lbl_804B43F0_size[sizeof(RecoveredGlobal_80177330_lbl_804B43F0) == 0x10 ? 1 : -1];

struct VBase_801773D8 { u8 pad[0x18]; };

struct Obj_801773D8 : VBase_801773D8 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5(void *);
    s32 unk1c;
    s32 unk20;
    s32 unk24;
    u8 pad28[0x30 - 0x28];
    u32 flags;
    s32 unk34;
    u8 pad38[0x68 - 0x38];
    f32 unk68;
    u8 pad6c[0x90 - 0x6C];
    f32 timer[4];
    u8 on[4];
    f32 speed;
    f32 unka8;
    f32 unkac;
};

struct Model_801773D8 { u8 pad[8]; s32 a; s32 b; };

struct Res_801773D8 { u8 pad[0x42C]; Model_801773D8 *model; };

struct Obj_80177088 { u8 pad[0x90]; f32 timer[4]; u8 on[4]; f32 speed; };

extern "C" {
extern const f32 TOSparkMachine01__data_805DB9EC;
void run_task__16TOSparkMachine01Fv(u8 *arg0);
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_80177330_lbl_804B43F0 lbl_804B43F0;
extern u32 TOSparkMachine01__data_805D5AC0;
void TOSparkMachine01__sub_80177330(void);
void TPhotonMagicSquare__sub_801A2640(void *, s32);
extern M2C_UNK __vt__16TOSparkMachine01[];
extern s32 lbl_805D3174;
extern u32 TOSparkMachine01__data_805D5AC0;
extern s32 tl_05;
extern const f32 TOSparkMachine01__data_805DB9EC;
extern const f32 lbl_805DB9F0;
extern const f32 lbl_805DB9F4;
extern const f32 lbl_805DB9F8;
void *TOSparkMachine01__ct(void *arg0, void *arg1);
s32 rand__11TOBoss4RockFv(void);
extern const f32 lbl_805DB9E8;
extern const f32 TOSparkMachine01__data_805DB9EC;
void TOSparkMachine01__sub_80177088(void *arg0, s32 i);
}

extern "C" {

void *__dt__16TOSparkMachine01Fv(void *arg0, s16 arg1);
void *create__16TOSparkMachine01FPv(void *arg0);
void destroy_static_instance__16TOSparkMachine01Fv(void);
void TLobby__sub_8001FE7C(void*, int);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

void TOSparkMachine01__sub_80177088(void *arg0, s32 i) {
    Obj_80177088 *self = (Obj_80177088 *)arg0;
    switch (self->on[i]) {
    case 1:
        self->timer[i] += self->speed;
        if (lbl_805DB9E8 * (f32)rand__11TOBoss4RockFv() < self->timer[i]) {
            self->on[i] = 0;
            self->timer[i] = TOSparkMachine01__data_805DB9EC;
        }
        break;
    default:
        self->timer[i] += self->speed;
        if (lbl_805DB9E8 * (f32)rand__11TOBoss4RockFv() < self->timer[i]) {
            self->on[i] = 1;
            self->timer[i] = TOSparkMachine01__data_805DB9EC;
        }
        break;
    }
}

void run_task__16TOSparkMachine01Fv(u8 *arg0) {
    s32 var_r31;
    if (TOSparkMachine01__data_805DB9EC < M2C_FIELD(arg0, f32 *, 0x6C)) {
        var_r31 = 0;
        do {
            TOSparkMachine01__sub_80177088((void *)(arg0), (s32)(var_r31));
            var_r31 += 1;
        } while (var_r31 < 4);
        return;
    }
    M2C_FIELD(arg0, s8 *, 0xA3) = 0;
    M2C_FIELD(arg0, s8 *, 0xA2) = 0;
    M2C_FIELD(arg0, s8 *, 0xA0) = 0;
    TOSparkMachine01__sub_80177088((void *)(arg0), (s32)(1));
}

void *create__16TOSparkMachine01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xB0);
    if (o != NULL) {
        o = TOSparkMachine01__ct((void *)(o), (void *)(arg0));
    }
    return o;
}

extern u32 TOSparkMachine01__data_805D5AC0;

void destroy_static_instance__16TOSparkMachine01Fv(void) {
    if ((u32) TOSparkMachine01__data_805D5AC0 != 0U) {
        TLobby__sub_8001FE7C((void*)TOSparkMachine01__data_805D5AC0, 1);
        TOSparkMachine01__data_805D5AC0 = 0U;
    }
}

extern M2C_UNK __vt__16TOSparkMachine01[];

void TOSparkMachine01__sub_80177330(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 1, &lbl_804B43F0.value, 0, 0, 0));
    }
    (*(s32 *)&TOSparkMachine01__data_805D5AC0) = var_r0;
}

void *__dt__16TOSparkMachine01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TOSparkMachine01;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
void *TOSparkMachine01__ct(void *arg0, void *arg1) {
    Obj_801773D8 *self = (Obj_801773D8 *)arg0;
    s32 i;
    TPhotonMagicSquare__sub_801A2640(self, tl_05);
    *(void **)((u8 *)self + 0x18) = ((s32 *)&__vt__16TOSparkMachine01);
    *(s32 *)self = lbl_805D3174;
    self->m5(arg1);
    self->unk34 = ((Res_801773D8 *)TOSparkMachine01__data_805D5AC0)->model->a;
    self->unk24 = ((Res_801773D8 *)TOSparkMachine01__data_805D5AC0)->model->b;
    self->unka8 = lbl_805DB9F0;
    self->unkac = lbl_805DB9F4;
    self->flags |= 0x40000000;
    for (i = 0; i < 4; i++) {
        self->timer[i] = TOSparkMachine01__data_805DB9EC;
        self->on[i] = 0;
    }
    self->speed = lbl_805DB9F8 + self->unk68;
    return self;
}

}
