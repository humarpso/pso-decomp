#include "types.h"

extern "C" {

void init_position_packet__10TObjPlayerFPv(void* a0);
void update_and_send2__10TObjPlayerFPv(void* p);
void swap_and_send__10TObjPlayerFPv(void* p);
void swap_endian__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801D1658(void* a0);
int TLobby__send_and_handle_60(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int swap_endian_words__10TObjPlayerFPv(void*);
int bswap_32__FPUl(void*);

    extern const float TObjPlayer__data_805DC36C;
void init_position_packet__10TObjPlayerFPv(void* a0) { *(float*)((char*)a0 + 0x10) = TObjPlayer__data_805DC36C; *(float*)((char*)a0 + 0xc) = TObjPlayer__data_805DC36C; *(float*)((char*)a0 + 0x8) = TObjPlayer__data_805DC36C; *(unsigned char*)((char*)a0 + 0x0) = 86; *(unsigned char*)((char*)a0 + 0x1) = 5; }

void update_and_send2__10TObjPlayerFPv(void* p) { swap_endian_words__10TObjPlayerFPv(p); TLobby__send_and_handle_60(p); }

void swap_and_send__10TObjPlayerFPv(void* p) { swap_endian__10TObjPlayerFPv((void*)(p)); TLobby__send_and_handle_60(p); }

void swap_endian__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); bswap_32__FPUl((char*)p + 0x10); bswap_32__FPUl((char*)p + 0x14); bswap_32__FPUl((char*)p + 0x18); bswap_32__FPUl((char*)p + 0x1c); }

    extern const float TObjPlayer__data_805DC36C;
void TObjPlayer__sub_801D1658(void* a0) { *(int*)((char*)a0 + 0x4) = 0; *(float*)((char*)a0 + 0x10) = TObjPlayer__data_805DC36C; *(float*)((char*)a0 + 0xc) = TObjPlayer__data_805DC36C; *(float*)((char*)a0 + 0x8) = TObjPlayer__data_805DC36C; *(float*)((char*)a0 + 0x1c) = TObjPlayer__data_805DC36C; *(float*)((char*)a0 + 0x18) = TObjPlayer__data_805DC36C; *(float*)((char*)a0 + 0x14) = TObjPlayer__data_805DC36C; *(unsigned char*)((char*)a0 + 0x0) = 85; *(unsigned char*)((char*)a0 + 0x1) = 8; }

}
