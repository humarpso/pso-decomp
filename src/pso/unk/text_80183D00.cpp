#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 TObjCity_Season_EasterEgg__sub_80184A08(void *, s32, f32);
extern const f32 lbl_805DBC5C;
void fn_80183E08(u8 *arg0);
}

extern "C" {

void fn_80183E08(u8 *arg0) {
    s32 temp_r3;
    if (TObjCity_Season_EasterEgg__sub_80184A08(arg0, 0, lbl_805DBC5C) != 0) {
        M2C_FIELD(arg0, s32 *, 0xB4) = (s32) (M2C_FIELD(arg0, s32 *, 0xB4) + 2);
        temp_r3 = M2C_FIELD(arg0, s32 *, 0xB4);
        if (temp_r3 >= 0xFF) {
            M2C_FIELD(arg0, s32 *, 0xB4) = (s32) (temp_r3 - 0xFF);
        }
    }
}

}
