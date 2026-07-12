#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 TBoss8Dragon__sub_803D64DC(s32);
extern const f32 lbl_805D8B18;
extern const f32 lbl_805D8B60;
extern const f32 lbl_805D8B74;

f32 fn_8005416C(f32 farg0) {
    return lbl_805D8B60 * (lbl_805D8B18 - TBoss8Dragon__sub_803D64DC((s32) (lbl_805D8B74 * farg0)));
}

}
