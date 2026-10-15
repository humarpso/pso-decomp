#include "types.h"

extern "C" {

void TObjEneEpsilon__vt81(void *arg0);

s32 enemy_clear_target(void *);
s32 is_player_entity_id(u16);
s32 TObjEneDD__vt81(void *);
u32 get_player_by_client_id(u16);

void TObjEneEpsilon__vt81(void *arg0) {
    if ((is_player_entity_id(*(u16 *)((s8 *)arg0 + 0x38C)) != 0) && (get_player_by_client_id(*(u16 *)((s8 *)arg0 + 0x38C)) == 0U)) {
        enemy_clear_target(arg0);
    }
    TObjEneDD__vt81(arg0);
}

}
