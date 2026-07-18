#include "types.h"

extern "C" {

int TFontSmallLobby__sub_801C0228(void*);
void reset_fields__15TFontSmallLobbyFPv(void* p);
int set_bit1_at_40__15TFontSmallLobbyFPv(void* p);
int update_ready__15TFontSmallLobbyFPv(void* p);
s32 TFontSmallLobby__sub_801D66D4(void* p);
s32 TFontSmallLobby__sub_801D66DC(void* p);
int check_flag_at_40__15TFontSmallLobbyFPv(void* p);
void TFontSmallLobby__sub_801D670C(void* p, s32 v);
void set_target_index__15TFontSmallLobbyFPvi(void* p, s32 v);
int set_flag_40_bit5__15TFontSmallLobbyFPv(void* p);
int update_field_40__15TFontSmallLobbyFPv(void* p);
int TFontSmallLobby__sub_801D677C(void* p);
u16 TFontSmallLobby__sub_801D67A4(void* p);
int set_flags__10TObjPlayerFPvUi(void*, int);
int clear_flags__11TAdRicoRingFPvUi(void*, int);

void reset_fields__15TFontSmallLobbyFPv(void* p) { *(s32*)((char*)p + 0x0) = 0; *(s32*)((char*)p + 0x4) = 0; }
int set_bit1_at_40__15TFontSmallLobbyFPv(void* p) { return clear_flags__11TAdRicoRingFPvUi((char*)p + 0x40, 2); }
void* clear_photon_blast_ready_flag__15TFontSmallLobbyFPv(void* p) { TFontSmallLobby__sub_801C0228(p); return p; }
int update_ready__15TFontSmallLobbyFPv(void* p) { return set_flags__10TObjPlayerFPvUi((char*)p + 0x40, 2); }

}
