#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TWindowSubItem__ct(void *arg0, s32 arg1, s32 arg2);
M2C_UNK TWindowShortListCtrl__sub_80221828(s32);
M2C_UNK __ct__7TObjectFP7TObject();
M2C_UNK fn_80244D2C(s32);
M2C_UNK fn_80263AF8(s32, M2C_UNK);
s32 fn_8026CBB8(M2C_UNK);
s32 fn_8027AD5C(s32, M2C_UNK *, s32);

extern M2C_UNK lbl_8044F998[];
extern M2C_UNK __vt__14TWindowSubItem[];
extern s32 lbl_805D3A50;

void *TWindowSubItem__ct(void *arg0, s32 arg1, s32 arg2) {
    __ct__7TObjectFP7TObject();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TWindowSubItem;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3A50;
    M2C_FIELD(arg0, s32 *, 0x2C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x24) = arg2;
    M2C_FIELD(arg0, s32 *, 0x30) = fn_8027AD5C(fn_8026CBB8(3), lbl_8044F998, M2C_FIELD(arg0, s32 *, 0x24));
    fn_80263AF8(M2C_FIELD(arg0, s32 *, 0x2C), 0);
    fn_80244D2C(M2C_FIELD(arg0, s32 *, 0x30));
    TWindowShortListCtrl__sub_80221828(M2C_FIELD(arg0, s32 *, 0x30));
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = -1;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s8 *, 0x1C) = 0;
    return arg0;
}

}
