#include "types.h"

extern "C" {

int fn_80121200(void*);
int fn_803D9BA0(void*);
void fn_80128188(void* p);

void fn_80128188(void* p) { if (fn_80121200(p) == 0) { fn_803D9BA0((char*)p + 0x1f8); } }

}
