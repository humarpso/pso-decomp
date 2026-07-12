#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void count_items_recursive__10TObjPlayerFPv(void *arg0);
s32 is_item_valid__9TItemListFi(void *);
M2C_UNK copy_to_item_data__5TItemFPvPv(M2C_UNK, M2C_UNK *);
u32 get_owner_if_alive__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801049C8(M2C_UNK *, s32);

extern s32 lbl_805D5DF4;
extern s32 lbl_805D5DFC;

void count_items_recursive__10TObjPlayerFPv(void *arg0) {
    M2C_UNK sp8[7];
    void *var_r31;

    u32 temp;

    var_r31 = M2C_FIELD(arg0, void **, 0x14);
    while (var_r31 != NULL) {
        if ((is_item_valid__9TItemListFi(var_r31) != 0) && ((temp = get_owner_if_alive__10TObjPlayerFPv(var_r31)) != 0U)) {
            copy_to_item_data__5TItemFPvPv(temp, &sp8[0]);
            if (TObjPlayer__sub_801049C8(&sp8[0], lbl_805D5DFC) != 0) {
                lbl_805D5DF4 += 1;
            }
        }
        count_items_recursive__10TObjPlayerFPv(var_r31);
        var_r31 = M2C_FIELD(var_r31, void **, 0xC);
    }
}

}
