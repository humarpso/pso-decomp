#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TItemMenuCtrl__sub_801059E8(s32 arg0);
s32 fn_8001BEF8(s32, s32);

extern u32 TItemMenuCtrl__data_805D54C0;

s32 TItemMenuCtrl__sub_801059E8(s32 arg0) {
    if ((u32) TItemMenuCtrl__data_805D54C0 != 0U) {
        return fn_8001BEF8(TItemMenuCtrl__data_805D54C0 + 0x1C, 1 << arg0);
    }
    return 0;
}

}
