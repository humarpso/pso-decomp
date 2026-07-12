#include "types.h"

extern "C" {

void* TLobby__sub_802428C4(void* p);
s32 TLobby__sub_802428F8(void* p);
int TLobby__sub_80242900(void);
int fn_80077AA4(void*);

void* TLobby__sub_802428C4(void* p) { fn_80077AA4((char*)p + 0x58); return p; }
s32 TLobby__sub_802428F8(void* p) { return *(s32*)((char*)p + 0x4); }

    extern int lbl_805D63DC;
int TLobby__sub_80242900(void) {  return lbl_805D63DC; }

}
