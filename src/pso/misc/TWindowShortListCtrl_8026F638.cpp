#include "types.h"

extern "C" {

s16 TWindowShortListCtrl__sub_8026F664(void* p);
s16 TWindowShortListCtrl__sub_8026F69C(void* p);
s32 TWindowKeyBoardHard__sub_801A52E8(s32, s32, s32);

void TWindowShortListCtrl__sub_8026F638(s32 arg0, s32 arg1) {
    TWindowKeyBoardHard__sub_801A52E8(arg0, arg1 << 0x10, 0xFFFCFFFF);
}
s16 TWindowShortListCtrl__sub_8026F664(void* p) { return *(s16*)((char*)p + 0x78); }

}
