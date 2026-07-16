#include "types.h"

extern "C" {

int TItemProShield__sub_80116CD8(void* p);
int TItemObject__sub_801160E0(void*);

int TItemProShield__sub_80116CD8(void* p) { return TItemObject__sub_801160E0(*(void**)((char*)p + 0xf0)); }

}
