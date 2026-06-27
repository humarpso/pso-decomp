#include "types.h"

extern "C" {

s32 fn_801AFD84();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 fn_8023E7A8();
s32 fn_802C5530(s32);

s32 fn_8024A0DC(s32 arg0) {
    if (arg0 >= 4) {
        return 0;
    }
    if (fn_8023E7A8() != 0) {
        return fn_802C5530(arg0);
    }
    if (TPlayerBattleCtrl4P__sub_801BA74C(arg0) == 0U) {
        return 0;
    }
    return fn_801AFD84();
}

}
