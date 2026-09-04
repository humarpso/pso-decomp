#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__ct__14TPlyDispConfigFv(void *arg0);
s32 free_if_valid__14TPlyDispConfigFis(s32 arg0, s16 arg1);
int __dl__FPv();
void fn_80071F90(void *);

s32 free_if_valid__14TPlyDispConfigFis(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}

void *__ct__14TPlyDispConfigFv(void *arg0) {
    fn_80071F90(arg0);
    fn_80071F90((void *)((char *)arg0 + 36));
    return arg0;
}

}
