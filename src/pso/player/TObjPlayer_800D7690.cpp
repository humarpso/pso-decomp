#include "types.h"
#include "pso/player/TObjPlayer.h"

typedef struct Ent_800D76E8 {
    f32 ax, ay, az;
    s32 ta;
    f32 bx, by, bz;
    s32 tb;
} Ent_800D76E8;

typedef struct Trail_800D76E8 {
    u8 pad0[0x1C];
    s32 count;
    Ent_800D76E8 e[1];
} Trail_800D76E8;

extern "C" {
s32 decrement_packed_timer__15TObjBoss2TunnelFPUll(void *, int);
void TObjPlayer__sub_800D76E8(Trail_800D76E8 *arg0);
}

extern "C" {

void TObjPlayer__sub_800D7818(void *arg0, s32 arg1, s32 arg2);
s32 draw_trail_strip__10TObjPlayerFPvl(void *, s32, s32);
s32 init_xyz_limits__10TObjPlayerFv();
s32 toggle_flag_9_if_flag_10_is_clear__7TObjectFv();

void TObjPlayer::flush_dropped_meseta() {
    u8 *arg0 = (u8 *)this;
    if ((toggle_flag_9_if_flag_10_is_clear__7TObjectFv() == 0) && ((s32) *(s32 *)((s8 *)arg0 + 0x1C) > 1)) {
        init_xyz_limits__10TObjPlayerFv();
        draw_trail_strip__10TObjPlayerFPvl(arg0 + 0x20, *(s32 *)((s8 *)arg0 + 0x1C) * 2, 1);
    }
}

void TObjPlayer__sub_800D76E8(Trail_800D76E8 *arg0) {
    s32 ta;
    s32 tb;
    s32 r;
    if (arg0->count <= 0) {
        return;
    }
    ta = arg0->e[0].ta;
    r = decrement_packed_timer__15TObjBoss2TunnelFPUll(&ta, 0x20);
    tb = arg0->e[0].tb;
    if (r & decrement_packed_timer__15TObjBoss2TunnelFPUll(&tb, 0x20)) {
        Ent_800D76E8 *dst = &arg0->e[0];
        Ent_800D76E8 *src = &arg0->e[1];
        s32 i;
        arg0->count--;
        for (i = 0; i < arg0->count; i++) {
            dst->ax = src->ax;
            dst->ay = src->ay;
            dst->az = src->az;
            dst->bx = src->bx;
            dst->by = src->by;
            dst->bz = src->bz;
            src++;
            dst++;
        }
        return;
    }
    if (arg0->count > 1) {
        Ent_800D76E8 *p = &arg0->e[arg0->count - 1];
        Ent_800D76E8 *q = p - 1;
        s32 j;
        for (j = 1; j < arg0->count; j++) {
            p->ta = q->ta;
            p[-1].tb = q[-1].tb;
            q--;
            p--;
        }
    }
    arg0->e[0].ta = ta;
    arg0->e[0].tb = tb;
}

void TObjPlayer__sub_800D7818(void *arg0, s32 arg1, s32 arg2) {
    *(s32 *)((s8 *)arg0 + 0x120) = arg1;
    *(s32 *)((s8 *)arg0 + 0x124) = arg2;
}

}
