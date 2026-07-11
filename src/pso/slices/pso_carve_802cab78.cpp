#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 TObjPlayer__sub_80014108();
M2C_UNK fn_8001622C(void *, void *);
M2C_UNK fn_80040B68(void *, M2C_UNK);
extern const f32 lbl_805DE660;

f32 fn_802CAB78(u8 *arg0) {
    f32 var_f31;

    var_f31 = lbl_805DE660;
    if (M2C_FIELD(arg0, s32 *, 0x388) & 0x80000) {
        fn_8001622C(arg0, arg0 + 0x2FC);
        fn_80040B68(arg0, 0xA);
    } else {
        var_f31 = TObjPlayer__sub_80014108();
    }
    return var_f31;
}

}
