#include "types.h"

extern "C" {

int TItemEffOrgaFlowShot__vt4(void* p);
u8 has_game_join_id(void *arg0);
s32 query_game_join_id__10TObjPlayerFv(s32);
int resolve_attack_col_hit(void*);

u8 has_game_join_id(void *arg0) {
    return (u8) (query_game_join_id__10TObjPlayerFv(*(s32 *)((s8 *)arg0 + 0xAC)) != 0);
}
int TItemEffOrgaFlowShot__vt4(void* p) { return resolve_attack_col_hit(p); }

}
