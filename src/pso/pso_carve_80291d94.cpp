#include "types.h"

extern "C" {

int fn_80293080(void*);
int fn_80299E44(void);
void fn_80291D94(void* p);

void fn_80291D94(void* p) { if (fn_80293080(p) != 0) { fn_80299E44(); } }

}
