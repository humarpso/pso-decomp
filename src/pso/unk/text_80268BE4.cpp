#include "types.h"
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct V_80268C5C { f32 x; f32 y; };

extern "C" {
extern V_80268C5C lbl_804D0644[];
extern s32 lbl_804D0638[];
void fn_80268C5C(V_80268C5C v, s32 x);
}

extern "C" {

void fn_80268C5C(V_80268C5C v, s32 x) {
    lbl_804D0644[0] = v;
    lbl_804D0638[1] = x;
}

}
