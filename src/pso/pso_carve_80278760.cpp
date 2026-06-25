#include "types.h"

extern "C" {

int fn_80266CF8(void*);
int fn_80266D78(void*);
int fn_80266DB0(void*);
int fn_80278CCC(void*, void*);
void fn_80278760(void* p, void* a1);

void fn_80278760(void* p, void* a1) { fn_80266D78(p); fn_80266DB0(p); fn_80278CCC(p, a1); fn_80266CF8(p); }

}
