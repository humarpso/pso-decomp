#include "types.h"

extern "C" {

void TObjPlayer__sub_801C72E4(void* p);
int TLobby__send_and_handle_60(void*);
int check_flag__10TObjPlayerFPvi(void*, void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int TObjPlayer__sub_8011E204(void*, void*);
int TObjPlayer__sub_8011E238(void*, void*);
int TFontSmallLobby__sub_801C01BC(void*);
int TFontSmallLobby__sub_801C0228(void*);

void bswap_shrink__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_32__FPUl((char*)p + 0x4); }

}
