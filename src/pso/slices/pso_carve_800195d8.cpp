#include "types.h"

extern "C" {

int bswap_16__FPUs(void*);
int TLobby__send_and_handle_60(void*);
int fn_8001960C(void* p);
int bswap_16__FPUs(void*);

void fn_800195D8(void* p) { fn_8001960C(p); bswap_16__FPUs((char*)p + 0x4); }
int fn_8001960C(void* p) { return bswap_16__FPUs((char*)p + 0x2); }
void fn_80019630(void* p) { fn_800195D8(p); TLobby__send_and_handle_60(p); }
int fn_80019664(void) { return 0; }

}
