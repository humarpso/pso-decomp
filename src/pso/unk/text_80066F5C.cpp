#include "types.h"

extern "C" {

void render_impl__19TObjBoss5FloorStoneFPvPv(void* p, void* a1);
int TObjPlayer__sub_80066F5C(void*);
int draw_if_all_ready__10TObjPlayerFv(void*);
int TObjPlayer__sub_803D9B2C(void);
int TObjPlayer__sub_803D9B78(void);
int set_global_param__8TObjFishFi(void*);

void render_impl__19TObjBoss5FloorStoneFPvPv(void* p, void* a1) { draw_if_all_ready__10TObjPlayerFv(p); set_global_param__8TObjFishFi(p); TObjPlayer__sub_803D9B2C(); TObjPlayer__sub_80066F5C(a1); TObjPlayer__sub_803D9B78(); }

}
