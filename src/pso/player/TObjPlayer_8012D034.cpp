#include "types.h"

extern "C" {

void reset_soul_scythe_idle(void* p);
void notify_container_if_mode0__10TObjPlayerFPv(void* p);
int rotate_matrix_z(void*, void*);
int get_player_list__10TObjPlayerFv(void*);

void reset_soul_scythe_idle(void* p) { *(s32*)((char*)p + 0x1f8) = 0; }
void notify_container_if_mode0__10TObjPlayerFPv(void* p) { if (get_player_list__10TObjPlayerFv(p) == 0) { rotate_matrix_z((void*)0, *(void**)((char*)p + 0x1f8)); } }

}
