#include "types.h"

extern "C" {

void TAdYesNoBaseGC__vt4(void);
void TAdYesNoBaseGC__vt5(void);
s32 check_progressive_ready__5TLogoFv(void);
u32 OSGetProgressiveMode();
u32 find_item_by_id(void);
s32 disable_progressive_mode__13TAdVIConfigGCFv();
s32 spawn_fire_explosion_at(u32 a0 = 0, s32 a1 = 0);
u32 VIGetDTVStatus();
s32 is_on_current_screen__11TCameraCtrlFPv(void *, s32);
void set_field_2c__13TAdVIConfigGCFPvi(void* p, s32 v);

extern s8 controller_physical_port_bank[];

s32 check_progressive_ready__5TLogoFv(void) {
    if (VIGetDTVStatus() == 0U) {
        disable_progressive_mode__13TAdVIConfigGCFv();
        return 0;
    }
    if ((OSGetProgressiveMode() != 1U) && (is_on_current_screen__11TCameraCtrlFPv(controller_physical_port_bank + 0x20, 2) == 0)) {
        disable_progressive_mode__13TAdVIConfigGCFv();
        return 0;
    }
    return 1;
}

void TAdYesNoBaseGC__vt4(void) {  }
void TAdYesNoBaseGC__vt5(void) {  }

}
