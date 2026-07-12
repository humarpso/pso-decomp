#include "types.h"

extern "C" {

void TBoss8Dragon__sub_80064764(void* p);
int update_state_3__12TBoss8DragonFPv(void* p);
int set_state_2__12TBoss8DragonFPv(void* p);
int attack_default__12TBoss8DragonFPv(void* p);
int query_default__12TBoss8DragonFPv(void* p);
int TBoss8Dragon__sub_80064968(void*, int);

void TBoss8Dragon__sub_80064764(void* p) { query_default__12TBoss8DragonFPv((void*)(p)); attack_default__12TBoss8DragonFPv((void*)(p)); }
int update_state_3__12TBoss8DragonFPv(void* p) { return TBoss8Dragon__sub_80064968(p, 3); }
int set_state_2__12TBoss8DragonFPv(void* p) { return TBoss8Dragon__sub_80064968(p, 2); }
int attack_default__12TBoss8DragonFPv(void* p) { return TBoss8Dragon__sub_80064968(p, 1); }
int query_default__12TBoss8DragonFPv(void* p) { return TBoss8Dragon__sub_80064968(p, 0); }

}
