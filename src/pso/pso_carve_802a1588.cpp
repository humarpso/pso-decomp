#include "types.h"

extern "C" {

int fn_801D7D4C(void*);
void fn_802A1588(void* p);

void fn_802A1588(void* p) { fn_801D7D4C(p); fn_801D7D4C((char*)p + 0x24); }

}
