#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80177330_lbl_804B43F0 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_80177330_lbl_804B43F0_size[sizeof(RecoveredGlobal_80177330_lbl_804B43F0) == 0x10 ? 1 : -1];

extern "C" {
void TOSparkMachine01__sub_80177088(void *, s32);
extern const f32 TOSparkMachine01__data_805DB9EC;
void run_task__16TOSparkMachine01Fv(u8 *arg0);
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_80177330_lbl_804B43F0 lbl_804B43F0;
extern u32 TOSparkMachine01__data_805D5AC0;
void TOSparkMachine01__sub_80177330(void);
}

extern "C" {

void *__dt__16TOSparkMachine01Fv(void *arg0, s16 arg1);
void *create__16TOSparkMachine01FPv(void *arg0);
void destroy_static_instance__16TOSparkMachine01Fv(void);
void TLobby__sub_8001FE7C(void*, int);
void *TOSparkMachine01__ct(void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

void run_task__16TOSparkMachine01Fv(u8 *arg0) {
    s32 var_r31;
    if (TOSparkMachine01__data_805DB9EC < M2C_FIELD(arg0, f32 *, 0x6C)) {
        var_r31 = 0;
        do {
            TOSparkMachine01__sub_80177088(arg0, var_r31);
            var_r31 += 1;
        } while (var_r31 < 4);
        return;
    }
    M2C_FIELD(arg0, s8 *, 0xA3) = 0;
    M2C_FIELD(arg0, s8 *, 0xA2) = 0;
    M2C_FIELD(arg0, s8 *, 0xA0) = 0;
    TOSparkMachine01__sub_80177088(arg0, 1);
}

void *create__16TOSparkMachine01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xB0);
    if (o != NULL) {
        o = TOSparkMachine01__ct(o, arg0);
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

}
