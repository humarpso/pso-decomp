#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8010069C(s32);
u8 TItemProShield__sub_8010B734();

void fn_8012F344(s32 arg0) {
    if (TItemProShield__sub_8010B734() == 5) {
        fn_8010069C(arg0);
    }
}

}
