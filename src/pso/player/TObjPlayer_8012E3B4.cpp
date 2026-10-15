#include "types.h"

extern "C" {

void update_or_destroy__10TObjPlayerFPv(u8 *arg0);
s32 vec3_add_to(void *, void *);
u32 query_game_join_id__10TObjPlayerFv(s32);
s32 queue_destruction__7TObjectFv(void *);

extern const f32 lbl_805DAF70;

void update_or_destroy__10TObjPlayerFPv(u8 *arg0) {
    if (query_game_join_id__10TObjPlayerFv(*(s32 *)((s8 *)arg0 + 0x1C)) == 0U) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    vec3_add_to(arg0 + 0x2C, arg0 + 0x20);
    *(f32 *)((s8 *)arg0 + 0x24) = (f32) (*(f32 *)((s8 *)arg0 + 0x24) + lbl_805DAF70);
}

}
