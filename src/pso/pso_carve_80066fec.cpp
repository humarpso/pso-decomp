#include "types.h"

extern "C" {

int fn_80066F5C(void*);
int fn_80083B38(void*);
int fn_803D9B2C(void);
int fn_803D9B78(void);
int fn_803DA798(void*);
void fn_80066FEC(void* p, void* a1);

void fn_80066FEC(void* p, void* a1) { fn_80083B38(p); fn_803DA798(p); fn_803D9B2C(); fn_80066F5C(a1); fn_803D9B78(); }

}
