#include "types.h"

extern "C" {

void update_all__10TObjPlayerFPv(void* p);
int draw_mesh_group__10TObjPlayerFPv(void*);
int TObjPlayer__sub_8033D380(void*);
int update_hp_gauge_fade__10TObjPlayerFPv(void*);
int TObjPlayer__sub_8033D590(void*);

void update_all__10TObjPlayerFPv(void* p) { draw_mesh_group__10TObjPlayerFPv(p); update_hp_gauge_fade__10TObjPlayerFPv(p); TObjPlayer__sub_8033D590(p); TObjPlayer__sub_8033D380(p); }

}
