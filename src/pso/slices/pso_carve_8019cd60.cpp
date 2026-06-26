#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_800740FC(u32);
s32 fn_801329B0();
M2C_UNK fn_80186AE4(u32);
s32 fn_80186AF4();
M2C_UNK fn_8019DD14(s32, M2C_UNK);
u32 fn_801BA74C(u16);
M2C_UNK fn_80207718(s32);
M2C_UNK fn_80265C30(u32);
M2C_UNK fn_80265F60(u32);
M2C_UNK fn_80266200(u32, s32, M2C_UNK, M2C_UNK, M2C_UNK);
u32 fn_802664A8(M2C_UNK, s32, u16);
M2C_UNK fn_8026CBB8(M2C_UNK);
s32 fn_8030A7B0();

void fn_8019CD60(void *arg0, u16 arg1) {
    u32 temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0xB0) == 0U) {
        M2C_FIELD(arg0, u32 *, 0xB0) = fn_802664A8(fn_8026CBB8(0x33), 1, arg1);
        if (fn_8030A7B0() == 1) {
            fn_80266200(M2C_FIELD(arg0, u32 *, 0xB0), fn_80186AF4(), 2, 0, -1);
        } else {
            fn_80207718(M2C_FIELD(arg0, s32 *, 0xBC));
            fn_80266200(M2C_FIELD(arg0, u32 *, 0xB0), fn_801329B0(), 2, 0, -1);
        }
        fn_80265F60(M2C_FIELD(arg0, u32 *, 0xB0));
        fn_80265C30(M2C_FIELD(arg0, u32 *, 0xB0));
        fn_80186AE4(M2C_FIELD(arg0, u32 *, 0xB0));
        fn_800740FC(M2C_FIELD(arg0, u32 *, 0xB0));
        M2C_FIELD(arg0, u16 *, 0xB8) = arg1;
        temp_r3 = fn_801BA74C(M2C_FIELD(arg0, u16 *, 0xB8));
        if (temp_r3 != 0U) {
            fn_8019DD14(temp_r3 + 0x550, 4);
        }
    }
}

}
