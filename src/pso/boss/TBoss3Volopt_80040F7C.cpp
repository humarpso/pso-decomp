#include "types.h"
#include "pso/boss/TBoss3Volopt.h"

extern "C" {

s32 TBoss3Volopt__sub_80040FCC(void *arg0);
s32 clear_player_status_flag__10TObjPlayerFlUl(void *, s32, s32);
s32 set_indexed_flags(void *, s32, s32);

void TBoss3Volopt::set_player_flag_08000000() {
    clear_player_status_flag__10TObjPlayerFlUl(this, 0, 0x08000000);
}

void TBoss3Volopt::set_flag_08000000() {
    set_indexed_flags(this, 0, 0x08000000);
}

s32 TBoss3Volopt__sub_80040FCC(void *arg0) {
    return ((u32) *(u32 *)((s8 *)(*(void **)((s8 *)arg0 + 0xA4)) + 0x18) >> 1U) & 1;
}

}
