#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

typedef struct { char pad[0x444]; struct { char b[0x18]; } arr[1]; } Foo;

M2C_UNK TBoss4Type2__sub_800542B0(void *, M2C_UNK);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);

void fn_80052BA4(u8 *arg0) {
    s32 temp_r0;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x398) == 0x2D) {
        TBoss3Volopt__sub_8022675C(0x4003AD11, &((Foo *) arg0)->arr[M2C_FIELD(arg0, s32 *, 0x3A8)], 0, 1);
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x398) - 1;
    M2C_FIELD(arg0, s32 *, 0x398) = temp_r0;
    if (temp_r0 < 0) {
        TBoss4Type2__sub_800542B0(arg0, 1);
    }
}

}
