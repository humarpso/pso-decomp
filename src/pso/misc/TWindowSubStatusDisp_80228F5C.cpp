#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
u8 * fn_80228E98(s32, void *);
extern u8 *lbl_805D6338;
void TWindowSubStatusDisp__sub_80228F5C(s32 arg0);
}

extern "C" {

void TWindowSubStatusDisp__sub_80228F5C(s32 arg0) {
    lbl_805D6338 = fn_80228E98(arg0, lbl_805D6338);
}

}
