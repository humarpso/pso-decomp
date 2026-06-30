#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80019690();
u32 fn_800F6A44();
M2C_UNK fn_802F3C84(u32, s32);
extern u32 lbl_805D6978;

bool fn_802F36DC(void) {
    s32 i;
    s32 count;

    if (fn_80019690() != 0) {
        return 1;
    }
    if (lbl_805D6978 == 0U) {
        return 0;
    }
    count = 0;
    i = 0;
    do {
        fn_802F3C84(lbl_805D6978, i);
        if (fn_800F6A44() != 0U) {
            count += 1;
        }
        i += 1;
    } while (i < 6);
    return count >= 3;
}

}
