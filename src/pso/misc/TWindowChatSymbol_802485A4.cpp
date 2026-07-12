#include "types.h"
#pragma fp_contract on
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__17TWindowChatSymbolFv(u8 *arg0);
u8 *TWindowDD__sub_80244CF4();
M2C_UNK TWindowSubComCard__sub_80245808(void *, void *);
M2C_UNK fn_80257BC0(void *, void *, void *, f32, f32, f32);

extern M2C_UNK lbl_8044EAB8;
extern const f32 lbl_805DCB7C;
extern const f32 lbl_805DCB94;
extern const f32 lbl_805DCB98;
extern const f32 lbl_805DCB9C;

void render__17TWindowChatSymbolFv(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f2;
    u8 *temp_r3;

    temp_r3 = TWindowDD__sub_80244CF4();
    if ((s32) M2C_FIELD(temp_r3, s32 *, 0x30) < 0) {
        M2C_FIELD(temp_r3, f32 *, 0x28) = (f32) ((f32) M2C_FIELD(arg0, s32 *, 0x5C) / lbl_805DCB9C);
        M2C_FIELD(temp_r3, f32 *, 0x2C) = (f32) M2C_FIELD(temp_r3, f32 *, 0x28);
    }
    TWindowSubComCard__sub_80245808(arg0, temp_r3);
    M2C_FIELD(temp_r3, f32 *, 0x10) = (f32) ((lbl_805DCB7C * (M2C_FIELD(arg0, f32 *, 0x48) - lbl_805DCB94)) + M2C_FIELD(temp_r3, f32 *, 0x10));
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x4C);
    temp_f1 = temp_f2 - lbl_805DCB98;
    M2C_FIELD(temp_r3, f32 *, 0x14) = (f32) ((lbl_805DCB7C * temp_f1) + M2C_FIELD(temp_r3, f32 *, 0x14));
    fn_80257BC0(arg0, arg0 + 0x24, temp_r3, temp_f1, temp_f2, lbl_805DCB7C);
}

}
