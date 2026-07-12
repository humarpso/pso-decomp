#include "types.h"

extern "C" {

void* TWindowSubSymbolChat__sub_8007763C(void* p);
void bswap_symbol_chat_packet__20TWindowSubSymbolChatFPv(void* p);
void TWindowSubSymbolChat__sub_80077680(void* p);
void TWindowSubSymbolChat__sub_800776D0(void* p);
void TWindowSubSymbolChat__sub_80077704(void* p);
int TWindowSubSymbolChat__sub_80077718(void);
int TObjPlayer__sub_8001960C(void*);
int bswap_16__FPUs(void* a0 = 0);
int bswap_32__FPUl(void* a0 = 0);
int update_players__6TLobbyFi(void*);

void* TWindowSubSymbolChat__sub_8007763C(void* p) { return (char*)p + 0x1c; }
void bswap_symbol_chat_packet__20TWindowSubSymbolChatFPv(void* p) { TObjPlayer__sub_8001960C(p); bswap_32__FPUl((char*)p + 0x4); TWindowSubSymbolChat__sub_80077680((void*)((char*)p + 0x8)); }
void TWindowSubSymbolChat__sub_80077680(void* p) { bswap_32__FPUl(p); { int i; for (i = 0; i < 4; i++) { bswap_16__FPUs((char*)p + 0x4 + i * 2); } } }
void TWindowSubSymbolChat__sub_800776D0(void* p) { bswap_symbol_chat_packet__20TWindowSubSymbolChatFPv((void*)(p)); update_players__6TLobbyFi(p); }
void TWindowSubSymbolChat__sub_80077704(void* p) { *(u8*)((char*)p + 0x0) = 7; *(u8*)((char*)p + 0x1) = 17; }

    extern int lbl_805D4E50;
int TWindowSubSymbolChat__sub_80077718(void) {  return lbl_805D4E50; }

}
