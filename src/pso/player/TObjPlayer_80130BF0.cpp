#include "types.h"

extern "C" {

void update_hanger_position__10TObjPlayerFPv(void* p);
int TOHangerMachine01__sub_803D9C00(void*);
int get_player_list__10TObjPlayerFv(void*);

void update_hanger_position__10TObjPlayerFPv(void* p) { if (get_player_list__10TObjPlayerFv(p) == 1) { TOHangerMachine01__sub_803D9C00((char*)p + 0x1f8); } }

}
