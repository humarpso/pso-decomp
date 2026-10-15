#include "types.h"
#pragma fp_contract on

extern "C" {

void init_design_variant__14TOJungleDesignFPv(void *arg0);
s32 fn_802FF028(s32);
s32 fn_802FF064(s32);

extern s32 lbl_80474D60[];

void init_design_variant__14TOJungleDesignFPv(void *arg0) {
    *(s32 *)((s8 *)arg0 + 0xB0) = (s32) *(s32 *)((s8 *)arg0 + 0x84);
    if ((s32) *(s32 *)((s8 *)arg0 + 0xB0) < 0) {
        *(s32 *)((s8 *)arg0 + 0xB0) = 0;
    }
    if ((s32) *(s32 *)((s8 *)arg0 + 0xB0) > 2) {
        *(s32 *)((s8 *)arg0 + 0xB0) = 2;
    }
    *(s32 *)((s8 *)arg0 + 0xAC) = fn_802FF064(lbl_80474D60[*(s32 *)((s8 *)arg0 + 0xB0)]);
    *(s32 *)((s8 *)arg0 + 0x24) = fn_802FF028(0);
}

}
