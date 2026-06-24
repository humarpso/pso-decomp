#include "types.h"

extern "C" {

int fn_802A1A00(void*);
int fn_802A3230(void*);
void fn_802A3354(void* p);

void fn_802A3354(void* p) { fn_802A1A00(p); fn_802A3230(p); }

}
