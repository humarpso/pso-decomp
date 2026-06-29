#include "types.h"

extern "C" {

void TBoss8DragonEffTail__sub_802FE6C4(void* p);
void TBoss8DragonEffTail__sub_802FE6EC(void* p);
int TBoss8DragonEffTail__sub_802FE714(void* p);
int fn_8002B094(void*);

void TBoss8DragonEffTail__sub_802FE6C4(void* p) { *(int*)((char*)p + 0xbc) = 1; TBoss8DragonEffTail__sub_802FE714(p); }
void TBoss8DragonEffTail__sub_802FE6EC(void* p) { *(int*)((char*)p + 0xbc) = 0; TBoss8DragonEffTail__sub_802FE714(p); }
int TBoss8DragonEffTail__sub_802FE714(void* p) { return fn_8002B094(*(void**)((char*)p + 0xb8)); }

}
