#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_8 { u8 bytes[0x8]; };

struct M2CCopy_2C { u8 bytes[0x2C]; };

struct RecoveredGlobal_801D2CF4_lbl_804C43CC {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_801D2CF4_lbl_804C43D8 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct Ent_801D2AB0 { u8 d[4]; };

struct Obj_801D2AB0 { u8 pad[0x14]; Ent_801D2AB0 arr[1]; };

struct Pos_801D2964 { u8 bytes[0x8]; };

struct Pkt_801D2964 { u8 hdr[4]; Pos_801D2964 pos; };

struct Ent_801D32A0 { u16 a; s16 b; };

struct Self_801D32A0 { u8 pad[0x20]; f32 f20; f32 f24; f32 f28; f32 f2c; s32 count; Ent_801D32A0 ents[1]; };

struct Cur_801D32A0 { u8 pad[0x28]; f32 x28; f32 x2c; f32 x30; u8 pad2[8]; f32 x3c; u8 pad3[0x5C]; u8 lock[4]; };

struct Pl_801D32A0 { u8 pad[0x424]; void *cursor; };

extern "C" {
M2C_UNK TFontSmallLobby__sub_801C0228(void *, void *);
#define TFontSmallLobby__sub_801C0228 ((int (*)(void*))TFontSmallLobby__sub_801C0228)
void *TObjPlayer__sub_801C092C(void *arg0, void *arg1);
}

extern "C" {

void apply_status_effect__10TObjPlayerFPv(void* p);
void bswap_status_effect__10TObjPlayerFPv(void* p);
void init_cmd_6x24__10TObjPlayerFPv(void *arg0);
void send_lobby_update__10TObjPlayerFPv(void* p);
void set_code_13_3__10TObjPlayerFPv(void* p);
void set_code_14_1__10TObjPlayerFPv(void* p);
void update_and_send__10TObjPlayerFPv(void* p);
int TFontSmallLobby__sub_801C01BC(void*);
int TLobby__send_and_handle_60(void*);
int bswap_pkt_u32x2__10TObjPlayerFPv(void*);
int bswap_status_effect_data__10TObjPlayerFPv(void*);
int byteswap_packet_body__10TObjPlayerFPv(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
void set_code_12_3__10TObjPlayerFPv(void* p);
void set_code_161_1__10TObjPlayerFPv(void* p);
void set_code_45_1__10TObjPlayerFPv(void* p);
void set_code_49_1__10TObjPlayerFPv(void* p);
void set_code_50_1__10TObjPlayerFPv(void* p);

extern const f32 TObjPlayer__data_805DC278;

void init_cmd_6x24__10TObjPlayerFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) TObjPlayer__data_805DC278;
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) TObjPlayer__data_805DC278;
    M2C_FIELD(arg0, f32 *, 8) = (f32) TObjPlayer__data_805DC278;
    M2C_FIELD(arg0, s8 *, 0) = 0x24;
    M2C_FIELD(arg0, s8 *, 1) = 5;
}

void send_lobby_update__10TObjPlayerFPv(void* p) { byteswap_packet_body__10TObjPlayerFPv(p); TLobby__send_and_handle_60(p); }
void bswap_status_effect__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_status_effect_data__10TObjPlayerFPv((char*)p + 0x4); }
void set_code_13_3__10TObjPlayerFPv(void* p) { *(u8*)((char*)p + 0x0) = 13; *(u8*)((char*)p + 0x1) = 3; }
void update_and_send__10TObjPlayerFPv(void* p) { bswap_status_effect__10TObjPlayerFPv((void*)(p)); TLobby__send_and_handle_60(p); }
void set_code_14_1__10TObjPlayerFPv(void* p) { *(u8*)((char*)p + 0x0) = 14; *(u8*)((char*)p + 0x1) = 1; }
void apply_status_effect__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_status_effect_data__10TObjPlayerFPv((char*)p + 0x4); }
#pragma push
#pragma opt_common_subs off
#pragma pop
void *TObjPlayer__sub_801C092C(void *arg0, void *arg1) {
    TFontSmallLobby__sub_801C0228(arg0);
    ((Pkt_801D2964 *)arg0)->pos = ((Pkt_801D2964 *)arg1)->pos;
    return arg0;
}
#pragma push
#pragma fp_contract on
#pragma pop
typedef char RecoveredGlobal_801D2CF4_lbl_804C43CC_size[sizeof(RecoveredGlobal_801D2CF4_lbl_804C43CC) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_801D2CF4_lbl_804C43D8_size[sizeof(RecoveredGlobal_801D2CF4_lbl_804C43D8) == 0x10 ? 1 : -1];

}

extern "C" {
extern const f32 TObjPlayer__data_805DC278;
void build_6x2C_impose_hold_packet__10TObjPlayerFPv(u8 *arg0);
}

extern "C" {
void apply_status_effect__10TObjPlayerFPv(void* p);

int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int bswap_pkt_u32x2__10TObjPlayerFPv(void*);
int bswap_status_effect_data__10TObjPlayerFPv(void*);
int TFontSmallLobby__sub_801C01BC(void*);
int byteswap_packet_body__10TObjPlayerFPv(void*);
int TLobby__send_and_handle_60(void*);
void set_code_13_3__10TObjPlayerFPv(void* p);
void set_code_14_1__10TObjPlayerFPv(void* p);
void set_code_12_3__10TObjPlayerFPv(void* p);
void set_code_161_1__10TObjPlayerFPv(void* p);
void set_code_50_1__10TObjPlayerFPv(void* p);
void set_code_49_1__10TObjPlayerFPv(void* p);
void set_code_45_1__10TObjPlayerFPv(void* p);

void set_code_12_3__10TObjPlayerFPv(void* p) { *(u8*)((char*)p + 0x0) = 12; *(u8*)((char*)p + 0x1) = 3; }
void reinit_update_sub4_and_send__10TObjPlayerFPv(void* p) { apply_status_effect__10TObjPlayerFPv(p); TLobby__send_and_handle_60(p); }
void set_code_161_1__10TObjPlayerFPv(void* p) { *(u8*)((char*)p + 0x0) = 161; *(u8*)((char*)p + 0x1) = 1; }
void update_font__10TObjPlayerFPv(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__send_and_handle_60(p); }
void send_font_state__10TObjPlayerFPv(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__send_and_handle_60(p); }
void set_code_50_1__10TObjPlayerFPv(void* p) { *(u8*)((char*)p + 0x0) = 50; *(u8*)((char*)p + 0x1) = 1; }
void set_code_49_1__10TObjPlayerFPv(void* p) { *(u8*)((char*)p + 0x0) = 49; *(u8*)((char*)p + 0x1) = 1; }
void bswap_font_lobby__10TObjPlayerFPv(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__send_and_handle_60(p); }
void set_code_45_1__10TObjPlayerFPv(void* p) { *(u8*)((char*)p + 0x0) = 45; *(u8*)((char*)p + 0x1) = 1; }
void send_lobby_update_font__10TObjPlayerFPv(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__send_and_handle_60(p); }
void bswap_pkt_u16x2_u32__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_32__FPUl((char*)p + 0x10); bswap_pkt_u32x2__10TObjPlayerFPv((char*)p + 0x8); }
void build_6x2C_impose_hold_packet__10TObjPlayerFPv(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 4) = 0;
    M2C_FIELD(arg0, s16 *, 6) = 0;
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) TObjPlayer__data_805DC278;
    M2C_FIELD(arg0, f32 *, 8) = (f32) TObjPlayer__data_805DC278;
    M2C_FIELD(arg0, s8 *, 0) = 0x2C;
    M2C_FIELD(arg0, s8 *, 1) = 5;
}

}

#undef TFontSmallLobby__sub_801C0228

#define TFontSmallLobby__sub_801C0228 ((s32 (*)())TFontSmallLobby__sub_801C0228)
#define bswap_16__FPUs ((s32 (*)(s32))bswap_16__FPUs)
#define bswap_32__FPUl ((s32 (*)(s32))bswap_32__FPUl)
#define bswap_pkt_u16x2_u32__10TObjPlayerFPv ((s32 (*)())bswap_pkt_u16x2_u32__10TObjPlayerFPv)
#define read_be16_field2__10TObjPlayerFPv ((s32 (*)())read_be16_field2__10TObjPlayerFPv)

extern "C" {

void TObjPlayer__sub_801C0C04(u8 *arg0);
void send_swapped_packet_6x30__10TObjPlayerFPv(void* p);
void build_6x30_change_level_packet__10TObjPlayerFPv(u8 *arg0);
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
int TLobby__send_and_handle_60(void* a0 = 0);
s32 bswap__9TItemDataFv(s32);
void* copy__10TObjPlayerFPvPv(void* p, void* a1);
void* init_pkt_6x2B__10TObjPlayerFPv(void* p);
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

void build_6x30_change_level_packet__10TObjPlayerFPv(u8 *arg0) {
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
#undef TFontSmallLobby__sub_801C0228
#undef bswap_16__FPUs
#undef bswap_32__FPUl
#undef bswap_pkt_u16x2_u32__10TObjPlayerFPv
#undef read_be16_field2__10TObjPlayerFPv

extern "C" {
M2C_UNK TFontSmallLobby__sub_801C0228(void *, void *);
int TLobby__send_and_handle_60(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
void bswap_pkt_u16x2_u32x2__10TObjPlayerFPv(void*);
}

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

#define TFontSmallLobby__sub_801C0228 ((int (*)(void*))TFontSmallLobby__sub_801C0228)
#define TLobby__send_and_handle_60 ((s32 (*)(s32))TLobby__send_and_handle_60)
#define bswap_16__FPUs ((s32 (*)(s32))bswap_16__FPUs)
#define bswap_32__FPUl ((s32 (*)(s32))bswap_32__FPUl)
#define bswap_pkt_u16x2_u32x2__10TObjPlayerFPv ((int (*)(void*))bswap_pkt_u16x2_u32x2__10TObjPlayerFPv)

extern "C" {
void send_player_floor_packet__10TObjPlayerFPvPv(void* p, void* a1);
s32 send_subcommand_to_client__6TLobbyFPvUi(s32, s32);
void send_player_floor_packet__10TObjPlayerFPvPv(void* p, void* a1);
void bswap_pkt_u32x5__10TObjPlayerFPv(void* p);
void send_player_floor_packet_u32x5__10TObjPlayerFPv(void* p);
s32 send_60_sized__6TLobbyFPv(s32);
void bswap_pkt_u32x5__10TObjPlayerFPv(void* p);
extern M2C_UNK lbl_80434088;
extern const f32 lbl_805D7D3C;
extern s32 current_floor_index;
extern s32 lobby_player_count;
void send_player_floor_packet_u32x5__10TObjPlayerFPv(void* p);
void bswap_set_floor_packet__10TObjPlayerFPv(void* p);
int read_be16_field2__10TObjPlayerFPv(void* p);
int read_be16_field2__10TObjPlayerFPv(void* p);
void bswap_set_floor_packet__10TObjPlayerFPv(void* p);
void init_6x1F_floor_packet(u8 *arg0);
void bswap_set_floor_packet__10TObjPlayerFPv(void* p);
void bswap_and_send_set_floor__10TObjPlayerFPv(void* p);
s32 send_60_sized__6TLobbyFPv(s32);
void bswap_set_floor_packet__10TObjPlayerFPv(void* p);
void bswap_and_send_set_floor__10TObjPlayerFPv(void* p);
void bswap_warp_packet__10TObjPlayerFPv(void* p);
int read_be16_field2__10TObjPlayerFPv(void* p);
int read_be16_field2__10TObjPlayerFPv(void* p);
void bswap_warp_packet__10TObjPlayerFPv(void* p);
}

extern "C" {

void* copy_warp_target__10TObjPlayerFPvPv(void* p, void* a1);
void* handle_6x1F_set_floor__10TObjPlayerFPvPv(void* p, void* a1);
s32 send_subcommand_to_client__6TLobbyFPvUi(s32, s32);
s32 send_60_sized__6TLobbyFPv(s32);
int test_flags_any(void*, int);
int __dl__FPv();
int clear_flags__11TAdRicoRingFPvUi(void*, int);
f32 fn_801C19A4(void* p);
s32 reset_settings_to_default__6TLobbyFPv();
int set_flags__10TObjPlayerFPvUi(void*, int);
s32 set_mode__20TWindowActionPaletteFPvUc(s32, u8);
s32 set_slot__20TWindowActionPaletteFPvUc(s32, u8);

void send_player_floor_packet__10TObjPlayerFPvPv(void* p, void* a1) { bswap_pkt_u16x2_u32x2__10TObjPlayerFPv(p); send_subcommand_to_client__6TLobbyFPvUi((s32)(p), (s32)(a1)); }

void send_player_floor_packet_u32x5__10TObjPlayerFPv(void* p) { bswap_pkt_u32x5__10TObjPlayerFPv((void*)(p)); send_60_sized__6TLobbyFPv((s32)(p)); }

void bswap_set_floor_packet__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv((void*)(p)); bswap_32__FPUl((s32)((char*)p + 0x4)); }

void* handle_6x1F_set_floor__10TObjPlayerFPvPv(void* p, void* a1) { TFontSmallLobby__sub_801C0228(p); *(void**)((char*)p + 0x4) = *(void**)((char*)a1 + 0x4); return p; }

void init_6x1F_floor_packet(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s8 *, 0) = 0x1F;
    M2C_FIELD(arg0, s8 *, 1) = 2;
}

void bswap_and_send_set_floor__10TObjPlayerFPv(void* p) { bswap_set_floor_packet__10TObjPlayerFPv((void*)(p)); send_60_sized__6TLobbyFPv((s32)(p)); }

void bswap_warp_packet__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv((void*)(p)); bswap_32__FPUl((s32)((char*)p + 0x4)); }

void* copy_warp_target__10TObjPlayerFPvPv(void* p, void* a1) { TFontSmallLobby__sub_801C0228(p); *(void**)((char*)p + 0x4) = *(void**)((char*)a1 + 0x4); return p; }

}
#undef TFontSmallLobby__sub_801C0228
#undef TLobby__send_and_handle_60
#undef bswap_16__FPUs
#undef bswap_32__FPUl
#undef bswap_pkt_u16x2_u32x2__10TObjPlayerFPv
