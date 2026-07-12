#include "types.h"

extern "C" {

void TCameraCtrl__sub_80044420(void* p);
void TCameraCtrl__sub_80044434(void* p);
void set_flag_08000000__11TCameraCtrlFi(s32 arg0);
void set_player_view_flag__11TCameraCtrlFi(s32 arg0);
s32 TObjPlayer__sub_80154764(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
s32 set_indexed_flags(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);

void TCameraCtrl__sub_80044420(void* p) { *(s32*)((char*)p + 0x20) = 1; *(s32*)((char*)p + 0x24) = 0; }
void TCameraCtrl__sub_80044434(void* p) { *(s32*)((char*)p + 0x20) = 2; *(s32*)((char*)p + 0x24) = 0; }
void set_player_view_flag__11TCameraCtrlFi(s32 arg0) {
    TObjPlayer__sub_80154764(arg0, 0, 0x08000000);
}
void set_flag_08000000__11TCameraCtrlFi(s32 arg0) {
    set_indexed_flags(arg0, 0, 0x08000000);
}

}
