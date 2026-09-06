#include "pso/TBoss6SwordWave.h"

TBoss6SwordWave::~TBoss6SwordWave() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_80356C80 {
    s32 sp8;
    s32 spC;
};

extern "C" {
u8 * __ct__15TBoss6SwordWaveFv(void *, s32, s32, s32, s32, f32);
u8 *__nw__7TObjectFUl(M2C_UNK);
u8 *TBoss6SwordWave__sub_80356C10(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0);
void TBoss6SwordWave__sub_80356CDC(M2C_UNK, u8, void *, void *);
u8 TBoss6SwordWave__sub_80356C80(s32 arg0, u8 arg1);
}

extern "C" {

u8 TBoss6SwordWave__sub_80356D08(u32 arg1, u32 arg2);
void render__15TBoss6SwordWaveFv(void);

void render__15TBoss6SwordWaveFv(void) {  }

#pragma push
#pragma fp_contract on
u8 *TBoss6SwordWave__sub_80356C10(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0) {
    u8 *temp_r3;
    u8 *var_r0;
    temp_r3 = (u8 *)(__nw__7TObjectFUl(0x64));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(__ct__15TBoss6SwordWaveFv(temp_r3, arg0, arg1, arg2, arg3, farg0));
    }
    return var_r0;
}
#pragma pop

u8 TBoss6SwordWave__sub_80356C80(s32 arg0, u8 arg1) {
    typedef char sp8_offset[(offsetof(Stack_80356C80, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80356C80, spC) == 0x4) ? 1 : -1];
    Stack_80356C80 stack;
    TBoss6SwordWave__sub_80356CDC(arg0, arg1, &stack.spC, &stack.sp8);
    return (u8) (((1 << stack.sp8) & M2C_FIELD(arg0, M2C_UNK *, (stack.spC * 4))) != 0);
}

u8 TBoss6SwordWave__sub_80356D08(u32 arg1, u32 arg2) {
    return (u8) (arg2 >> 8U);
}

}
