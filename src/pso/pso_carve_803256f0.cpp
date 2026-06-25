#include "types.h"

extern "C" {

int fn_8001A430(void*);
int fn_80325660(void*);
void fn_803256F0(void* p);

void fn_803256F0(void* p) { if (fn_8001A430(p) != 1) { fn_80325660(p); } }

}
