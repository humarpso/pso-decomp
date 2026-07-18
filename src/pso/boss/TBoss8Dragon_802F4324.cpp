#include "types.h"

extern "C" {

void try_update__12TBoss8DragonFPv(void* p);
int TBoss8Dragon__sub_802F4360(void* p);
int draw__12TBoss8DragonFPv(void*);
int check_demo_mode__10TObjPlayerFv(void*);
int get_target_info__9TObjEneDDFPv(void*);

void try_update__12TBoss8DragonFPv(void* p) { if (check_demo_mode__10TObjPlayerFv(p) == 0) { draw__12TBoss8DragonFPv(p); } }
int TBoss8Dragon__sub_802F4360(void* p) { return get_target_info__9TObjEneDDFPv(p); }

}
