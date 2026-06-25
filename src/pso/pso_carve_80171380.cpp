#include "types.h"

extern "C" {

int bswap_16__FPUs(void*);
int fn_8001960C(void*);
int fn_801E4570(void*);
void fn_80171380(void);
void TOMineIcon01__vt82(void);

void fn_80171380(void) {  }
int fn_80171384(void) { return 0; }
int fn_80171398(void) { return 0; }
void fn_801713AC(void* p) { fn_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }
void fn_801713E8(void* p) { fn_801713AC(p); fn_801E4570(p); }
int fn_8017141C(void) { return 0; }
void TOMineIcon01__vt82(void) {  }

}
