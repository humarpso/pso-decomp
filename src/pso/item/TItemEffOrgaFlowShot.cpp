#include "types.h"
#include "pso/item/TUnk_804E355C.h"

extern "C" {

s32 query_game_join_id__10TObjPlayerFv(s32);
int resolve_attack_col_hit__13TUnk_804E355CFPUc(void*);

u8 TUnk_804E355C::has_game_join_id() {
    return (u8) (query_game_join_id__10TObjPlayerFv(this->m_ac) != 0);
}
void TUnk_804E355C::vfunc_6(s32 *) { resolve_attack_col_hit__13TUnk_804E355CFPUc(this); }

}
