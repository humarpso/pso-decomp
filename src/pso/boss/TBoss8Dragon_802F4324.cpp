#include "types.h"
#include "pso/boss/TBoss8Dragon.h"

extern "C" {

int TBoss8Dragon__sub_802F4360(void* p);
int draw__12TBoss8DragonFPv(void*);
int check_demo_mode__10TObjPlayerFv(void*);
int get_target_info__9TObjEneDDFPv(void*);

void TBoss8Dragon::try_update() { if (check_demo_mode__10TObjPlayerFv(this) == 0) { draw__12TBoss8DragonFPv(this); } }
int TBoss8Dragon__sub_802F4360(void* p) { return get_target_info__9TObjEneDDFPv(p); }

}
