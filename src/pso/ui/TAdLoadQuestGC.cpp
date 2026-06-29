#include "types.h"

extern "C" {

void TAdLoadQuestGC__vt1(void);
void TAdLoadQuestGC__vt2(void);
s32 fn_803095E8(s32 arg0);
s32 TWindowCost__ct(s32, s32, s32, s32);
s32 TWindowSubStatusDisp__sub_80077760(s32);
s32 __nw__7TObjectFUl(s32);
s32 TCameraCtrl__sub_8006B338();
s32 fn_8026CBB8(s32);

s32 fn_803095E8(s32 arg0) {
    s32 var_r30;

    if (TCameraCtrl__sub_8006B338() <= 2) {
        return 0;
    }
    var_r30 = __nw__7TObjectFUl(0x74);
    if (var_r30 != 0) {
        var_r30 = TWindowCost__ct(var_r30, fn_8026CBB8(0x59), arg0, TWindowSubStatusDisp__sub_80077760(0x109));
    }
    return var_r30;
}
void TAdLoadQuestGC__vt2(void) {  }
void TAdLoadQuestGC__vt1(void) {  }

}
