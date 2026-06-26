#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_802E195C(void *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_802E1BF4(void *);
M2C_UNK fn_802E1C6C();

void fn_802E3290(void *arg0) {
    fn_802E1C6C();
    fn_802E1BF4(arg0);
    if (M2C_FIELD(arg0, s32 *, 0x44) & 1) {
        fn_802E195C(arg0, 0, -1, -1, -1);
    }
}

}
