#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TBoss4DarkFalz__sub_8004C1B4(void);
s32 TBoss4DarkFalz__sub_8004C1BC(void);

extern s32 lbl_805D4D60;

s32 TBoss4DarkFalz__sub_8004C1B4(void) {
    return lbl_805D4D60;
}

extern s32 lbl_805D4D5C;

s32 TBoss4DarkFalz__sub_8004C1BC(void) {
    return lbl_805D4D5C;
}

}
