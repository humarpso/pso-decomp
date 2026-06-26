#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80100564(void *, M2C_UNK);
M2C_UNK fn_80112E20(void *, M2C_UNK);
M2C_UNK TItemMag__sub_80112EE4(void *);
M2C_UNK fn_80112F44(void *);
M2C_UNK fn_80112FB4();

void TItemMag__sub_80113088(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1CC) == 0) {
        fn_80112FB4();
    }
    TItemMag__sub_80112EE4(arg0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1D0) <= (s32) M2C_FIELD(arg0, s32 *, 0x1CC)) {
        fn_80112F44(arg0);
        fn_80112E20(arg0, 1);
    }
    if ((M2C_FIELD(arg0, s32 *, 0x1CC) % 60) == 0) {
        fn_80100564(arg0, 0x6C);
    }
}

}
