#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TItemData__sub_80104DAC(s32, u8 *);
s32 TItemData__sub_8010C52C(u8 *);
void *TItemData__sub_8010EA38(u8 *);

u8 fn_80104D0C(s32 arg0, u8 *arg1) {
    if (TItemData__sub_8010C52C(arg1) != 0) {
        return 1U;
    }
    if ((u8) *arg1 == 3) {
        if (M2C_FIELD(TItemData__sub_8010EA38(arg1), s32 *, 0x10) & 1) {
            return 1U;
        }
        return (u8) (TItemData__sub_80104DAC(arg0, arg1) != 0);
    }
    return (u8) (TItemData__sub_80104DAC(arg0, arg1) != 0);
}

}
