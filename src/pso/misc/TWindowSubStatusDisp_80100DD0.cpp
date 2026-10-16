#include "types.h"
#include "pso/item/TItem.h"
#include "pso/misc/TWindowSubStatusDisp.h"
#include "pso/misc/TLobby.h"

extern "C" {

extern s32 local_client_id;

void TItem::refresh_if_current_player() {
    if ((s32) this->m_e4 == (s32) local_client_id) {
        TLobby::mark_selected();
    }
}

}
