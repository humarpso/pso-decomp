#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8007B798();
M2C_UNK fn_80131A5C(s32);
M2C_UNK fn_80131B54(s32, s32);
M2C_UNK fn_80131BA0(s32, s32);
s32 TKeyBoardControl__ct(s32, s32, M2C_UNK, M2C_UNK, M2C_UNK, s32);
s32 __nw__7TObjectFUl(M2C_UNK);
s32 fn_80249C10(s32);
s32 fn_8026CBB8(M2C_UNK);
M2C_UNK fn_80275254(s32);
extern s32 lbl_805D53A0;

s32 TWindowSubComCard__sub_80272558(s32 arg0) {
    s32 temp_r31;
    s32 var_r30;

    var_r30 = fn_8007B798();
    temp_r31 = __nw__7TObjectFUl(0x2C);
    if (temp_r31 != 0) {
        temp_r31 = TKeyBoardControl__ct(temp_r31, arg0, 0xC6, 3, 4, lbl_805D53A0);
    }
    fn_80131BA0(temp_r31, fn_80249C10(var_r30));
    fn_80131B54(temp_r31, fn_8026CBB8(0xBB));
    fn_80131A5C(temp_r31);
    fn_80275254(temp_r31);
    return temp_r31;
}

}
