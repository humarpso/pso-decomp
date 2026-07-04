#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void VecCopy__FP3VecPC3Vec(void *);

void fn_80083018(void *arg0, void *arg1, void *arg2) {
    VecCopy__FP3VecPC3Vec((void *)((char *)arg0 + 32));
    ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)((void *)((char *)arg0 + 44), arg2);
}

}
