#include "types.h"

extern "C" {
s32 debug_print_area_num__12TObjAreaWarpFv();
s32 set_global_count__12TObjNpcEnemyFl(s32);
s32 debug_printf_at(s32, s32 *, ...);
extern s32 lbl_80446854[];
void TObjWarpLobby__vt18(void *arg0);
}

extern "C" {

void TObjWarpJungMain__vt18(void);

void TObjWarpJungMain__vt18(void) {  }
void TObjWarpLobby__vt18(void *arg0) {
    s32 temp_r0;
    s32 base;
    debug_print_area_num__12TObjAreaWarpFv();
    if ((s32) *(s32 *)((s8 *)arg0 + 0x88) < 0) {
        *(s32 *)((s8 *)arg0 + 0x88) = 0;
    }
    if ((s32) *(s32 *)((s8 *)arg0 + 0x88) > 1) {
        *(s32 *)((s8 *)arg0 + 0x88) = 1;
    }
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x88);
    switch (temp_r0) {
    case 0:
        *(s32 *)((s8 *)arg0 + 0xCC) = 1;
        break;
    case 1:
        *(s32 *)((s8 *)arg0 + 0xCC) = 0;
        break;
    default:
        *(s32 *)((s8 *)arg0 + 0xCC) = 1;
        break;
    }
    set_global_count__12TObjNpcEnemyFl(0xFF00FF);
    debug_printf_at(0x130021, lbl_80446854);
    set_global_count__12TObjNpcEnemyFl(0xF0F0F0FF);
}

}
