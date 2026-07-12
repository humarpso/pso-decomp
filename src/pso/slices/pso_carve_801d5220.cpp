#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_801D4308(u32, s32);
u32 TObjPlayer__sub_801D5764(void *);
s32 TItemList__sub_801D5ABC(void *);
extern s32 lbl_805D5DF4;
extern s32 lbl_805D5E00;

void fn_801D5220(void *arg0) {
    void *var_r31;
    u32 temp;

    var_r31 = M2C_FIELD(arg0, void **, 0x14);
    while (var_r31 != NULL) {
        if ((TItemList__sub_801D5ABC(var_r31) != 0) && ((temp = TObjPlayer__sub_801D5764(var_r31)) != 0U) && (fn_801D4308(temp, lbl_805D5E00) != 0)) {
            lbl_805D5E00 += 0x1C;
            lbl_805D5DF4 += 1;
        }
        fn_801D5220(var_r31);
        var_r31 = M2C_FIELD(var_r31, void **, 0xC);
    }
}

}
