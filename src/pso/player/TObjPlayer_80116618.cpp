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

u16 get_type_id__10TObjPlayerFPv(void* p) { return *(u16*)((char*)p + 0x0); }

}
