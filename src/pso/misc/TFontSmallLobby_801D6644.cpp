#include "types.h"

extern "C" {

int TFontSmallLobby__sub_801C0228(void*);
void reset_fields__15TFontSmallLobbyFPv(void* p);
int TFontSmallLobby__sub_801D6654(void* p);
int TFontSmallLobby__sub_801D66AC(void* p);
s32 TFontSmallLobby__sub_801D66D4(void* p);
s32 TFontSmallLobby__sub_801D66DC(void* p);
int TFontSmallLobby__sub_801D66E4(void* p);
void TFontSmallLobby__sub_801D670C(void* p, s32 v);
void TFontSmallLobby__sub_801D6714(void* p, s32 v);
int TFontSmallLobby__sub_801D672C(void* p);
int TFontSmallLobby__sub_801D6754(void* p);
int TFontSmallLobby__sub_801D677C(void* p);
u16 TFontSmallLobby__sub_801D67A4(void* p);
int TObjPlayer__sub_8001BED8(void*, int);
int TAdRicoRing__sub_8001BEE8(void*, int);

void reset_fields__15TFontSmallLobbyFPv(void* p) { *(s32*)((char*)p + 0x0) = 0; *(s32*)((char*)p + 0x4) = 0; }
int TFontSmallLobby__sub_801D6654(void* p) { return TAdRicoRing__sub_8001BEE8((char*)p + 0x40, 2); }
void* TFontSmallLobby__sub_801D667C(void* p) { TFontSmallLobby__sub_801C0228(p); return p; }
int TFontSmallLobby__sub_801D66AC(void* p) { return TObjPlayer__sub_8001BED8((char*)p + 0x40, 2); }

}
