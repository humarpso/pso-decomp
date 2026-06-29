#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 TItemProShield__sub_8010B734();
s32 fn_80121200();
M2C_UNK TOMonitorMachine01__sub_803D8B5C(M2C_UNK, f32, f32, f32);
extern f32 lbl_805DAEE0;

void fn_8012C180(void *arg0) {
    if ((TItemProShield__sub_8010B734() == 5) && (fn_80121200() == 3)) {
        TOMonitorMachine01__sub_803D8B5C(0, lbl_805DAEE0, M2C_FIELD(arg0, f32 *, 0x1F8), lbl_805DAEE0);
    }
}

}
