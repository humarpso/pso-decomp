#include "types.h"

extern "C" {

int copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void*);
void TWindowMainMenu__sub_802AD75C(void* p);
int TWindowMainMenu__sub_802AD740(void* p);
void TWindowMainMenu__sub_802AD74C(void* p);

void TWindowMainMenu__sub_802AD74C(void* p) { *(u8*)((char*)p + 0x13) |= 0x2; }
void TWindowMainMenu__sub_802AD75C(void* p) { copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(p); *(unsigned char*)((char*)p + 0x14) = 8; }

}
