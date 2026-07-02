#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowEffectParty__sub_8024F744(void *arg0, void *arg1);
f32 fn_8024CB74(s32);

extern s32 lbl_805D53A0;
extern f32 lbl_805DCCC0;

void TWindowEffectParty__sub_8024F744(void *arg0, void *arg1) {
    M2C_FIELD(arg1, f32 *, 0) = (f32) M2C_FIELD(arg0, f32 *, 0x20);
    M2C_FIELD(arg1, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x24);
    M2C_FIELD(arg1, f32 *, 8) = (f32) (lbl_805DCCC0 / fn_8024CB74(lbl_805D53A0));
}

}
