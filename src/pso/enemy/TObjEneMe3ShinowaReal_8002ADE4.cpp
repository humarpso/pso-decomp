#include "types.h"

extern "C" {

void bswap_6x12_packet__10TObjPlayerFPv(void* p);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
void bswap_dragon_boss_fields__10TObjPlayerFPv(void* p);
void bswap_stats__10TObjPlayerFPv(void* p);
void send_6x12_packet__10TObjPlayerFPv(void* p);
int TLobby__send_and_handle_60(void*);
f32 get_random_float__21TObjEneMe3ShinowaRealFv(void);
f64 TWindowSubComCard__sub_803A24E4();
int get_flag_b4__21TObjEneMe3ShinowaRealFPv(void* p);
int test_card_flag_2__12TBoss8DragonFPv(void* p);
void set_speed__12TBoss8DragonFPvf(void* p, f32 v);
void set_field_b8__14TObjEnePanarmsFPvs(void* p, s16 v);
void set_field_dc__10TObjPlayerFPvi(void* p, s32 v);
void set_field_d8__10TObjPlayerFPvi(void* p, s32 v);
void reset_lobby_model__10TObjPlayerFPv(void* p);
void reset_type__10TObjPlayerFPv(void* p);
void set_type__10TObjPlayerFPvi(void* p, s32 v);
void set_type_dragon__10TObjPlayerFPv(void* p);
int test_card_flag__19TWindowKeyBoardHardFii(void*, int);

f32 get_random_float__21TObjEneMe3ShinowaRealFv(void) {
    return (f32) TWindowSubComCard__sub_803A24E4();
}

}
