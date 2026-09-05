#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
int TObjPlayer__sub_801D1FA4(void *);
u8 TObjPlayer__sub_801D2004(u8 *arg0);
int TLobby__send_and_handle_60(void*);
void TObjPlayer__sub_801D1F60(u8 *arg0);
}

extern "C" {
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

void TObjPlayer__sub_801D1F60(u8 *arg0) {
    M2C_FIELD(arg0, s8 *, 1) = (s8) ((((u32)TObjPlayer__sub_801D2004((u8 *)(arg0))) >> 2U) & 0x3F);
    ((M2C_UNK)TObjPlayer__sub_801D1FA4((void *)((void *) (arg0))));
    ((M2C_UNK)TLobby__send_and_handle_60((void*)((void *) (arg0))));
}

int TObjPlayer__sub_801D1FA4(void * _w0) { return 0; }
u8 TObjPlayer__sub_801D2004(u8 *arg0) {
    return (u8) (0x34 - ((0xA - M2C_FIELD(arg0, s16 *, 6)) * 4));
}

}
