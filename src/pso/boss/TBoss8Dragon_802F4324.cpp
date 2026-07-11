#include "types.h"

extern "C" {

void try_update__12TBoss8DragonFPv(void* p);
int TBoss8Dragon__sub_802F4360(void* p);
int TBoss8Dragon__sub_802F42A0(void*);
int fn_80080750(void*);
int fn_800BB858(void*);

void try_update__12TBoss8DragonFPv(void* p) { if (fn_80080750(p) == 0) { TBoss8Dragon__sub_802F42A0(p); } }
int TBoss8Dragon__sub_802F4360(void* p) { return fn_800BB858(p); }

}
