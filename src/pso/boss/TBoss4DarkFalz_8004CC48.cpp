#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss4DarkFalz__sub_8004CC48(s32 arg0);
void TBoss4DarkFalz__sub_8004CC98(s32 arg0);
s32 TBoss4DarkFalz__sub_8004B07C(s32);
M2C_UNK TBoss4DarkFalz__sub_8004B1BC(s32, M2C_UNK);
s32 TBoss4DarkFalz__sub_8004C1E4(u32);
M2C_UNK TOTrapAncient01__sub_80226578(M2C_UNK, s32, M2C_UNK, M2C_UNK, M2C_UNK);
s32 fn_8004D990();

void TBoss4DarkFalz__sub_8004CC48(s32 arg0) {
    if (fn_8004D990() > 0) {
        TOTrapAncient01__sub_80226578(0x4003A30A, arg0, 0, -0x20, 2);
    }
}

extern u32 lbl_805D4D5C;

void TBoss4DarkFalz__sub_8004CC98(s32 arg0) {
    if (((u32) lbl_805D4D5C == 0U) || (TBoss4DarkFalz__sub_8004C1E4(lbl_805D4D5C) == 3) || (TBoss4DarkFalz__sub_8004C1E4(lbl_805D4D5C) == 4) || (TBoss4DarkFalz__sub_8004B07C(arg0) != 0)) {
        TBoss4DarkFalz__sub_8004B1BC(arg0, 7);
    }
}

}
