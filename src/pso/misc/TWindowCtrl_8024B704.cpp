#include "types.h"
#include "pso/misc/TWindowCtrl.h"

extern "C" {

s32 init_all__11TWindowCtrlFPvPv(void *, s32);

void TWindowCtrl::init_all_default() {
    init_all__11TWindowCtrlFPvPv(this, 0);
}

}
