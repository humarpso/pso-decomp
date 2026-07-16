#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 TBoss5GryphonLightningWing__sub_80324CEC(void);
f64 fn_803A2C6C();

f32 TBoss5GryphonLightningWing__sub_80324CEC(void) {
    return (f32) fn_803A2C6C();
}

}
