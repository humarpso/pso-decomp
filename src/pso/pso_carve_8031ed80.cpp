#include "types.h"

extern "C" {

int fn_800BB858(void*);
int fn_8031F800(void*);
void fn_8031ED80(void* p);

void fn_8031ED80(void* p) { if (fn_800BB858(p) != 0) { fn_8031F800(p); } }

}
