#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TItem__sub_80101CFC(void *, void *);
void TItemData__sub_8010CC68(void *);

void fn_801013BC(void *arg0) {
    M2C_UNK sp8[4];

    TItem__sub_80101CFC(arg0, &sp8);
    TItemData__sub_8010CC68(&sp8);
}

}
