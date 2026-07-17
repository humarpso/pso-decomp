#include "types.h"

extern "C" {

int copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void*);
void set_symbol_chat_parts__15TWindowMainMenuFPv(void* p);
int is_item_active__15TWindowMainMenuFPv(void* p);
void TWindowMainMenu__sub_802AD74C(void* p);

void TWindowMainMenu__sub_802AD74C(void* p) { *(u8*)((char*)p + 0x13) |= 0x2; }
void set_symbol_chat_parts__15TWindowMainMenuFPv(void* p) { copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(p); *(unsigned char*)((char*)p + 0x14) = 8; }

}
