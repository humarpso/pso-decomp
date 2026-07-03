#include "types.h"

extern "C" {

s32 fn_8030A770();
s32 fn_8030A7B0();
s32 TRaderMapCore__sub_8030A808();
s32 obj_getField1c();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 fn_801FC1A4();
u32 TWindowSubComCard__sub_80202990(s32);
s32 fn_802116EC();
s32 TWindowCtrl__sub_8024AF74(u16);
s32 TWindowCtrl__sub_8024B054(u16);
int fn_8006E87C(void* p);
int TObjPlayer__sub_800495E0(void*, int);

int fn_8006E87C(void* p) { return TObjPlayer__sub_800495E0(p, 16384); }
s32 fn_8006E8A0(void) {
    if (TRaderMapCore__sub_8030A808() != 1) {
        return 1;
    }
    if (fn_8030A7B0() != 1) {
        return 1;
    }
    return fn_8030A770() != 0 ? 1 : 0;
}

}
