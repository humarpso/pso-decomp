#include "types.h"

extern "C" {

int TObjPlayer__sub_8001053C(void*);
int obj_setFlags30(void*, void*);
void TObjPlayer__sub_801CB030(void* p);

void TObjPlayer__sub_801CB030(void* p) { TObjPlayer__sub_8001053C(p); obj_setFlags30(p, (void*)1048576); }

}
