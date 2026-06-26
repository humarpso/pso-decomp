#include "types.h"

extern "C" {

int bswap_32__FPUl(void* a0 = 0);
int bswap__13packet_headerFv(void* a0 = 0);
int fn_801DF360(void* a0 = 0);
int fn_801DF47C(void* a0 = 0);
int fn_801DF740(void* a0 = 0);
int fn_801DF7F8(void* a0 = 0);
void fn_801DF310(void* p);
void fn_801DF42C(void* p);
void fn_801DF6F0(void* p);
void fn_801DF7A8(void* p);
int __ct__16TPlyGuildCardTagFRC16TPlyGuildCardTag(void*);
void* fn_801DF3F0(void* p, void* a1);
void fn_801DF6BC(void* p);
int fn_801DF2F0(void* p);
int fn_801DF818(void* p);

int fn_801DF280(void) { return 0; }
int fn_801DF2BC(void) { return 0; }
int fn_801DF2F0(void* p) { return bswap__13packet_headerFv(p); }
void fn_801DF310(void* p) { bswap__13packet_headerFv(p); { int i; for (i = 0; i < 16; i++) { fn_801DF360((char*)p + 0x4 + i * 12); } } }
int fn_801DF360(void*) { return 0; }
int fn_801DF394(void) { return 0; }
void* fn_801DF3F0(void* p, void* a1) { __ct__16TPlyGuildCardTagFRC16TPlyGuildCardTag(p); *(void**)((char*)p + 0x8) = *(void**)((char*)a1 + 0x8); return p; }
void fn_801DF42C(void* p) { bswap__13packet_headerFv(p); { int i; for (i = 0; i < 32; i++) { fn_801DF47C((char*)p + 0x4 + i * 212); } } }
int fn_801DF47C(void*) { return 0; }
int fn_801DF4B8(void) { return 0; }
int fn_801DF4FC(void) { return 0; }
int fn_801DF558(void) { return 0; }
int fn_801DF61C(void) { return 0; }
void fn_801DF6BC(void* p) { bswap__13packet_headerFv(p); fn_801DF6F0((char*)p + 0x4); }
void fn_801DF6F0(void* p) { bswap_32__FPUl(p); { int i; for (i = 0; i < 5; i++) { fn_801DF740((char*)p + 0x4 + i * 4); } } }
int fn_801DF740(void*) { return 0; }
int fn_801DF774(void) { return 0; }
void fn_801DF7A8(void* p) { bswap__13packet_headerFv(p); { int i; for (i = 0; i < 56; i++) { fn_801DF7F8((char*)p + 0x4 + i * 32); } } }
int fn_801DF7F8(void*) { return 0; }
int fn_801DF818(void* p) { return bswap__13packet_headerFv(p); }
int fn_801DF838(void) { return 0; }
int fn_801DF874(void) { return 0; }
int fn_801DF8A8(void) { return 0; }

}
