#include "types.h"

extern "C" {
void swap_header__10TObjPlayerFPv(void* p);
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
int TObjPlayer__sub_8001960C(void*);
s32 fn_8012125C(s32);
int fn_8012AF00(void*);
int TFontSmallLobby__sub_801C01BC(void*);
int TFontSmallLobby__sub_801C0228(void*);
int read_swapped_fields__10TObjPlayerFPv(void*);
int TObjPlayer__sub_801D2B2C(void*);
int TObjPlayer__sub_801D2C18(void*);

void TObjPlayer__sub_801D222C(void* p) { TObjPlayer__sub_8001960C(p); bswap_16__FPUs((char*)p + 0x6); }

}
