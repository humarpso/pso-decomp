#include "types.h"

extern "C" {

int bswap_32__FPUl(void*);
int TObjPlayer__sub_8001960C(void*);
int fn_80102CE0(void*);
void fn_80152E38(void* p);

void fn_80152E38(void* p) { TObjPlayer__sub_8001960C(p); fn_80102CE0((char*)p + 0x4); bswap_32__FPUl((char*)p + 0xc); }

}
