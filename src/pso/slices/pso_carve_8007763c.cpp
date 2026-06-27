#include "types.h"

extern "C" {

int bswap_16__FPUs(void* a0 = 0);
int bswap_32__FPUl(void* a0 = 0);
void fn_80077680(void* p);
int fn_8001960C(void*);
int TLobby__sub_801E45D0(void*);
void fn_80077644(void* p);
void fn_800776D0(void* p);
void* fn_8007763C(void* p);
void fn_80077704(void* p);

void* fn_8007763C(void* p) { return (char*)p + 0x1c; }
void fn_80077644(void* p) { fn_8001960C(p); bswap_32__FPUl((char*)p + 0x4); fn_80077680((char*)p + 0x8); }
void fn_80077680(void* p) { bswap_32__FPUl(p); { int i; for (i = 0; i < 4; i++) { bswap_16__FPUs((char*)p + 0x4 + i * 2); } } }
void fn_800776D0(void* p) { fn_80077644(p); TLobby__sub_801E45D0(p); }
void fn_80077704(void* p) { *(u8*)((char*)p + 0x0) = 7; *(u8*)((char*)p + 0x1) = 17; }

}
