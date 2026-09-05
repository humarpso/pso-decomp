#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
int TFontSmallLobby__sub_801C0228(void*);
void * TObjPlayer__sub_801D2260(void *arg0, void *arg1);
void TObjPlayer__sub_801D22AC(u8 *arg0);
}

extern "C" {
void swap_field6__10TObjPlayerFPv(void* p);
void swap_header__10TObjPlayerFPv(void* p);
void swap_endian16__10TObjPlayerFPv(void* p);

void init_shield_attack_packet__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801D1F44(void* p);
void TObjPlayer__sub_801D2618(void* p, f32 v);
void set_action_flag_40__10TObjPlayerFPv(void* p);
void clear_status_bit6__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801D2680(void* p);
void set_action_flag__10TObjPlayerFPv(void* p);
int TLobby__send_and_handle_60(void*);
int update_players__6TLobbyFi(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
s32 TObjPlayer__sub_8012125C(s32);
int TObjPlayer__sub_8012AF00(void*);
int TFontSmallLobby__sub_801C01BC(void*);
int TFontSmallLobby__sub_801C0228(void*);
int read_swapped_fields__10TObjPlayerFPv(void*);
int TObjPlayer__sub_801D2B2C(void*);
int TObjPlayer__sub_801D2C18(void*);

void *TObjPlayer__sub_801D2260(void *arg0, void *arg1) {
    TFontSmallLobby__sub_801C0228((void*)(arg0));
    M2C_FIELD(arg0, u8 *, 0x4) = M2C_FIELD(arg1, u8 *, 0x4);
    M2C_FIELD(arg0, u8 *, 0x5) = M2C_FIELD(arg1, u8 *, 0x5);
    M2C_FIELD(arg0, u16 *, 0x6) = M2C_FIELD(arg1, s16 *, 0x6);
    return arg0;
}
void TObjPlayer__sub_801D22AC(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 6) = 0;
    M2C_FIELD(arg0, s8 *, 5) = 0;
    M2C_FIELD(arg0, s8 *, 4) = 0;
    M2C_FIELD(arg0, u8 *, 0) = 0x8D;
    M2C_FIELD(arg0, s8 *, 1) = 2;
}

}
