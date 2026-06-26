#include "types.h"

extern "C" {

int fn_8019C604(void*);
void fn_802F0F04(void* p);

void fn_802F0F04(void* p) { if (*(int*)((char*)p + 0xdc) != 0) { fn_8019C604(p); } }

}
