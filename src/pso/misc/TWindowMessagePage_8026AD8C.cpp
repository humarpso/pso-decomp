#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowMessagePage__sub_8026AD8C(void *arg0);
s32 TMCFormatSequence__sub_802693B4();

s32 TWindowMessagePage__sub_8026AD8C(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x94) != 0U) {
        return 0;
    }
    return TMCFormatSequence__sub_802693B4() != 0 ? 1 : 0;
}

}
