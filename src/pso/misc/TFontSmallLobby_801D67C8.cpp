#include "types.h"

extern "C" {

void TFontSmallLobby__sub_801D67C8(void* p);
void TFontSmallLobby__sub_801D6834(void* p);
void TFontSmallLobby__sub_801D687C(void* p);
void TFontSmallLobby__sub_801D68C4(void* p);
int TLobby__send_and_handle_60(void*);
int bswap_16__FPUs(void*);
int TObjPlayer__sub_8001960C(void*);
int TFontSmallLobby__sub_801C01BC(void*);
int TFontSmallLobby__sub_801C0228(void*);
int reset_fields__15TFontSmallLobbyFPv(void*);

void TFontSmallLobby__sub_801D67C8(void* p) { *(s16*)((char*)p + 0x2) = 6; }
void* init_reset_fields__15TFontSmallLobbyFPv(void* p) { reset_fields__15TFontSmallLobbyFPv(p); return p; }
void* TFontSmallLobby__sub_801D6804(void* p) { TFontSmallLobby__sub_801C0228(p); return p; }
void TFontSmallLobby__sub_801D6834(void* p) { *(u8*)((char*)p + 0x0) = 59; *(u8*)((char*)p + 0x1) = 1; }
void update_and_send__15TFontSmallLobbyFPv(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__send_and_handle_60(p); }
void TFontSmallLobby__sub_801D687C(void* p) { *(u8*)((char*)p + 0x0) = 58; *(u8*)((char*)p + 0x1) = 1; }
void draw_and_send__15TFontSmallLobbyFPv(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__send_and_handle_60(p); }
void TFontSmallLobby__sub_801D68C4(void* p) { *(u8*)((char*)p + 0x0) = 57; *(u8*)((char*)p + 0x1) = 1; }
void update_and_send_60__15TFontSmallLobbyFPv(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__send_and_handle_60(p); }
void bswap_fields__15TFontSmallLobbyFPv(void* p) { TObjPlayer__sub_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }

}
