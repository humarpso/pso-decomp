#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 fn_803D64DC(s32);
extern const f32 lbl_805D8BD8;
extern const f32 lbl_805D8BFC;
extern const f32 lbl_805D8C00;

f32 TBoss4Type2__sub_80056E64(f32 farg0) {
    return lbl_805D8BFC * (lbl_805D8BD8 - fn_803D64DC((s32) (lbl_805D8C00 * farg0)));
}

}
