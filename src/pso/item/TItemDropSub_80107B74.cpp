#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TItemDropSub__sub_80107B74(void);

extern void *TItemDropSub__data_805D5478;

s32 TItemDropSub__sub_80107B74(void) {
    if ((void *) TItemDropSub__data_805D5478 != NULL) {
        return M2C_FIELD(TItemDropSub__data_805D5478, s32 *, 0x1C);
    }
    return 0xA;
}

}
