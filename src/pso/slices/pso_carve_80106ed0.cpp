#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TItemDrop__sub_801060F4();
s32 fn_8010DF68(void *);
extern u8 lbl_805DAAE0;

void fn_80106ED0(void *arg0, void *arg1) {
    u8 temp_r3;

    if ((TItemDrop__sub_801060F4() == 1) && ((u8) M2C_FIELD(arg1, u8 *, 0) == 0)) {
        if (fn_8010DF68(arg1) != 0) {
            M2C_FIELD(arg1, u8 *, 4) = (u8) (M2C_FIELD(arg1, u8 *, 4) | lbl_805DAAE0);
            return;
        }
        temp_r3 = M2C_FIELD(arg1, u8 *, 4);
        if (temp_r3 != 0) {
            M2C_FIELD(arg1, u8 *, 4) = (u8) (temp_r3 | lbl_805DAAE0);
        }
    }
}

}
