#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TBoss8Dragon__sub_802FAAB0(void *, s32, M2C_UNK);
s32 TBoss8Dragon__sub_802FC88C(void *);

u8 TBoss8Dragon__sub_802FAB58(void *arg0) {
    u8 var_r31;

    var_r31 = 0;
    if ((TBoss8Dragon__sub_802FAAB0(arg0, M2C_FIELD(M2C_FIELD(arg0, void **, 0x6D8), s32 *, 8), 0x400) != 0) && (TBoss8Dragon__sub_802FC88C(arg0) != 0)) {
        var_r31 = 1;
    }
    return (u8) var_r31;
}

}
