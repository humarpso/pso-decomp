#include "types.h"

extern "C" {

int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int fn_8001960C(void*);
int TLobby__send_and_handle_60(void*);
void fn_800F7A50(void* p);
int fn_800F7A64(void);

void fn_800F795C(void* p) { fn_8001960C(p); bswap_32__FPUl((char*)p + 0x4); }
void fn_800F7990(void* p) { fn_800F795C(p); TLobby__send_and_handle_60(p); }
int fn_800F79C4(void) { return 0; }
void fn_800F79E0(void* p) { fn_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }
void fn_800F7A1C(void* p) { fn_800F79E0(p); TLobby__send_and_handle_60(p); }
void fn_800F7A50(void* p) { *(u8*)((char*)p + 0x0) = 10; *(u8*)((char*)p + 0x1) = 3; }
int fn_800F7A64(void) { return 4; }

}
