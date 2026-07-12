#include "types.h"

extern "C" {

int TBoss6PlotFalz__sub_802AC6D0(void*);
int fn_802E522C(void*);
void fn_802B0270(void* p);

void fn_802B0270(void* p) { TBoss6PlotFalz__sub_802AC6D0(p); *(int*)((char*)p + 0x3d0) = 0; *(int*)((char*)p + 0x3cc) = 0; fn_802E522C(p); }

}
