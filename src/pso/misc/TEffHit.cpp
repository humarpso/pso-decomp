#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TEffHit__ct(void *arg0, void *arg1);
void TEffect__ct(void *);
void VecCopy__FP3VecPC3Vec(void *, void *);

extern M2C_UNK __vt__7TEffHit[];
extern void *lbl_805D2920;

void *TEffHit__ct(void *arg0, void *arg1) {
    TEffect__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__7TEffHit;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2920;
    VecCopy__FP3VecPC3Vec((void *)((char *)arg0 + 32), arg1);
    M2C_FIELD(arg0, u32 *, 0x70) = 0;
    return arg0;
}

}
