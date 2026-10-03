#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_801D1658(void* a0);
void init_6x52_packet__10TObjPlayerFPv(u8 *arg0);
void broadcast_lobby_display__10TObjPlayerFPv(void* p);
void bswap_fields__10TObjPlayerFPv(void* p);
void* copy_font_state__10TObjPlayerFPvPv(void* p, void* a1);
void* copy_head_fields__10TObjPlayerFPvPv(void* p, void* a1);
void init_position_packet__10TObjPlayerFPv(void* a0);
void send_name__10TObjPlayerFPv(void* p);
void set_revived_state__10TObjPlayerFPv(void* p);
void set_type_53__10TObjPlayerFPv(void* p);
void swap_and_send__10TObjPlayerFPv(void* p);
void swap_endian__10TObjPlayerFPv(void* p);
void swap_stats_bytes__10TObjPlayerFPv(void* p);
void update_and_send2__10TObjPlayerFPv(void* p);
void update_display__10TObjPlayerFPv(void* p);
int TFontSmallLobby__sub_801C01BC(void*);
int TFontSmallLobby__sub_801C0228(void*);
int TLobby__send_and_handle_60(void*);
int TObjPlayer__sub_801D28DC(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int bswap_field_u32__10TObjPlayerFPv(void*);
void init_revive_packet__10TObjPlayerFPv(void* p);
int read_be16_field2__10TObjPlayerFPv(void*);
int swap_endian_words__10TObjPlayerFPv(void*);

    extern const float TObjPlayer__data_805DC36C;
void init_position_packet__10TObjPlayerFPv(void* a0) { *(float*)((char*)a0 + 0x10) = TObjPlayer__data_805DC36C; *(float*)((char*)a0 + 0xc) = TObjPlayer__data_805DC36C; *(float*)((char*)a0 + 0x8) = TObjPlayer__data_805DC36C; *(unsigned char*)((char*)a0 + 0x0) = 86; *(unsigned char*)((char*)a0 + 0x1) = 5; }

void update_and_send2__10TObjPlayerFPv(void* p) { swap_endian_words__10TObjPlayerFPv(p); TLobby__send_and_handle_60(p); }

void swap_and_send__10TObjPlayerFPv(void* p) { swap_endian__10TObjPlayerFPv((void*)((void*)(p))); TLobby__send_and_handle_60(p); }

void swap_endian__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); bswap_32__FPUl((char*)p + 0x10); bswap_32__FPUl((char*)p + 0x14); bswap_32__FPUl((char*)p + 0x18); bswap_32__FPUl((char*)p + 0x1c); }

    extern const float TObjPlayer__data_805DC36C;
void TObjPlayer__sub_801D1658(void* a0) { *(int*)((char*)a0 + 0x4) = 0; *(float*)((char*)a0 + 0x10) = TObjPlayer__data_805DC36C; *(float*)((char*)a0 + 0xc) = TObjPlayer__data_805DC36C; *(float*)((char*)a0 + 0x8) = TObjPlayer__data_805DC36C; *(float*)((char*)a0 + 0x1c) = TObjPlayer__data_805DC36C; *(float*)((char*)a0 + 0x18) = TObjPlayer__data_805DC36C; *(float*)((char*)a0 + 0x14) = TObjPlayer__data_805DC36C; *(unsigned char*)((char*)a0 + 0x0) = 85; *(unsigned char*)((char*)a0 + 0x1) = 8; }

void set_type_53__10TObjPlayerFPv(void* p) { *(u8*)((char*)p + 0x0) = 83; *(u8*)((char*)p + 0x1) = 1; }
void send_name__10TObjPlayerFPv(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__send_and_handle_60(p); }
void swap_stats_bytes__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_32__FPUl((char*)p + 0x8); }
void* copy_font_state__10TObjPlayerFPvPv(void* p, void* a1) { TFontSmallLobby__sub_801C0228(p); *(short*)((char*)p + 0x4) = *(short*)((char*)a1 + 0x4); *(short*)((char*)p + 0x6) = *(short*)((char*)a1 + 0x6); *(void**)((char*)p + 0x8) = *(void**)((char*)a1 + 0x8); return p; }

void init_6x52_packet__10TObjPlayerFPv(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 4) = 0;
    M2C_FIELD(arg0, s16 *, 6) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s8 *, 0) = 0x52;
    M2C_FIELD(arg0, s8 *, 1) = 3;
}

void update_display__10TObjPlayerFPv(void* p) { swap_stats_bytes__10TObjPlayerFPv((void*)(p)); TLobby__send_and_handle_60(p); }
void set_revived_state__10TObjPlayerFPv(void* p) { *(u8*)((char*)p + 0x0) = 79; *(u8*)((char*)p + 0x1) = 1; }
void broadcast_lobby_display__10TObjPlayerFPv(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__send_and_handle_60(p); }
void bswap_fields__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }
void* copy_head_fields__10TObjPlayerFPvPv(void* p, void* a1) { TFontSmallLobby__sub_801C0228(p); *(short*)((char*)p + 0x4) = *(unsigned short*)((char*)a1 + 0x4); *(short*)((char*)p + 0x6) = *(short*)((char*)a1 + 0x6); return p; }

}
