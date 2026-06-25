#include "types.h"

extern "C" {

int fn_80142F9C(void*);
int fn_8014394C(void*);
void fn_802E05A4(void* p, void* a1);

void fn_802E05A4(void* p, void* a1) { *(void**)((char*)p + 0x34) = a1; fn_8014394C(p); fn_80142F9C(p); }

}
