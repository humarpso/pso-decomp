#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80101CFC(M2C_UNK, M2C_UNK *);
s32 fn_801049C8(M2C_UNK *, s32);
u32 fn_801D5764(void *);
s32 TItemList__sub_801D5ABC(void *);
extern s32 lbl_805D5DF4;
extern s32 lbl_805D5DFC;

void fn_801D551C(void *arg0) {
    M2C_UNK sp8[7];
    void *var_r31;

    u32 temp;

    var_r31 = M2C_FIELD(arg0, void **, 0x14);
    while (var_r31 != NULL) {
        if ((TItemList__sub_801D5ABC(var_r31) != 0) && ((temp = fn_801D5764(var_r31)) != 0U)) {
            fn_80101CFC(temp, &sp8[0]);
            if (fn_801049C8(&sp8[0], lbl_805D5DFC) != 0) {
                lbl_805D5DF4 += 1;
            }
        }
        fn_801D551C(var_r31);
        var_r31 = M2C_FIELD(var_r31, void **, 0xC);
    }
}

}
