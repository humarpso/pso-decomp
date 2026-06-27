#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TItemProArmor__sub_80102C3C(void *);
M2C_UNK fn_80117E14(s32, u32, s32, M2C_UNK);
s32 TItemProArmor__sub_80364300(M2C_UNK);

void fn_8012F098(void *arg0) {
    s32 temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x174) != 0U) {
        temp_r3 = TItemProArmor__sub_80364300(0x2C);
        if (temp_r3 != 0) {
            fn_80117E14(temp_r3, M2C_FIELD(arg0, u32 *, 0x174), TItemProArmor__sub_80102C3C(arg0), 0x5A);
        }
    }
}

}
