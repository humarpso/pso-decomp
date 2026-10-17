#include "types.h"
#include "pso/player/TObjPlayer_803E4954.h"
#include "pso/unk/text_803D96A8.h"
#include "pso/unk/text_803E2D70.h"
#include "pso/misc/TOTrap.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 post_translate_matrix(void *);
s32 rotate_matrix_y(s32, s32);
s32 push_matrix();

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
        *(s32 *)&this->m_340 = ((TOTrapVObj*)arg0)->m8(lbl_805DBA40, lbl_805DBA44);
        if ((s32) *(s32 *)&this->m_340 == 1) {
            push_matrix();
            post_translate_matrix((u8 *)&this->position);
            rotate_matrix_y(0, this->rotation_y);
            TObjFish::set_global_param(this->texture_id);
            if (TObjPlayer::check_demo_mode() == 1) {
                draw_chunk_object((void *)(*(s32 *)&this->model));
            } else {
                draw_model_motion((void *)(*(s32 *)&this->model), (void *)(*(s32 *)&this->unknownF8), this->m_c0);
            }
            pop_matrix();
        }
    }
}

}
