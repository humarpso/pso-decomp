#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TItemData__sub_8010C52C();

s32 fn_8010EC88(void *arg0) {
    if (((u8) M2C_FIELD(arg0, u8 *, 0) == 0) && (M2C_FIELD(arg0, u8 *, 4) & 0x80)) {
        return TItemData__sub_8010C52C() != 0 ? 1 : 0;
    }
    return 1;
}

}
