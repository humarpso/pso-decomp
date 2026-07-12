#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TItemData__sub_8010CE1C(void *, u8);
s32 TItemData__sub_8010CE70(void *, u8);
void TItemProArmor__sub_801178A8(void* p, void* q);
u8 TItemProArmor__sub_801178CC(void* p);

void TItemProArmor__sub_80117908(void *arg0, void *arg1) {
    M2C_FIELD(arg1, u8 *, 5) = (u8) M2C_FIELD(arg0, u8 *, 0x192);
    TItemData__sub_8010CE70(arg1, M2C_FIELD(arg0, u8 *, 0x193));
    TItemData__sub_8010CE1C(arg1, M2C_FIELD(arg0, u8 *, 0x194));
}

}
