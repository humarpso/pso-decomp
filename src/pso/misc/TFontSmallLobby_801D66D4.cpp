#include "types.h"

extern "C" {

s32 TFontSmallLobby__sub_801D66D4(void* p);
s32 TFontSmallLobby__sub_801D66DC(void* p);
int check_flag_at_40__15TFontSmallLobbyFPv(void* p);
void TFontSmallLobby__sub_801D670C(void* p, s32 v);
void TFontSmallLobby__sub_801D6714(void* p, s32 v);
void TFontSmallLobby__sub_801D671C(void* a0, int a1);
int set_flag_40_bit5__15TFontSmallLobbyFPv(void* p);
int update_field_40__15TFontSmallLobbyFPv(void* p);
int TFontSmallLobby__sub_801D677C(void* p);
u16 TFontSmallLobby__sub_801D67A4(void* p);
int clear_flags__11TAdRicoRingFPvUi(void*, int);
int TFontSmallLobby__sub_801C0228(void*);
int TFontSmallLobby__sub_801D6654(void* p);
int update_ready__15TFontSmallLobbyFPv(void* p);
int set_flags__10TObjPlayerFPvUi(void*, int);
void reset_fields__15TFontSmallLobbyFPv(void* p);

s32 TFontSmallLobby__sub_801D66D4(void* p) { return *(s32*)((char*)p + 0x0); }
s32 TFontSmallLobby__sub_801D66DC(void* p) { return *(s32*)((char*)p + 0x4); }
int check_flag_at_40__15TFontSmallLobbyFPv(void* p) { return clear_flags__11TAdRicoRingFPvUi((char*)p + 0x40, 32); }
void TFontSmallLobby__sub_801D670C(void* p, s32 v) { *(s32*)((char*)p + 0x4) = v; }
void TFontSmallLobby__sub_801D6714(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }
void TFontSmallLobby__sub_801D671C(void* a0, int a1) { *(int*)((char*)a0 + 0x4) = (*(int*)((char*)a0 + 0x4) + a1); }
int set_flag_40_bit5__15TFontSmallLobbyFPv(void* p) { return set_flags__10TObjPlayerFPvUi((char*)p + 0x40, 32); }
int update_field_40__15TFontSmallLobbyFPv(void* p) { return clear_flags__11TAdRicoRingFPvUi((char*)p + 0x40, 16); }
int TFontSmallLobby__sub_801D677C(void* p) { return set_flags__10TObjPlayerFPvUi((char*)p + 0x40, 16); }
u16 TFontSmallLobby__sub_801D67A4(void* p) { return *(u16*)((char*)p + 0x0); }

}
