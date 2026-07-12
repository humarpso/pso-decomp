#include "types.h"

extern "C" {

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
void TObjPlayer__sub_801D1690(void* p);
void TObjPlayer__sub_801D17C0(void* p);
void TObjPlayer__sub_801D18B0(void* p);

void TObjPlayer__sub_801D1690(void* p) { *(u8*)((char*)p + 0x0) = 83; *(u8*)((char*)p + 0x1) = 1; }
void send_name__10TObjPlayerFPv(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__send_and_handle_60(p); }
void swap_stats_bytes__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_32__FPUl((char*)p + 0x8); }
void* copy_font_state__10TObjPlayerFPvPv(void* p, void* a1) { TFontSmallLobby__sub_801C0228(p); *(short*)((char*)p + 0x4) = *(short*)((char*)a1 + 0x4); *(short*)((char*)p + 0x6) = *(short*)((char*)a1 + 0x6); *(void**)((char*)p + 0x8) = *(void**)((char*)a1 + 0x8); return p; }

}
