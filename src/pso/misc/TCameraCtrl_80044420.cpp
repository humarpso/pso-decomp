#include "types.h"
#include "pso/object/TObjMotion.h"
#include "pso/misc/TCameraCtrl.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TCameraCtrl::reset_look_state() { this->m_20 = 1; this->m_24 = 0; }
void TCameraCtrl::set_mode() { this->m_20 = 2; this->m_24 = 0; }
void TCameraCtrl::set_player_view_flag(s32 arg0) {
    ((TUnk_804AF8A0 *)arg0)->clear_player_status_flag(0, 0x08000000);
}
void TCameraCtrl::set_flag_08000000(s32 arg0) {
    ((TUnk_804AF8A0 *)arg0)->set_indexed_flags(0, 0x08000000);
}

}
