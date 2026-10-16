#include "types.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

extern "C" {

u8 TWindowShortListCtrl__check_controller_button(void *arg0);
s32 pack_color_bits__13TRaderMapCoreFll();
s32 pack_flags__13TRaderMapCoreFii();

u8 TAdSinglePlyChrSelectGC::test_flag_4c() {
    return (u8) ((this->m_4c & pack_color_bits__13TRaderMapCoreFll()) != 0);
}

u8 TWindowShortListCtrl__check_controller_button(void *arg0) {
    return (u8) ((*(s32 *)((s8 *)arg0 + 0x4C) & pack_flags__13TRaderMapCoreFii()) != 0);
}

}
