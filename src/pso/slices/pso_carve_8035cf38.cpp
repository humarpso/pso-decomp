#include "types.h"

extern "C" {

int fn_8035CCD0(void*);
void fn_8035CF38(void* p);

void fn_8035CF38(void* p) { if (fn_8035CCD0(p) != 0) { *(int*)((char*)p + 0x24) = 1; *(int*)((char*)p + 0x1c) = 1; } }

}
