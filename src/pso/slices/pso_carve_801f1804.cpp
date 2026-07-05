#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TWindow__close(void*);
extern u32 lbl_805D5E80;

void fn_801F1804(void) {
    if ((u32) lbl_805D5E80 != 0U) {
        TWindow__close((void*)lbl_805D5E80);
        lbl_805D5E80 = 0U;
    }
}

}
