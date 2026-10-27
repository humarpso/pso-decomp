#include "types.h"
#include "pso/object/TObjMotion.h"
#include "pso/misc/TCameraCtrl.h"
#include "pso/player/TObjPlayer.h"

void TCameraCtrl::set_player_view_flag(s32 arg0) {
    ((TUnk_804AF8A0 *)arg0)->clear_player_status_flag(0, 0x08000000);
}
void TCameraCtrl::set_flag_08000000(s32 arg0) {
    ((TUnk_804AF8A0 *)arg0)->set_indexed_flags(0, 0x08000000);
}
