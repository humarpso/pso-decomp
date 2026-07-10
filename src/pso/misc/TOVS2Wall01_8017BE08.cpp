#include "types.h"

extern "C" {

int fn_8020C5E0(void*);
int queue_destruction__7TObjectFv(void*);
int TOVS2Wall01__sub_8017BE3C(void* p);
int TObjPlayer__sub_801B4A18(void*, int);

void release__11TOVS2Wall01FPv(void* p) { fn_8020C5E0(p); queue_destruction__7TObjectFv(p); }
int TOVS2Wall01__sub_8017BE3C(void* p) { return TObjPlayer__sub_801B4A18(p, -1); }

}
