#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *__ct__18TItemEffNeedleBaseFv(u8 *arg0, void *arg1, u8 *arg2);
M2C_UNK __ct__7TObjectFP7TObject();
M2C_UNK disallow_rendering__7TObjectFv(void *, int);
s32 get_field_d8__10TObjPlayerFPv(void *);

extern M2C_UNK __vt__18TItemEffNeedleBase[];
extern s32 lbl_805D2BC8;
extern const f32 lbl_805DAB4C;

u8 *__ct__18TItemEffNeedleBaseFv(u8 *arg0, void *arg1, u8 *arg2) {
    s32 temp_r4;

    __ct__7TObjectFP7TObject();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TItemEffNeedleBase;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2BC8;
    M2C_FIELD(arg0, s32 *, 0x2C) = get_field_d8__10TObjPlayerFPv(arg2);
    temp_r4 = M2C_FIELD(arg2, s32 *, 0x60);
    M2C_FIELD(arg0, s32 *, 0x48) = temp_r4;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) lbl_805DAB4C;
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) lbl_805DAB4C;
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) lbl_805DAB4C;
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) lbl_805DAB4C;
    disallow_rendering__7TObjectFv(arg0, temp_r4);
    return arg0;
}

}
