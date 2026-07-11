#include "types.h"

extern "C" {

int set_flag8__6TLobbyFPv(void*);
int queue_destruction__7TObjectFv(void*);
int TOVS2Wall01__sub_8017BE3C(void* p);
int TObjPlayer__sub_801B4A18(void*, int);

void release__11TOVS2Wall01FPv(void* p) { set_flag8__6TLobbyFPv(p); queue_destruction__7TObjectFv(p); }
int TOVS2Wall01__sub_8017BE3C(void* p) { return TObjPlayer__sub_801B4A18(p, -1); }

}
