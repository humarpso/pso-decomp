#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_C { u8 bytes[0xc]; };

extern "C" {
s32 TFontSmallLobby__sub_801C0228();
u8 *TObjPlayer__sub_801C106C(u8 *arg0, u8 *arg1);
}

extern "C" {

int TObjPlayer__sub_801C0F10(void*);
void TObjPlayer__sub_801C0FDC(void* p);
void bswap_cmd_item_data__10TObjPlayerFi(s32 arg0);
void bswap_fields__10TObjPlayerFi(s32 arg0);
void* copy__10TObjPlayerFPvPv(void* p, void* a1);
void init_6x2A__10TObjPlayerFPv(u8 *arg0);
void* init_pkt_6x2B__10TObjPlayerFPv(void* p);
void set_code_43_6__10TObjPlayerFPv(void* p);
s32 TFontSmallLobby__sub_801C0228();
int TLobby__send_and_handle_60(void* a0 = 0);
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
s32 bswap__9TItemDataFv(s32);
s32 bswap_pkt_u16x2_u32__10TObjPlayerFPv();
s32 read_be16_field2__10TObjPlayerFPv();

void bswap_cmd_item_data__10TObjPlayerFi(s32 arg0) {
    read_be16_field2__10TObjPlayerFPv();
    bswap__9TItemDataFv(arg0 + 4);
}
void* copy__10TObjPlayerFPvPv(void* p, void* a1) { TObjPlayer__sub_801C0F10((void*)(p)); *(unsigned char*)((char*)p + 0x18) = *(unsigned char*)((char*)a1 + 0x18); *(unsigned char*)((char*)p + 0x19) = *(unsigned char*)((char*)a1 + 0x19); *(short*)((char*)p + 0x1a) = *(unsigned short*)((char*)a1 + 0x1a); return p; }

int TObjPlayer__sub_801C0F10(void*) { return 0; }

void* init_pkt_6x2B__10TObjPlayerFPv(void* p) { set_code_43_6__10TObjPlayerFPv((void*)(p)); *(unsigned char*)(p) = 43; *(unsigned char*)((char*)p + 0x18) = 2; *(unsigned char*)((char*)p + 0x19) = 0; *(unsigned char*)((char*)p + 0x1a) = 0; *(unsigned char*)((char*)p + 0x1b) = 0; *(unsigned char*)((char*)p + 0x1) = 7; return p; }
void set_code_43_6__10TObjPlayerFPv(void* p) { *(u8*)((char*)p + 0x0) = 43; *(u8*)((char*)p + 0x1) = 6; }

void TObjPlayer__sub_801C0FDC(void* p) { bswap_cmd_item_data__10TObjPlayerFi((s32)(p)); TLobby__send_and_handle_60((void*)(p)); }

void bswap_fields__10TObjPlayerFi(s32 arg0) {
    read_be16_field2__10TObjPlayerFPv();
    bswap_16__FPUs(arg0 + 6);
    bswap_16__FPUs(arg0 + 4);
    bswap_32__FPUl(arg0 + 8);
    bswap_32__FPUl(arg0 + 0xC);
    bswap_32__FPUl(arg0 + 0x10);
    bswap_32__FPUl(arg0 + 0x14);
}

extern const f32 TObjPlayer__data_805DC278;

u8 *TObjPlayer__sub_801C106C(u8 *arg0, u8 *arg1) {
    TFontSmallLobby__sub_801C0228();
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

}
