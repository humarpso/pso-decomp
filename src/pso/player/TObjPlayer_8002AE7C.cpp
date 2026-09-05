#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK copy_header__6TLobbyFPvPv(void *, void *);
extern s32 TLobby__data_805D6144;
s32 TLobby__sub_8002AFD4(u8 *arg0, s32 arg1, s16 arg2);
}

extern "C" {

void set_field_dc__10TObjPlayerFPvi(void* p, s32 v);
void set_field_d8__10TObjPlayerFPvi(void* p, s32 v);
void reset_lobby_model__10TObjPlayerFPv(void* p);
void reset_type__10TObjPlayerFPv(void* p);
void set_type__10TObjPlayerFPvi(void* p, s32 v);
void send_6x12_packet__10TObjPlayerFPv(void* p);
void bswap_6x12_packet__10TObjPlayerFPv(void* p);
void set_type_dragon__10TObjPlayerFPv(void* p);
void bswap_dragon_boss_fields__10TObjPlayerFPv(void* p);
void bswap_stats__10TObjPlayerFPv(void* p);
void set_speed__12TBoss8DragonFPvf(void* p, f32 v);
int TLobby__send_and_handle_60(void*);
int get_flag_b4__21TObjEneMe3ShinowaRealFPv(void* p);
void set_field_b8__14TObjEnePanarmsFPvs(void* p, s16 v);
int read_be16_field2__10TObjPlayerFPv(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
f32 get_random_float__21TObjEneMe3ShinowaRealFv(void);
int test_card_flag_2__12TBoss8DragonFPv(void* p);
int test_card_flag__19TWindowKeyBoardHardFii(void*, int);
f64 TWindowSubComCard__sub_803A24E4();

void set_field_dc__10TObjPlayerFPvi(void* p, s32 v) { *(s32*)((char*)p + 0xdc) = v; }
void set_field_d8__10TObjPlayerFPvi(void* p, s32 v) { *(s32*)((char*)p + 0xd8) = v; }
void reset_lobby_model__10TObjPlayerFPv(void* p) { reset_type__10TObjPlayerFPv((void*)(p)); }
void reset_type__10TObjPlayerFPv(void* p) { *(s32*)((char*)p + 0x0) = 0; }
void set_type__10TObjPlayerFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }
void send_6x12_packet__10TObjPlayerFPv(void* p) { bswap_6x12_packet__10TObjPlayerFPv((void*)(p)); TLobby__send_and_handle_60(p); }
void bswap_6x12_packet__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_32__FPUl((char*)p + 0x8); }
void set_type_dragon__10TObjPlayerFPv(void* p) { *(u8*)((char*)p + 0x0) = 18; *(u8*)((char*)p + 0x1) = 5; }
void bswap_dragon_boss_fields__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_32__FPUl((char*)p + 0x8); }
void bswap_stats__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_32__FPUl((char*)p + 0x8); }
s32 TLobby__sub_8002AFD4(u8 *arg0, s32 arg1, s16 arg2) {
    s16 temp_r31;
    temp_r31 = M2C_FIELD(arg0, s16 *, 0x2C);
    if ((temp_r31 < 0) || (temp_r31 > 0xB4F)) {
        return 0;
    }
    if (arg2 == 0) {
        copy_header__6TLobbyFPvPv((void *) (TLobby__data_805D6144 + (temp_r31 * 0xC)), (void *) (arg1));
    }
    if (arg2 == 1) {
        copy_header__6TLobbyFPvPv((void *) (arg1), (void *) (TLobby__data_805D6144 + (temp_r31 * 0xC)));
    }
    return 1;
}

}
