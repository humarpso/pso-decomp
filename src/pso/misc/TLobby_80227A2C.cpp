#include "types.h"

extern "C" {

int TLobby__sub_80227A2C(void* p);
int TLobby__sub_80227A4C(void* p);
void TLobby__sub_80227A6C(void);
int TLobby__sub_80227A70(void* p);
void TLobby__sub_80227A90(void);
void TLobby__sub_80227A94(void);
int TLobby__sub_80227AA0(void);
int TLobby__sub_8022804C(void*);
int xfree__FPv(void*);
int xmalloc__FUl(void*);

int TLobby__sub_80227A2C(void* p) { return xfree__FPv(p); }
int TLobby__sub_80227A4C(void* p) { return xmalloc__FUl(p); }
void TLobby__sub_80227A6C(void) {  }
int TLobby__sub_80227A70(void* p) { return TLobby__sub_8022804C(p); }
void TLobby__sub_80227A90(void) {  }

    extern int lbl_805D3710;
    extern int lbl_805D6314;
void TLobby__sub_80227A94(void) { lbl_805D6314 = lbl_805D3710; }

    extern int lbl_805D6288;
int TLobby__sub_80227AA0(void) {  return lbl_805D6288; }

}
