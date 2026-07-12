#include "types.h"

extern "C" {

int set_state_1__12TBoss8DragonFPv(void* p);
int TBoss8Dragon__sub_802FB804(void* p);
int TBoss8Dragon__sub_802FB828(void*, int);

int set_state_1__12TBoss8DragonFPv(void* p) { return TBoss8Dragon__sub_802FB828(p, 1); }
int TBoss8Dragon__sub_802FB804(void* p) { return TBoss8Dragon__sub_802FB828(p, 0); }

}
