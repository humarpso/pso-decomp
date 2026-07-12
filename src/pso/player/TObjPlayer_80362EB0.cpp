#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create_cane_if_ready__10TObjPlayerFi(s32 arg0);
s32 TObjPlayer__sub_8011F63C();
M2C_UNK create_item_eff_cane__10TObjPlayerFiUiii(s32, s32, M2C_UNK, M2C_UNK);

extern s32 tl_05;

void create_cane_if_ready__10TObjPlayerFi(s32 arg0) {
    if (TObjPlayer__sub_8011F63C() == 0) {
        create_item_eff_cane__10TObjPlayerFiUiii(tl_05, arg0, -1, 0x1BD);
    }
}

}
