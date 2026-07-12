#include "types.h"

extern "C" {

void TBoss8Dragon__sub_80064764(void* p);
int TBoss8Dragon__sub_80064798(void* p);
int TBoss8Dragon__sub_800647BC(void* p);
int TBoss8Dragon__sub_800647E0(void* p);
int TBoss8Dragon__sub_80064804(void* p);
int TBoss8Dragon__sub_80064968(void*, int);

void TBoss8Dragon__sub_80064764(void* p) { TBoss8Dragon__sub_80064804((void*)(p)); TBoss8Dragon__sub_800647E0((void*)(p)); }
int TBoss8Dragon__sub_80064798(void* p) { return TBoss8Dragon__sub_80064968(p, 3); }
int TBoss8Dragon__sub_800647BC(void* p) { return TBoss8Dragon__sub_80064968(p, 2); }
int TBoss8Dragon__sub_800647E0(void* p) { return TBoss8Dragon__sub_80064968(p, 1); }
int TBoss8Dragon__sub_80064804(void* p) { return TBoss8Dragon__sub_80064968(p, 0); }

}
