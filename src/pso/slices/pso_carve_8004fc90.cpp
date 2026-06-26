#include "types.h"

extern "C" {

int fn_8004FA98(void*);
int fn_8004FB24(void*);
void fn_8004FC90(void* p);

void fn_8004FC90(void* p) { fn_8004FB24(p); fn_8004FA98(p); }

}
