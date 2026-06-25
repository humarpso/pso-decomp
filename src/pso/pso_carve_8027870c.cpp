#include "types.h"

extern "C" {

int fn_80266CF8(void*);
int fn_80266D78(void*);
int fn_80266DB0(void*);
int fn_80278BD8(void*, void*, void*);
void fn_8027870C(void* p, void* a1, void* a2);

void fn_8027870C(void* p, void* a1, void* a2) { fn_80266D78(p); fn_80266DB0(p); fn_80278BD8(p, a1, a2); fn_80266CF8(p); }

}
