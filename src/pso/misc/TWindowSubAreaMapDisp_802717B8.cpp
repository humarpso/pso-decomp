#include "types.h"

extern "C" {

void update_visibility__21TWindowSubAreaMapDispFPv(void *arg0);
s32 show_radar__13TRaderMapCoreFv();
s32 open_free_map_view__13TRaderMapCoreFv();
s32 clear__13TRaderMapCoreFv();
s32 clear_active_flag__11TWindowCtrlFv();
s32 TWindowSubAreaMapDisp__sub_80246948();
s32 set_flag_bit0__11TWindowCtrlFv();

extern f32 lbl_805DD480;

void update_visibility__21TWindowSubAreaMapDispFPv(void *arg0) {
    if ((s32) *(s32 *)((s8 *)arg0 + 0x6C) != 0) {
        if (TWindowSubAreaMapDisp__sub_80246948() != 0) {
            *(s32 *)((s8 *)arg0 + 0x6C) = 0;
            clear_active_flag__11TWindowCtrlFv();
            clear__13TRaderMapCoreFv();
        }
    } else if (!(*(s32 *)((s8 *)arg0 + 0x2C) & 2) && (TWindowSubAreaMapDisp__sub_80246948() == 0)) {
        *(s32 *)((s8 *)arg0 + 0x6C) = 1;
        open_free_map_view__13TRaderMapCoreFv();
        show_radar__13TRaderMapCoreFv();
        set_flag_bit0__11TWindowCtrlFv();
        {
            f32 c = lbl_805DD480;
            *(f32 *)((s8 *)arg0 + 0x60) = c;
            *(f32 *)((s8 *)arg0 + 0x64) = c;
            *(f32 *)((s8 *)arg0 + 0x68) = c;
        }
    }
}

}
