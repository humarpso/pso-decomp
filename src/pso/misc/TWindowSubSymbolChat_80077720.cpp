#include "types.h"

extern "C" {

int is_initialized__20TWindowSubSymbolChatFPv(void* p);
void bswap_entry__20TWindowSubSymbolChatFPv(void* p);
int TAdSinglePlyChrSelectGC__sub_80132F2C(void*, void*);
int byteswap_entry__20TWindowSubSymbolChatFPv(void*);
int bswap_32__FPUl(void*);
int fn_80077788(void);
int fn_80077790(void);

int is_initialized__20TWindowSubSymbolChatFPv(void* p) { return *(u32*)((char*)p + 0x0) & 0x1; }
void bswap_entry__20TWindowSubSymbolChatFPv(void* p) { bswap_32__FPUl(p); byteswap_entry__20TWindowSubSymbolChatFPv((char*)p + 0x1c); }

}
