#include "types.h"

extern "C" {

void* get_data_ptr__20TWindowSubSymbolChatFPv(void* p);
void bswap_symbol_chat_packet__20TWindowSubSymbolChatFPv(void* p);
void byteswap_entry__20TWindowSubSymbolChatFPv(void* p);
void send_symbol_chat__20TWindowSubSymbolChatFPv(void* p);
void TWindowSubSymbolChat__sub_80077704(void* p);
int get_instance__20TWindowSubSymbolChatFv(void);
int read_be16_field2__10TObjPlayerFPv(void*);
int bswap_16__FPUs(void* a0 = 0);
int bswap_32__FPUl(void* a0 = 0);
int update_players__6TLobbyFi(void*);

void* get_data_ptr__20TWindowSubSymbolChatFPv(void* p) { return (char*)p + 0x1c; }
void bswap_symbol_chat_packet__20TWindowSubSymbolChatFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_32__FPUl((char*)p + 0x4); byteswap_entry__20TWindowSubSymbolChatFPv((void*)((char*)p + 0x8)); }
void byteswap_entry__20TWindowSubSymbolChatFPv(void* p) { bswap_32__FPUl(p); { int i; for (i = 0; i < 4; i++) { bswap_16__FPUs((char*)p + 0x4 + i * 2); } } }
void send_symbol_chat__20TWindowSubSymbolChatFPv(void* p) { bswap_symbol_chat_packet__20TWindowSubSymbolChatFPv((void*)(p)); update_players__6TLobbyFi(p); }
void TWindowSubSymbolChat__sub_80077704(void* p) { *(u8*)((char*)p + 0x0) = 7; *(u8*)((char*)p + 0x1) = 17; }

    extern int lbl_805D4E50;
int get_instance__20TWindowSubSymbolChatFv(void) {  return lbl_805D4E50; }

}
