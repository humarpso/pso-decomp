#include "types.h"

extern "C" {

void* TLobby__sub_8013A2A4(void* p);
void TLobby__sub_8013A2DC(void);
void TLobby__sub_8013A2E0(void* p);
void TLobby__sub_8013A324(void* p);
int __ct__12TPlyCharDataFv(void*);
int __ct__16TPlyGuildCardTagFv(void*);
int bswap_16__FPUs(void*);
int fn_801A529C(void*, void*);

void* TLobby__sub_8013A2A4(void* p) { __ct__16TPlyGuildCardTagFv(p); __ct__12TPlyCharDataFv((char*)p + 0x20); return p; }
void TLobby__sub_8013A2DC(void) {  }
void TLobby__sub_8013A2E0(void* p) { bswap_16__FPUs(p); bswap_16__FPUs((char*)p + 0x2); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }
void TLobby__sub_8013A324(void* p) { fn_801A529C(p, (void*)262144); }

}
