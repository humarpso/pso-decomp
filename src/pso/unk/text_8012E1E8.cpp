#include "types.h"
#include "pso/player/TObjPlayer.h"
#include "pso/TItemAttacker.h"

extern "C" {
void *construct_weapon_casing__10TObjPlayerFPvPvPvPvPvPv(void *, s32, u32, void *, u32, u32);
void *__nw__7TObjectFUl(u32);
void expire_weapon_casing(void);
void *construct_weapon_casing__10TObjPlayerFPvPvPvPvPvPv(void *, s32, u32, void *, u32, u32);
void *__nw__7TObjectFUl(u32);
void expire_weapon_casing(void);
}

extern "C" {

void TObjPlayer::spawn_weapon_casing(s32 arg0, u32 arg1, u32 arg2, u32 arg3, u32 arg4) {
    void *p;
    if ((arg0 != 0) && (arg1 != 0U) && (arg2 != 0U) && (arg3 != 0U) && (arg4 != 0U)) {
        p = __nw__7TObjectFUl(0x44);
        if (p != 0) {
            p = construct_weapon_casing__10TObjPlayerFPvPvPvPvPvPv(p, arg0, arg1, (void *)arg2, arg3, arg4);
        }
        TItemAttacker::spawn_item_timer((s32)p, (s32)expire_weapon_casing, (s32)0xF);
    }
}

void TObjPlayer::launch_weapon_casing(s32 arg0, u32 arg1, s32 arg2, u32 arg3, u32 arg4) {
    u8 sp8[0x18];
    void *var_r0;
    if ((arg0 != 0) && (arg1 != 0U) && (arg3 != 0U) && (arg4 != 0U) && (((TObjPlayer *)arg1)->draw_icon((s32)arg2, (s32)sp8) != 0)) {
        var_r0 = __nw__7TObjectFUl(0x44);
        if (var_r0 != NULL) {
            var_r0 = construct_weapon_casing__10TObjPlayerFPvPvPvPvPvPv(var_r0, arg0, arg1, sp8, arg3, arg4);
        }
        TItemAttacker::spawn_item_timer((s32)var_r0, (s32)expire_weapon_casing, (s32)0xF);
    }
}

}
