#include "types.h"

extern "C" {

void TObjPlayer__sub_802E0700(void* p);
int update_chara_making__10TObjPlayerFPv(void*);

void TObjPlayer__sub_802E0700(void* p) { if (*(int*)((char*)p + 0xfc) == 3) { update_chara_making__10TObjPlayerFPv(p); } }

}
