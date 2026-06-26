#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8001A430();
M2C_UNK set_depth_buffer_settings_2__Fv();
M2C_UNK fn_80141A30();
M2C_UNK fn_80141F1C();
M2C_UNK fn_80141F50();
s32 fn_8022A564();
M2C_UNK fn_8032A1D0(void *);

void TAdMcSelectCursorGC__vt2(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x13C) == 1) {
        if (fn_8001A430() == 1) {
            return;
        }
        goto block_5;
    }
    if (fn_8022A564() == 0) {
        set_depth_buffer_settings_2__Fv();
block_5:
        fn_80141F50();
        fn_8032A1D0(arg0);
        fn_80141F1C();
        if ((s32) M2C_FIELD(arg0, s32 *, 0x13C) == 0) {
            fn_80141A30();
        }
    }
}

}
