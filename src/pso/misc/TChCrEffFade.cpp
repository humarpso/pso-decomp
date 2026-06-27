#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TChCrEffFade__vt2(void *arg0);

M2C_UNK fn_80068EF0();
M2C_UNK fn_80069024();
M2C_UNK fn_80293E58(void *, f32);
M2C_UNK fn_80293F98(void *, f32);

void TChCrEffFade__vt2(void *arg0) {
    f32 temp_f0;
    s32 temp_r0;

    fn_80069024();
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x2C);
    switch (temp_r0) {
    case 0:
        fn_80293F98(arg0, M2C_FIELD(arg0, f32 *, 0x28));
        break;
    case 1:
        fn_80293E58(arg0, M2C_FIELD(arg0, f32 *, 0x28));
        temp_f0 = M2C_FIELD(arg0, f32 *, 0x28);
        fn_80293F98(arg0, temp_f0 * temp_f0);
        break;
    }
    fn_80068EF0();
}

}
