#include "types.h"

extern "C" {

int fn_80112E20(void*, void*);
void TItemMag__sub_80113110(void* p);

void TItemMag__sub_80113110(void* p) { if (*(int*)((char*)p + 0x1cc) > 90) { fn_80112E20(p, (void*)1); } }

}
