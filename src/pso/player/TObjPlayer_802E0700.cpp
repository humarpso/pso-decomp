#include "types.h"

extern "C" {

void update_chara_making_if_state3__10TObjPlayerFPv(void* p);
int update_chara_making__10TObjPlayerFPv(void*);

void update_chara_making_if_state3__10TObjPlayerFPv(void* p) { if (*(int*)((char*)p + 0xfc) == 3) { update_chara_making__10TObjPlayerFPv(p); } }

}
