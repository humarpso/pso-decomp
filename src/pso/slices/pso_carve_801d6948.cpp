#include "types.h"

extern "C" {
void bswap_fields__15TFontSmallLobbyFPv(void* p);

void* TFontSmallLobby__sub_801D6948(void* p, void* a1);
void update_cursor_pos__11TMainCursorFPv(void* p);
void TMainCursor__sub_8013E17C(void* p, f32 v);
f32 TMainCursor__sub_8013E184(void* p);
void TMainCursor__sub_8013E18C(void* p, s16 v);
u16 TMainCursor__sub_8013E194(void* p);
void set_target__11TMainCursorFPvi(void* p, s32 a1);
void TMainCursor__sub_8013E1C0(void* p, s32 v);
void set_target_index__11TMainCursorFPvs(void* p, s16 v);
void TFontSmallLobby__sub_801D67C8(void* p);
void init_pkt_cmd_3B__15TFontSmallLobbyFPv(void* p);
void init_6x3A_packet__15TFontSmallLobbyFPv(void* p);
void init_6x39_packet__15TFontSmallLobbyFPv(void* p);
int TLobby__send_and_handle_60(void*);
int bswap_16__FPUs(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int TFontSmallLobby__sub_801C01BC(void*);
int TFontSmallLobby__sub_801C0228(void*);
int reset_fields__15TFontSmallLobbyFPv(void*);

void* TFontSmallLobby__sub_801D6948(void* p, void* a1) { TFontSmallLobby__sub_801C0228(p); *(short*)((char*)p + 0x4) = *(unsigned short*)((char*)a1 + 0x4); *(short*)((char*)p + 0x6) = *(short*)((char*)a1 + 0x6); return p; }
int TFontSmallLobby__sub_801D698C(void) { return 0; }

}
