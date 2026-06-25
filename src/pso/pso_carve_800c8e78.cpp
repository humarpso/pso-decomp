#include "types.h"

extern "C" {

int fn_800BB858(void*);
int fn_800CC0C4(void*);
void fn_800C8E78(void* p);

void fn_800C8E78(void* p) { if (fn_800BB858(p) != 0) { fn_800CC0C4(p); } }

}
