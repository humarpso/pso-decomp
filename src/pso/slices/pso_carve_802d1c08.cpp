#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8008741C(s32, M2C_UNK, M2C_UNK);
s32 TObjEneDD__sub_800BA6D0(s32);
M2C_UNK __ct__7TObjectFP7TObject();
extern M2C_UNK lbl_804E1908[];
extern s32 lbl_805D3F38;

void *fn_802D1C08(void *arg0, s32 arg1, s32 arg2) {
    __ct__7TObjectFP7TObject();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E1908;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3F38;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = arg2;
    if (TObjEneDD__sub_800BA6D0(M2C_FIELD(arg0, s32 *, 0x20)) != 0) {
        M2C_FIELD(arg0, s32 *, 0x24) = fn_8008741C(M2C_FIELD(arg0, s32 *, 0x20) + 0x38, 0x20D, 0x40);
    }
    return arg0;
}

}
