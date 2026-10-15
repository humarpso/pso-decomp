#include "types.h"

extern "C" {

u8 is_flag_set__11TLoadingCurFPv(void *arg0);

s32 pack_color_bits__13TRaderMapCoreFii();

u8 is_flag_set__11TLoadingCurFPv(void *arg0) {
    return (u8) ((*(s32 *)((s8 *)arg0 + 0x48) & pack_color_bits__13TRaderMapCoreFii()) != 0);
}

}
