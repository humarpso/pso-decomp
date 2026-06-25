#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_803154A8(void *, M2C_UNK);
s32 fn_8031624C();

void fn_80313C64(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
        if (fn_8031624C() != 0) {
            fn_803154A8(arg0, 7);
            return;
        }
        fn_803154A8(arg0, 6);
    }
}

}
