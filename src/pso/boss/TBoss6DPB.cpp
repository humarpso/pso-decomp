#include "pso/TBoss6DPB.h"

TBoss6DPB::~TBoss6DPB() {}

#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void queue_destruction__7TObjectFv(void *);
int query_teammate_state__9TObjEneDDFPv(void *);
s32 TBoss3Volopt__sub_8022675C(s32, u32, s16, s32);
void fn_8035D8B0(void *);
void fn_8035D924(void *);
extern const f32 lbl_805E01C8;
void run_task__9TBoss6DPBFv(u8 *arg0);
u8 * __ct__9TBoss6DPBFv(void *, s32, s32, f32);
u8 *__nw__7TObjectFUl(M2C_UNK);
u8 *TBoss6Type2__sub_8035DC60(s32 arg0, s32 arg1, f32 farg0);
s32 try_apply_damage__19TObjEneEpsilonGuardFPvUii(void *, void *, int);
extern const f32 TObjEneEpsilonGuard__data_805E01D8;
f32 TObjEneEpsilonGuard__vt22(s32 arg0);
s32 try_apply_damage__19TObjEneEpsilonGuardFPvUii(void *, void *, int);
extern const f32 TObjEneEpsilonGuard__data_805E01D8;
f32 TObjEneEpsilonGuard__vt20(s32 arg0);
}

extern "C" {

void render__9TBoss6DPBFv(void);

void render__9TBoss6DPBFv(void) {  }
void run_task__9TBoss6DPBFv(u8 *arg0) {
    if (query_teammate_state__9TObjEneDDFPv(arg0) == 0) {
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) + 1);
        if ((f32) M2C_FIELD(arg0, s32 *, 0x30) > lbl_805E01C8) {
            fn_8035D924(arg0);
            TBoss3Volopt__sub_8022675C(0x40069411, (u32) (arg0 + 0x20), 0, 0);
            fn_8035D8B0(arg0);
            queue_destruction__7TObjectFv(arg0);
        }
    }
}
#pragma push
#pragma fp_contract on
u8 *TBoss6Type2__sub_8035DC60(s32 arg0, s32 arg1, f32 farg0) {
    u8 *temp_r3;
    u8 *var_r0;
    temp_r3 = (u8 *)(__nw__7TObjectFUl(0x3C));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(__ct__9TBoss6DPBFv(temp_r3, arg0, arg1, farg0));
    }
    return var_r0;
}
#pragma pop

f32 TObjEneEpsilonGuard__vt22(s32 arg0) {
    try_apply_damage__19TObjEneEpsilonGuardFPvUii((void *) (arg0), (void *) (arg0 + 0x2FC), (int) (0));
    return TObjEneEpsilonGuard__data_805E01D8;
}
f32 TObjEneEpsilonGuard__vt20(s32 arg0) {
    try_apply_damage__19TObjEneEpsilonGuardFPvUii((void *) (arg0), (void *) (arg0 + 0x2FC), (int) (0));
    return TObjEneEpsilonGuard__data_805E01D8;
}

}
