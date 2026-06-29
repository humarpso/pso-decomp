#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 TItemProShield__sub_8010B734();
M2C_UNK fn_80120908(s32);
M2C_UNK fn_80120BBC(s32, M2C_UNK);
extern s32 lbl_805D5518;

void fn_80126990(s32 arg0) {
    if (TItemProShield__sub_8010B734() == 3) {
        lbl_805D5518 = 0;
        fn_80120908(arg0);
        lbl_805D5518 = 1;
        fn_80120BBC(arg0, 0x23);
    }
}

}
