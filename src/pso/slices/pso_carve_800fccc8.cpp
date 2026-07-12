#include "types.h"

extern "C" {

s32 TWindowKeyBoardHard__sub_801A52E8(s32, s32, s32);
s32 fn_800FCCF4(void* p);

void fn_800FCCC8(s32 arg0, s32 arg1) {
    TWindowKeyBoardHard__sub_801A52E8(arg0, arg1 << 0xD, 0xFFFF1FFF);
}
s32 fn_800FCCF4(void* p) { return *(s32*)((char*)p + 0x874); }

}
