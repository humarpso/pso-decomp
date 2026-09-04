#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void decode_font_data__9TLanguageFPvPvii(void *arg0, void *arg1, s32 arg2, s32 arg3);
M2C_UNK draw_string__9TLanguageFPvPvi();
M2C_UNK fn_8038A058();
M2C_UNK fn_803DB05C(s32, u16, s16, u16 *);

M2C_UNK DCStoreRange(u16 *, M2C_UNK);

void decode_font_data__9TLanguageFPvPvii(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    s32 n;
    s32 i;
    u16 *p;
    u16 temp_r3;

    draw_string__9TLanguageFPvPvi();
    n = M2C_FIELD(arg1, s16 *, 0xA);
    p = M2C_FIELD(arg1, u16 **, 0);
    for (i = n; i > 0; i--) {
        temp_r3 = *p;
        if (temp_r3 & 0x8000) {
            *p = temp_r3 ^ 0x7FFF;
        } else {
            *p = temp_r3 ^ 0xFFF;
            *p |= 0x7000;
        }
        p += 1;
    }
    DCStoreRange(M2C_FIELD(arg1, u16 **, 0), 0x40000);
    fn_803DB05C(arg3, M2C_FIELD(arg1, u16 *, 4), M2C_FIELD(arg1, s16 *, 0xA), M2C_FIELD(arg1, u16 **, 0));
    fn_8038A058();
}

}
