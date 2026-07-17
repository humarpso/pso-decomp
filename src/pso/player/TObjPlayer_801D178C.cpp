#include "types.h"

extern "C" {
void swap_stats_bytes__10TObjPlayerFPv(void* p);

int TFontSmallLobby__sub_801C0228(void*);
void* copy_font_state__10TObjPlayerFPvPv(void* p, void* a1);
void* copy_head_fields__10TObjPlayerFPvPv(void* p, void* a1);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int TFontSmallLobby__sub_801C01BC(void*);
int bswap_field_u32__10TObjPlayerFPv(void*);
int TObjPlayer__sub_801D28DC(void*);
int TLobby__send_and_handle_60(void*);
void set_type_53__10TObjPlayerFPv(void* p);
void set_revived_state__10TObjPlayerFPv(void* p);
void init_revive_packet__10TObjPlayerFPv(void* p);

void update_display__10TObjPlayerFPv(void* p) { swap_stats_bytes__10TObjPlayerFPv(p); TLobby__send_and_handle_60(p); }
void set_revived_state__10TObjPlayerFPv(void* p) { *(u8*)((char*)p + 0x0) = 79; *(u8*)((char*)p + 0x1) = 1; }
void broadcast_lobby_display__10TObjPlayerFPv(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__send_and_handle_60(p); }
void bswap_fields__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }
void* copy_head_fields__10TObjPlayerFPvPv(void* p, void* a1) { TFontSmallLobby__sub_801C0228(p); *(short*)((char*)p + 0x4) = *(unsigned short*)((char*)a1 + 0x4); *(short*)((char*)p + 0x6) = *(short*)((char*)a1 + 0x6); return p; }

}
