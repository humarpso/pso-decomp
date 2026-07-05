#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8028EBCC(void*);
extern u32 lbl_805D6524;

s32 TCharaMaking__sub_8028DC40(void) {
    if ((u32) lbl_805D6524 == 0U) {
        return -1;
    }
    return fn_8028EBCC((void*)lbl_805D6524);
}

}
