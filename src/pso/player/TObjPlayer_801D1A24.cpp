#include "types.h"

extern "C" {

void TObjPlayer__sub_801D1A24(void* a0);
void send_head_pair_packet__10TObjPlayerFPv(void* p);
void read_swapped_fields__10TObjPlayerFPv(void* p);
int TLobby__send_and_handle_60(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int bswap_head_pair__10TObjPlayerFPv(void*);
int TObjPlayer__sub_801D28DC(void*);
int bswap_16__FPUs(void*);

    extern const float TObjPlayer__data_805DC36C;
void TObjPlayer__sub_801D1A24(void* a0) { *(short*)((char*)a0 + 0x6) = 0; *(short*)((char*)a0 + 0x4) = 0; *(float*)((char*)a0 + 0xc) = TObjPlayer__data_805DC36C; *(float*)((char*)a0 + 0x8) = TObjPlayer__data_805DC36C; *(unsigned char*)((char*)a0 + 0x0) = 76; *(unsigned char*)((char*)a0 + 0x1) = 4; }

void send_head_pair_packet__10TObjPlayerFPv(void* p) { bswap_head_pair__10TObjPlayerFPv(p); TLobby__send_and_handle_60(p); }

void read_swapped_fields__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); TObjPlayer__sub_801D28DC((char*)p + 0x8); }

}
