#include "types.h"
#include "pso/TObjBoss8Piller.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"

extern "C" {
s32 queue_destruction__7TObjectFv(void *);
u32 get_enemy_entity(int);
s32 TBoss8Dragon__sub_802FB1B0(int, f32, void *);
extern const f32 lbl_805DF150;
extern const f32 lbl_805DF154;
}

extern "C" {

s32 post_translate_matrix(void *);
s32 scale_matrix(int, f32, f32, f32);
s32 draw_model_motion(int, int, f32);
s32 push_matrix();
s32 pop_matrix();
s32 is_split_screen();

extern u8 *TObjBoss8Piller__shared_resource;
extern const f32 lbl_805DF150;

void TObjBoss8Piller::render() {
    u8 *arg0 = (u8 *)this;
    s32 var_r31;

    if (TObjPlayer::is_any_teammate_in_state() == 0) {
        if (is_split_screen() != 0) {
            var_r31 = *(s32 *)((s8 *)(*(void **)((s8 *)TObjBoss8Piller__shared_resource + 0x42C)) + 0x28);
        } else {
            var_r31 = *(s32 *)((s8 *)(*(void **)((s8 *)TObjBoss8Piller__shared_resource + 0x42C)) + 8);
        }
        TObjFish::set_global_param((s32)((void *) (*(s32 *)((s8 *)(*(void **)((s8 *)TObjBoss8Piller__shared_resource + 0x42C)) + 0xC))));
        push_matrix();
        post_translate_matrix((void *) (arg0 + 0x1C));
        scale_matrix((int) (0), (f32) (lbl_805DF150), (f32) (lbl_805DF150), (f32) (lbl_805DF150));
        draw_model_motion((int) (var_r31), (int) (*(s32 *)((s8 *)arg0 + 0x2C)), (f32) (*(f32 *)((s8 *)arg0 + 0x28)));
        pop_matrix();
        TObjPlayer::reset_transform_state();
    }
}
void TObjBoss8Piller::run_task() {
    u8 *arg0 = (u8 *)this;
    u32 enemy_entity;
    u32 temp_r3_2;
    *(f32 *)((s8 *)arg0 + 0x28) = (f32) (*(f32 *)((s8 *)arg0 + 0x28) + lbl_805DF150);
    enemy_entity = get_enemy_entity((int) (*(u16 *)((s8 *)arg0 + 0x30)));
    if (enemy_entity != 0U) {
        TBoss8Dragon__sub_802FB1B0((int) (enemy_entity), (f32) (lbl_805DF154), (void *) (arg0 + 0x1C));
    }
    temp_r3_2 = *(s32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x2C)) + 4) - 1;
    if (*(f32 *)((s8 *)arg0 + 0x28) >= (f32) temp_r3_2) {
        *(f32 *)((s8 *)arg0 + 0x28) = (f32) temp_r3_2;
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}

}
