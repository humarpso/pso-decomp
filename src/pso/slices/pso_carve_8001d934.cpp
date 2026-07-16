#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *fn_803DE864(s32, M2C_UNK);

u8 *TLobby__sub_8001D934(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r4;
    u8 *temp_r3;
    u8 *temp_r5;

    M2C_FIELD(arg0, void **, 0) = fn_803DE864(arg3, 0x10);
    if ((void *) M2C_FIELD(arg0, void **, 0) != NULL) {
        M2C_FIELD(arg0, s32 *, 4) = arg3;
        temp_r4 = (arg2 + 0x1F) & 0xFFFFFFE0;
        M2C_FIELD(arg0, s32 *, 8) = temp_r4;
        temp_r3 = (unsigned char *) (M2C_FIELD(arg0, void **, 0));
        M2C_FIELD(arg0, void **, 0x2C) = temp_r3;
        temp_r5 = temp_r3 + 0x10;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x2C), void **, 0) = temp_r5;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x2C), s32 *, 4) = 0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x2C), s32 *, 8) = 0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x2C), s32 *, 0xC) = 0;
        M2C_FIELD(temp_r5, s32 *, 0) = 0;
        M2C_FIELD(temp_r5, void **, 4) = (void *) M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(temp_r5, s32 *, 8) = arg1;
        M2C_FIELD(temp_r5, s32 *, 0xC) = temp_r4;
    }
    return arg0;
}

}
