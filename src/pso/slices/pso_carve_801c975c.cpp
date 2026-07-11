#include "types.h"

extern "C" {

int TObjPlayer__sub_8001053C(void*);
int obj_clearFlags30(void*, void*);
void clear_flag__10TObjPlayerFPv(void* p);

void clear_flag__10TObjPlayerFPv(void* p) { obj_clearFlags30(p, (void*)65536); TObjPlayer__sub_8001053C(p); }

}
