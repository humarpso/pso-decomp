#include "types.h"

extern "C" {

int get_instance__20TWindowSubSymbolChatFv(void*);
void refresh_parts__20TWindowSubSymbolChatFPv(void* p);
void update_layout__20TWindowSubSymbolChatFPv(void* p);
int TWindowSubSymbolChat__sub_80076FE0(void* p);

int TWindowSubSymbolChat__sub_80076FE0(void* p) { return (*(u32*)((char*)p + 0x1c) >> 9) & 0x1; }

}
