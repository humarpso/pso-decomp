#include "types.h"
#include "pso/misc/TOTrap.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 post_translate_matrix(void *);
s32 rotate_matrix_y(s32, s32);
s32 push_matrix();
s32 pop_matrix();
s32 draw_chunk_object(s32);
s32 draw_model_motion(s32, s32, f32);

extern const f32 lbl_805DBA40;
extern const f32 lbl_805DBA44;

struct TOTrapBase { char pad[0x18]; };
struct TOTrapVObj : TOTrapBase {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};
#pragma explicit_unused_unused_members on
void TOTrap::render() {
    u8 *arg0 = (u8 *)this;
    if (TObjPlayer::is_any_teammate_in_state() == 0) {
        *(s32 *)((s8 *)arg0 + 0x340) = ((TOTrapVObj*)arg0)->m8(lbl_805DBA40, lbl_805DBA44);
        if ((s32) *(s32 *)((s8 *)arg0 + 0x340) == 1) {
            push_matrix();
            post_translate_matrix(arg0 + 0x38);
            rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
            TObjFish::set_global_param(*(s32 *)((s8 *)arg0 + 0x24));
            if (TObjPlayer::check_demo_mode() == 1) {
                draw_chunk_object(*(s32 *)((s8 *)arg0 + 0x34));
            } else {
                draw_model_motion(*(s32 *)((s8 *)arg0 + 0x34), *(s32 *)((s8 *)arg0 + 0xF8), *(f32 *)((s8 *)arg0 + 0xC0));
            }
            pop_matrix();
        }
    }
}

}
