#include "types.h"

extern "C" {

int set_state_1__12TBoss1DragonFPv(void* p);
int init_default__12TBoss1DragonFPv(void* p);
int TBoss1Dragon__sub_80027F54(void*, int);

int set_state_1__12TBoss1DragonFPv(void* p) { return TBoss1Dragon__sub_80027F54(p, 1); }
int init_default__12TBoss1DragonFPv(void* p) { return TBoss1Dragon__sub_80027F54(p, 0); }

}
