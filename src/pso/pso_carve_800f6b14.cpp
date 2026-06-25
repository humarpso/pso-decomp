#include "types.h"

extern "C" {

int fn_800F6B68(void* a0 = 0);
void fn_800F6B14(void* p);
int fn_800F6B48(void* p);
int fn_80105538(void*);

void fn_800F6B14(void* p) { fn_800F6B68(p); fn_800F6B48(p); }
int fn_800F6B48(void* p) { return fn_80105538(p); }
int fn_800F6B68(void*) { return 0; }

}
