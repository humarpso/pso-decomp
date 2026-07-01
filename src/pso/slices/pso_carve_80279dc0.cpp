#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowSubStatusDisp__sub_80077760(M2C_UNK);
s32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK fn_80244D2C(s32);
M2C_UNK TWindowInputNumber__sub_80256138(s32, f32);
M2C_UNK TWindowInputNumber__sub_80256170(s32, s32);
s32 TWindowInputNumber__ct(s32, s32, M2C_UNK, s32, M2C_UNK, s16);
M2C_UNK fn_80263AF8(s32, M2C_UNK);
s32 fn_8026CBB8(M2C_UNK);
M2C_UNK TWindowSubItem__sub_8027A9E4(s32);
extern const f32 lbl_805DD630;

s32 TWindowSubItem__sub_80279DC0(void *arg0, s32 arg1) {
    s32 var_r31;

    var_r31 = __nw__7TObjectFUl(0x7C);
    if (var_r31 != 0) {
        var_r31 = TWindowInputNumber__ct(var_r31, fn_8026CBB8(5), 1, arg1, 1, (s16) M2C_FIELD(arg0, s32 *, 0x24));
    }
    TWindowInputNumber__sub_80256170(var_r31, TWindowSubStatusDisp__sub_80077760(0x28));
    fn_80263AF8(M2C_FIELD(arg0, s32 *, 0x2C), 3);
    fn_80244D2C(var_r31);
    TWindowInputNumber__sub_80256138(var_r31, lbl_805DD630);
    TWindowSubItem__sub_8027A9E4(var_r31);
    return var_r31;
}

}
