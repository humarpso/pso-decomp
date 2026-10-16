#include "types.h"
#include "pso/player/TObjPlayer.h"
#include "pso/enemy/TObjEneBalClaw.h"
#include "pso/enemy/TObjEneMe1GiGue.h"

extern "C" {

s32 TObjEneBalClawClaw__sub_8008DC90(void *);
s32 TObjEneBalClaw__sub_8008D68C();
s32 TObjEneMe1GiGue__sub_8008FC0C(void *);
s32 TObjEneMe1GiGue__sub_8008FC10(void *);
s32 sub_8008FF50__18TObjEneBalClawBodyFv(void *);
s32 submit_cursor_candidate(void *, int, int, f32, f32);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 minimap_render_dot(void *, int, int, int);

void TObjPlayer::update_control_state() {
    u8 *arg0 = (u8 *)this;
    f32 temp_f1;
    f32 temp_f2;
    u8 *temp_r5;

    TObjEneBalClaw__sub_8008D68C();
    if (TObjPlayer::check_demo_mode() == 1) {
        TObjEneBalClawClaw__sub_8008DC90((void *) (arg0));
        TObjEneMe1GiGue__sub_8008FC0C((void *) (arg0));
        return;
    }
    if ((*(s32 *)((s8 *)arg0 + 0x388) & 0x02000000) && (((TObjPlayer *)arg0)->get_flag_0x388_b24() == 0)) {
        ((TObjEneMe1GiGue *)arg0)->update_if_active((int) (2));
    } else {
        TObjEneMe1GiGue__sub_8008FC10((void *) (arg0));
    }
    if ((s16) this->m_326 != (s32) *(s32 *)&this->m_374) {
        if ((s32) this->m_37c != -1) {
            this->m_37c = -1;
            sub_8008FF50__18TObjEneBalClawBodyFv((void *) (arg0));
        }
        this->m_326 = (s16) *(s32 *)&this->m_374;
        this->m_37c = 0;
    }
    sub_8008FF50__18TObjEneBalClawBodyFv((void *) (arg0));
    ((TObjEneBalClaw *)arg0)->update_wobble();
    ((TObjEneBalClaw *)arg0)->update_claw_angle();
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x2FC), (void *) (arg0 + 0x38));
    temp_f2 = *(f32 *)((s8 *)arg0 + 0x300);
    *(f32 *)((s8 *)arg0 + 0x300) = (f32) (temp_f2 + (*(f32 *)&this->m_3b4 + *(f32 *)&this->m_3bc));
    temp_f1 = *(f32 *)&this->m_3b4;
    temp_r5 = (unsigned char *) (*(void * *)&this->m_a4);
    *(f32 *)((s8 *)temp_r5 + 4) = (f32) (temp_f1 + *(f32 *)&this->m_3bc);
    submit_cursor_candidate((void *) (arg0), (int) (-1), (int) (temp_r5), (f32) (temp_f1), (f32) (temp_f2));
    minimap_render_dot((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (0));
}

}
