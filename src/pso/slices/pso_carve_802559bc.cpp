#include "types.h"

extern "C" {

int TWindowHelpItem__sub_80255440(void*);
int TWindowHelpItem__sub_80255AB4(void*);
void fn_802559BC(void* p, void* a1, void* a2);

void fn_802559BC(void* p, void* a1, void* a2) { *(void**)((char*)p + 0xa0) = a2; *(void**)((char*)p + 0x6c) = a1; TWindowHelpItem__sub_80255AB4(p); TWindowHelpItem__sub_80255440(p); }

}
