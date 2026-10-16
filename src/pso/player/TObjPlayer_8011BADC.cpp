#include "types.h"
#include "pso/TItemShootModel.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

u32 query_game_join_id__10TObjPlayerFv(s32);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);

s32 TItemShootModel::is_owner_alive() {
    if (query_game_join_id__10TObjPlayerFv(*(s32 *)((s8 *)this + 0x54)) == 0U) {
        return 0;
    }
    return all_parents_unqueued_for_destruction__7TObjectFv(this) != 0 ? 1 : 0;
}

}
