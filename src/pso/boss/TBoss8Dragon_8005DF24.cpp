#include "types.h"

extern "C" {

void update_unless_demo__12TBoss8DragonFPv(void* p);
int TBoss8Dragon__sub_8005DE94(void*);
int check_demo_mode__10TObjPlayerFv(void*);

void update_unless_demo__12TBoss8DragonFPv(void* p) { if (check_demo_mode__10TObjPlayerFv(p) == 0) { TBoss8Dragon__sub_8005DE94(p); } }

}
