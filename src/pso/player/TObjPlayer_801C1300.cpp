#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void bswap_body_dwords3__10TObjPlayerFPv(void* p);
void *copy_pair_fields3__10TObjPlayerFPvPv(void *arg0, void *arg1);
void init_cmd_6x29__10TObjPlayerFPv(void *arg0);
void bswap_body_dwords3_and_send__10TObjPlayerFPv(void* p);
void bswap_body_dwords4_and_send__10TObjPlayerFPv(void* p);
void bswap_body_dwords4__10TObjPlayerFPv(void* p);
void init_cmd_6x26__10TObjPlayerFPv(void *arg0);
void bswap_body_dwords5__10TObjPlayerFPv(void* p);
void *copy_pair_fields4__10TObjPlayerFPvPv(void *arg0, void *arg1);
void init_command__10TObjPlayerFPv(void *arg0);
void bswap_body_dwords5_and_send__10TObjPlayerFPv(void* p);
void bswap_pkt_u16x2_u32x2__10TObjPlayerFPv(void* p);
void *copy_from__10TObjPlayerFPvPv(void *arg0, void *arg1);
M2C_UNK TFontSmallLobby__sub_801C0228();
int TLobby__send_and_handle_60(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int TObjPlayer__sub_8001960C(void*);

void bswap_body_dwords3__10TObjPlayerFPv(void* p) { TObjPlayer__sub_8001960C(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); }

void *copy_pair_fields3__10TObjPlayerFPvPv(void *arg0, void *arg1) {
    TFontSmallLobby__sub_801C0228();
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

void bswap_body_dwords3_and_send__10TObjPlayerFPv(void* p) { bswap_body_dwords3__10TObjPlayerFPv(p); TLobby__send_and_handle_60(p); }

void bswap_body_dwords4_and_send__10TObjPlayerFPv(void* p) { bswap_body_dwords4__10TObjPlayerFPv(p); TLobby__send_and_handle_60(p); }

void bswap_body_dwords4__10TObjPlayerFPv(void* p) { TObjPlayer__sub_8001960C(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); }

void init_cmd_6x26__10TObjPlayerFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = -1;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s8 *, 0) = 0x26;
    M2C_FIELD(arg0, s8 *, 1) = 3;
}

void bswap_body_dwords5__10TObjPlayerFPv(void* p) { TObjPlayer__sub_8001960C(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); }

void *copy_pair_fields4__10TObjPlayerFPvPv(void *arg0, void *arg1) {
    TFontSmallLobby__sub_801C0228();
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

void bswap_body_dwords5_and_send__10TObjPlayerFPv(void* p) { bswap_body_dwords5__10TObjPlayerFPv(p); TLobby__send_and_handle_60(p); }

void bswap_pkt_u16x2_u32x2__10TObjPlayerFPv(void* p) { TObjPlayer__sub_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); }

void *copy_from__10TObjPlayerFPvPv(void *arg0, void *arg1) {
    TFontSmallLobby__sub_801C0228();
    M2C_FIELD(arg0, s16 *, 4) = (s16) M2C_FIELD(arg1, s16 *, 4);
    M2C_FIELD(arg0, u16 *, 6) = (u16) M2C_FIELD(arg1, u16 *, 6);
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
    return arg0;
}

}
