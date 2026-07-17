#include "types.h"

extern "C" {

s32 set_type__10TObjPlayerFPvi(s32, s32);
u32 TPlayerBattleCtrl4P__sub_801BA74C(u32);
s32 init_photon_blast__10TObjPlayerFPvi(u32, s16);
int bswap_16__FPUs(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int TLobby__send_and_handle_60(void*);
s32 TNpcPlayer__sub_8034EF30(void* p);
void TNpcPlayer__sub_8034EF38(void* p, s32 v);
void TNpcPlayer__sub_8034EF40(void* p, s16 v);
void build_6x69_npc_control(void* p);

void build_6x69_npc_control(void* p) { *(u8*)((char*)p + 0x0) = 105; *(u8*)((char*)p + 0x1) = 3; }

}
