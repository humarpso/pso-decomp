#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_8012981C(void *arg0);
M2C_UNK TObjBoss2Tunnel__sub_803D929C(M2C_UNK, s32);
s32 TObjPlayer__sub_80121200();

void TObjPlayer__sub_8012981C(void *arg0) {
    if (TObjPlayer__sub_80121200() == 1) {
        TObjBoss2Tunnel__sub_803D929C(0, M2C_FIELD(arg0, s32 *, 0x200));
    }
    if (TObjPlayer__sub_80121200() == 4) {
        TObjBoss2Tunnel__sub_803D929C(0, -M2C_FIELD(arg0, s32 *, 0x200));
    }
}

}
