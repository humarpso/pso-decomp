#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80244A14(void *);
M2C_UNK fn_802E11BC(void *);

void fn_802E1BF4(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x50) != 0U) {
        fn_80244A14(M2C_FIELD(arg0, void **, 0x50));
        M2C_FIELD(arg0, u32 *, 0x50) = 0U;
        M2C_FIELD(arg0, s32 *, 0x60) = 7;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x54) != 0U) {
        fn_80244A14(M2C_FIELD(arg0, void **, 0x54));
        M2C_FIELD(arg0, u32 *, 0x54) = 0U;
        M2C_FIELD(arg0, s32 *, 0x60) = 7;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x58) != 0U) {
        fn_802E11BC(M2C_FIELD(arg0, void **, 0x58));
    }
}

}
