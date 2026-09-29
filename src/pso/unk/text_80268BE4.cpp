#include "types.h"
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct V_80268C5C { f32 x; f32 y; };

extern "C" {
extern V_80268C5C lbl_804D0644[];
extern s32 lbl_804D0638[];
void fn_80268C5C(V_80268C5C v, s32 x);
s32 __nw__7TObjectFUl(s32);
s32 create_sub_window__20TWindowChoiceSettingFPvi(s32, s32 *);
s32 fn_80269004(s32, s32, s32);
s32 TWindowSubComCard__sub_8026CBB8(s32);
extern s32 lbl_8044F3A0[];
extern s32 lbl_8044F3B8[];
}

extern "C" {

s32 fn_80268BE4(s32 arg0) {
    s32 var_r31;

    ((s32 (*)(s32 *, s32))fn_80268C5C)(lbl_8044F3A0, arg0);
    var_r31 = __nw__7TObjectFUl(0x80);
    if (var_r31 != 0) {
        var_r31 = fn_80269004(var_r31, TWindowSubComCard__sub_8026CBB8(0xAE), arg0);
    }
    create_sub_window__20TWindowChoiceSettingFPvi(var_r31, lbl_8044F3B8);
    return var_r31;
}

void fn_80268C5C(V_80268C5C v, s32 x) {
    lbl_804D0644[0] = v;
    lbl_804D0638[1] = x;
}

}
