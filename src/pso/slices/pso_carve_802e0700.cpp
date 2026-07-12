#include "types.h"

extern "C" {

int update_chara_making__10TObjPlayerFPv(void*);
void fn_802E0700(void* p);

void fn_802E0700(void* p) { if (*(int*)((char*)p + 0xfc) == 3) { update_chara_making__10TObjPlayerFPv(p); } }

}
