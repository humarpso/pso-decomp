#include "types.h"

extern "C" {

s32 is_owner_alive__10TObjPlayerFPv(void *arg0);
u32 query_game_join_id__10TObjPlayerFv(s32);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);

s32 is_owner_alive__10TObjPlayerFPv(void *arg0) {
    if (query_game_join_id__10TObjPlayerFv(*(s32 *)((s8 *)arg0 + 0x54)) == 0U) {
        return 0;
    }
    return all_parents_unqueued_for_destruction__7TObjectFv(arg0) != 0 ? 1 : 0;
}

}
