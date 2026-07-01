#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TOBoss4Rock__sub_80147AA8(s32);
s32 fn_80228BEC(s32, M2C_UNK);
M2C_UNK fn_80251964(void *, s16);
M2C_UNK TWindowFukidasi__sub_80252C28(void *);
M2C_UNK fn_80252CA0(void *);
M2C_UNK strncpy(s32, s32, s32);
extern s32 lbl_805D3900;
extern const f32 lbl_805DCD30;

void TWindowFukidasi__ct(void *arg0, s16 arg1, s32 arg2, s16 arg3, f32 farg0) {
    s32 temp_r3;

    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3900;
    M2C_FIELD(arg0, s8 *, 0x70) = 0;
    M2C_FIELD(arg0, s8 *, 0x71) = 0;
    M2C_FIELD(arg0, s8 *, 0x72) = 2;
    M2C_FIELD(arg0, s8 *, 0x73) = -1;
    M2C_FIELD(arg0, s16 *, 0x76) = arg1;
    M2C_FIELD(arg0, s16 *, 0x20) = arg3;
    if (arg2 != 0) {
        temp_r3 = fn_80228BEC(arg2, 0x18);
        M2C_FIELD(arg0, s32 *, 0x78) = TOBoss4Rock__sub_80147AA8(temp_r3 + 1);
        strncpy(M2C_FIELD(arg0, s32 *, 0x78), arg2, temp_r3 + 1);
    } else {
        M2C_FIELD(arg0, s32 *, 0x78) = 0;
    }
    fn_80251964(arg0, arg1);
    M2C_FIELD(arg0, f32 *, 0x80) = (f32) lbl_805DCD30;
    M2C_FIELD(arg0, f32 *, 0x7C) = farg0;
    M2C_FIELD(arg0, f32 *, 0x48) = (f32) lbl_805DCD30;
    M2C_FIELD(arg0, f32 *, 0x4C) = (f32) lbl_805DCD30;
    fn_80252CA0(arg0);
    TWindowFukidasi__sub_80252C28(arg0);
}

}
