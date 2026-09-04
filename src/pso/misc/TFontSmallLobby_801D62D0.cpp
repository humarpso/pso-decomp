#include "types.h"

extern "C" {

void TFontSmallLobby__sub_801D67C8(void* p);
void* TFontSmallLobby__sub_801D6804(void* p);
void* TFontSmallLobby__sub_801D6948(void* p, void* a1);
int TFontSmallLobby__sub_801D698C(void);
void bswap_fields__15TFontSmallLobbyFPv(void* p);
void draw_and_send__15TFontSmallLobbyFPv(void* p);
int fn_801D6A18(void);
void* handle_photon_blast_ready__15TFontSmallLobbyFPv(void* p);
void init_6x39_packet__15TFontSmallLobbyFPv(void* p);
void init_6x3A_packet__15TFontSmallLobbyFPv(void* p);
void init_pkt_cmd_3B__15TFontSmallLobbyFPv(void* p);
void* init_reset_fields__15TFontSmallLobbyFPv(void* p);
void send_state__15TFontSmallLobbyFPv(void* p);
void update_and_send_60__15TFontSmallLobbyFPv(void* p);
void update_and_send__15TFontSmallLobbyFPv(void* p);
int TFontSmallLobby__sub_801C01BC(void*);
int TFontSmallLobby__sub_801C0228(void*);
int TLobby__send_and_handle_60(void*);
void TMainCursor__sub_8013E17C(void* p, f32 v);
f32 TMainCursor__sub_8013E184(void* p);
void TMainCursor__sub_8013E18C(void* p, s16 v);
u16 TMainCursor__sub_8013E194(void* p);
void TMainCursor__sub_8013E1C0(void* p, s32 v);
int bswap_16__FPUs(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int reset_fields__15TFontSmallLobbyFPv(void*);
void set_target__11TMainCursorFPvi(void* p, s32 a1);
void set_target_index__11TMainCursorFPvs(void* p, s16 v);
void update_cursor_pos__11TMainCursorFPv(void* p);

void TFontSmallLobby__sub_801D67C8(void* p) { *(s16*)((char*)p + 0x2) = 6; }
void* init_reset_fields__15TFontSmallLobbyFPv(void* p) { reset_fields__15TFontSmallLobbyFPv(p); return p; }
void* TFontSmallLobby__sub_801D6804(void* p) { TFontSmallLobby__sub_801C0228(p); return p; }
void init_pkt_cmd_3B__15TFontSmallLobbyFPv(void* p) { *(u8*)((char*)p + 0x0) = 59; *(u8*)((char*)p + 0x1) = 1; }
void update_and_send__15TFontSmallLobbyFPv(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__send_and_handle_60(p); }
void init_6x3A_packet__15TFontSmallLobbyFPv(void* p) { *(u8*)((char*)p + 0x0) = 58; *(u8*)((char*)p + 0x1) = 1; }
void draw_and_send__15TFontSmallLobbyFPv(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__send_and_handle_60(p); }
void init_6x39_packet__15TFontSmallLobbyFPv(void* p) { *(u8*)((char*)p + 0x0) = 57; *(u8*)((char*)p + 0x1) = 1; }
void update_and_send_60__15TFontSmallLobbyFPv(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__send_and_handle_60(p); }
void bswap_fields__15TFontSmallLobbyFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }

void* TFontSmallLobby__sub_801D6948(void* p, void* a1) { TFontSmallLobby__sub_801C0228(p); *(short*)((char*)p + 0x4) = *(unsigned short*)((char*)a1 + 0x4); *(short*)((char*)p + 0x6) = *(short*)((char*)a1 + 0x6); return p; }

int TFontSmallLobby__sub_801D698C(void) { return 0; }

void send_state__15TFontSmallLobbyFPv(void* p) { bswap_fields__15TFontSmallLobbyFPv((void*)(p)); TLobby__send_and_handle_60(p); }
void* handle_photon_blast_ready__15TFontSmallLobbyFPv(void* p) { TFontSmallLobby__sub_801C0228(p); return p; }

int fn_801D6A18(void) { return 0; }

}
