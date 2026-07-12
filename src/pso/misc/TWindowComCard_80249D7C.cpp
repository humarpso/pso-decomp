#include "types.h"
#pragma fp_contract on
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowComCard__sub_80249D7C(u8 *arg0, s32 arg1);

extern M2C_UNK lbl_8044EBC0;
extern const f32 lbl_805DCBD0;

void TWindowComCard__sub_80249D7C(u8 *arg0, s32 arg1) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x6C) != arg1) {
        M2C_FIELD(arg0, s32 *, 0x6C) = arg1;
        M2C_FIELD(arg0, f32 *, 0x30) = (f32) ((lbl_805DCBD0 * (f32) M2C_FIELD(arg0, s32 *, 0x6C)) + (M2C_FIELD(M2C_FIELD(arg0, void **, 0x60), f32 *, 0x40) + M2C_FIELD(arg0, f32 *, 0x64)));
        M2C_FIELD(arg0, s32 *, 0x50) = 0xF;
    }
}

}
