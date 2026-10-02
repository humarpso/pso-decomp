#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8036A894___vt__17TBoss6EffFlowSoul {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 create_particle_emitter(s32, s32);
void set_flags__11TBoss4Type2FPvUi(void *, s32);
void __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_8036A894___vt__17TBoss6EffFlowSoul __vt__17TBoss6EffFlowSoul;
extern s32 lbl_805D44D0;
u8 *TBoss6EffFlowSoul__ct(u8 *arg0, u8 *arg1, u8 *arg2, s16 arg3, s32 arg4);
}

extern "C" {

typedef char RecoveredGlobal_8036A894___vt__17TBoss6EffFlowSoul_size[sizeof(RecoveredGlobal_8036A894___vt__17TBoss6EffFlowSoul) == 0x18 ? 1 : -1];
u8 *TBoss6EffFlowSoul__ct(u8 *arg0, u8 *arg1, u8 *arg2, s16 arg3, s32 arg4) {
    u8 *temp_r3;
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__17TBoss6EffFlowSoul.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D44D0;
    M2C_FIELD(arg0, u8 **, 0x1C) = arg1;
    VecCopy__FP3VecPC3Vec(arg0 + 0x28, arg2);
    M2C_FIELD(arg0, s16 *, 0x24) = arg3;
    M2C_FIELD(arg0, s32 *, 0x34) = arg4;
    temp_r3 = (u8 *)(create_particle_emitter((s32) (arg0 + 0x28), 0x225));
    M2C_FIELD(arg0, u8 **, 0x20) = temp_r3;
    if (temp_r3 != NULL) {
        set_flags__11TBoss4Type2FPvUi(M2C_FIELD(arg0, u8 **, 0x20), 0x40);
    }
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    return arg0;
}

}
