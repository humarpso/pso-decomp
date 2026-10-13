#include "types.h"

extern "C" {

void TWindowSubSymbolChat__sub_80077704(void* p);
void bswap_entry__20TWindowSubSymbolChatFPv(void* p);
void bswap_symbol_chat_packet__20TWindowSubSymbolChatFPv(void* p);
void byteswap_entry__20TWindowSubSymbolChatFPv(void* p);
void* get_data_ptr__20TWindowSubSymbolChatFPv(void* p);
int get_instance__20TWindowSubSymbolChatFv(void);
int is_initialized__20TWindowSubSymbolChatFPv(void* p);
void send_symbol_chat__20TWindowSubSymbolChatFPv(void* p);
int get_localized_text_entry(void*, void*);
int bswap_16__FPUs(void* a0 = 0);
int bswap_32__FPUl(void*);
int fn_80077788(void);
int fn_80077790(void);
int read_be16_field2__10TObjPlayerFPv(void*);
int update_players__6TLobbyFi(void*);

void* get_data_ptr__20TWindowSubSymbolChatFPv(void* p) { return (char*)p + 0x1c; }
void bswap_symbol_chat_packet__20TWindowSubSymbolChatFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_32__FPUl((void*)((char*)p + 0x4)); byteswap_entry__20TWindowSubSymbolChatFPv((void*)((void*)((char*)p + 0x8))); }
void byteswap_entry__20TWindowSubSymbolChatFPv(void* p) { bswap_32__FPUl((void*)(p)); { int i; for (i = 0; i < 4; i++) { bswap_16__FPUs((char*)p + 0x4 + i * 2); } } }
void send_symbol_chat__20TWindowSubSymbolChatFPv(void* p) { bswap_symbol_chat_packet__20TWindowSubSymbolChatFPv((void*)((void*)(p))); update_players__6TLobbyFi(p); }
void TWindowSubSymbolChat__sub_80077704(void* p) { *(u8*)((char*)p + 0x0) = 7; *(u8*)((char*)p + 0x1) = 17; }

    extern int selected_symbol_chat_preset;
int get_instance__20TWindowSubSymbolChatFv(void) {  return selected_symbol_chat_preset; }

int is_initialized__20TWindowSubSymbolChatFPv(void* p) { return *(u32*)((char*)p + 0x0) & 0x1; }
void bswap_entry__20TWindowSubSymbolChatFPv(void* p) { bswap_32__FPUl((void*)(p)); byteswap_entry__20TWindowSubSymbolChatFPv((void*)((char*)p + 0x1c)); }

}
