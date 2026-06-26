#include "types.h"

extern "C" {

int fn_80112E20(void*, void*);
void TItemMag__sub_80113140(void* p);

void TItemMag__sub_80113140(void* p) { if (*(int*)((char*)p + 0x1cc) > 45) { fn_80112E20(p, (void*)1); } }

}
