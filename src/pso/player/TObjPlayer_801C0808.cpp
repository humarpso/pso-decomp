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

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_10 { u8 bytes[0x10]; };

struct M2CCopy_14 { u8 bytes[0x14]; };

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off

struct O_801C12C8 { u8 a; u8 b; u8 pad[2]; s32 c; s32 arr[30]; };

extern "C" {
u8 *TObjPlayer__sub_801C1268(u8 *arg0, u8 *arg1);
extern const f32 TObjPlayer__data_805DC278;
void build_6xAE_set_animation_state_packet__10TObjPlayerFPv(u8 *arg0);
u8 *TObjPlayer__sub_801C1664(u8 *arg0, u8 *arg1);
s32 bswap__9TItemDataFv(s32);
void bswap_cmd_item_data__10TObjPlayerFi(s32 arg0);
void* copy__10TObjPlayerFPvPv(void* p, void* a1);
M2C_UNK TFontSmallLobby__sub_801C0228(void *, void *);
u8 *TObjPlayer__sub_801C0F10(u8 *arg0, u8 *arg1);
void* init_pkt_6x2B__10TObjPlayerFPv(void* p);
void set_code_43_6__10TObjPlayerFPv(void* p);
void bswap_cmd_item_data__10TObjPlayerFi(s32 arg0);
int TLobby__send_and_handle_60(void*);
void send_cmd_item_data__10TObjPlayerFPv(void* p);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
void bswap_fields__10TObjPlayerFi(s32 arg0);
M2C_UNK TFontSmallLobby__sub_801C0228(void *, void *);
u8 *TObjPlayer__sub_801C106C(u8 *arg0, u8 *arg1);
extern const f32 TObjPlayer__data_805DC278;
void init_6x2A__10TObjPlayerFPv(u8 *arg0);
void init_6xAC_packet__10TObjPlayerFPv(O_801C12C8 *p);
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

void bswap_cmd_item_data__10TObjPlayerFi(s32 arg0) {
    read_be16_field2__10TObjPlayerFPv((void*)(arg0));
    bswap__9TItemDataFv(arg0 + 4);
}

void* copy__10TObjPlayerFPvPv(void* p, void* a1) { TObjPlayer__sub_801C0F10((u8 *)((u8 *)((void*)(p))), (u8 *)((u8 *)(a1))); *(unsigned char*)((char*)p + 0x18) = *(unsigned char*)((char*)a1 + 0x18); *(unsigned char*)((char*)p + 0x19) = *(unsigned char*)((char*)a1 + 0x19); *(short*)((char*)p + 0x1a) = *(unsigned short*)((char*)a1 + 0x1a); return p; }

u8 *TObjPlayer__sub_801C0F10(u8 *arg0, u8 *arg1) {
    TFontSmallLobby__sub_801C0228((void *)((void *)(arg0)), (void *)((void *)(arg1)));
    *(M2CCopy_14 *)((s32) arg0 + 4) = *(const M2CCopy_14 *)((s32) arg1 + 4);
    return arg0;
}

void* init_pkt_6x2B__10TObjPlayerFPv(void* p) { set_code_43_6__10TObjPlayerFPv((void*)((void*)(p))); *(unsigned char*)(p) = 43; *(unsigned char*)((char*)p + 0x18) = 2; *(unsigned char*)((char*)p + 0x19) = 0; *(unsigned char*)((char*)p + 0x1a) = 0; *(unsigned char*)((char*)p + 0x1b) = 0; *(unsigned char*)((char*)p + 0x1) = 7; return p; }

void set_code_43_6__10TObjPlayerFPv(void* p) { *(u8*)((char*)p + 0x0) = 43; *(u8*)((char*)p + 0x1) = 6; }

void send_cmd_item_data__10TObjPlayerFPv(void* p) { bswap_cmd_item_data__10TObjPlayerFi((s32)(p)); TLobby__send_and_handle_60((void*)(p)); }

void bswap_fields__10TObjPlayerFi(s32 arg0) {
    read_be16_field2__10TObjPlayerFPv((void*)(arg0));
    bswap_16__FPUs((void*)(arg0 + 6));
    bswap_16__FPUs((void*)(arg0 + 4));
    bswap_32__FPUl((void*)(arg0 + 8));
    bswap_32__FPUl((void*)(arg0 + 0xC));
    bswap_32__FPUl((void*)(arg0 + 0x10));
    bswap_32__FPUl((void*)(arg0 + 0x14));
}

u8 *TObjPlayer__sub_801C106C(u8 *arg0, u8 *arg1) {
    TFontSmallLobby__sub_801C0228((void *)(arg0), (void *)(arg1));
    M2C_FIELD(arg0, s16 *, 4) = (s16) M2C_FIELD(arg1, s16 *, 4);
    M2C_FIELD(arg0, s16 *, 6) = (s16) M2C_FIELD(arg1, s16 *, 6);
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(arg1, s32 *, 8);
    *(M2CCopy_C *)((s32) arg0 + 0xC) = *(const M2CCopy_C *)((s32) arg1 + 0xC);
    return arg0;
}

void init_6x2A__10TObjPlayerFPv(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 4) = 0;
    M2C_FIELD(arg0, s16 *, 6) = 0;
    M2C_FIELD(arg0, s32 *, 8) = -1;
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) TObjPlayer__data_805DC278;
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) TObjPlayer__data_805DC278;
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) TObjPlayer__data_805DC278;
    M2C_FIELD(arg0, s8 *, 0) = 0x2A;
    M2C_FIELD(arg0, s8 *, 1) = 6;
}

void bswap_fields_and_send__10TObjPlayerFPv(void* p) { bswap_fields__10TObjPlayerFi((s32)(p)); TLobby__send_and_handle_60(p); }

void bswap_body_words__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }

void *copy_short_fields__10TObjPlayerFPvPv(void *arg0, void *arg1) {
    TFontSmallLobby__sub_801C0228((void *)((void *)(arg0)), (void *)(arg1));
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
    TFontSmallLobby__sub_801C0228((void *)((void *)(arg0)), (void *)(arg1));
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    *(M2CCopy_78 *)(arg0 + 4 + 4) = *(const M2CCopy_78 *)((s32) (arg1 + 4) + 4);
    return arg0;
}

void init_6xAC_packet__10TObjPlayerFPv(O_801C12C8 *p) {
    s32 i;
    p->c = 0;
    for (i = 0; i < 30; i++) {
        p->arr[i] = -1;
    }
    p->a = 0xac;
    p->b = 0x20;
}

void bswap_body_dwords3__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); }

void *copy_pair_fields3__10TObjPlayerFPvPv(void *arg0, void *arg1) {
    TFontSmallLobby__sub_801C0228((void *)((void *)(arg0)), (void *)(arg1));
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
    TFontSmallLobby__sub_801C0228((void *)((void *)(arg0)), (void *)(arg1));
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
    TFontSmallLobby__sub_801C0228((void *)((void *)(arg0)), (void *)(arg1));
    M2C_FIELD(arg0, s16 *, 4) = (s16) M2C_FIELD(arg1, s16 *, 4);
    M2C_FIELD(arg0, u16 *, 6) = (u16) M2C_FIELD(arg1, u16 *, 6);
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
    return arg0;
}

void build_6xAE_set_animation_state_packet__10TObjPlayerFPv(u8 *arg0) {
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
    TFontSmallLobby__sub_801C0228((void *)((void *)(arg0)), (void *)(arg1));
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
