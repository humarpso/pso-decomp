#pragma fp_contract on
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_split_screen();
s32 fn_800196EC(f32, f32, f32);
s32 fn_8020C1F0(M2C_UNK, s32);
M2C_UNK __ct__7TObjectFP7TObject(void *);
u32 fn_802898AC();
u32 fn_8028AAFC();
u32 fn_8028AC8C();
u32 fn_8028B324(void *);
s32 TOBoss4Rock__sub_8039C880();
extern const f64 lbl_80438138;
extern void *__vt__13TObjBoss5Ctrl[];
extern s32 lbl_805D2828;
extern const f32 lbl_805D8F10;
extern const f32 lbl_805D8F14;
extern const f32 lbl_805D8F18;

void *TObjBoss5Ctrl__ct(void *arg0) {
    s32 temp_r3;
    f32 temp_f2;
    f32 temp_f3;

    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, void **, 0x18) = __vt__13TObjBoss5Ctrl;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2828;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0U;
    M2C_FIELD(arg0, u32 *, 0x20) = 0U;
    M2C_FIELD(arg0, u32 *, 0x24) = 0U;
    M2C_FIELD(arg0, u32 *, 0x28) = 0U;
    temp_f3 = (f32) TOBoss4Rock__sub_8039C880();
    temp_f2 = lbl_805D8F18 * temp_f3;
    M2C_FIELD(arg0, s16 *, 0x2C) = (s16) (lbl_805D8F14 * temp_f2 + lbl_805D8F10);
    temp_r3 = fn_800196EC(lbl_805D8F14, temp_f2, temp_f3);
    if (fn_8020C1F0(temp_r3, 1) == 0) {
        if (is_split_screen() == 0) {
            if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) == 0U) {
                M2C_FIELD(arg0, u32 *, 0x1C) = fn_8028AAFC();
            }
            if ((u32) M2C_FIELD(arg0, u32 *, 0x20) == 0U) {
                M2C_FIELD(arg0, u32 *, 0x20) = fn_802898AC();
            }
            if ((u32) M2C_FIELD(arg0, u32 *, 0x24) == 0U) {
                M2C_FIELD(arg0, u32 *, 0x24) = fn_8028B324(arg0);
            }
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x28) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x28) = fn_8028AC8C();
        }
    }
    return arg0;
}

}
