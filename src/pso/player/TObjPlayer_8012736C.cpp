#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_8012736C(void *arg0);
s32 TObjPlayer__sub_80121200();
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);

void TObjPlayer__sub_8012736C(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x210) == TObjPlayer__sub_80121200()) {
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x214));
    }
}

}
