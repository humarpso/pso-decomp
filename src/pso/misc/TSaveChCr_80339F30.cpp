#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TSaveChCr__sub_80339F30(void);
s32 TObjCMProportion__sub_8029916C(M2C_UNK);

s32 TSaveChCr__sub_80339F30(void) {
    return TObjCMProportion__sub_8029916C(4) ? 1 : 0;
}

}
