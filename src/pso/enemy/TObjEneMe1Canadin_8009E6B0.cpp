#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjEneDD__sub_800BBA18(void * a0 = 0, s32 a1 = 0);
int select_and_apply_target__17TObjEneMe1CanadinFPv(void* p);
void noop__17TObjEneMe1CanadinFv(void);
void TObjEneMe1Canadin__vt105(void);
int select_and_apply_target__14TObjEneEpsilonFPvf(void*);

void noop__17TObjEneMe1CanadinFv(void) {  }
s32 try_trigger_action__17TObjEneMe1CanadinFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x390) == 0U) {
        TObjEneDD__sub_800BBA18(arg0, 0xE);
        return 1;
    }
    return 0;
}

}
