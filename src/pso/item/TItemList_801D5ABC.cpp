#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 TItemList__sub_801D5ABC(s32 arg0);
s32 all_parents_unqueued_for_destruction__7TObjectFv(s32);
s32 fn_8003F3C8(s32, s32);

extern s32 lbl_805D3568;

u8 TItemList__sub_801D5ABC(s32 arg0) {
    int var_r31;

    var_r31 = 0;
    if ((fn_8003F3C8(arg0, lbl_805D3568) != 0) && (all_parents_unqueued_for_destruction__7TObjectFv(arg0) != 0)) {
        var_r31 = 1;
    }
    return (u8)var_r31;
}

}
