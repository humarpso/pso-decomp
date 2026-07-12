#include "types.h"

extern "C" {

s32 TObjPlayer__sub_8002AEB8(s32, s32);
u32 TPlayerBattleCtrl4P__sub_801BA74C(u32);
s32 init_photon_blast__10TObjPlayerFPvi(u32, s16);
int bswap_16__FPUs(void*);
int TObjPlayer__sub_8001960C(void*);
int TLobby__send_and_handle_60(void*);
s32 TNpcPlayer__sub_8034EF30(void* p);
void TNpcPlayer__sub_8034EF38(void* p, s32 v);
void TNpcPlayer__sub_8034EF40(void* p, s16 v);
void build_6x69_npc_control(void* p);

void apply_to_battle_player_slot__10TNpcPlayerFUss(u16 arg0, s16 arg1) {
    u32 temp_r3;

    if ((arg1 < 0x10) && ((temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(arg0)) != 0U)) {
        init_photon_blast__10TObjPlayerFPvi(temp_r3, arg1);
    }
}
s32 TNpcPlayer__sub_8034EF30(void* p) { return *(s32*)((char*)p + 0x67c); }
void TNpcPlayer__sub_8034EF38(void* p, s32 v) { *(s32*)((char*)p + 0x67c) = v; }
void TNpcPlayer__sub_8034EF40(void* p, s16 v) { *(s16*)((char*)p + 0x678) = v; }
void byteswap_header__10TNpcPlayerFPv(void* p) { TObjPlayer__sub_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_16__FPUs((char*)p + 0x8); bswap_16__FPUs((char*)p + 0xa); }
void send_state_60__10TNpcPlayerFPv(void* p) { byteswap_header__10TNpcPlayerFPv(p); TLobby__send_and_handle_60(p); }

}
