#include "types.h"
#include "pso/misc/TOJungleDesign.h"
#pragma fp_contract on

extern "C" {

s32 fn_802FF028(s32);
s32 fn_802FF064(s32);

extern s32 jungle_design_variant_table[];

void TOJungleDesign::init_design_variant() {
    *(s32 *)((s8 *)this + 0xB0) = (s32) *(s32 *)((s8 *)this + 0x84);
    if ((s32) *(s32 *)((s8 *)this + 0xB0) < 0) {
        *(s32 *)((s8 *)this + 0xB0) = 0;
    }
    if ((s32) *(s32 *)((s8 *)this + 0xB0) > 2) {
        *(s32 *)((s8 *)this + 0xB0) = 2;
    }
    *(s32 *)((s8 *)this + 0xAC) = fn_802FF064(jungle_design_variant_table[*(s32 *)((s8 *)this + 0xB0)]);
    *(s32 *)((s8 *)this + 0x24) = fn_802FF028(0);
}

}
