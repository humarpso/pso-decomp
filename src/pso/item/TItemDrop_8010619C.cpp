#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_drop_index__9TItemDropFPvPv(void *arg0, void *arg1);
s8 TItemDrop__sub_80107790(s32, s32, s32, s32, s32);

extern void *lbl_805D5460;

void set_drop_index__9TItemDropFPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg1, s8 *, 5) = TItemDrop__sub_80107790((s32)arg0, M2C_FIELD(lbl_805D5460, s32 *, 0x14), 0, 5, 1);
}

}
