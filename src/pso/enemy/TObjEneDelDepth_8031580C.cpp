#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__15TObjEneDelDepthFv(void *arg0, s16 arg1);
M2C_UNK TObjEneDelDepth__sub_80316644(s32, M2C_UNK);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__9TObjEnemyFv(void *, M2C_UNK);
M2C_UNK TObjEneGibbles__sub_80156720(void *);

extern M2C_UNK __vt__15TObjEneDelDepth[];

void *__dt__15TObjEneDelDepthFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TObjEneDelDepth;
        TObjEneGibbles__sub_80156720(arg0);
        M2C_FIELD(arg0, s32 *, 0x380) = 0;
        TObjEneDelDepth__sub_80316644(M2C_FIELD(arg0, s32 *, 0x37C), 1);
        M2C_FIELD(arg0, s32 *, 0x37C) = 0;
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
