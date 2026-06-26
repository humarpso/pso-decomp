#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80082CBC(void *);
M2C_UNK fn_80082CCC(void *);
s32 fn_802F3638();

void fn_8030BD7C(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x4C) >= fn_802F3638()) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x20) == 1) {
            if ((u32) M2C_FIELD(arg0, u32 *, 0x50) != 0U) {
                fn_80082CBC(M2C_FIELD(arg0, void **, 0x50));
            }
            M2C_FIELD(arg0, s32 *, 0x20) = 0;
        }
    } else if ((s32) M2C_FIELD(arg0, s32 *, 0x20) == 0) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x50) != 0U) {
            fn_80082CCC(M2C_FIELD(arg0, void **, 0x50));
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 1;
    }
}

}
