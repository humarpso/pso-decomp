#include "types.h"

extern "C" {

int bswap_32__FPUl(void*);
int fn_8001960C(void*);
void fn_8011B1CC(void* p);

void fn_8011B1CC(void* p) { fn_8001960C(p); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0x4); }

}
