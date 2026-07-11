#include "types.h"

extern "C" {

int bswap_16__FPUs(void*);
int TLobby__send_and_handle_60(void*);
int TObjPlayer__sub_8001960C(void* p);
int bswap_16__FPUs(void*);

void TObjPlayer__sub_800195D8(void* p) { TObjPlayer__sub_8001960C(p); bswap_16__FPUs((char*)p + 0x4); }
int TObjPlayer__sub_8001960C(void* p) { return bswap_16__FPUs((char*)p + 0x2); }
void TObjPlayer__sub_80019630(void* p) { TObjPlayer__sub_800195D8(p); TLobby__send_and_handle_60(p); }

}
