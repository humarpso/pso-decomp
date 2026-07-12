#include "types.h"

extern "C" {

int copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void*);
void fn_802AD75C(void* p);
int TWindowMainMenu__sub_802AD740(void* p);
void fn_802AD74C(void* p);

void fn_802AD74C(void* p) { *(u8*)((char*)p + 0x13) |= 0x2; }
void fn_802AD75C(void* p) { copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(p); *(unsigned char*)((char*)p + 0x14) = 8; }
int fn_802AD790(void) { return 0; }

}
