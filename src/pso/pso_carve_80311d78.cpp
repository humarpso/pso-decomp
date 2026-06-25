#include "types.h"

extern "C" {

int fn_8031012C(void*);
int fn_803101D4(void*);
int fn_803107D0(void*);
int fn_803112A4(void*, void*);
void fn_80311D78(void* p);

void fn_80311D78(void* p) { if (fn_8031012C(p) != 0) { fn_803101D4(p); fn_803107D0(p); fn_803112A4(p, (void*)5); } }

}
