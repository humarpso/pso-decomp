#include "types.h"
#include "pso/item/TUnk_804E355C.h"

extern "C" {

int vfunc_6__13TUnk_804E355CFPl(void* p);
u8 has_game_join_id(void *arg0);
s32 query_game_join_id__10TObjPlayerFv(s32);
int resolve_attack_col_hit(void*);

u8 has_game_join_id(void *arg0) {
    return (u8) (query_game_join_id__10TObjPlayerFv(*(s32 *)((s8 *)arg0 + 0xAC)) != 0);
}
void TUnk_804E355C::vfunc_6(s32 *) { resolve_attack_col_hit(this); }

}
