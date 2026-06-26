#include "types.h"

extern "C" {

int fn_8002AE7C(void*, void*);
int fn_8002AE84(void*);
int fn_80143434(void*, void*);
void fn_801433E8(void* p, void* a1, void* a2, void* a3);

void fn_801433E8(void* p, void* a1, void* a2, void* a3) { fn_8002AE84(p); fn_8002AE7C(p, a2); fn_80143434(p, a3); }

}
