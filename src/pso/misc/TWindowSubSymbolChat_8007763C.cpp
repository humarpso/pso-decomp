#include "types.h"
#include "pso/misc/TWindowSubSymbolChat.h"

extern "C" {

void TWindowSubSymbolChat__sub_80077704(void* p);
int get_localized_text_entry(void*, void*);
int bswap_16__FPUs(void* a0 = 0);
int bswap_32__FPUl(void*);
int fn_80077788(void);
int fn_80077790(void);
int read_be16_field2__10TObjPlayerFv(void*);
int update_players__6TLobbyFi(void*);

void*TWindowSubSymbolChat::get_data_ptr() { return (char*)this + 0x1c; }
void TWindowSubSymbolChat::bswap_symbol_chat_packet() { read_be16_field2__10TObjPlayerFv(this); bswap_32__FPUl((void*)((char*)this + 0x4)); ((TWindowSubSymbolChat *)((char*)this + 0x8))->byteswap_entry(); }
void TWindowSubSymbolChat::byteswap_entry() { bswap_32__FPUl((void*)(this)); { int i; for (i = 0; i < 4; i++) { bswap_16__FPUs((char*)this + 0x4 + i * 2); } } }
void TWindowSubSymbolChat::send_symbol_chat() { bswap_symbol_chat_packet(); update_players__6TLobbyFi(this); }
void TWindowSubSymbolChat__sub_80077704(void* p) { *(u8*)((char*)p + 0x0) = 7; *(u8*)((char*)p + 0x1) = 17; }

    extern int selected_symbol_chat_preset;
int TWindowSubSymbolChat::get_instance() {  return selected_symbol_chat_preset; }

int TWindowSubSymbolChat::is_initialized() { return *(u32*)((char*)this + 0x0) & 0x1; }
void TWindowSubSymbolChat::bswap_entry() { bswap_32__FPUl((void*)(this)); ((TWindowSubSymbolChat *)((char*)this + 0x1c))->byteswap_entry(); }

}
