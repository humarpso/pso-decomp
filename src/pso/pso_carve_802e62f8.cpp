#include "types.h"

extern "C" {

int bswap_32__FPUl(void*);
int fn_8001960C(void*);
int fn_801E4570(void*);
void TAdGameStartGC__vt2(void);

void fn_802E62F8(void* p) { fn_8001960C(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); }
void fn_802E6334(void* p) { fn_802E62F8(p); fn_801E4570(p); }
int fn_802E6368(void) { return 0; }
void TAdGameStartGC__vt2(void) {  }
int fn_802E6380(void) { return 0; }

}
