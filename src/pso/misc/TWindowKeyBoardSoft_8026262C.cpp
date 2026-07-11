#include "types.h"
#pragma fp_contract on
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowKeyBoardSoft__sub_8026262C(void *arg0);
s32 TKeyBoardControl__sub_80131FAC(u32);
M2C_UNK TWindowKeyBoardSoft__sub_80260904(void *, s32);
M2C_UNK TWindowKeyBoardSoft__sub_80260E30(void *, s32);
s32 fn_80244994();
M2C_UNK fn_80246258(void *);
M2C_UNK fn_8024664C(void *);
s32 fn_8024A0DC(s16);
M2C_UNK fn_80260808(void *, s32);
M2C_UNK fn_8026088C(void *, s32);
M2C_UNK fn_80261204(void *, s32);

extern const f32 lbl_805DD0D4;

void TWindowKeyBoardSoft__sub_8026262C(void *arg0) {
    f32 temp_f0;
    s32 temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x6C) != 0U) {
        if ((fn_80244994() != 0) && (TKeyBoardControl__sub_80131FAC(M2C_FIELD(arg0, u32 *, 0x6C)) == 0)) {
            temp_r3 = fn_8024A0DC(M2C_FIELD(arg0, s16 *, 0x20));
            fn_80261204(arg0, temp_r3);
            TWindowKeyBoardSoft__sub_80260E30(arg0, temp_r3);
            TWindowKeyBoardSoft__sub_80260904(arg0, temp_r3);
            fn_8026088C(arg0, temp_r3);
            fn_80260808(arg0, temp_r3);
        }
        fn_8024664C(arg0);
        fn_80246258(arg0);
        M2C_FIELD(arg0, f32 *, 0x68) -= lbl_805DD0D4 * M2C_FIELD(arg0, f32 *, 0x68);
    }
}

}
