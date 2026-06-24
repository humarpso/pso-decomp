#include "types.h"

extern "C" {

int fn_802D2358(void*);
void fn_802D2020(void* p);

void fn_802D2020(void* p) { fn_802D2358(p); fn_802D2358((char*)p + 0xf8); }

}
