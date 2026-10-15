#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 TObjEneBalClawClaw__sub_8008DC90(void *);
s32 TObjEneBalClaw__sub_8008D68C();
s32 update_wobble__14TObjEneBalClawFv(void *);
s32 TObjEneMe1GiGue__sub_8008FC0C(void *);
s32 TObjEneMe1GiGue__sub_8008FC10(void *);
s32 TObjPlayer__sub_8008FF50(void *);
s32 get_flag_0x388_b24__10TObjPlayerFv(void *);
s32 submit_cursor_candidate(void *, int, int, f32, f32);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 check_demo_mode__10TObjPlayerFv();
s32 minimap_render_dot(void *, int, int, int);
s32 update_claw_angle__14TObjEneBalClawFv(void *);
s32 update_if_active__15TObjEneMe1GiGueFl(void *, int);

void TObjPlayer::update_control_state() {
    u8 *arg0 = (u8 *)this;
    f32 temp_f1;
    f32 temp_f2;
    u8 *temp_r5;

    TObjEneBalClaw__sub_8008D68C();
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        TObjEneBalClawClaw__sub_8008DC90((void *) (arg0));
        TObjEneMe1GiGue__sub_8008FC0C((void *) (arg0));
        return;
    }
    if ((*(s32 *)((s8 *)arg0 + 0x388) & 0x02000000) && (get_flag_0x388_b24__10TObjPlayerFv((void *) (arg0)) == 0)) {
        update_if_active__15TObjEneMe1GiGueFl((void *) (arg0), (int) (2));
    } else {
        TObjEneMe1GiGue__sub_8008FC10((void *) (arg0));
    }
    if ((s16) *(s16 *)((s8 *)arg0 + 0x326) != (s32) *(s32 *)((s8 *)arg0 + 0x374)) {
        if ((s32) *(s32 *)((s8 *)arg0 + 0x37C) != -1) {
            *(s32 *)((s8 *)arg0 + 0x37C) = -1;
            TObjPlayer__sub_8008FF50((void *) (arg0));
        }
        *(s16 *)((s8 *)arg0 + 0x326) = (s16) *(s32 *)((s8 *)arg0 + 0x374);
        *(s32 *)((s8 *)arg0 + 0x37C) = 0;
    }
    TObjPlayer__sub_8008FF50((void *) (arg0));
    update_wobble__14TObjEneBalClawFv((void *) (arg0));
    update_claw_angle__14TObjEneBalClawFv((void *) (arg0));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x2FC), (void *) (arg0 + 0x38));
    temp_f2 = *(f32 *)((s8 *)arg0 + 0x300);
    *(f32 *)((s8 *)arg0 + 0x300) = (f32) (temp_f2 + (*(f32 *)((s8 *)arg0 + 0x3B4) + *(f32 *)((s8 *)arg0 + 0x3BC)));
    temp_f1 = *(f32 *)((s8 *)arg0 + 0x3B4);
    temp_r5 = (unsigned char *) (*(void **)((s8 *)arg0 + 0xA4));
    *(f32 *)((s8 *)temp_r5 + 4) = (f32) (temp_f1 + *(f32 *)((s8 *)arg0 + 0x3BC));
    submit_cursor_candidate((void *) (arg0), (int) (-1), (int) (temp_r5), (f32) (temp_f1), (f32) (temp_f2));
    minimap_render_dot((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (0));
}

}
