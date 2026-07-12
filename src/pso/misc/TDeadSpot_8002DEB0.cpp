#include "types.h"
#pragma fp_contract on
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 TDeadSpot__sub_8002DEB0(f32 farg0, f32 farg1);
s32 TOBoss4Rock__sub_8039C880();

extern M2C_UNK lbl_804355D0;
extern const f32 lbl_805D818C;

f32 TDeadSpot__sub_8002DEB0(f32 farg0, f32 farg1) {
    return ((farg1 - farg0) * (lbl_805D818C * (f32) TOBoss4Rock__sub_8039C880())) + farg0;
}

}
