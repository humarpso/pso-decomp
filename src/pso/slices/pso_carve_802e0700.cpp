#include "types.h"

extern "C" {

int TObjPlayer__sub_802E05DC(void*);
void fn_802E0700(void* p);

void fn_802E0700(void* p) { if (*(int*)((char*)p + 0xfc) == 3) { TObjPlayer__sub_802E05DC(p); } }

}
