#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TBoss4DarkFalz__sub_8004B07C(s32);
M2C_UNK TBoss4DarkFalz__sub_8004B1BC(s32, M2C_UNK);
s32 TBoss4DarkFalz__sub_8004C1D4(u32);
extern u32 lbl_805D4D64;

void TBoss4DarkFalz__sub_8004C544(s32 arg0) {
    if (((u32) lbl_805D4D64 == 0U) || (TBoss4DarkFalz__sub_8004C1D4(lbl_805D4D64) == 3) || (TBoss4DarkFalz__sub_8004C1D4(lbl_805D4D64) == 2) || (TBoss4DarkFalz__sub_8004B07C(arg0) != 0)) {
        TBoss4DarkFalz__sub_8004B1BC(arg0, 0xE);
    }
}

}
