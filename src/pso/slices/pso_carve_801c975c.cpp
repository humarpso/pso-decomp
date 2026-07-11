#include "types.h"

extern "C" {

int TObjPlayer__sub_8001053C(void*);
int obj_clearFlags30(void*, void*);
void TObjPlayer__sub_801C975C(void* p);

void TObjPlayer__sub_801C975C(void* p) { obj_clearFlags30(p, (void*)65536); TObjPlayer__sub_8001053C(p); }

}
