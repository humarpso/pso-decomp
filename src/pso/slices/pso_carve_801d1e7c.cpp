#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
extern "C" {
void TObjPlayer__sub_801D1F44(void* p);
extern M2C_UNK fn_80152EF8[];
void __construct_array(void *, void *, int, int, int);
void * TObjPlayer__sub_801D1EE4(void *arg0);
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

int TObjPlayer__sub_801D1E7C(void) { return 0; }
void *TObjPlayer__sub_801D1EE4(void *arg0) {
    TObjPlayer__sub_801D1F44((void*)((void *)((char *)arg0 + 4)));
    __construct_array((void *)((char *)arg0 + 12), fn_80152EF8, 0, 4, 10);
    M2C_FIELD(arg0, u8 *, 0x0) = 73;
    M2C_FIELD(arg0, u8 *, 0x1) = 13;
    return arg0;
}

}
