#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TEffGuard__ct(u32, s32);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, s32, M2C_UNK, M2C_UNK);
u32 __nw__7TObjectFUl(M2C_UNK);

void fn_800849A0(s32 arg0) {
    u32 tmp;

    tmp = __nw__7TObjectFUl(0x74);
    if (tmp != 0U) {
        TEffGuard__ct(tmp, arg0);
    }
    TBoss3Volopt__sub_8022675C(0x4001AA00, arg0, 0, 0);
}

}
