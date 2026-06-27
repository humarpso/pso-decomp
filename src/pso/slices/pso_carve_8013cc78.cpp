#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_80019734(s32);
M2C_UNK fn_8013E980(s32, M2C_UNK);
M2C_UNK fn_8013E988(s32, M2C_UNK);

void fn_8013CC78(s32 arg0, s32 arg1, s32 arg2) {
    if (TObjPlayer__sub_80019734(arg1 + 0x828) != 0) {
        fn_8013E988(arg2, 0xA000);
        fn_8013E980(arg2, 0x70000000);
        return;
    }
    fn_8013E988(arg2, 0x8000);
    fn_8013E980(arg2, 0x60000000);
}

}
