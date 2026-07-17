#include "types.h"

extern "C" {

void TObjGyaranzoMissile__sub_801311D8(void* p);
int TOHangerMachine01__sub_803D9C00(void*);
int get_player_list__10TObjPlayerFv(void*);

void TObjGyaranzoMissile__sub_801311D8(void* p) { if (get_player_list__10TObjPlayerFv(p) == 1) { TOHangerMachine01__sub_803D9C00((char*)p + 0x1fc); } }

}
