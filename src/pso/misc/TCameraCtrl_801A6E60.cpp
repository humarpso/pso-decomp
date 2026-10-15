#include "types.h"

extern "C" {

u8 is_on_current_screen__11TCameraCtrlFPv(void *arg0);
s32 pack_flags__13TRaderMapCoreFii();

u8 is_on_current_screen__11TCameraCtrlFPv(void *arg0) {
    return (u8) ((*(s32 *)((s8 *)arg0 + 0x48) & pack_flags__13TRaderMapCoreFii()) != 0);
}

}
