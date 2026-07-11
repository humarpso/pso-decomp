#include "types.h"

extern "C" {

int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int TObjPlayer__sub_8001960C(void*);
int TLobby__send_and_handle_60(void*);
void fn_80036288(void);
void fn_8003628C(void);
void fn_80036290(void);
void fn_80036294(void);
void fn_80036298(void);
void fn_8003629C(void);
void fn_800362A0(void);
void fn_80036358(void* p);
void fn_800363A0(void* p);

void fn_80036288(void) {  }
void fn_8003628C(void) {  }
void fn_80036290(void) {  }
void fn_80036294(void) {  }
void fn_80036298(void) {  }
void fn_8003629C(void) {  }
void fn_800362A0(void) {  }
void fn_800362A4(void* p) { TObjPlayer__sub_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_32__FPUl((char*)p + 0x8); }
void fn_800362E8(void* p) { TObjPlayer__sub_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }
void fn_80036324(void* p) { fn_800362E8(p); TLobby__send_and_handle_60(p); }
void fn_80036358(void* p) { *(u8*)((char*)p + 0x0) = 19; *(u8*)((char*)p + 0x1) = 2; }
void fn_8003636C(void* p) { fn_800362A4(p); TLobby__send_and_handle_60(p); }
void fn_800363A0(void* p) { *(u8*)((char*)p + 0x0) = 20; *(u8*)((char*)p + 0x1) = 3; }

}
