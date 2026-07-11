#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_visible_flags__15TWindowHelpItemFPv(u16 *arg0);
M2C_UNK set_flag4_and_field1c__15TWindowHelpItemFPvi(u16 *, M2C_UNK);
M2C_UNK set_flag8_and_field20__15TWindowHelpItemFPvi(u16 *, M2C_UNK);

void update_visible_flags__15TWindowHelpItemFPv(u16 *arg0) {
    s32 temp_r3;
    u16 temp_r0;

    temp_r0 = *arg0;
    temp_r3 = temp_r0 & 4;
    if ((temp_r3 != 0) || (temp_r0 & 8)) {
        if (temp_r3 == 0) {
            set_flag4_and_field1c__15TWindowHelpItemFPvi(arg0, 0);
        }
        if (!(*arg0 & 8)) {
            set_flag8_and_field20__15TWindowHelpItemFPvi(arg0, 0);
        }
    }
}

}
