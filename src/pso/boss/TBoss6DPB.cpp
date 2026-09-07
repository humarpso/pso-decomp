#include "pso/TBoss6DPB.h"

TBoss6DPB::~TBoss6DPB() {}

#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8035DB70___vt__9TBoss6DPB { M2C_UNK value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_8035DB70___vt__9TBoss6DPB_size[sizeof(RecoveredGlobal_8035DB70___vt__9TBoss6DPB) == 0x18 ? 1 : -1];

extern "C" {
void queue_destruction__7TObjectFv(void *);
int query_teammate_state__9TObjEneDDFPv(void *);
void fn_8035D8B0(void *);
void fn_8035D924(void *);
extern const f32 lbl_805E01C8;
void run_task__9TBoss6DPBFv(u8 *arg0);
u8 *__nw__7TObjectFUl(M2C_UNK);
u8 *TBoss6Type2__sub_8035DC60(s32 arg0, s32 arg1, f32 farg0);
s32 try_apply_damage__19TObjEneEpsilonGuardFPvUii(void *, void *, int);
extern const f32 TObjEneEpsilonGuard__data_805E01D8;
f32 TObjEneEpsilonGuard__vt22(s32 arg0);
s32 try_apply_damage__19TObjEneEpsilonGuardFPvUii(void *, void *, int);
extern const f32 TObjEneEpsilonGuard__data_805E01D8;
f32 TObjEneEpsilonGuard__vt20(s32 arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
u8 *dispatch_shared_handler_a__6TLobbyFPv(s32);
s32 TBoss3Volopt__sub_8022675C(s32, u32, int, s32);
s32 __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_8035DB70___vt__9TBoss6DPB __vt__9TBoss6DPB;
extern s32 lbl_805D4450;
extern const f32 lbl_805E01CC;
extern const f32 lbl_805E01D4;
u8 *__ct__9TBoss6DPBFv(u8 *arg0, s32 arg1, s32 arg2, f32 farg0);
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

u8 *__ct__9TBoss6DPBFv(u8 *arg0, s32 arg1, s32 arg2, f32 farg0) {
    f32 temp_f1;
    f32 temp_f2;
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__9TBoss6DPB.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D4450;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x20), (void *) (arg2));
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) lbl_805E01CC;
    M2C_FIELD(arg0, f32 *, 0x2C) = farg0;
    temp_f2 = M2C_FIELD(dispatch_shared_handler_a__6TLobbyFPv(0x2C), f32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) temp_f2;
    if (lbl_805E01CC == temp_f2) {
        M2C_FIELD(arg0, s32 *, 0x34) = 0x14;
    }
    temp_f1 = M2C_FIELD(dispatch_shared_handler_a__6TLobbyFPv(0x2F), f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x38) = temp_f1;
    if (lbl_805E01CC == temp_f1) {
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_805E01D4;
    }
    TBoss3Volopt__sub_8022675C((s32)((int) (0x40069410)), (u32)((void *) (arg0 + 0x20)), (int)((int) (0)), (s32)((int) (0)));
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    return arg0;
}

#pragma push
#pragma fp_contract on
u8 *TBoss6Type2__sub_8035DC60(s32 arg0, s32 arg1, f32 farg0) {
    u8 *temp_r3;
    u8 *var_r0;
    temp_r3 = (u8 *)(__nw__7TObjectFUl(0x3C));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(__ct__9TBoss6DPBFv((u8 *)(temp_r3), (s32)(arg0), (s32)(arg1), farg0));
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
