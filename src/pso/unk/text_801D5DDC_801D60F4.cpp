#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Cmd_801D61A0 { u8 hdr[2]; u16 client; u8 body[8]; };

extern "C" {
s32 get_current_floor();
s32 get_field_3e4__10TObjPlayerFPv(int);
s32 get_player_by_client_id(int);
M2C_UNK create_photon_blast_party_effects__10TObjPlayerFi(int);
M2C_UNK bswap_fields__15TFontSmallLobbyFPv(void *);
M2C_UNK copy_packet_header_6x38__15TFontSmallLobbyFPvPv(void *, void *);
M2C_UNK TFontSmallLobby__sub_801D698C(void *);
s32 reset_key_machine_state__10TObjPlayerFv();
s32 validate_6x38_donate_to_photon_blast(void *);
void handle_6x38_donate_to_photon_blast(s32 arg0);
}

extern "C" {

s32 is_ready__15TFontSmallLobbyFPv(u8 *arg0);
void reset_targets__15TFontSmallLobbyFi(s32 arg0);
s32 get_state__15TFontSmallLobbyFPv(void *);
s32 get_field_04__15TFontSmallLobbyFPv(void *);
M2C_UNK check_flag_at_40__15TFontSmallLobbyFPv(s32);
M2C_UNK set_target_count__15TFontSmallLobbyFPvi(s32, M2C_UNK);
M2C_UNK set_target_index__15TFontSmallLobbyFPvi(s32, M2C_UNK);

extern const f32 lbl_805DC3D8;

s32 is_ready__15TFontSmallLobbyFPv(u8 *arg0) {
    if ((get_field_04__15TFontSmallLobbyFPv(arg0 + 0x4C) < 3) && (M2C_FIELD(arg0, f32 *, 0x3C) > lbl_805DC3D8) && (get_state__15TFontSmallLobbyFPv(arg0 + 0x4C) < 0)) {
        return 1;
    }
    return 0;
}

void reset_targets__15TFontSmallLobbyFi(s32 arg0) {
    set_target_index__15TFontSmallLobbyFPvi(arg0 + 0x4C, 0);
    set_target_count__15TFontSmallLobbyFPvi(arg0 + 0x4C, 0);
    check_flag_at_40__15TFontSmallLobbyFPv(arg0);
}
void handle_6x38_donate_to_photon_blast(s32 arg0) {
    Cmd_801D61A0 cmd;
    s32 temp_r3;
    TFontSmallLobby__sub_801D698C((void *) (&cmd));
    copy_packet_header_6x38__15TFontSmallLobbyFPvPv((void *) (&cmd), (void *) (arg0));
    bswap_fields__15TFontSmallLobbyFPv((void *) (&cmd));
    if (validate_6x38_donate_to_photon_blast((void *) (&cmd)) != 0) {
        temp_r3 = get_player_by_client_id(cmd.client);
        if ((temp_r3 != 0) && (reset_key_machine_state__10TObjPlayerFv() != 0)) {
            if (get_current_floor() == get_field_3e4__10TObjPlayerFPv((int) (temp_r3))) {
                create_photon_blast_party_effects__10TObjPlayerFi(cmd.client);
            }
        }
    }
}

}
