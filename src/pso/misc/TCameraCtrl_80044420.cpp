#include "types.h"
#include "pso/misc/TCameraCtrl.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 set_indexed_flags(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);

void TCameraCtrl::reset_look_state() { *(s32*)((char*)this + 0x20) = 1; *(s32*)((char*)this + 0x24) = 0; }
void TCameraCtrl::set_mode() { *(s32*)((char*)this + 0x20) = 2; *(s32*)((char*)this + 0x24) = 0; }
void TCameraCtrl::set_player_view_flag(s32 arg0) {
    ((TObjPlayer *)arg0)->clear_player_status_flag(0, 0x08000000);
}
void TCameraCtrl::set_flag_08000000(s32 arg0) {
    set_indexed_flags(arg0, 0, 0x08000000);
}

}
