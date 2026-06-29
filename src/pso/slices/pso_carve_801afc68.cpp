#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 fn_80014108(s32, s32, f32);
s32 obj_isState2_324();
extern f32 lbl_805DC278;

f32 TObjPlayer__vt20(s32 arg0, s32 arg1, f32 farg0) {
    if (obj_isState2_324() != 0) {
        return lbl_805DC278;
    }
    return fn_80014108(arg0, arg1, farg0);
}

}
