#include "types.h"

extern "C" {

int TWindowHelpItem__sub_80255440(void*);
int fn_80255AB4(void*);
void fn_80255980(void* p, void* a1, void* a2);

void fn_80255980(void* p, void* a1, void* a2) { *(void**)((char*)p + 0xa4) = a2; *(void**)((char*)p + 0x70) = a1; fn_80255AB4(p); TWindowHelpItem__sub_80255440(p); }

}
