#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f64 fn_80019760(f32, f32);
M2C_UNK fn_8005F968(void *, s32, s32);
M2C_UNK TObjEneDD__sub_800B99D8();
extern const f64 lbl_80437EB0;

void fn_8005F904(void *arg0, s32 arg1) {
    TObjEneDD__sub_800B99D8();
    fn_8005F968(arg0, arg1, (s32) (lbl_80437EB0 * fn_80019760(M2C_FIELD(arg0, f32 *, 0x3A0), M2C_FIELD(arg0, f32 *, 0x3A8))));
}

}
