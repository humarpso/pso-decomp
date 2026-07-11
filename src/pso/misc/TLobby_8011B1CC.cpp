#include "types.h"

extern "C" {

void TLobby__sub_8011B1CC(void* p);
int TObjPlayer__sub_8001960C(void*);
int bswap_32__FPUl(void*);

void TLobby__sub_8011B1CC(void* p) { TObjPlayer__sub_8001960C(p); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0x4); }

}
