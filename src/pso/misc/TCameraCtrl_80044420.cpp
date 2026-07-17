#include "types.h"

extern "C" {

void reset_look_state__11TCameraCtrlFPv(void* p);
void TCameraCtrl__sub_80044434(void* p);
void set_flag_08000000__11TCameraCtrlFi(s32 arg0);
void set_player_view_flag__11TCameraCtrlFi(s32 arg0);
s32 clear_player_status_flag__10TObjPlayerFPviUi(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
s32 set_indexed_flags(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);

void reset_look_state__11TCameraCtrlFPv(void* p) { *(s32*)((char*)p + 0x20) = 1; *(s32*)((char*)p + 0x24) = 0; }
void TCameraCtrl__sub_80044434(void* p) { *(s32*)((char*)p + 0x20) = 2; *(s32*)((char*)p + 0x24) = 0; }
void set_player_view_flag__11TCameraCtrlFi(s32 arg0) {
    clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 0x08000000);
}
void set_flag_08000000__11TCameraCtrlFi(s32 arg0) {
    set_indexed_flags(arg0, 0, 0x08000000);
}

}
