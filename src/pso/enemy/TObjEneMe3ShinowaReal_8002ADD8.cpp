#include "types.h"
#include "pso/enemy/TObjEneMe3ShinowaReal.h"

extern "C" {
int test_card_flag_2__12TBoss8DragonFv(void* p);
s32 fn_8002AE08(void *p);
}

extern "C" {

int TLobby__send_and_handle_60(void*);
f64 floor();
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
void bswap_6x12_packet__10TObjPlayerFv(void* p);
void bswap_dragon_boss_fields__10TObjPlayerFv(void* p);
void bswap_stats__10TObjPlayerFv(void* p);
int read_be16_field2__10TObjPlayerFv(void*);
void reset_lobby_model__10TObjPlayerFv(void* p);
void reset_type__10TObjPlayerFv(void* p);
void send_6x12_packet__10TObjPlayerFv(void* p);
void set_field_b8__14TObjEnePanarmsFs(void* p, s16 v);
void set_field_d8__10TObjPlayerFl(void* p, s32 v);
void set_field_dc__10TObjPlayerFl(void* p, s32 v);
void set_speed__12TBoss8DragonFf(void* p, f32 v);
void set_type__10TObjPlayerFl(void* p, s32 v);
void set_type_dragon__10TObjPlayerFv(void* p);
int test_card_flag_2__12TBoss8DragonFv(void* p);
int test_card_flag__19TWindowKeyBoardHardFll(void*, int);

int TObjEneMe3ShinowaReal::get_flag_b4() { return (*(u32*)((char*)this + 0xb0) >> 4) & 0x1; }

f32 TObjEneMe3ShinowaReal::get_random_float() {
    return (f32) floor();
}
s32 fn_8002AE08(void *p) {
    return test_card_flag_2__12TBoss8DragonFv((void*)(p)) ? 0x20000 : 0x10000;
}

}
