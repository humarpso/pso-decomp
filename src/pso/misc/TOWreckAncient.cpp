#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__14TOWreckAncientFv(void *arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK fn_80156720(void *);
M2C_UNK fn_80156990(void *, M2C_UNK);

extern M2C_UNK __vt__14TOWreckAncient[];

void *__dt__14TOWreckAncientFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TOWreckAncient;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        fn_80156720(arg0);
        fn_80156990(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
