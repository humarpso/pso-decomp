#include "types.h"

extern "C" {

int fn_8010B76C(void*);
void fn_8022F210(void* p);

void fn_8022F210(void* p) { { int i; for (i = 0; i < 6; i++) { fn_8010B76C((char*)p + i * 8); } } }

}
