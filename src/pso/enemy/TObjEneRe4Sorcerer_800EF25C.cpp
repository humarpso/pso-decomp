#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneRe4Sorcerer__sub_800EF25C(u8 *arg0);
M2C_UNK TOTrapAncient01__sub_80226578(M2C_UNK, void *, void *, M2C_UNK, M2C_UNK);
M2C_UNK fn_800F5EB4(void *, M2C_UNK);

void TObjEneRe4Sorcerer__sub_800EF25C(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3E8) == 0) {
        TOTrapAncient01__sub_80226578(fn_800F5EB4(arg0, 0x4003A812), arg0, arg0 + 0x38, 0, 0);
        return;
    }
    TOTrapAncient01__sub_80226578(fn_800F5EB4(arg0, 0x4003AB13), arg0, arg0 + 0x38, 0, 0);
}

}
