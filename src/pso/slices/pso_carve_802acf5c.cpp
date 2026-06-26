#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8026CB74();
M2C_UNK fn_802ACF04(s32, s32, s32);

void TWindowSubSymbolChat__sub_802ACF5C(s32 arg0) {
    s32 temp_r31;

    temp_r31 = fn_8026CB74();
    fn_802ACF04(fn_8026CB74(), temp_r31, arg0);
}

}
