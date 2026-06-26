#include "types.h"

extern "C" {

int __ct__12TPlyCharDataFv(void*);
int __ct__16TPlyGuildCardTagFv(void*);
int bswap_16__FPUs(void*);
int fn_801A529C(void*, void*);
void fn_8013A2DC(void);

void* fn_8013A2A4(void* p) { __ct__16TPlyGuildCardTagFv(p); __ct__12TPlyCharDataFv((char*)p + 0x20); return p; }
void fn_8013A2DC(void) {  }
void fn_8013A2E0(void* p) { bswap_16__FPUs(p); bswap_16__FPUs((char*)p + 0x2); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }
void fn_8013A324(void* p) { fn_801A529C(p, (void*)262144); }

}
