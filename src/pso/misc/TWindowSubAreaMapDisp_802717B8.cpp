#include "types.h"
#include "pso/misc/TWindowSubAreaMapDisp.h"
#include "pso/misc/TRaderMapCore.h"
#include "pso/misc/TWindowCtrl.h"

extern "C" {

s32 TWindowSubAreaMapDisp__sub_80246948();

extern f32 lbl_805DD480;

void TWindowSubAreaMapDisp::update_visibility() {
    if ((s32) *(s32 *)((s8 *)this + 0x6C) != 0) {
        if (TWindowSubAreaMapDisp__sub_80246948() != 0) {
            *(s32 *)((s8 *)this + 0x6C) = 0;
            TWindowCtrl::clear_active_flag();
            TRaderMapCore::clear();
        }
    } else if (!(*(s32 *)((s8 *)this + 0x2C) & 2) && (TWindowSubAreaMapDisp__sub_80246948() == 0)) {
        *(s32 *)((s8 *)this + 0x6C) = 1;
        TRaderMapCore::open_free_map_view();
        TRaderMapCore::show_radar();
        TWindowCtrl::set_flag_bit0();
        {
            f32 c = lbl_805DD480;
            *(f32 *)((s8 *)this + 0x60) = c;
            *(f32 *)((s8 *)this + 0x64) = c;
            *(f32 *)((s8 *)this + 0x68) = c;
        }
    }
}

}
