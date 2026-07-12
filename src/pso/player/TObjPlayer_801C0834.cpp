#include "types.h"

extern "C" {

int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int TObjPlayer__sub_8001960C(void*);
int TObjPlayer__sub_80102CE0(void*);
int TObjPlayer__sub_801BEE34(void*);
int TFontSmallLobby__sub_801C01BC(void*);
int TObjPlayer__sub_801C0768(void*);
int TLobby__send_and_handle_60(void*);
void set_code_13_3__10TObjPlayerFPv(void* p);
void set_code_14_1__10TObjPlayerFPv(void* p);
void set_code_12_3__10TObjPlayerFPv(void* p);
void set_code_161_1__10TObjPlayerFPv(void* p);
void set_code_50_1__10TObjPlayerFPv(void* p);
void set_code_49_1__10TObjPlayerFPv(void* p);
void set_code_45_1__10TObjPlayerFPv(void* p);

void send_lobby_update__10TObjPlayerFPv(void* p) { TObjPlayer__sub_801C0768(p); TLobby__send_and_handle_60(p); }
void TObjPlayer__sub_801C0868(void* p) { TObjPlayer__sub_8001960C(p); TObjPlayer__sub_801BEE34((char*)p + 0x4); }
void set_code_13_3__10TObjPlayerFPv(void* p) { *(u8*)((char*)p + 0x0) = 13; *(u8*)((char*)p + 0x1) = 3; }
void update_and_send__10TObjPlayerFPv(void* p) { TObjPlayer__sub_801C0868(p); TLobby__send_and_handle_60(p); }
void set_code_14_1__10TObjPlayerFPv(void* p) { *(u8*)((char*)p + 0x0) = 14; *(u8*)((char*)p + 0x1) = 1; }
void TObjPlayer__sub_801C08F8(void* p) { TObjPlayer__sub_8001960C(p); TObjPlayer__sub_801BEE34((char*)p + 0x4); }

}
