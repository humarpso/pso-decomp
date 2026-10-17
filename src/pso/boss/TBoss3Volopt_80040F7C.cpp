#include "types.h"
#include "pso/boss/TBoss3Volopt_80040F7C.h"
#include "pso/boss/TBoss3Volopt.h"

extern "C" {

s32 clear_player_status_flag__13TUnk_804AF8A0FlUl(void *, s32, s32);
void set_indexed_flags__13TUnk_804AF8A0Fll(void *arg0, s32 index, s32 flags);

void TBoss3Volopt::set_player_flag_08000000() {
    clear_player_status_flag__13TUnk_804AF8A0FlUl(this, 0, 0x08000000);
}

void TBoss3Volopt::set_flag_08000000() {
    set_indexed_flags__13TUnk_804AF8A0Fll(this, 0, 0x08000000);
}

s32 TBoss3Volopt__sub_80040FCC(void *arg0) {
    return ((u32) *(u32 *)((s8 *)(*(void **)((s8 *)arg0 + 0xA4)) + 0x18) >> 1U) & 1;
}

}
