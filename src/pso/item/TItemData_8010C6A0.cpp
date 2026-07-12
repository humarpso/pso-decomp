#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_usable__9TItemDataFPv(void *arg0);
s32 TItemData__sub_8010CC68();

s32 is_usable__9TItemDataFPv(void *arg0) {
    u8 temp_r0;

    if (TItemData__sub_8010CC68() == 0) {
        temp_r0 = M2C_FIELD(arg0, u8 *, 0);
        if ((temp_r0 != 2) && (temp_r0 != 4) && (M2C_FIELD(arg0, u8 *, 0xA) & 0x80)) {
            return 1;
        }
    }
    return 0;
}

}
