#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 TOBoss4Rock__sub_8039C880();
extern M2C_UNK lbl_80478DF0;
extern const f32 lbl_805DFE40;
extern const f32 lbl_805DFE44;
extern const f32 lbl_805DFE48;

void fn_803509E4(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x98, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0xA4) = (f32) lbl_805DFE40;
    M2C_FIELD(arg0, f32 *, 0xA8) = (f32) lbl_805DFE40;
    M2C_FIELD(arg0, f32 *, 0xAC) = (f32) lbl_805DFE40;
    M2C_FIELD(arg0, f32 *, 0xB0) = (f32) (lbl_805DFE44 * (lbl_805DFE48 * (f32) TOBoss4Rock__sub_8039C880()));
    M2C_FIELD(arg0, f32 *, 0xB8) = (f32) lbl_805DFE40;
    M2C_FIELD(arg0, s8 *, 0xC0) = 0;
    M2C_FIELD(arg0, s8 *, 0xC1) = 0;
    M2C_FIELD(arg0, s16 *, 0xBC) = 0x1E;
    M2C_FIELD(arg0, s16 *, 0xBE) = 0;
}

}
