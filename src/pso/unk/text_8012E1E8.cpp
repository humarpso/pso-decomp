#include "types.h"
#include "pso/player/TObjPlayer_8012E760.h"
#include "pso/player/TObjPlayer.h"
#include "pso/TItemAttacker.h"

extern "C" {
void *__nw__7TObjectFUl(u32);

void TObjPlayer::spawn_weapon_casing(s32 arg0, u32 arg1, u32 arg2, u32 arg3, u32 arg4) {
    void *p;
    if ((arg0 != 0) && (arg1 != 0U) && (arg2 != 0U) && (arg3 != 0U) && (arg4 != 0U)) {
        p = __nw__7TObjectFUl(0x44);
        if (p != 0) {
            p = ((TObjPlayer *)p)->construct_weapon_casing((u8 *)arg0, (u8 *)arg1, (u8 *)arg2, (u8 *)arg3, (u8 *)arg4);
        }
        TItemAttacker::spawn_item_timer((s32)p, (s32)expire_weapon_casing, 0xF);
    }
}

void TObjPlayer::launch_weapon_casing(s32 arg0, u32 arg1, s32 arg2, u32 arg3, u32 arg4) {
    u8 sp8[0x18];
    void *var_r0;
    if ((arg0 != 0) && (arg1 != 0U) && (arg3 != 0U) && (arg4 != 0U) && (((TObjPlayer *)arg1)->draw_icon((s32)arg2, (s32)sp8) != 0)) {
        var_r0 = __nw__7TObjectFUl(0x44);
        if (var_r0 != NULL) {
            var_r0 = ((TObjPlayer *)var_r0)->construct_weapon_casing((u8 *)arg0, (u8 *)arg1, (u8 *)sp8, (u8 *)arg3, (u8 *)arg4);
        }
        TItemAttacker::spawn_item_timer((s32)var_r0, (s32)expire_weapon_casing, 0xF);
    }
}

}
