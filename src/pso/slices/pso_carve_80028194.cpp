#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_800284B4(void *, M2C_UNK);

s32 fn_80028194(void *arg0) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0x32C) <= (s16) M2C_FIELD(arg0, s16 *, 0x680)) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3E4) == 1) {
            fn_800284B4(arg0, 0xA);
            return 1;
        }
        fn_800284B4(arg0, 9);
        return 1;
    }
    return 0;
}

}
