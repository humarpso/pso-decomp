#include "types.h"

extern "C" {

int TBoss3Volopt__sub_8003F0E8(void* p);
s32 TBoss3Volopt__sub_8003F108(void* p);
void swap_6x85_fields__12TBoss3VoloptFPv(void* p);
void bswap_actions__12TBoss3VoloptFPv(void* p);
void bswap_position__12TBoss3VoloptFPv(void* p);
void send_state__12TBoss3VoloptFPv(void* p);
void TBoss3Volopt__sub_8003F22C(void* p);
void swap_6x16_fields__12TBoss3VoloptFPv(void* p);
void swap_6x15_fields__12TBoss3VoloptFPv(void* p);
void finalize_and_send_60__12TBoss3VoloptFPv(void* p);
void TBoss3Volopt__sub_8003F2F4(void* p);
void send_6x16__12TBoss3VoloptFPv(void* p);
void TBoss3Volopt__sub_8003F33C(void* p);
void send_update_60__12TBoss3VoloptFPv(void* p);
void TBoss3Volopt__sub_8003F384(void* p);
int TBoss3Volopt__sub_8003F398(void);
int TLobby__send_and_handle_60(void*);
int read_be16_field2__10TObjPlayerFPv(void* a0 = 0);
int reset_photon_effect__10TObjPlayerFPv(void*);
int bswap_16__FPUs(void* a0 = 0);
int bswap_32__FPUl(void*);

int TBoss3Volopt__sub_8003F0E8(void* p) { return reset_photon_effect__10TObjPlayerFPv(p); }
s32 TBoss3Volopt__sub_8003F108(void* p) { return *(s32*)((char*)p + 0x3e0); }
void swap_6x85_fields__12TBoss3VoloptFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); { int i; for (i = 0; i < 7; i++) { bswap_16__FPUs((char*)p + 0x6 + i * 2); } } }
void bswap_actions__12TBoss3VoloptFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0xc); bswap_16__FPUs((char*)p + 0xa); bswap_16__FPUs((char*)p + 0xe); }
void bswap_position__12TBoss3VoloptFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_32__FPUl((char*)p + 0x10); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); }
void send_state__12TBoss3VoloptFPv(void* p) { bswap_position__12TBoss3VoloptFPv(p); TLobby__send_and_handle_60(p); }
void TBoss3Volopt__sub_8003F22C(void* p) { *(u8*)((char*)p + 0x0) = 23; *(u8*)((char*)p + 0x1) = 5; }
void swap_6x16_fields__12TBoss3VoloptFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0xa); }
void swap_6x15_fields__12TBoss3VoloptFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_16__FPUs((char*)p + 0x8); bswap_16__FPUs((char*)p + 0xa); }
void finalize_and_send_60__12TBoss3VoloptFPv(void* p) { swap_6x15_fields__12TBoss3VoloptFPv(p); TLobby__send_and_handle_60(p); }
void TBoss3Volopt__sub_8003F2F4(void* p) { *(u8*)((char*)p + 0x0) = 21; *(u8*)((char*)p + 0x1) = 3; }
void send_6x16__12TBoss3VoloptFPv(void* p) { swap_6x16_fields__12TBoss3VoloptFPv(p); TLobby__send_and_handle_60(p); }
void TBoss3Volopt__sub_8003F33C(void* p) { *(u8*)((char*)p + 0x0) = 22; *(u8*)((char*)p + 0x1) = 3; }
void send_update_60__12TBoss3VoloptFPv(void* p) { bswap_actions__12TBoss3VoloptFPv(p); TLobby__send_and_handle_60(p); }
void TBoss3Volopt__sub_8003F384(void* p) { *(u8*)((char*)p + 0x0) = 132; *(u8*)((char*)p + 0x1) = 4; }

    extern int lbl_805D4C40;
int TBoss3Volopt__sub_8003F398(void) {  return lbl_805D4C40; }

}
