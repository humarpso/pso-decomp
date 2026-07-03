#include "types.h"

extern "C" {

int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int fn_8001960C(void*);
int fn_80102CE0(void*);
int TObjPlayer__sub_801BEE34(void*);
int TFontSmallLobby__sub_801C01BC(void*);
int fn_801C0768(void*);
int TLobby__send_and_handle_60(void*);
void TObjPlayer__sub_801C089C(void* p);
void TObjPlayer__sub_801C08E4(void* p);
void TObjPlayer__sub_801C0970(void* p);
void TObjPlayer__sub_801C09B8(void* p);
void TObjPlayer__sub_801C0A34(void* p);
void TObjPlayer__sub_801C0A48(void* p);
void TObjPlayer__sub_801C0A90(void* p);

void TObjPlayer__sub_801C0834(void* p) { fn_801C0768(p); TLobby__send_and_handle_60(p); }
void TObjPlayer__sub_801C0868(void* p) { fn_8001960C(p); TObjPlayer__sub_801BEE34((char*)p + 0x4); }
void TObjPlayer__sub_801C089C(void* p) { *(u8*)((char*)p + 0x0) = 13; *(u8*)((char*)p + 0x1) = 3; }
void TObjPlayer__sub_801C08B0(void* p) { TObjPlayer__sub_801C0868(p); TLobby__send_and_handle_60(p); }
void TObjPlayer__sub_801C08E4(void* p) { *(u8*)((char*)p + 0x0) = 14; *(u8*)((char*)p + 0x1) = 1; }
void TObjPlayer__sub_801C08F8(void* p) { fn_8001960C(p); TObjPlayer__sub_801BEE34((char*)p + 0x4); }

}
