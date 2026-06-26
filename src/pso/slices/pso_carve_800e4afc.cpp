#include "types.h"

extern "C" {

int fn_800BB858(void*);
int fn_800E6F64(void*);
int fn_800E762C(void*);
void fn_800E4AFC(void* p);

void fn_800E4AFC(void* p) { if (fn_800BB858(p) != 0) { fn_800E762C(p); fn_800E6F64(p); } }

}
