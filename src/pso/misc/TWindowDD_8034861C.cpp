#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_state__9TWindowDDFv(void);
M2C_UNK fn_80344980();
M2C_UNK fn_80344F54();
M2C_UNK fn_80345608();
M2C_UNK fn_80345C64();
M2C_UNK fn_803461CC();

extern s32 lbl_805D6E08;

void update_state__9TWindowDDFv(void) {
    switch ((s32) lbl_805D6E08) {
    case 0:
        fn_803461CC();
        return;
    default:
        fn_80345C64();
        return;
    case 4:
        fn_80345608();
        return;
    case 2:
        fn_80344F54();
        return;
    case 3:
        fn_80344980();
        return;
    }
}

}
