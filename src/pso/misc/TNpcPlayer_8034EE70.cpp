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

void update_player_field__10TNpcPlayerFUsi(u16 arg0, s32 arg1) {
    u32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(arg0);
    if (temp_r3 != 0U) {
        set_type__10TObjPlayerFPvi(temp_r3 + 0x644, arg1);
    }
}

}
