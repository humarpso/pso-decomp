#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TObjPlayer__sub_8012CA78(void *arg0, M2C_UNK arg1, void *arg2);
M2C_UNK TObjPlayer__sub_80120D50();
M2C_UNK TObjPlayer__sub_801210B0(void *, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TObjPlayer__sub_801225F8(void *, M2C_UNK);

extern M2C_UNK lbl_804A5458[];

void *TObjPlayer__sub_8012CA78(void *arg0, M2C_UNK arg1, void *arg2) {
    u8 temp_r0;

    TObjPlayer__sub_80120D50();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A5458;
    temp_r0 = M2C_FIELD(arg2, u8 *, 2);
    switch ((s32) temp_r0) {
    case 5:
    case 6:
        TObjPlayer__sub_801210B0(arg0, 0, 3, 2);
        break;
    case 4:
        TObjPlayer__sub_801210B0(arg0, 0, 2, 1);
        break;
    default:
        TObjPlayer__sub_801210B0(arg0, 0, 2, 3);
        break;
    }
    if ((u8) M2C_FIELD(arg2, u8 *, 2) >= 4U) {
        TObjPlayer__sub_801225F8(arg0, -1);
    }
    return arg0;
}

}
