#include "types.h"

extern "C" {

void fn_801C72E4(void* p);
int TLobby__send_and_handle_60(void*);
int check_flag__10TObjPlayerFPvi(void*, void*);
int bswap_32__FPUl(void*);
int TObjPlayer__sub_8001960C(void*);
int fn_8011E204(void*, void*);
int fn_8011E238(void*, void*);
int TFontSmallLobby__sub_801C01BC(void*);
int TFontSmallLobby__sub_801C0228(void*);

void fn_801C721C(void* p) { fn_8011E238(p, (void*)2097152); }
void fn_801C7240(void* p) { check_flag__10TObjPlayerFPvi(p, (void*)4194304); }
void fn_801C7264(void* p) { fn_8011E204(p, (void*)32768); }
void fn_801C728C(void* p) { check_flag__10TObjPlayerFPvi(p, (void*)32768); }
void* fn_801C72B4(void* p) { TFontSmallLobby__sub_801C0228(p); return p; }
void fn_801C72E4(void* p) { *(u8*)((char*)p + 0x0) = 136; *(u8*)((char*)p + 0x1) = 1; }
void fn_801C72F8(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__send_and_handle_60(p); }
void fn_801C732C(void* p) { TObjPlayer__sub_8001960C(p); bswap_32__FPUl((char*)p + 0x4); }
int fn_801C7360(void) { return 0; }

}
