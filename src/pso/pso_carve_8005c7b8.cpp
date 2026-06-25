#include "types.h"

extern "C" {

int fn_8005D6D4(void*);
int fn_800F6B68(void*);
void fn_8005C7B8(void* p);

void fn_8005C7B8(void* p) { if (*(int*)((char*)p + 0x374) != 3) { fn_800F6B68(p); fn_8005D6D4(*(void**)((char*)p + 0x378)); *(int*)((char*)p + 0x374) = 3; } }

}
