#include "types.h"
#include "pso/unk/TUnk_804A5D10.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 vec3_add_to(void *, void *);
u32 query_game_join_id__10TObjPlayerFv(s32);
s32 queue_destruction__7TObjectFv(void *);

extern const f32 lbl_805DAF70;

void TUnk_804A5D10::run_task() {
    u8 *arg0 = (u8 *)this;
    if (query_game_join_id__10TObjPlayerFv(*(s32 *)((s8 *)arg0 + 0x1C)) == 0U) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    vec3_add_to(arg0 + 0x2C, arg0 + 0x20);
    this->m_24 = (f32) (this->m_24 + lbl_805DAF70);
}

}
