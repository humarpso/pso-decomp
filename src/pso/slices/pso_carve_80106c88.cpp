#include "types.h"

extern "C" {

int fn_8010ED54(void*, void*);
void fn_80106C88(void* p, void* a1);

void fn_80106C88(void* p, void* a1) { if (*(unsigned char*)(a1) == 3) { fn_8010ED54(a1, (void*)1); } }

}
