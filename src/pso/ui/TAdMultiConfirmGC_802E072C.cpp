#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_cursor_index__17TAdMultiConfirmGCFPvi(void *arg0, s32 arg1);

void set_cursor_index__17TAdMultiConfirmGCFPvi(void *arg0, s32 arg1) {
    s16 temp_r4;

    M2C_FIELD(arg0, s16 *, 0xB8) = (s16) (arg1 * 3);
    temp_r4 = M2C_FIELD(arg0, s16 *, 0xB8);
    if ((temp_r4 < 0) || (temp_r4 > 8)) {
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x154) & 2) {
        M2C_FIELD(arg0, s16 *, 0xB8) = (s16) (M2C_FIELD(arg0, s16 *, 0xB8) + 1);
        if ((s32) M2C_FIELD(arg0, u8 *, 0x151) == 6) {
            M2C_FIELD(arg0, s16 *, 0xB8) = (s16) (M2C_FIELD(arg0, s16 *, 0xB8) + 1);
        }
    }
}

}
