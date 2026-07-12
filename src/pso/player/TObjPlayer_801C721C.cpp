#include "types.h"

extern "C" {

void TObjPlayer__sub_801C721C(void* p);
void TObjPlayer__sub_801C7240(void* p);
void TObjPlayer__sub_801C7264(void* p);
void TObjPlayer__sub_801C728C(void* p);
void* TObjPlayer__sub_801C72B4(void* p);
void TObjPlayer__sub_801C72E4(void* p);
void TObjPlayer__sub_801C72F8(void* p);
int TFontSmallLobby__sub_801C01BC(void*);
int TFontSmallLobby__sub_801C0228(void*);
int TLobby__send_and_handle_60(void*);
int TObjPlayer__sub_8001960C(void*);
int TObjPlayer__sub_8011E204(void*, void*);
int TObjPlayer__sub_8011E238(void*, void*);
int bswap_32__FPUl(void*);
int check_flag__10TObjPlayerFPvi(void*, void*);

void TObjPlayer__sub_801C721C(void* p) { TObjPlayer__sub_8011E238(p, (void*)2097152); }
void TObjPlayer__sub_801C7240(void* p) { check_flag__10TObjPlayerFPvi(p, (void*)4194304); }
void TObjPlayer__sub_801C7264(void* p) { TObjPlayer__sub_8011E204(p, (void*)32768); }
void TObjPlayer__sub_801C728C(void* p) { check_flag__10TObjPlayerFPvi(p, (void*)32768); }
void* TObjPlayer__sub_801C72B4(void* p) { TFontSmallLobby__sub_801C0228(p); return p; }
void TObjPlayer__sub_801C72E4(void* p) { *(u8*)((char*)p + 0x0) = 136; *(u8*)((char*)p + 0x1) = 1; }
void TObjPlayer__sub_801C72F8(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__send_and_handle_60(p); }

}
