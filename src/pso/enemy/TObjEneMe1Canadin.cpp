#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneMe1Canadin__sub_8009EABC(void *arg0);
void TObjEneMe1Canadin__sub_8009EAE8(void *arg0);
M2C_UNK TObjEneMe1Canadin__sub_8009EB14(f32);

void TObjEneMe1Canadin__sub_8009EABC(void *arg0) {
    TObjEneMe1Canadin__sub_8009EB14(M2C_FIELD(arg0, f32 *, 0x3E8) + M2C_FIELD(arg0, f32 *, 0x3C));
}

void TObjEneMe1Canadin__sub_8009EAE8(void *arg0) {
    TObjEneMe1Canadin__sub_8009EB14(M2C_FIELD(arg0, f32 *, 0x3EC) + M2C_FIELD(arg0, f32 *, 0x3C));
}

}
