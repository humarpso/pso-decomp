#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_78 { u8 bytes[0x78]; };

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_C { u8 bytes[0xc]; };

extern "C" {
u8 *TObjPlayer__sub_801C1268(u8 *arg0, u8 *arg1);
extern const f32 TObjPlayer__data_805DC278;
void TObjPlayer__sub_801C15E4(u8 *arg0);
M2C_UNK TFontSmallLobby__sub_801C0228(void *);
u8 *TObjPlayer__sub_801C1664(u8 *arg0, u8 *arg1);
}

extern "C" {

void bswap_body_dwords3__10TObjPlayerFPv(void* p);
void bswap_body_dwords3_and_send__10TObjPlayerFPv(void* p);
void bswap_body_dwords4__10TObjPlayerFPv(void* p);
void bswap_body_dwords4_and_send__10TObjPlayerFPv(void* p);
void bswap_body_dwords5__10TObjPlayerFPv(void* p);
void bswap_body_dwords5_and_send__10TObjPlayerFPv(void* p);
void bswap_body_words__10TObjPlayerFPv(void* p);
void bswap_body_words_and_send__10TObjPlayerFPv(void* p);
void bswap_fields_and_send__10TObjPlayerFPv(void* p);
void bswap_pkt_u16x2_u32x2__10TObjPlayerFPv(void* p);
void bswap_pkt_u32x5__10TObjPlayerFPv(void* p);
void byteswap_data__10TObjPlayerFPv(void* p);
void *copy_from__10TObjPlayerFPvPv(void *arg0, void *arg1);
void *copy_pair_fields3__10TObjPlayerFPvPv(void *arg0, void *arg1);
void *copy_pair_fields4__10TObjPlayerFPvPv(void *arg0, void *arg1);
void *copy_short_fields__10TObjPlayerFPvPv(void *arg0, void *arg1);
void init_cmd_6x20__10TObjPlayerFPv(void *arg0);
void init_cmd_6x26__10TObjPlayerFPv(void *arg0);
void init_cmd_6x29__10TObjPlayerFPv(void *arg0);
void init_command__10TObjPlayerFPv(void *arg0);
int TLobby__send_and_handle_60(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int bswap_fields__10TObjPlayerFi(void*);
int read_be16_field2__10TObjPlayerFPv(void*);

void bswap_fields_and_send__10TObjPlayerFPv(void* p) { bswap_fields__10TObjPlayerFi(p); TLobby__send_and_handle_60(p); }

void bswap_body_words__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }

void *copy_short_fields__10TObjPlayerFPvPv(void *arg0, void *arg1) {
    TFontSmallLobby__sub_801C0228((void *)(arg0));
    M2C_FIELD(arg0, s16 *, 4) = (s16) M2C_FIELD(arg1, s16 *, 4);
    M2C_FIELD(arg0, s16 *, 6) = (s16) M2C_FIELD(arg1, s16 *, 6);
    return arg0;
}

void init_trap_packet__10TObjPlayerFPv(void *arg0)
{
  *((s16 *) (((s8 *) arg0) + 4)) = 0;
  *((s16 *) (((s8 *) arg0) + 6)) = 0;
  *((s8 *) (((s8 *) arg0) + 0)) = (double) 0x83;
  *((s8 *) (((s8 *) arg0) + 1)) = 2;
}

void bswap_body_words_and_send__10TObjPlayerFPv(void* p) { bswap_body_words__10TObjPlayerFPv((void*)(p)); TLobby__send_and_handle_60(p); }

void byteswap_data__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_32__FPUl((char*)p + 0x4); { int i; for (i = 0; i < 30; i++) { bswap_32__FPUl((char*)p + 0x8 + i * 4); } } }

u8 *TObjPlayer__sub_801C1268(u8 *arg0, u8 *arg1) {
    TFontSmallLobby__sub_801C0228((void *)(arg0));
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    *(M2CCopy_78 *)(arg0 + 4 + 4) = *(const M2CCopy_78 *)((s32) (arg1 + 4) + 4);
    return arg0;
}

void bswap_body_dwords3__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); }

void *copy_pair_fields3__10TObjPlayerFPvPv(void *arg0, void *arg1) {
    TFontSmallLobby__sub_801C0228((void *)(arg0));
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(arg1, s32 *, 8);
    return arg0;
}

void init_cmd_6x29__10TObjPlayerFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = -1;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s8 *, 0) = 0x29;
    M2C_FIELD(arg0, s8 *, 1) = 3;
}

void bswap_body_dwords3_and_send__10TObjPlayerFPv(void* p) { bswap_body_dwords3__10TObjPlayerFPv((void*)(p)); TLobby__send_and_handle_60(p); }

void bswap_body_dwords4_and_send__10TObjPlayerFPv(void* p) { bswap_body_dwords4__10TObjPlayerFPv((void*)(p)); TLobby__send_and_handle_60(p); }

void bswap_body_dwords4__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); }

void init_cmd_6x26__10TObjPlayerFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = -1;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s8 *, 0) = 0x26;
    M2C_FIELD(arg0, s8 *, 1) = 3;
}

void bswap_body_dwords5__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); }

void *copy_pair_fields4__10TObjPlayerFPvPv(void *arg0, void *arg1) {
    TFontSmallLobby__sub_801C0228((void *)(arg0));
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(arg1, s32 *, 8);
    return arg0;
}

void init_command__10TObjPlayerFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = -1;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s8 *, 0) = 0x25;
    M2C_FIELD(arg0, s8 *, 1) = 3;
}

void bswap_body_dwords5_and_send__10TObjPlayerFPv(void* p) { bswap_body_dwords5__10TObjPlayerFPv((void*)(p)); TLobby__send_and_handle_60(p); }

void bswap_pkt_u16x2_u32x2__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); }

void *copy_from__10TObjPlayerFPvPv(void *arg0, void *arg1) {
    TFontSmallLobby__sub_801C0228((void *)(arg0));
    M2C_FIELD(arg0, s16 *, 4) = (s16) M2C_FIELD(arg1, s16 *, 4);
    M2C_FIELD(arg0, u16 *, 6) = (u16) M2C_FIELD(arg1, u16 *, 6);
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
    return arg0;
}

void TObjPlayer__sub_801C15E4(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 4) = 0;
    M2C_FIELD(arg0, s16 *, 6) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) TObjPlayer__data_805DC278;
    M2C_FIELD(arg0, u8 *, 0) = 0xAE;
    M2C_FIELD(arg0, s8 *, 1) = 4;
}

void bswap_pkt_u32x5__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); bswap_32__FPUl((char*)p + 0x10); bswap_32__FPUl((char*)p + 0x14); }

extern const f32 TObjPlayer__data_805DC278;

u8 *TObjPlayer__sub_801C1664(u8 *arg0, u8 *arg1) {
    TFontSmallLobby__sub_801C0228((void *)(arg0));
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    *(M2CCopy_C *)((s32) arg0 + 8) = *(const M2CCopy_C *)((s32) arg1 + 8);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg1, s32 *, 0x14);
    return arg0;
}

void init_cmd_6x20__10TObjPlayerFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) TObjPlayer__data_805DC278;
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) TObjPlayer__data_805DC278;
    M2C_FIELD(arg0, f32 *, 8) = (f32) TObjPlayer__data_805DC278;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s8 *, 0) = 0x20;
    M2C_FIELD(arg0, s8 *, 1) = 6;
}

}
