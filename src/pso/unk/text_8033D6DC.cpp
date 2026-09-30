#include "types.h"
struct O_8033D9E4 { u8 pad[0x18]; void *f18; u8 pad2[0x7C - 0x1C]; void *f7c; void *h[9]; };

extern "C" {
s32 request_destroy__11TBoss4Type2FUi(void *);
s32 init_state_1__8TObjFishFPv(void *);
s32 __dt__7TObjectFv(void *, int);
s32 __dl__7TObjectFPv(void *);
s32 TCameraCtrl__sub_80069DA8();
s32 TBoss6PlotFalz__sub_802AC4D8();
extern u8 lbl_804EFA1C[];
O_8033D9E4 *fn_8033D9E4(O_8033D9E4 *arg0, s16 arg1);
}

extern "C" {

O_8033D9E4 *fn_8033D9E4(O_8033D9E4 *arg0, s16 arg1) {
    s32 i;
    if (arg0 != 0) {
        arg0->f18 = lbl_804EFA1C;
        for (i = 0; i < 9; i++) {
            if (arg0->h[i] != 0) {
                request_destroy__11TBoss4Type2FUi(arg0->h[i]);
                arg0->h[i] = 0;
            }
        }
        TCameraCtrl__sub_80069DA8();
        TBoss6PlotFalz__sub_802AC4D8();
        if (arg0->f7c != 0) {
            init_state_1__8TObjFishFPv(arg0->f7c);
            arg0->f7c = 0;
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
