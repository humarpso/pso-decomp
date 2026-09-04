#include "types.h"

extern "C" {

void init_npc_animation__10TObjPlayerFPvPvPvPv(void* p, void* a1, void* a2, void* a3);
int set_field_dc__10TObjPlayerFPvi(void*, void*);
int set_field_d8__10TObjPlayerFPvi(void*);
int set_animation__10TObjPlayerFPvs(void*, void*);

void init_npc_animation__10TObjPlayerFPvPvPvPv(void* p, void* a1, void* a2, void* a3) { set_field_d8__10TObjPlayerFPvi(p); set_field_dc__10TObjPlayerFPvi(p, a2); set_animation__10TObjPlayerFPvs(p, a3); }

}
