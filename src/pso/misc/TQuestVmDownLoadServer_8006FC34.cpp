#include "types.h"

extern "C" {

void TQuestVmDownLoadServer__sub_8006FC34(s32 arg0, s32 *arg1, s32 *arg2, s32 *arg3);

void TQuestVmDownLoadServer__sub_8006FC34(s32 arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    *arg1 = arg0 / 3600;
    if ((s32) *arg1 > 0x63) {
        *arg1 = 0x63;
    }
    *arg2 = (arg0 / 60) % 60;
    *arg3 = arg0 % 60;
}

}
