#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void *__nw__7TObjectFUl(int);
void *TBoss6EffFlowSoul__ct(void *, void *, void *, void *, void *);
s32 spawn_flow_soul__11TBoss6Type2Fiii(s32 arg0, s32 arg1, s32 arg2);
}

extern "C" {

void * create_flow_soul__11TBoss6Type2FPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void *TBoss6EffFlowSoul__ct(void *, void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

s32 spawn_flow_soul__11TBoss6Type2Fiii(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = ((s32)__nw__7TObjectFUl((int) (0x3C)));
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = ((s32)TBoss6EffFlowSoul__ct((void *)((int) (temp_r3)), (void *)((void *) (arg0)), (void *)((void *) (arg1)), (void *)((int) (0xFFFF)), (void *)((void *) (arg2))));
    }
    return var_r0;
}

void * create_flow_soul__11TBoss6Type2FPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x3C);
    if (o != NULL) {
        o = TBoss6EffFlowSoul__ct(o, arg0, arg1, arg2, arg3);
    }
    return o;
}

}
