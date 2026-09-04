#include "types.h"

extern "C" {

int handle_word_select__9TWindowDDFPv(void* p);
void init_header__9TWindowDDFPv(void* p);
void update_and_send_lobby__9TWindowDDFPv(void* p);
int TLobby__send_and_handle_60(void*);
int TWindowDD__sub_80348D0C(void*);
s32 TWindowDD__sub_80348D88(void* p);
void reset_index__9TWindowDDFPv(void* p);
void set_field14__9TWindowDDFPvi(void* p, s32 v);

int handle_word_select__9TWindowDDFPv(void* p) { return TWindowDD__sub_80348D0C((char*)p + 0x4); }

void update_and_send_lobby__9TWindowDDFPv(void* p) { handle_word_select__9TWindowDDFPv((void*)(p)); TLobby__send_and_handle_60(p); }
void init_header__9TWindowDDFPv(void* p) { *(u8*)((char*)p + 0x0) = 116; *(u8*)((char*)p + 0x1) = 8; }

}
