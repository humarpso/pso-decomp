#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_801043F8();
extern s32 lbl_805D53A0;

void fn_80100DD0(void *arg0) {
    if ((s32) M2C_FIELD(arg0, u16 *, 0xE4) == (s32) lbl_805D53A0) {
        fn_801043F8();
    }
}

}
