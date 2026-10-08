#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_801C0C04(u8 *arg0);
void send_swapped_packet_6x30__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801C0CC4(u8 *arg0);
void TObjPlayer__sub_801C0D7C(u8 *arg0);
void bswap_and_send_body_dwords2__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801C0E40(u8 *arg0);
void send_use_item_cmd__10TObjPlayerFPv(void* p);
void bswap_and_send_packet__10TObjPlayerFi(s32 arg0);
void bswap_body_dwords2__10TObjPlayerFi(s32 arg0);
void bswap_body_dwords__10TObjPlayerFi(s32 arg0);
void bswap_cmd_u32__10TObjPlayerFi(s32 arg0);
void *copy_field_4__10TObjPlayerFPvPv(void *arg0, void *arg1);
void *copy_pair_fields2__10TObjPlayerFPvPv(void *arg0, void *arg1);
void *copy_pair_fields__10TObjPlayerFPvPv(void *arg0, void *arg1);
void swap_endian__10TObjPlayerFi(s32 arg0);
s32 TFontSmallLobby__sub_801C0228();
int TLobby__send_and_handle_60(void* a0 = 0);
int TObjPlayer__sub_801C0F10(void* a0 = 0);
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
s32 bswap__9TItemDataFv(s32);
s32 bswap_pkt_u16x2_u32__10TObjPlayerFPv();
void* copy__10TObjPlayerFPvPv(void* p, void* a1);
void* init_pkt_6x2B__10TObjPlayerFPv(void* p);
s32 read_be16_field2__10TObjPlayerFPv();
void set_code_43_6__10TObjPlayerFPv(void* p);

void bswap_and_send_packet__10TObjPlayerFi(s32 arg0) {
    bswap_pkt_u16x2_u32__10TObjPlayerFPv();
    TLobby__send_and_handle_60((void*)(arg0));
}
void bswap_body_dwords__10TObjPlayerFi(s32 arg0) {
    read_be16_field2__10TObjPlayerFPv();
    bswap_32__FPUl(arg0 + 4);
    bswap_32__FPUl(arg0 + 8);
}
void *copy_pair_fields__10TObjPlayerFPvPv(void *arg0, void *arg1) {
    TFontSmallLobby__sub_801C0228();
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(arg1, s32 *, 8);
    return arg0;
}

void TObjPlayer__sub_801C0C04(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s8 *, 0) = 0x2E;
    M2C_FIELD(arg0, s8 *, 1) = 3;
}

void send_swapped_packet_6x30__10TObjPlayerFPv(void* p) { swap_endian__10TObjPlayerFi((s32)(p)); TLobby__send_and_handle_60((void*)(p)); }

void swap_endian__10TObjPlayerFi(s32 arg0) {
    read_be16_field2__10TObjPlayerFPv();
    bswap_16__FPUs(arg0 + 4);
    bswap_16__FPUs(arg0 + 6);
    bswap_16__FPUs(arg0 + 8);
    bswap_16__FPUs(arg0 + 0xA);
    bswap_16__FPUs(arg0 + 0xC);
    bswap_16__FPUs(arg0 + 0xE);
    bswap_16__FPUs(arg0 + 0x10);
    bswap_16__FPUs(arg0 + 0x12);
}

void TObjPlayer__sub_801C0CC4(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 4) = 0;
    M2C_FIELD(arg0, s16 *, 6) = 0;
    M2C_FIELD(arg0, s16 *, 8) = 0;
    M2C_FIELD(arg0, s16 *, 0xA) = 0;
    M2C_FIELD(arg0, s16 *, 0xC) = 0;
    M2C_FIELD(arg0, s16 *, 0xE) = 0;
    M2C_FIELD(arg0, s16 *, 0x10) = 0;
    M2C_FIELD(arg0, s16 *, 0x12) = 0;
    M2C_FIELD(arg0, s8 *, 0) = 0x30;
    M2C_FIELD(arg0, s8 *, 1) = 5;
}

void bswap_body_dwords2__10TObjPlayerFi(s32 arg0) {
    read_be16_field2__10TObjPlayerFPv();
    bswap_32__FPUl(arg0 + 4);
    bswap_32__FPUl(arg0 + 8);
}
void *copy_pair_fields2__10TObjPlayerFPvPv(void *arg0, void *arg1) {
    TFontSmallLobby__sub_801C0228();
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(arg1, s32 *, 8);
    return arg0;
}

void TObjPlayer__sub_801C0D7C(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = -1;
    M2C_FIELD(arg0, s32 *, 8) = -1;
    M2C_FIELD(arg0, s8 *, 0) = 0x28;
    M2C_FIELD(arg0, s8 *, 1) = 3;
}

void bswap_and_send_body_dwords2__10TObjPlayerFPv(void* p) { bswap_body_dwords2__10TObjPlayerFi((s32)((s32)(p))); TLobby__send_and_handle_60((void*)((void*)(p))); }

void bswap_cmd_u32__10TObjPlayerFi(s32 arg0) {
    read_be16_field2__10TObjPlayerFPv();
    bswap_32__FPUl(arg0 + 4);
}
void *copy_field_4__10TObjPlayerFPvPv(void *arg0, void *arg1) {
    TFontSmallLobby__sub_801C0228();
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    return arg0;
}

void TObjPlayer__sub_801C0E40(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = -1;
    M2C_FIELD(arg0, s8 *, 0) = 0x27;
    M2C_FIELD(arg0, s8 *, 1) = 2;
}

void send_use_item_cmd__10TObjPlayerFPv(void* p) { bswap_cmd_u32__10TObjPlayerFi((s32)((s32)(p))); TLobby__send_and_handle_60((void*)((void*)(p))); }

}
