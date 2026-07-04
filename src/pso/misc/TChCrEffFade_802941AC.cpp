#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__ct__12TChCrEffFadeFv(void *arg0, s32 arg1, s32 arg2, s32 arg3);
M2C_UNK TChCrEffFade__sub_80294084(void *);
M2C_UNK __ct__7TObjectFP7TObject(s32, s32);

extern M2C_UNK __vt__12TChCrEffFade[];
extern s32 lbl_805D3CC0;
extern s32 tl_fade;

void *__ct__12TChCrEffFadeFv(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r0;
    s32 temp_r0_2;

    __ct__7TObjectFP7TObject((s32) arg0, tl_fade);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TChCrEffFade;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3CC0;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (arg2 + 3);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x20);
    if (temp_r0 < 4) {
        M2C_FIELD(arg0, s32 *, 0x20) = 4;
    } else if (temp_r0 > 0x1C2) {
        M2C_FIELD(arg0, s32 *, 0x20) = 0x1C2;
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_r0_2 == 1) {
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
    } else if (temp_r0_2 == -1) {
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(arg0, s32 *, 0x20);
    } else {
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
    }
    TChCrEffFade__sub_80294084(arg0);
    M2C_FIELD(arg0, s32 *, 0x2C) = arg3;
    return arg0;
}

}
