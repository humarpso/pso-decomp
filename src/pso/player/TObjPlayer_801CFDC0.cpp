#include "types.h"

extern "C" {

void reset_and_flag__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_8001053C(void*);
int TObjEnePanarms__sub_800E2DE4(void*, void*);

void reset_and_flag__10TObjPlayerFPv(void* p) { TObjPlayer__sub_8001053C(p); TObjEnePanarms__sub_800E2DE4(p, (void*)256); }

}
