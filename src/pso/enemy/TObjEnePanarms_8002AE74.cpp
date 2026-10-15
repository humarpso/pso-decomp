#include "types.h"
#include "pso/enemy/TObjEnePanarms.h"

extern "C" {

void bswap_6x12_packet__10TObjPlayerFv(void* p);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFv(void*);
void bswap_dragon_boss_fields__10TObjPlayerFv(void* p);
void bswap_stats__10TObjPlayerFv(void* p);
void send_6x12_packet__10TObjPlayerFv(void* p);
int TLobby__send_and_handle_60(void*);
f32 get_random_float__21TObjEneMe3ShinowaRealFv(void);
f64 floor();
int get_flag_b4__21TObjEneMe3ShinowaRealFv(void* p);
int test_card_flag_2__12TBoss8DragonFv(void* p);
void set_speed__12TBoss8DragonFf(void* p, f32 v);
void set_field_dc__10TObjPlayerFl(void* p, s32 v);
void set_field_d8__10TObjPlayerFl(void* p, s32 v);
void reset_lobby_model__10TObjPlayerFv(void* p);
void reset_type__10TObjPlayerFv(void* p);
void set_type__10TObjPlayerFl(void* p, s32 v);
void set_type_dragon__10TObjPlayerFv(void* p);
int test_card_flag__19TWindowKeyBoardHardFll(void*, int);

void TObjEnePanarms::set_field_b8(s16 v) { *(s16*)((char*)this + 0xb8) = v; }

}
