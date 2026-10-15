#include "types.h"
#include "pso/boss/TBoss8Dragon.h"

extern "C" {
void fn_8002AE64(u8 *arg0);
}

extern "C" {

int TLobby__send_and_handle_60(void*);
f64 floor();
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
void bswap_6x12_packet__10TObjPlayerFv(void* p);
void bswap_dragon_boss_fields__10TObjPlayerFv(void* p);
void bswap_stats__10TObjPlayerFv(void* p);
int get_flag_b4__21TObjEneMe3ShinowaRealFv(void* p);
f32 get_random_float__21TObjEneMe3ShinowaRealFv(void);
int read_be16_field2__10TObjPlayerFv(void*);
void reset_lobby_model__10TObjPlayerFv(void* p);
void reset_type__10TObjPlayerFv(void* p);
void send_6x12_packet__10TObjPlayerFv(void* p);
void set_field_b8__14TObjEnePanarmsFs(void* p, s16 v);
void set_field_d8__10TObjPlayerFl(void* p, s32 v);
void set_field_dc__10TObjPlayerFl(void* p, s32 v);
void set_type__10TObjPlayerFl(void* p, s32 v);
void set_type_dragon__10TObjPlayerFv(void* p);
int test_card_flag__19TWindowKeyBoardHardFll(void*, int);

int TBoss8Dragon::test_card_flag_2() { return test_card_flag__19TWindowKeyBoardHardFll(this, 2); }

void TBoss8Dragon::set_speed(f32 v) { *(f32*)((char*)this + 0x10) = v; }

void fn_8002AE64(u8 *arg0) {
    *(s32 *)((s8 *)arg0 + 0xB0) = (s32) (*(s32 *)((s8 *)arg0 + 0xB0) & 0xFFFFFFFE);
}

}
