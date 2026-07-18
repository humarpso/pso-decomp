#include "types.h"

extern "C" {

s32 set_type__10TObjPlayerFPvi(s32, s32);
u32 TPlayerBattleCtrl4P__sub_801BA74C(u32);
s32 init_photon_blast__10TObjPlayerFPvi(u32, s16);
int bswap_16__FPUs(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int TLobby__send_and_handle_60(void*);
s32 get_field_67c__10TNpcPlayerFPv(void* p);
void set_npc_ctrl_state__10TNpcPlayerFPvi(void* p, s32 v);
void set_npc_control_flag__10TNpcPlayerFPvs(void* p, s16 v);
void build_6x69_npc_control(void* p);

void apply_to_battle_player_slot__10TNpcPlayerFUss(u16 arg0, s16 arg1) {
    u32 temp_r3;

    if ((arg1 < 0x10) && ((temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(arg0)) != 0U)) {
        init_photon_blast__10TObjPlayerFPvi(temp_r3, arg1);
    }
}
s32 get_field_67c__10TNpcPlayerFPv(void* p) { return *(s32*)((char*)p + 0x67c); }
void set_npc_ctrl_state__10TNpcPlayerFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x67c) = v; }
void set_npc_control_flag__10TNpcPlayerFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x678) = v; }
void byteswap_header__10TNpcPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_16__FPUs((char*)p + 0x8); bswap_16__FPUs((char*)p + 0xa); }
void send_state_60__10TNpcPlayerFPv(void* p) { byteswap_header__10TNpcPlayerFPv(p); TLobby__send_and_handle_60(p); }

}
