#include "types.h"

extern "C" {

s32 try_open__19TWindowKeyBoardSoftFii(s32 arg0, s32 arg1);
int TWindowKeyBoardSoft__sub_8024E6D8(s32, s32);
s32 TWindowKeyBoardSoft__sub_8024E8E8();

s32 try_open__19TWindowKeyBoardSoftFii(s32 arg0, s32 arg1) {
    if (TWindowKeyBoardSoft__sub_8024E8E8() == 0) {
        return 0;
    }
    TWindowKeyBoardSoft__sub_8024E6D8(arg0, arg1);
    return 1;
}

}
