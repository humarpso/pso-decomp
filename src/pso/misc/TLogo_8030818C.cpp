#include "types.h"
#include "pso/TLogo.h"
#include "pso/ui/TAdVIConfigGC.h"

extern "C" {

void TAdYesNoBaseGC__vt4(void);
void TAdYesNoBaseGC__vt5(void);
u32 OSGetProgressiveMode();
u32 find_item_by_id(void);
s32 disable_progressive_mode__13TAdVIConfigGCFPv();
s32 spawn_fire_explosion_at(u32 a0 = 0, s32 a1 = 0);
u32 VIGetDTVStatus();
s32 is_on_current_screen__11TCameraCtrlFv(void *, s32);

extern s8 controller_physical_port_bank[];

s32 TLogo::check_progressive_ready() {
    if (VIGetDTVStatus() == 0U) {
        disable_progressive_mode__13TAdVIConfigGCFPv();
        return 0;
    }
    if ((OSGetProgressiveMode() != 1U) && (is_on_current_screen__11TCameraCtrlFv(controller_physical_port_bank + 0x20, 2) == 0)) {
        disable_progressive_mode__13TAdVIConfigGCFPv();
        return 0;
    }
    return 1;
}

void TAdYesNoBaseGC__vt4(void) {  }
void TAdYesNoBaseGC__vt5(void) {  }

}
