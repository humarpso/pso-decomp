#include "types.h"

extern "C" {

void fn_801F35AC(void* p);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int fn_8001960C(void*);
void fn_801F3578(void* p);
int TLobby__sub_801E4570(void*);
void fn_801F35F0(void* p);

void fn_801F3578(void* p) { fn_801F35AC(p); TLobby__sub_801E4570(p); }
void fn_801F35AC(void* p) { fn_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_32__FPUl((char*)p + 0x8); }
void fn_801F35F0(void* p) { *(u8*)((char*)p + 0x0) = 119; *(u8*)((char*)p + 0x1) = 3; }

}
