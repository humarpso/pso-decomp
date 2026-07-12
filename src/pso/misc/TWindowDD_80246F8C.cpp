#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowDD__sub_80246F8C(void);
M2C_UNK TWindowSubStatusDisp__sub_8025A9C0(f32);

extern const f32 lbl_805DCB70;

void TWindowDD__sub_80246F8C(void) {
    TWindowSubStatusDisp__sub_8025A9C0(lbl_805DCB70);
}

}
