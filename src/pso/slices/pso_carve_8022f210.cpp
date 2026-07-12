#include "types.h"

extern "C" {

int TItemEquipBase__sub_8010B76C(void*);
void fn_8022F210(void* p);

void fn_8022F210(void* p) { { int i; for (i = 0; i < 6; i++) { TItemEquipBase__sub_8010B76C((char*)p + i * 8); } } }

}
