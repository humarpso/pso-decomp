#include "types.h"

extern "C" {

int TLobby__sub_80225C44(void* p);
int TLobby__sub_80225C64(void* p);
void* get_com_card_list__6TLobbyFPv(void* p);
void TLobby__sub_80225C8C(void* p);
int TLobby__sub_80225C9C(void* p);
s32 get_lobby_id__6TLobbyFPv(void* p);
int get_short_mail_ctrl__6TLobbyFv(void);
int TLobby__sub_80225B40(void*);

int TLobby__sub_80225C44(void* p) { return TLobby__sub_80225B40(p); }
int TLobby__sub_80225C64(void* p) { return TLobby__sub_80225B40(p); }
void* get_com_card_list__6TLobbyFPv(void* p) { return (char*)p + 0x8; }
void TLobby__sub_80225C8C(void* p) { *(u8*)((char*)p + 0xcc) &= 0xfffffffd; }
int TLobby__sub_80225C9C(void* p) { return *(u8*)((char*)p + 0xcc) & 0x1; }
s32 get_lobby_id__6TLobbyFPv(void* p) { return *(s32*)((char*)p + 0x4); }

    extern int lbl_805D6274;
int get_short_mail_ctrl__6TLobbyFv(void) {  return lbl_805D6274; }

}
