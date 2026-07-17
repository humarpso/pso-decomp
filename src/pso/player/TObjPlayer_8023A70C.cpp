#include "types.h"

extern "C" {

int advance_lifetime_or_destroy(void*);
int fn_8023A694(void* a0 = 0);
void TObjPlayer__sub_8023A70C(void* p);
int TTecBarta__sub_8023A674(void* p);
int TObjPlayer__sub_8023A510(void*);

void TObjPlayer__sub_8023A70C(void* p) { fn_8023A694(p); advance_lifetime_or_destroy(p); }

}
