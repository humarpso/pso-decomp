#include "types.h"

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
int fn_8002AE38(void* p);
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

}
