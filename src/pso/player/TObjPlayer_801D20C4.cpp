#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TObjPlayer__sub_801D2134(void *arg0, void *arg1);
void TObjPlayer__sub_801D2178(u8 *arg0);
void send_coords__10TObjPlayerFPv(void* p);
void send_swapped_header__10TObjPlayerFPv(void* p);
void swap_header__10TObjPlayerFPv(void* p);
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
void bswap_coords__10TObjPlayerFPv(void* p);
void clear_status_bit6__10TObjPlayerFPv(void* p);
void init_shield_attack_packet__10TObjPlayerFPv(void* p);
int read_be16_field2__10TObjPlayerFPv(void*);
int read_swapped_fields__10TObjPlayerFPv(void*);
void set_action_flag_40__10TObjPlayerFPv(void* p);
void set_action_flag__10TObjPlayerFPv(void* p);
void swap_endian16__10TObjPlayerFPv(void* p);
int update_players__6TLobbyFi(void*);

void send_coords__10TObjPlayerFPv(void* p) { bswap_coords__10TObjPlayerFPv(p); TLobby__send_and_handle_60(p); }
void swap_header__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }

void *TObjPlayer__sub_801D2134(void *arg0, void *arg1) {
    TFontSmallLobby__sub_801C0228((void*)(arg0));
    M2C_FIELD(arg0, u16 *, 0x4) = M2C_FIELD(arg1, s16 *, 0x4);
    M2C_FIELD(arg0, u16 *, 0x6) = M2C_FIELD(arg1, s16 *, 0x6);
    return arg0;
}

void TObjPlayer__sub_801D2178(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 6) = 0;
    M2C_FIELD(arg0, s16 *, 4) = 0;
    M2C_FIELD(arg0, s8 *, 0) = 0x48;
    M2C_FIELD(arg0, s8 *, 1) = 2;
}

void send_swapped_header__10TObjPlayerFPv(void* p) { swap_header__10TObjPlayerFPv((void*)(p)); TLobby__send_and_handle_60(p); }

}
