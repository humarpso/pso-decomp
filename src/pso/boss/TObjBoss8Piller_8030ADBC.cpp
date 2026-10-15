#include "types.h"
#include "pso/TObjBoss8Piller.h"

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
s32 set_global_param__8TObjFishFl(void *);
s32 reset_transform_state__10TObjPlayerFv();
s32 push_matrix();
s32 pop_matrix();
s32 is_any_teammate_in_state__10TObjPlayerFv();
s32 is_split_screen();

extern u8 *TObjBoss8Piller__shared_resource;
extern const f32 lbl_805DF150;

void TObjBoss8Piller::render() {
    u8 *arg0 = (u8 *)this;
    s32 var_r31;

    if (is_any_teammate_in_state__10TObjPlayerFv() == 0) {
        if (is_split_screen() != 0) {
            var_r31 = *(s32 *)((s8 *)(*(void **)((s8 *)TObjBoss8Piller__shared_resource + 0x42C)) + 0x28);
        } else {
            var_r31 = *(s32 *)((s8 *)(*(void **)((s8 *)TObjBoss8Piller__shared_resource + 0x42C)) + 8);
        }
        set_global_param__8TObjFishFl((void *) (*(s32 *)((s8 *)(*(void **)((s8 *)TObjBoss8Piller__shared_resource + 0x42C)) + 0xC)));
        push_matrix();
        post_translate_matrix((void *) (arg0 + 0x1C));
        scale_matrix((int) (0), (f32) (lbl_805DF150), (f32) (lbl_805DF150), (f32) (lbl_805DF150));
        draw_model_motion((int) (var_r31), (int) (*(s32 *)((s8 *)arg0 + 0x2C)), (f32) (*(f32 *)((s8 *)arg0 + 0x28)));
        pop_matrix();
        reset_transform_state__10TObjPlayerFv();
    }
}
void TObjBoss8Piller::run_task() {
    u8 *arg0 = (u8 *)this;
    u32 temp_r3;
    u32 temp_r3_2;
    *(f32 *)((s8 *)arg0 + 0x28) = (f32) (*(f32 *)((s8 *)arg0 + 0x28) + lbl_805DF150);
    temp_r3 = get_enemy_entity((int) (*(u16 *)((s8 *)arg0 + 0x30)));
    if (temp_r3 != 0U) {
        TBoss8Dragon__sub_802FB1B0((int) (temp_r3), (f32) (lbl_805DF154), (void *) (arg0 + 0x1C));
    }
    temp_r3_2 = *(s32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x2C)) + 4) - 1;
    if (*(f32 *)((s8 *)arg0 + 0x28) >= (f32) temp_r3_2) {
        *(f32 *)((s8 *)arg0 + 0x28) = (f32) temp_r3_2;
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}

}
