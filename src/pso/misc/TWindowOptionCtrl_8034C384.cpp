#include "types.h"

extern "C" {

s32 get_field_24__17TWindowOptionCtrlFPv(void* p);
int TLobby__sub_8034C384(void* p);
int TLobby__sub_8034C3A4(void* p);
int reset_info_board__6TLobbyFv(void*);

int TLobby__sub_8034C384(void* p) { return reset_info_board__6TLobbyFv(p); }
int TLobby__sub_8034C3A4(void* p) { return reset_info_board__6TLobbyFv(p); }
s32 get_field_24__17TWindowOptionCtrlFPv(void* p) { return *(s32*)((char*)p + 0x24); }

}
