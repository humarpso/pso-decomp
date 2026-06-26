#include "types.h"

extern "C" {

int fn_8025D1C8(void*, void*);
int fn_8025D264(void*, void*);
void fn_8025D338(void* p, void* a1);

void fn_8025D338(void* p, void* a1) { fn_8025D1C8(p, *(void**)((char*)p + 0xa0)); fn_8025D264(p, a1); }

}
