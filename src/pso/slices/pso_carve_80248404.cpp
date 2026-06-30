#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80248088(s32, void *, s32);
M2C_UNK fn_80248324(s32, u16, s32);
M2C_UNK fn_802483C8(s32, u8);

void fn_80248404(s32 arg0, void *arg1) {
    s32 i;
    s32 j;
    s32 off;

    fn_802483C8(arg0, (u8) M2C_FIELD(arg1, s32 *, 0));
    for (i = 0; i < 4; i += 1) {
        fn_80248324(arg0, ((u16 *)arg1)[i + 2], i);
    }
    j = 0;
    off = 0;
    do {
        fn_80248088(arg0, (s8 *)arg1 + off + 0xC, j);
        off += 4;
        j += 1;
    } while (j < 0xC);
}

}
