#include "types.h"

extern "C" {

int fn_8004BA70(void*);
int fn_802E522C(void*);
void fn_8004C378(void* p);

void fn_8004C378(void* p) { fn_8004BA70(p); fn_802E522C(p); *(int*)((char*)p + 0x380) = 454; }

}
