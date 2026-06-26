#include "types.h"

extern "C" {

int fn_80105A60(void*);
int fn_801E4464(void*);
void fn_80105A2C(void* p);

void fn_80105A2C(void* p) { fn_80105A60(p); fn_801E4464(p); }

}
