#include "types.h"

extern "C" {

void TBoss1DragonEffTail__sub_8002BF88(void* p);
void TBoss1DragonEffTail__sub_8002BFB0(void* p);
int TBoss1DragonEffTail__sub_8002BFD8(void* p);
int fn_8002B094(void*);

void TBoss1DragonEffTail__sub_8002BF88(void* p) { *(int*)((char*)p + 0xbc) = 1; TBoss1DragonEffTail__sub_8002BFD8(p); }
void TBoss1DragonEffTail__sub_8002BFB0(void* p) { *(int*)((char*)p + 0xbc) = 0; TBoss1DragonEffTail__sub_8002BFD8(p); }
int TBoss1DragonEffTail__sub_8002BFD8(void* p) { return fn_8002B094(*(void**)((char*)p + 0xb8)); }

}
