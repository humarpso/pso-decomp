#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void fn_8013AC0C(void *);

void *fn_8013ABCC(void *arg0, void *arg1) {
    fn_8013AC0C(arg0);
    ((void (*)(void *, void *))fn_8013AC0C)((void *)((char *)arg0 + 36), (void *)((char *)arg1 + 36));
    return arg0;
}

}
