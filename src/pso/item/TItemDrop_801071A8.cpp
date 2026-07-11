#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void calc_drop_item__9TItemDropFiPvi(s32 arg0, void *arg1, s32 arg2);
s8 TItemDrop__sub_80107790(s32, s32, s32, M2C_UNK, M2C_UNK);
s32 fn_801420EC(s32, M2C_UNK, M2C_UNK);

extern void *TItemDrop__data_805D5460;

void calc_drop_item__9TItemDropFiPvi(s32 arg0, void *arg1, s32 arg2) {
    if ((u8) M2C_FIELD(arg1, u8 *, 0) == 0) {
        M2C_FIELD(arg1, s8 *, 3) = TItemDrop__sub_80107790(arg0, M2C_FIELD(TItemDrop__data_805D5460, s32 *, 0xC), fn_801420EC(arg2, 0, 3), 9, 4);
    }
}

}
