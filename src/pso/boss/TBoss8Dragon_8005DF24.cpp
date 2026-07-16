#include "types.h"

extern "C" {

void update_unless_demo__12TBoss8DragonFPv(void* p);
int render_model__12TBoss8DragonFPv(void*);
int check_demo_mode__10TObjPlayerFv(void*);

void update_unless_demo__12TBoss8DragonFPv(void* p) { if (check_demo_mode__10TObjPlayerFv(p) == 0) { render_model__12TBoss8DragonFPv(p); } }

}
