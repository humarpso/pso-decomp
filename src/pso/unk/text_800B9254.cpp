#include "types.h"
#include "pso/enemy/TObjEneDD_ST.h"

extern "C" {

void vfunc_83__12TObjEneDD_STFv(void *arg0);

s32 enemy_clear_target(void *);
s32 is_player_entity_id(u16);
s32 TObjEneDD__vt81(void *);
u32 get_player_by_client_id(u16);

void TObjEneDD_ST::vfunc_83() {
    if ((is_player_entity_id(*(u16 *)((s8 *)this + 0x38C)) != 0) && (get_player_by_client_id(*(u16 *)((s8 *)this + 0x38C)) == 0U)) {
        enemy_clear_target(this);
    }
    TObjEneDD__vt81(this);
}

}
