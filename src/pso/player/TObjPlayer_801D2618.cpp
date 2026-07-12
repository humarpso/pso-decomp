#include "types.h"

extern "C" {
void swap_endian16__10TObjPlayerFPv(void* p);

void TObjPlayer__sub_801D1CC0(void* p);
void TObjPlayer__sub_801D1F44(void* p);
void TObjPlayer__sub_801D2618(void* p, f32 v);
void TObjPlayer__sub_801D2620(void* p);
void TObjPlayer__sub_801D2630(void* p);
int TObjPlayer__sub_801D2680(void* p);
void TObjPlayer__sub_801D268C(void* p);
int TLobby__send_and_handle_60(void*);
int update_players__6TLobbyFi(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
s32 TObjPlayer__sub_8012125C(s32);
int TObjPlayer__sub_8012AF00(void*);
int TFontSmallLobby__sub_801C01BC(void*);
int TFontSmallLobby__sub_801C0228(void*);
int read_swapped_fields__10TObjPlayerFPv(void*);
int TObjPlayer__sub_801D2B2C(void*);
int TObjPlayer__sub_801D2C18(void*);

void TObjPlayer__sub_801D2618(void* p, f32 v) { *(f32*)((char*)p + 0xc0) = v; }
void TObjPlayer__sub_801D2620(void* p) { *(u32*)((char*)p + 0xb0) |= 0x40; }
void TObjPlayer__sub_801D2630(void* p) { *(u32*)((char*)p + 0xb0) &= 0xffffffbf; }

}
