#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK fn_80294084(void *);

void TChCrEffFade__vt1(void *arg0) {
    s32 temp_r3;

    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) + M2C_FIELD(arg0, s32 *, 0x1C));
    fn_80294084(arg0);
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x24);
    if ((temp_r3 <= 0) || (temp_r3 >= (s32) M2C_FIELD(arg0, s32 *, 0x20))) {
        queue_destruction__7TObjectFv(arg0);
    }
}

}
