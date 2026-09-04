#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_801D1BB0(u8 *arg0);
void TObjPlayer__sub_801D1C70(u8 *arg0);
void *TObjPlayer__sub_801D1D44(void *arg0, void *arg1);
void TObjPlayer__sub_801D1D88(u8 *arg0);
void bswap_field4__10TObjPlayerFPv(void* p);
void* copy_font__10TObjPlayerFPvPv(void* p, void* a1);
void draw_font_and_send__10TObjPlayerFPv(void* p);
void handle_recv_state__10TObjPlayerFPv(void* p);
void init_shield_attack_packet__10TObjPlayerFPv(void* p);
void refresh_players__10TObjPlayerFPv(void* p);
void reset_action_state__10TObjPlayerFPv(void* a0);
void swap_endian16__10TObjPlayerFPv(void* p);
void swap_endian_field__10TObjPlayerFPv(void* p);
void sync_players__10TObjPlayerFPv(void* p);
void update_and_send4__10TObjPlayerFPv(void* p);
int TFontSmallLobby__sub_801C01BC(void*);
int TFontSmallLobby__sub_801C0228(void*);
int TLobby__send_and_handle_60(void*);
s32 TObjPlayer__sub_8012125C(s32);
int TObjPlayer__sub_8012AF00(void*);
void TObjPlayer__sub_801D1F44(void* p);
void TObjPlayer__sub_801D2618(void* p, f32 v);
int TObjPlayer__sub_801D2680(void* p);
int TObjPlayer__sub_801D2B2C(void*);
int TObjPlayer__sub_801D2C18(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
void clear_status_bit6__10TObjPlayerFPv(void* p);
int read_be16_field2__10TObjPlayerFPv(void*);
int read_swapped_fields__10TObjPlayerFPv(void*);
void set_action_flag_40__10TObjPlayerFPv(void* p);
void set_action_flag__10TObjPlayerFPv(void* p);
int update_players__6TLobbyFi(void*);

    extern const float TObjPlayer__data_805DC36C;
void reset_action_state__10TObjPlayerFPv(void* a0) { *(short*)((char*)a0 + 0x6) = 0; *(short*)((char*)a0 + 0x4) = 0; *(float*)((char*)a0 + 0xc) = TObjPlayer__data_805DC36C; *(float*)((char*)a0 + 0x8) = TObjPlayer__data_805DC36C; *(unsigned char*)((char*)a0 + 0x0) = 75; *(unsigned char*)((char*)a0 + 0x1) = 4; }

void handle_recv_state__10TObjPlayerFPv(void* p) { read_swapped_fields__10TObjPlayerFPv(p); TLobby__send_and_handle_60(p); }
void swap_endian_field__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_32__FPUl((char*)p + 0x4); }

void TObjPlayer__sub_801D1BB0(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s8 *, 0) = 0x51;
    M2C_FIELD(arg0, s8 *, 1) = 2;
}

void refresh_players__10TObjPlayerFPv(void* p) { swap_endian_field__10TObjPlayerFPv((void*)(p)); update_players__6TLobbyFi(p); }
void bswap_field4__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_32__FPUl((char*)p + 0x4); }
void* copy_font__10TObjPlayerFPvPv(void* p, void* a1) { TFontSmallLobby__sub_801C0228(p); *(void**)((char*)p + 0x4) = *(void**)((char*)a1 + 0x4); return p; }

void TObjPlayer__sub_801D1C70(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s8 *, 0) = 0x50;
    M2C_FIELD(arg0, s8 *, 1) = 2;
}

void sync_players__10TObjPlayerFPv(void* p) { bswap_field4__10TObjPlayerFPv((void*)(p)); update_players__6TLobbyFi(p); }
void init_shield_attack_packet__10TObjPlayerFPv(void* p) { *(u8*)((char*)p + 0x0) = 74; *(u8*)((char*)p + 0x1) = 1; }
void draw_font_and_send__10TObjPlayerFPv(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__send_and_handle_60(p); }
void swap_endian16__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }

void *TObjPlayer__sub_801D1D44(void *arg0, void *arg1) {
    TFontSmallLobby__sub_801C0228((void*)(arg0));
    M2C_FIELD(arg0, u16 *, 0x4) = M2C_FIELD(arg1, s16 *, 0x4);
    M2C_FIELD(arg0, u16 *, 0x6) = M2C_FIELD(arg1, s16 *, 0x6);
    return arg0;
}

void TObjPlayer__sub_801D1D88(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 4) = 0;
    M2C_FIELD(arg0, s16 *, 6) = 0;
    M2C_FIELD(arg0, s8 *, 0) = 0x37;
    M2C_FIELD(arg0, s8 *, 1) = 2;
}

void update_and_send4__10TObjPlayerFPv(void* p) { swap_endian16__10TObjPlayerFPv((void*)(p)); TLobby__send_and_handle_60(p); }

}
