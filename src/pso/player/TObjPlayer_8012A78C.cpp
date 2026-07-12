#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_8012A78C(void *arg0);
s32 TItemProArmor__sub_80102C3C(void *);
M2C_UNK TObjPlayer__sub_80117E14(s32, s32, s32, M2C_UNK);
s32 alloc__13TItemProArmorFi(M2C_UNK);
M2C_UNK TObjPlayer__sub_80117DD8(s32, s32, s32, M2C_UNK);

void TObjPlayer__sub_8012A78C(void *arg0) {
    s32 temp_r0;
    s32 temp_r3;
    s32 temp_r3_2;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1F8);
    switch (temp_r0) {
    case 3:
        temp_r3 = alloc__13TItemProArmorFi(0x2C);
        if (temp_r3 != 0) {
            TObjPlayer__sub_80117E14(temp_r3, M2C_FIELD(arg0, s32 *, 0x174), TItemProArmor__sub_80102C3C(arg0), 0x5A);
        }
        return;
    case 4:
        temp_r3_2 = alloc__13TItemProArmorFi(0x2C);
        if (temp_r3_2 != 0) {
            TObjPlayer__sub_80117DD8(temp_r3_2, M2C_FIELD(arg0, s32 *, 0x174), TItemProArmor__sub_80102C3C(arg0), 0x5A);
        }
        break;
    }
}

}
