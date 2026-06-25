#include "types.h"

extern "C" {

int fn_800EAE78(void*, void*);
void fn_800EAC04(void* p);

void fn_800EAC04(void* p) { if (*(int*)((char*)p + 0x384) != 13) { fn_800EAE78(p, (void*)13); } }

}
