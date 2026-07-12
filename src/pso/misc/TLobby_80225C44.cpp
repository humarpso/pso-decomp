#include "types.h"

extern "C" {

int TLobby__sub_80225C44(void* p);
int TLobby__sub_80225C64(void* p);
void* TLobby__sub_80225C84(void* p);
void TLobby__sub_80225C8C(void* p);
int TLobby__sub_80225C9C(void* p);
s32 TLobby__sub_80225CA8(void* p);
int TLobby__sub_80225CB0(void);
int TLobby__sub_80225B40(void*);

int TLobby__sub_80225C44(void* p) { return TLobby__sub_80225B40(p); }
int TLobby__sub_80225C64(void* p) { return TLobby__sub_80225B40(p); }
void* TLobby__sub_80225C84(void* p) { return (char*)p + 0x8; }
void TLobby__sub_80225C8C(void* p) { *(u8*)((char*)p + 0xcc) &= 0xfffffffd; }
int TLobby__sub_80225C9C(void* p) { return *(u8*)((char*)p + 0xcc) & 0x1; }
s32 TLobby__sub_80225CA8(void* p) { return *(s32*)((char*)p + 0x4); }

    extern int lbl_805D6274;
int TLobby__sub_80225CB0(void) {  return lbl_805D6274; }

}
