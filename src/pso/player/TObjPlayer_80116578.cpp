#include "types.h"

extern "C" {

int bswap_16__FPUs(void* a0 = 0);
int read_be16_field2__10TObjPlayerFPv(void* a0 = 0);
void bswap_fields_x4__10TObjPlayerFPv(void* p);
int TLobby__send_and_handle_60(void*);
void bswap_and_send_item__10TObjPlayerFPv(void* p);
s32 get_item_flags__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_80116604(void* p);
u16 get_type_id__10TObjPlayerFPv(void* p);

s32 get_item_flags__10TObjPlayerFPv(void* p) { return *(s32*)((char*)p + 0xdc); }
void bswap_fields_x4__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); { int i; for (i = 0; i < 4; i++) { bswap_16__FPUs((char*)p + 0x4 + i * 2); } } }
void bswap_and_send_item__10TObjPlayerFPv(void* p) { bswap_fields_x4__10TObjPlayerFPv(p); TLobby__send_and_handle_60(p); }
void TObjPlayer__sub_80116604(void* p) { *(u8*)((char*)p + 0x0) = 102; *(u8*)((char*)p + 0x1) = 3; }

}
