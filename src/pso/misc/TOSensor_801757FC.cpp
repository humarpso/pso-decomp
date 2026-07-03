#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TOSensor__ct(void *arg0);
void TOKey__ct(void *);
void VecCopy__FP3VecPC3Vec(void *, void *);

extern M2C_UNK __vt__8TOSensor[];
extern void *lbl_805D3140;

void *TOSensor__ct(void *arg0) {
    TOKey__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__8TOSensor;
    VecCopy__FP3VecPC3Vec((void *)((char *)arg0 + 80), (void *)((char *)arg0 + 56));
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3140;
    return arg0;
}

}
