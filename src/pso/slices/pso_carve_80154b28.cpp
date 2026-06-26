#include "types.h"

extern "C" {

int fn_80154B60(void*);
int fn_801A1FDC(void*, void*);
void fn_80154B28(void* p);

void fn_80154B28(void* p) { fn_801A1FDC(p, (void*)0); fn_80154B60(p); }

}
