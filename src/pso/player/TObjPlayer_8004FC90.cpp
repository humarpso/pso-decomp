#include "types.h"

extern "C" {

void update_both__10TObjPlayerFPv(void* p);
int release_subobjects__10TObjPlayerFPv(void*);
int TObjPlayer__sub_8004FB24(void*);

void update_both__10TObjPlayerFPv(void* p) { TObjPlayer__sub_8004FB24(p); release_subobjects__10TObjPlayerFPv(p); }

}
