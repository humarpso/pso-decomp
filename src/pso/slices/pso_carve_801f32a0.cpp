#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8001A438(void*);
extern u32 lbl_805D5EE8;

void fn_801F32A0(void) {
    if ((u32) lbl_805D5EE8 != 0U) {
        fn_8001A438((void*)lbl_805D5EE8);
    }
}

}
