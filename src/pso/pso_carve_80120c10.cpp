#include "types.h"

extern "C" {

int fn_8010B530(void*);
int fn_8012107C(void*, void*);
int memset(void*, void*, void*);
void fn_80120C10(void* p);

void fn_80120C10(void* p) { memset((char*)p + 0x18c, (void*)0, (void*)16); fn_8012107C(p, (void*)12); fn_8010B530(p); }

}
