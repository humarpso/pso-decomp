#include "types.h"
struct V_80267F9C { f32 x; f32 y; };

extern "C" {
extern V_80267F9C lbl_804D0604[];
extern s32 lbl_804D05F8[];
void TShopJudgmentItemWindow__sub_80267F9C(V_80267F9C v, s32 x);
}

extern "C" {

void TShopJudgmentItemWindow__sub_80267F9C(V_80267F9C v, s32 x) {
    lbl_804D0604[0].x = v.x;
    lbl_804D0604[0].y = v.y;
    lbl_804D05F8[1] = x;
}

}
