#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create_shield_effect__14TItemProShieldFiUsUi(s32 arg0, u16 arg1, u32 arg2);

M2C_UNK __ct__14TItemEffShieldFv(u32, s32, u16, u32);
u32 __nw__7TObjectFUl(M2C_UNK);

void create_shield_effect__14TItemProShieldFiUsUi(s32 arg0, u16 arg1, u32 arg2) {
    u32 obj;
    if ((arg0 != 0) && ((u16) arg1 != 0xFFFF) && (arg2 != 0U) && ((obj = __nw__7TObjectFUl(0x48)) != 0U)) {
        __ct__14TItemEffShieldFv(obj, arg0, arg1, arg2);
    }
}

}
