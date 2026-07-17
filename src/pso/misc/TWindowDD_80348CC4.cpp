#include "types.h"

extern "C" {

int TLobby__send_and_handle_60(void*);
int handle_word_select__9TWindowDDFPv(void*);
void init_header__9TWindowDDFPv(void* p);
void reset_index__9TWindowDDFPv(void* p);
void TWindowDD__sub_80348D80(void* p, s32 v);
s32 TWindowDD__sub_80348D88(void* p);

void TWindowDD__sub_80348CC4(void* p) { handle_word_select__9TWindowDDFPv(p); TLobby__send_and_handle_60(p); }
void init_header__9TWindowDDFPv(void* p) { *(u8*)((char*)p + 0x0) = 116; *(u8*)((char*)p + 0x1) = 8; }

}
