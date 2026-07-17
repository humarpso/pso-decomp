#include "types.h"

extern "C" {

void TObjPlayer__sub_8013085C(void* p);
int TOHangerMachine01__sub_803D9C00(void*);
int get_player_list__10TObjPlayerFv(void*);

void TObjPlayer__sub_8013085C(void* p) { if (get_player_list__10TObjPlayerFv(p) == 2) { TOHangerMachine01__sub_803D9C00((char*)p + 0x1fc); } }

}
