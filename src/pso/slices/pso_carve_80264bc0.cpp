#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8026853C(s32, M2C_UNK);
M2C_UNK fn_802685C4(s32, M2C_UNK);

void TWindowMakeTeam__sub_80264BC0(void *arg0) {
    if ((s32) M2C_FIELD(arg0, u8 *, 0x1E) != 1) {
        fn_8026853C(M2C_FIELD(arg0, s32 *, 0x2C), 3);
        return;
    }
    fn_802685C4(M2C_FIELD(arg0, s32 *, 0x2C), 3);
}

}
