#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdDialingGC__sub_80328A70(void);
M2C_UNK fn_8013ADBC(M2C_UNK);
M2C_UNK fn_80145778(f32, f32);

extern const f32 lbl_805DF6EC;
extern const f32 lbl_805DF6F0;

void TAdDialingGC__sub_80328A70(void) {
    fn_8013ADBC(0);
    fn_80145778(lbl_805DF6EC, lbl_805DF6F0);
}

}
