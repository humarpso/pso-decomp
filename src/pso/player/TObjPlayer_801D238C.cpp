#include "types.h"

extern "C" {
void TObjPlayer__sub_801D20F8(void* p);
void TObjPlayer__sub_801D1D08(void* p);

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
int TObjPlayer__sub_801D1A84(void*);
int TObjPlayer__sub_801D2B2C(void*);
int TObjPlayer__sub_801D2C18(void*);

void TObjPlayer__sub_801D238C(void* p) { TObjPlayer__sub_8001960C(p); TObjPlayer__sub_801D2B2C((char*)p + 0x4); }
void* TObjPlayer__sub_801D23C0(void* p) { fn_8012AF00((char*)p + 0x4); *(unsigned char*)(p) = 70; *(unsigned char*)((char*)p + 0x1) = 12; return p; }

}
