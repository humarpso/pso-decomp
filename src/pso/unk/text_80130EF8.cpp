#include "types.h"
#include "pso/player/TObjPlayer.h"

struct Obj_80131070 { u8 pad[0x208]; s32 state; };

extern "C" {
extern const f32 lbl_805DB038;
void yasminkov_2000h_idle(u8 *arg0);
extern const f32 lbl_805DB03C;
void yasminkov_2000h_active(u8 *arg0);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
extern s32 tl_05;
extern const f32 lbl_805DB03C;
extern const f32 lbl_805DB040;
extern const f32 lbl_805DB044;
extern const f32 lbl_805DB048;
void yasminkov_2000h_update_recoil(u8 *arg0);
void spawn_particle_effect(void *buf, s32 n);
void yasminkov_2000h_marker(Obj_80131070 *self);
}

extern "C" {

void yasminkov_2000h_idle(u8 *arg0) {
    s32 temp_r0;
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x1F8);
    if (temp_r0 == 1) {
        *(s32 *)((s8 *)arg0 + 0x1F8) = (s32) (u8) (temp_r0 == 0);
        *(f32 *)((s8 *)arg0 + 0x204) = (f32) lbl_805DB038;
        *(f32 *)((s8 *)arg0 + 0x200) = (f32) lbl_805DB038;
        *(f32 *)((s8 *)arg0 + 0x1FC) = (f32) lbl_805DB038;
    }
}
void yasminkov_2000h_active(u8 *arg0) {
    s32 temp_r0;
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x1F8);
    if (temp_r0 == 0) {
        *(s32 *)((s8 *)arg0 + 0x1F8) = (s32) (u8) (temp_r0 == 0);
        *(f32 *)((s8 *)arg0 + 0x204) = (f32) lbl_805DB03C;
        *(f32 *)((s8 *)arg0 + 0x200) = (f32) lbl_805DB03C;
        *(f32 *)((s8 *)arg0 + 0x1FC) = (f32) lbl_805DB03C;
    }
}
#pragma push
#pragma opt_common_subs off
void yasminkov_2000h_update_recoil(u8 *arg0) {
    f32 buffer_14[3];
    s32 buffer_8[3];
    s32 temp_r0;
    s32 temp_r31;
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x208);
    switch (temp_r0) {
    case 1:
        *(f32 *)((s8 *)arg0 + 0x210) = (f32) (*(f32 *)((s8 *)arg0 + 0x210) - lbl_805DB040);
        if (*(f32 *)((s8 *)arg0 + 0x210) <= lbl_805DB044) {
            *(f32 *)((s8 *)arg0 + 0x210) = (f32) lbl_805DB044;
            *(s32 *)((s8 *)arg0 + 0x208) = 0;
            break;
        }
        break;
    case 2:
        *(f32 *)((s8 *)arg0 + 0x210) = (f32) (*(f32 *)((s8 *)arg0 + 0x210) + lbl_805DB040);
        if (lbl_805DB048 <= *(f32 *)((s8 *)arg0 + 0x210)) {
            *(f32 *)((s8 *)arg0 + 0x210) = (f32) lbl_805DB048;
            *(s32 *)((s8 *)arg0 + 0x208) = 3;
            break;
        }
        break;
    case 3:
        *(s32 *)((s8 *)arg0 + 0x208) = 1;
        temp_r31 = *(s32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0xF0)) + 0x60) - 0x4000;
        buffer_14[0] = sin_table_lookup(temp_r31);
        buffer_14[1] = lbl_805DB03C;
        buffer_14[2] = cos_table_lookup(temp_r31);
        buffer_8[0] = 0x4000;
        buffer_8[1] = *(s32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0xF0)) + 0x60);
        buffer_8[2] = 0;
        TObjPlayer::launch_weapon_casing(tl_05, (u32) arg0, 3, (u32) &buffer_14[0], (u32) &buffer_8[0]);
        break;
    }
}
#pragma pop

void yasminkov_2000h_marker(Obj_80131070 *self) {
    u8 buf[0x18];
    self->state = 2;
    ((TObjPlayer *)self)->draw_status_icon((s32)buf);
    spawn_particle_effect(buf, 9);
}

}
