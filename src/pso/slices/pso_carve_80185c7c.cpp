#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_800740FC(u32);
s32 fn_80132F2C(M2C_UNK, M2C_UNK);
M2C_UNK fn_80186AE4(u32);
M2C_UNK fn_80265C30(u32);
M2C_UNK fn_80265F60(u32);
M2C_UNK fn_80266200(u32, s32, M2C_UNK, M2C_UNK, M2C_UNK);
u32 fn_802664A8(M2C_UNK, s32, s16);
M2C_UNK fn_8026CBB8(M2C_UNK);

void fn_80185C7C(void *arg0, s16 arg1) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0xB0) == 0U) {
        M2C_FIELD(arg0, u32 *, 0xB0) = fn_802664A8(fn_8026CBB8(0x33), 1, arg1);
        fn_80266200(M2C_FIELD(arg0, u32 *, 0xB0), fn_80132F2C(9, 0x24), 0xA, 0, -1);
        fn_80186AE4(M2C_FIELD(arg0, u32 *, 0xB0));
        fn_800740FC(M2C_FIELD(arg0, u32 *, 0xB0));
        fn_80265F60(M2C_FIELD(arg0, u32 *, 0xB0));
        fn_80265C30(M2C_FIELD(arg0, u32 *, 0xB0));
        M2C_FIELD(arg0, s16 *, 0xB8) = arg1;
    }
}

}
