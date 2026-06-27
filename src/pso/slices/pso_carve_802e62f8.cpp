#include "types.h"

extern "C" {

void fn_802E6368(void* p);
void TAdGameStartGC__vt2(void);
int bswap_32__FPUl(void*);
int fn_8001960C(void*);
int TLobby__sub_801E4570(void*);

void fn_802E62F8(void* p) { fn_8001960C(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); }
void fn_802E6334(void* p) { fn_802E62F8(p); TLobby__sub_801E4570(p); }
void fn_802E6368(void* p) { *(u8*)((char*)p + 0x0) = 146; *(u8*)((char*)p + 0x1) = 3; }
void TAdGameStartGC__vt2(void) {  }
int TAdGameStartGC__sub_802E6380(void) { return 0; }

}
