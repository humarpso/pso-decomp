#include "types.h"

extern "C" {

u8 is_out_of_range__12TObjEneReconFPv(void *arg0);
s32 has_child_in_anim_5__12TObjEneReconFPv();

u8 is_out_of_range__12TObjEneReconFPv(void *arg0) {
    int var_r4;

    if (has_child_in_anim_5__12TObjEneReconFPv() == 1) {
        return 1;
    }
    var_r4 = 0;
    if (((s32) *(s32 *)((s8 *)arg0 + 0x410) >= (s32) *(s32 *)((s8 *)arg0 + 0x3F8)) || ((s32) *(s32 *)((s8 *)arg0 + 0x414) >= (s32) *(s32 *)((s8 *)arg0 + 0x3F4))) {
        var_r4 = 1;
    }
    return (u8) var_r4;
}

}
