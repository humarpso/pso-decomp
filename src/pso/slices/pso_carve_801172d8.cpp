#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_800112A4(s32, s32);
u8 fn_8010B734();
s32 fn_8011724C(void *);
s32 fn_80117270(void *);
s32 fn_801172A4(void *);

void fn_801172D8(void *arg0) {
    s32 var_r31;
    u8 temp_r3;

    var_r31 = 0;
    temp_r3 = fn_8010B734();
    switch ((s32) temp_r3) {
    case 0:
        var_r31 = fn_801172A4(arg0);
        break;
    case 1:
        var_r31 = fn_80117270(arg0);
        break;
    case 2:
        var_r31 = fn_8011724C(arg0);
        break;
    }
    fn_800112A4(M2C_FIELD(arg0, s32 *, 0xF0), var_r31);
}

}
