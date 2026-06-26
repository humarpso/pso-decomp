#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void fn_800D0DBC(void *arg0, f32 farg0) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;

    temp_f2 = M2C_FIELD(arg0, f32 *, 0x498);
    temp_f0 = M2C_FIELD(arg0, f32 *, 0x494);
    if (temp_f2 != temp_f0) {
        if (temp_f2 > temp_f0) {
            M2C_FIELD(arg0, f32 *, 0x498) = (f32) (temp_f2 - farg0);
            if (M2C_FIELD(arg0, f32 *, 0x498) < M2C_FIELD(arg0, f32 *, 0x494)) {
                M2C_FIELD(arg0, f32 *, 0x498) = M2C_FIELD(arg0, f32 *, 0x494);
            }
        } else {
            M2C_FIELD(arg0, f32 *, 0x498) = (f32) (temp_f2 + farg0);
            if (M2C_FIELD(arg0, f32 *, 0x498) > M2C_FIELD(arg0, f32 *, 0x494)) {
                M2C_FIELD(arg0, f32 *, 0x498) = M2C_FIELD(arg0, f32 *, 0x494);
            }
        }
    }
}

}
