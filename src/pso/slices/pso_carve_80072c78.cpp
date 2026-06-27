#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8006EF6C(M2C_UNK);
M2C_UNK fn_8007340C(u32);
M2C_UNK TWindowSubComCard__sub_80244A14(u32);
M2C_UNK fn_80265C10(u32, M2C_UNK);
M2C_UNK fn_80265F60(u32);
M2C_UNK TObjCityMainWarp__sub_80266354(u32, s32, M2C_UNK, M2C_UNK);
u32 fn_80266508(M2C_UNK, M2C_UNK);
M2C_UNK fn_8026CBB8(M2C_UNK);

void fn_80072C78(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
        TWindowSubComCard__sub_80244A14(M2C_FIELD(arg0, u32 *, 0x2C));
        M2C_FIELD(arg0, u32 *, 0x2C) = 0U;
    }
    M2C_FIELD(arg0, u32 *, 0x2C) = fn_80266508(fn_8026CBB8(0x3A), 3);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
        TObjCityMainWarp__sub_80266354(M2C_FIELD(arg0, u32 *, 0x2C), fn_8006EF6C(0x5B), 5, 0);
        TObjCityMainWarp__sub_80266354(M2C_FIELD(arg0, u32 *, 0x2C), fn_8006EF6C(0x5C), 5, 1);
        TObjCityMainWarp__sub_80266354(M2C_FIELD(arg0, u32 *, 0x2C), fn_8006EF6C(0x5D), 5, 2);
        fn_80265F60(M2C_FIELD(arg0, u32 *, 0x2C));
        fn_8007340C(M2C_FIELD(arg0, u32 *, 0x2C));
        fn_80265C10(M2C_FIELD(arg0, u32 *, 0x2C), 2);
    }
}

}
