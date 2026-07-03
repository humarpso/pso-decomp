#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TBoss6Type2__sub_802BC6A8(void);
s32 VecCopy__FP3VecPC3Vec(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
void TBoss6Type2__sub_802BD340(void);
s32 TBoss6Type2__sub_802BD3C4(void* p);

void TBoss6Type2__sub_802BD314(s32 arg0, s32 arg1) {
    VecCopy__FP3VecPC3Vec(arg1, arg0 + 0x59C, arg0);
}
void TBoss6Type2__sub_802BD340(void) {  }
void TBoss6Type2__sub_802BD344(void *arg0, s32 arg1) {
    if ((arg1 > 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x418) == 0)) {
        TBoss6Type2__sub_802BC6A8();
    }
}

}
