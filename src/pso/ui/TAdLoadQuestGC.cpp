#include "types.h"

extern "C" {

void run_task__14TAdLoadQuestGCFv(void);
void render__14TAdLoadQuestGCFv(void);
s32 create_cost_window(s32 arg0);
s32 TWindowCost__ct(s32, s32, s32, s32);
s32 get_message_10__20TWindowSubStatusDispFPv(s32);
s32 __nw__7TObjectFUl(s32);
s32 TCameraCtrl__sub_8006B338();
s32 TWindowSubComCard__sub_8026CBB8(s32);

s32 create_cost_window(s32 arg0) {
    s32 var_r30;

    if (TCameraCtrl__sub_8006B338() <= 2) {
        return 0;
    }
    var_r30 = __nw__7TObjectFUl(0x74);
    if (var_r30 != 0) {
        var_r30 = TWindowCost__ct(var_r30, TWindowSubComCard__sub_8026CBB8(0x59), arg0, get_message_10__20TWindowSubStatusDispFPv(0x109));
    }
    return var_r30;
}
void render__14TAdLoadQuestGCFv(void) {  }
void run_task__14TAdLoadQuestGCFv(void) {  }

}
