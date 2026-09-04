#include "types.h"

extern "C" {

void update_and_send_60__12TBoss3VoloptFPv(void* p);
void TBoss3Volopt__sub_800481B4(void* p);
void swap_6x18_fields__12TBoss3VoloptFPv(void* p);
void broadcast_state__12TBoss3VoloptFPv(void* p);
void TBoss3Volopt__sub_8004824C(void* p);
int swap_6x85_fields__12TBoss3VoloptFPv(void*);
int TLobby__send_and_handle_60(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int bswap_16__FPUs(void*);

void update_and_send_60__12TBoss3VoloptFPv(void* p) { swap_6x85_fields__12TBoss3VoloptFPv(p); TLobby__send_and_handle_60(p); }
void TBoss3Volopt__sub_800481B4(void* p) { *(u8*)((char*)p + 0x0) = 133; *(u8*)((char*)p + 0x1) = 5; }
void swap_6x18_fields__12TBoss3VoloptFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); { int i; for (i = 0; i < 4; i++) { bswap_16__FPUs((char*)p + 0x4 + i * 2); } } }
void broadcast_state__12TBoss3VoloptFPv(void* p) { swap_6x18_fields__12TBoss3VoloptFPv((void*)(p)); TLobby__send_and_handle_60(p); }
void TBoss3Volopt__sub_8004824C(void* p) { *(u8*)((char*)p + 0x0) = 24; *(u8*)((char*)p + 0x1) = 3; }

}
