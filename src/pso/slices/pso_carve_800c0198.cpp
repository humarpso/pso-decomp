#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TObjPlayer__sub_80011734(void *, M2C_UNK, f32);
M2C_UNK TObjPlayer__sub_80017E6C(void *);
M2C_UNK fn_800C20B0();
M2C_UNK fn_80143504(void *);
M2C_UNK TObjPlayer__sub_80154E3C(void *);
extern const f32 lbl_805D9F24;
extern const f32 lbl_805D9F2C;
extern const f32 lbl_805D9F4C;

void fn_800C0198(void *arg0) {
    fn_800C20B0();
    fn_80143504(arg0);
    if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800000)) {
        TObjPlayer__sub_80011734(arg0, 0, lbl_805D9F4C);
    }
    TObjPlayer__sub_80154E3C(arg0);
    if (M2C_FIELD(arg0, f32 *, 0xC0) < (lbl_805D9F24 * (lbl_805D9F2C * M2C_FIELD(arg0, f32 *, 0xC8)))) {
        TObjPlayer__sub_80017E6C(arg0);
        M2C_FIELD(arg0, f32 *, 0x308) = (f32) (M2C_FIELD(arg0, f32 *, 0x308) * lbl_805D9F24);
        M2C_FIELD(arg0, f32 *, 0x310) = (f32) (M2C_FIELD(arg0, f32 *, 0x310) * lbl_805D9F24);
    }
}

}
