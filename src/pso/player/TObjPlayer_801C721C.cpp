#include "types.h"

extern "C" {

void set_flag_2000000_alt__10TObjPlayerFPv(void* p);
void check_flag_04000000__10TObjPlayerFPv(void* p);
void set_flag_0x8000__10TObjPlayerFPv(void* p);
void check_flag_0x8000__10TObjPlayerFPv(void* p);
void* restore_shrunken_font__10TObjPlayerFPv(void* p);
void init_6x88_packet__10TObjPlayerFPv(void* p);
void send_font_update_60__10TObjPlayerFPv(void* p);
int TFontSmallLobby__sub_801C01BC(void*);
int TFontSmallLobby__sub_801C0228(void*);
int TLobby__send_and_handle_60(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int TObjPlayer__sub_8011E204(void*, void*);
int set_state_flags__10TObjPlayerFPvUi(void*, void*);
int bswap_32__FPUl(void*);
int check_flag__10TObjPlayerFPvi(void*, void*);

void set_flag_2000000_alt__10TObjPlayerFPv(void* p) { set_state_flags__10TObjPlayerFPvUi(p, (void*)2097152); }
void check_flag_04000000__10TObjPlayerFPv(void* p) { check_flag__10TObjPlayerFPvi(p, (void*)4194304); }
void set_flag_0x8000__10TObjPlayerFPv(void* p) { TObjPlayer__sub_8011E204(p, (void*)32768); }
void check_flag_0x8000__10TObjPlayerFPv(void* p) { check_flag__10TObjPlayerFPvi(p, (void*)32768); }
void* restore_shrunken_font__10TObjPlayerFPv(void* p) { TFontSmallLobby__sub_801C0228(p); return p; }
void init_6x88_packet__10TObjPlayerFPv(void* p) { *(u8*)((char*)p + 0x0) = 136; *(u8*)((char*)p + 0x1) = 1; }
void send_font_update_60__10TObjPlayerFPv(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__send_and_handle_60(p); }

}
