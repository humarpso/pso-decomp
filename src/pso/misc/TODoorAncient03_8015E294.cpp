#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TODoorAncient03__vt13(u8 *arg0);
void TODoorAncient03__vt15(u8 *arg0);
M2C_UNK fn_80154764(void *, M2C_UNK, M2C_UNK);
M2C_UNK set_indexed_flags(void *, M2C_UNK, M2C_UNK);
s32 fn_80158360(f32);
M2C_UNK fn_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);

extern const f32 lbl_805DB3F0;

void TODoorAncient03__vt15(u8 *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0xD0) & 1) || (fn_80158360(lbl_805DB3F0) == 0)) {
        M2C_FIELD(arg0, s32 *, 0xAC) = 3;
        fn_80154764(arg0, 0, 8);
        fn_8022675C(0x4004B708, arg0 + 0x38, 0, 0);
    }
}

extern const f32 lbl_805DB3F4;

void TODoorAncient03__vt13(u8 *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0xD0) & 1) && (fn_80158360(lbl_805DB3F4) != 0)) {
        M2C_FIELD(arg0, s32 *, 0xAC) = 1;
        set_indexed_flags(arg0, 0, 8);
        fn_8022675C(0x4004B708, arg0 + 0x38, 0, 0);
    }
}

}
