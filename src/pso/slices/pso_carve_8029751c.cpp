#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_80296410(s32);
extern s32 lbl_805D659C;

void TObjCMMainMenu__sub_8029751C(void *arg0) {
    fn_8022675C(0x52D01, 0, 0, 0);
    lbl_805D659C = 1;
    fn_80296410(M2C_FIELD(arg0, s32 *, 0x50));
}

}
