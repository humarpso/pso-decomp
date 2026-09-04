#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void fn_8002AE64(u8 *arg0);
}

extern "C" {

void set_speed__12TBoss8DragonFPvf(void* p, f32 v);
int test_card_flag_2__12TBoss8DragonFPv(void* p);
int TLobby__send_and_handle_60(void*);
f64 TWindowSubComCard__sub_803A24E4();
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
void bswap_6x12_packet__10TObjPlayerFPv(void* p);
void bswap_dragon_boss_fields__10TObjPlayerFPv(void* p);
void bswap_stats__10TObjPlayerFPv(void* p);
int get_flag_b4__21TObjEneMe3ShinowaRealFPv(void* p);
f32 get_random_float__21TObjEneMe3ShinowaRealFv(void);
int read_be16_field2__10TObjPlayerFPv(void*);
void reset_lobby_model__10TObjPlayerFPv(void* p);
void reset_type__10TObjPlayerFPv(void* p);
void send_6x12_packet__10TObjPlayerFPv(void* p);
void set_field_b8__14TObjEnePanarmsFPvs(void* p, s16 v);
void set_field_d8__10TObjPlayerFPvi(void* p, s32 v);
void set_field_dc__10TObjPlayerFPvi(void* p, s32 v);
void set_type__10TObjPlayerFPvi(void* p, s32 v);
void set_type_dragon__10TObjPlayerFPv(void* p);
int test_card_flag__19TWindowKeyBoardHardFii(void*, int);

int test_card_flag_2__12TBoss8DragonFPv(void* p) { return test_card_flag__19TWindowKeyBoardHardFii(p, 2); }

void set_speed__12TBoss8DragonFPvf(void* p, f32 v) { *(f32*)((char*)p + 0x10) = v; }

void fn_8002AE64(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) & 0xFFFFFFFE);
}

}
