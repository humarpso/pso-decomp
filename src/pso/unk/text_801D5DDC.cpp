#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TObjPlayer__sub_800196EC();
s32 get_field_3e4__10TObjPlayerFPv(int);
s32 TPlayerBattleCtrl4P__sub_801BA74C(int);
M2C_UNK TFontSmallLobby__sub_801C01BC(void *);
M2C_UNK send_photon_blast_ready__15TFontSmallLobbyFv(void *);
M2C_UNK update_ready__15TFontSmallLobbyFPv(void *);
M2C_UNK init_6x39_packet__15TFontSmallLobbyFPv(void *);
M2C_UNK handle_photon_blast_ready__15TFontSmallLobbyFPv(void *, void *);
s32 reset_key_machine_state__10TObjPlayerFv();
s32 validate_6x39_set_photon_blast_ready_flag(void *);
void handle_6x39_set_photon_blast_ready_flag(s32 arg0);
}

extern "C" {

void set_section_index__15TFontSmallLobbyFPvs(void *arg0, s16 arg1);

void set_section_index__15TFontSmallLobbyFPvs(void *arg0, s16 arg1) {
    s16 var_r4;

    var_r4 = arg1;
    if ((var_r4 < 0) || (var_r4 > 0xA)) {
        var_r4 = 0;
    }
    M2C_FIELD(arg0, s16 *, 4) = var_r4;
}
void handle_6x39_set_photon_blast_ready_flag(s32 arg0) {
    struct { s16 a; u16 b; } sp8;
    s32 temp_r31;
    s32 temp_r3;
    s32 v;
    init_6x39_packet__15TFontSmallLobbyFPv((void *) (&sp8));
    handle_photon_blast_ready__15TFontSmallLobbyFPv((void *) (&sp8), (void *) (arg0));
    TFontSmallLobby__sub_801C01BC((void *) (&sp8));
    if (validate_6x39_set_photon_blast_ready_flag((void *) (&sp8)) != 0) {
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((int) (sp8.b));
        if ((temp_r3 != 0) && (reset_key_machine_state__10TObjPlayerFv() != 0)) {
            temp_r31 = get_field_3e4__10TObjPlayerFPv((int) (temp_r3));
            v = TObjPlayer__sub_800196EC();
            if (v == temp_r31) {
                update_ready__15TFontSmallLobbyFPv((void *) (temp_r3 + 0x4AC));
                send_photon_blast_ready__15TFontSmallLobbyFv((void *) (temp_r3 + 0x4AC));
            }
        }
    }
}

}
