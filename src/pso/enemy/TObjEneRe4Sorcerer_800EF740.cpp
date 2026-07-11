#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_shield__18TObjEneRe4SorcererFiPv(s32 arg0, void *arg1);
s16 TItemProShield__sub_80076B5C(void *);
s32 check_v2_mode__9TObjEneDDFv();

s32 check_shield__18TObjEneRe4SorcererFiPv(s32 arg0, void *arg1) {
    if (check_v2_mode__9TObjEneDDFv() != 0) {
        return M2C_FIELD(arg1, s16 *, 0x32C) < TItemProShield__sub_80076B5C(arg1);
    }
    return M2C_FIELD(arg1, s16 *, 0x32C) < (TItemProShield__sub_80076B5C(arg1) / 4);
}

}
