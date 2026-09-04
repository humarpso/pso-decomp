#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__16TOSparkMachine01Fv(void *arg0, s16 arg1);
void *create__16TOSparkMachine01FPv(void *arg0);
void destroy_static_instance__16TOSparkMachine01Fv(void);
void TLobby__sub_8001FE7C(void*, int);
void *TOSparkMachine01__ct(void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

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
