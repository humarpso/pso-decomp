#include "types.h"

extern "C" {

u8 TWindowShortListCtrl__check_controller_button(void *arg0);
u8 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *arg0);
s32 pack_color_bits__13TRaderMapCoreFii();
s32 pack_flags__13TRaderMapCoreFii();

u8 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    return (u8) ((*(s32 *)((s8 *)arg0 + 0x4C) & pack_color_bits__13TRaderMapCoreFii()) != 0);
}

u8 TWindowShortListCtrl__check_controller_button(void *arg0) {
    return (u8) ((*(s32 *)((s8 *)arg0 + 0x4C) & pack_flags__13TRaderMapCoreFii()) != 0);
}

}
