#include "types.h"
#include "pso/TObjBoss5FloorGrass.h"

extern "C" {

s32 draw_ginja_object(s32);
s32 push_matrix();
s32 pop_matrix();
s32 is_any_teammate_in_state__10TObjPlayerFv();
s32 set_global_param__8TObjFishFl(s32);

extern void *lbl_805D4DD8;
extern s32 boss5_common_texture_list;

void TObjBoss5FloorGrass::render() {
    if (is_any_teammate_in_state__10TObjPlayerFv() == 0) {
        push_matrix();
        set_global_param__8TObjFishFl(boss5_common_texture_list);
        draw_ginja_object(*(s32 *)((s8 *)(*(void **)((s8 *)lbl_805D4DD8 + 0x42C)) + 0x78));
        pop_matrix();
    }
}

void TObjBoss5FloorGrass::run_task() {  }

}
