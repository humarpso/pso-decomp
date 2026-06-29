#include "types.h"

extern "C" {

int TFontSmallLobby__sub_801C0228(void*);
void TFontSmallLobby__sub_801D6644(void* p);
int TFontSmallLobby__sub_801D6654(void* p);
int TFontSmallLobby__sub_801D66AC(void* p);
s32 fn_801D66D4(void* p);
s32 fn_801D66DC(void* p);
int fn_801D66E4(void* p);
void fn_801D670C(void* p, s32 v);
void fn_801D6714(void* p, s32 v);
int fn_801D672C(void* p);
int fn_801D6754(void* p);
int fn_801D677C(void* p);
u16 fn_801D67A4(void* p);
int fn_8001BED8(void*, int);
int TAdRicoRing__sub_8001BEE8(void*, int);

int TFontSmallLobby__sub_801D65B4(void) { return 0; }
int TFontSmallLobby__sub_801D6614(void) { return 0; }
void TFontSmallLobby__sub_801D6644(void* p) { *(s32*)((char*)p + 0x0) = 0; *(s32*)((char*)p + 0x4) = 0; }
int TFontSmallLobby__sub_801D6654(void* p) { return TAdRicoRing__sub_8001BEE8((char*)p + 0x40, 2); }
void* TFontSmallLobby__sub_801D667C(void* p) { TFontSmallLobby__sub_801C0228(p); return p; }
int TFontSmallLobby__sub_801D66AC(void* p) { return fn_8001BED8((char*)p + 0x40, 2); }
s32 fn_801D66D4(void* p) { return *(s32*)((char*)p + 0x0); }
s32 fn_801D66DC(void* p) { return *(s32*)((char*)p + 0x4); }
int fn_801D66E4(void* p) { return TAdRicoRing__sub_8001BEE8((char*)p + 0x40, 32); }
void fn_801D670C(void* p, s32 v) { *(s32*)((char*)p + 0x4) = v; }
void fn_801D6714(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }
void fn_801D671C(void* a0, int a1) { *(int*)((char*)a0 + 0x4) = (*(int*)((char*)a0 + 0x4) + a1); }
int fn_801D672C(void* p) { return fn_8001BED8((char*)p + 0x40, 32); }
int fn_801D6754(void* p) { return TAdRicoRing__sub_8001BEE8((char*)p + 0x40, 16); }
int fn_801D677C(void* p) { return fn_8001BED8((char*)p + 0x40, 16); }
u16 fn_801D67A4(void* p) { return *(u16*)((char*)p + 0x0); }

}
