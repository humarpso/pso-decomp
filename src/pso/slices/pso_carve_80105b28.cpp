#include "types.h"

extern "C" {

int fn_80105B5C(void*);
int fn_801E4464(void*);
void fn_80105B28(void* p);

void fn_80105B28(void* p) { fn_80105B5C(p); fn_801E4464(p); }

}
