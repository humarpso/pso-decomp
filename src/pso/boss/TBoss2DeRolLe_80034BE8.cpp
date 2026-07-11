#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss2DeRolLe__sub_80034BE8(void *arg0);

extern const f32 lbl_805D82B4;
extern const f32 lbl_805D82C0;
extern const f32 lbl_805D82E4;
extern const f32 lbl_805D82FC;

void TBoss2DeRolLe__sub_80034BE8(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x654) == 0) {
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_805D82C0;
        M2C_FIELD(arg0, s32 *, 0x64) = 0x500;
    } else {
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_805D82B4;
        M2C_FIELD(arg0, s32 *, 0x64) = -0x500;
    }
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) lbl_805D82E4;
    M2C_FIELD(arg0, f32 *, 0x6A4) = (f32) lbl_805D82FC;
}

}
