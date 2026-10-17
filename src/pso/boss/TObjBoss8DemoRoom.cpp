#include "pso/TObjBoss8DemoRoom.h"

#include "types.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void run_task__17TObjBoss8DemoRoomFv(s32 arg0);
u32 TBoss8Dragon__sub_802F3348(s32);
s32 TBoss8Dragon__sub_802FCCBC();
void draw_chunk_object(void *child);
s32 TObjPlayer__sub_8023DEE0(s32, s32, s32, s32);
s32 push_matrix();
s32 pop_matrix();
void queue_destruction__7TObjectFv(void *arg0);

extern void *TObjBoss8DemoRoom__shared_resource_object;

void TObjBoss8DemoRoom::render() {
    TObjFish::set_global_param(*(s32 *)((s8 *)(*(void **)((s8 *)TObjBoss8DemoRoom__shared_resource_object + 0x42C)) + 0xC));
    push_matrix();
    draw_chunk_object((void *)(*(s32 *)((s8 *)(*(void **)((s8 *)TObjBoss8DemoRoom__shared_resource_object + 0x42C)) + 8)));
    TObjPlayer::reset_transform_state();
    pop_matrix();
}

void run_task__17TObjBoss8DemoRoomFv(s32 arg0) {
    TObjPlayer__sub_8023DEE0(*(s32 *)((s8 *)(*(void **)((s8 *)(*(void **)((s8 *)(*(void **)((s8 *)(*(void **)((s8 *)TObjBoss8DemoRoom__shared_resource_object + 0x42C)) + 8)) + 0x2C)) + 4)) + 4), 0, 1, 3);
    TObjPlayer__sub_8023DEE0(*(s32 *)((s8 *)(*(void **)((s8 *)(*(void **)((s8 *)(*(void **)((s8 *)(*(void **)((s8 *)(*(void **)((s8 *)TObjBoss8DemoRoom__shared_resource_object + 0x42C)) + 8)) + 0x2C)) + 0x30)) + 4)) + 4), 0, 0x14, 1);
    if ((TBoss8Dragon__sub_802F3348(0) != 0U) && (TBoss8Dragon__sub_802FCCBC() != 0)) {
        queue_destruction__7TObjectFv((void *)arg0);
    }
}
TObjBoss8DemoRoom::~TObjBoss8DemoRoom() {}

}
