#define TOBJECT_OUT_OF_LINE_HELPERS
#include "pso/item/TItemDisconnectCtrl.h"

extern "C" {
s32 get_global_state__14TOKeyMachine01Fv();
void disconnect_protocol__6TLobbyFv();
extern s32 lbl_805D5450;
extern TObject *tl_05;
extern const char *TItemDisconnectCtrl__name;
}

void TItemDisconnectCtrl::run_task() {
    if (get_global_state__14TOKeyMachine01Fv() != 0xF && lbl_805D5450 != 0) {
        disconnect_protocol__6TLobbyFv();
        queue_destruction();
    }
}

TItemDisconnectCtrl::~TItemDisconnectCtrl() {}

TItemDisconnectCtrl::TItemDisconnectCtrl() : TObject(tl_05) {
    m_name = TItemDisconnectCtrl__name;
    disallow_rendering();
}
