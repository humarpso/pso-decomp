#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TObjPlayer__sub_801D2304(void *arg0, void *arg1);
void *TObjPlayer__sub_801D2348(void *arg0, void *arg1);
void TObjPlayer__sub_801D2404(u8 *arg0);
void TObjPlayer__sub_801D2448(void* p);
void bswap_field4_sub__10TObjPlayerFPv(void* p);
void* build_packet_header__10TObjPlayerFPv(void* p);
void send_swap_field6__10TObjPlayerFPv(void* p);
int TFontSmallLobby__sub_801C01BC(void*);
int TFontSmallLobby__sub_801C0228(void*);
int TLobby__send_and_handle_60(void*);
s32 TObjPlayer__sub_8012125C(s32);
int TObjPlayer__sub_8012AF00(void*);
void TObjPlayer__sub_801D1F44(void* p);
u32 TObjPlayer__sub_801D247C();
void TObjPlayer__sub_801D2618(void* p, f32 v);
int TObjPlayer__sub_801D2680(void* p);
int TObjPlayer__sub_801D2B2C(void*);
int TObjPlayer__sub_801D2C18(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
void clear_status_bit6__10TObjPlayerFPv(void* p);
void init_shield_attack_packet__10TObjPlayerFPv(void* p);
int read_be16_field2__10TObjPlayerFPv(void*);
int read_swapped_fields__10TObjPlayerFPv(void*);
void set_action_flag_40__10TObjPlayerFPv(void* p);
void set_action_flag__10TObjPlayerFPv(void* p);
void swap_endian16__10TObjPlayerFPv(void* p);
void swap_field6__10TObjPlayerFPv(void* p);
void swap_header__10TObjPlayerFPv(void* p);
int update_players__6TLobbyFi(void*);

void send_swap_field6__10TObjPlayerFPv(void* p) { swap_field6__10TObjPlayerFPv(p); TLobby__send_and_handle_60(p); }

void *TObjPlayer__sub_801D2304(void *arg0, void *arg1) {
    TFontSmallLobby__sub_801C0228((void*)(arg0));
    M2C_FIELD(arg0, u16 *, 0x4) = M2C_FIELD(arg1, s16 *, 0x4);
    M2C_FIELD(arg0, u16 *, 0x6) = M2C_FIELD(arg1, s16 *, 0x6);
    return arg0;
}

void *TObjPlayer__sub_801D2348(void *arg0, void *arg1) {
    TFontSmallLobby__sub_801C0228((void*)(arg0));
    M2C_FIELD(arg0, u16 *, 0x4) = M2C_FIELD(arg1, s16 *, 0x4);
    M2C_FIELD(arg0, u16 *, 0x6) = M2C_FIELD(arg1, s16 *, 0x6);
    return arg0;
}

void bswap_field4_sub__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); TObjPlayer__sub_801D2B2C((char*)p + 0x4); }
void* build_packet_header__10TObjPlayerFPv(void* p) { TObjPlayer__sub_8012AF00((char*)p + 0x4); *(unsigned char*)(p) = 70; *(unsigned char*)((char*)p + 0x1) = 12; return p; }

void TObjPlayer__sub_801D2404(u8 *arg0) {
    M2C_FIELD(arg0, s8 *, 1) = (s8) ((TObjPlayer__sub_801D247C() >> 2U) & 0x3F);
    TObjPlayer__sub_801D2448((void*)((void *) (arg0)));
    TLobby__send_and_handle_60((void*)((void *) (arg0)));
}

void TObjPlayer__sub_801D2448(void* p) { read_be16_field2__10TObjPlayerFPv(p); TObjPlayer__sub_801D2C18((char*)p + 0x4); }

}
