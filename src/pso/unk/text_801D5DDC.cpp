#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Pkt_801D60B4 { s16 a; u16 b; };

struct Pkt_801D5FC0 { u16 hdr; u16 id; };

extern "C" {
s32 get_current_floor();
s32 get_field_3e4__10TObjPlayerFPv(int);
s32 get_player_by_client_id(int);
M2C_UNK TFontSmallLobby__sub_801C01BC(void *);
M2C_UNK send_photon_blast_ready__15TFontSmallLobbyFv(void *);
M2C_UNK update_ready__15TFontSmallLobbyFPv(void *);
M2C_UNK init_6x39_packet__15TFontSmallLobbyFPv(void *);
M2C_UNK handle_photon_blast_ready__15TFontSmallLobbyFPv(void *, void *);
s32 reset_key_machine_state__10TObjPlayerFv();
s32 validate_6x39_set_photon_blast_ready_flag(void *);
void handle_6x39_set_photon_blast_ready_flag(s32 arg0);
M2C_UNK init_6x39_packet__15TFontSmallLobbyFPv(void *);
void update_and_send_60__15TFontSmallLobbyFPv(void *p);
void TFontSmallLobby__sub_801D60B4(u16 *p);
s32 obj_isState2_324();
s32 get_player_by_client_id(int);
void init_6x3A_packet__15TFontSmallLobbyFPv(void *);
void draw_and_send__15TFontSmallLobbyFPv(void *);
void TFontSmallLobby__sub_801D5FC0(u16 *arg0);
s32 is_locally_controlled__10TObjPlayerFPv(int);
s32 get_player_by_client_id(int);
M2C_UNK TFontSmallLobby__sub_801C01BC(void *);
M2C_UNK update_photon_blast_state__10TObjPlayerFv();
M2C_UNK clear_photon_blast_state__10TObjPlayerFPv(void *);
M2C_UNK TFontSmallLobby__sub_801D6804(void *, void *);
M2C_UNK init_pkt_cmd_3B__15TFontSmallLobbyFPv(void *);
s32 validate_6x3B_clear_temporary_photon_blast_state_flags(void *);
void handle_6x3B_clear_temporary_photon_blast_state_flags(s32 arg0);
M2C_UNK clear_photon_blast_state__10TObjPlayerFPv(void *);
M2C_UNK reset_fields__15TFontSmallLobbyFPv(void *);
M2C_UNK init_pkt_cmd_3B__15TFontSmallLobbyFPv(void *);
M2C_UNK update_and_send__15TFontSmallLobbyFPv(void *);
void TFontSmallLobby__sub_801D5F08(u16 *arg0);
s32 get_player_by_client_id(int);
M2C_UNK TFontSmallLobby__sub_801C01BC(void *);
M2C_UNK set_bit1_at_40__15TFontSmallLobbyFPv(void *);
M2C_UNK clear_photon_blast_ready_flag__15TFontSmallLobbyFPv(void *, void *);
void init_6x3A_packet__15TFontSmallLobbyFPv(void *);
s32 validate_6x3A_clear_photon_blast_ready_flag(void *);
void handle_6x3A_clear_photon_blast_ready_flag(s32 arg0);
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

void handle_6x3B_clear_temporary_photon_blast_state_flags(s32 arg0) {
    struct { s16 a; u16 b; } sp8;
    s32 temp_r3;
    init_pkt_cmd_3B__15TFontSmallLobbyFPv((void *) (&sp8));
    TFontSmallLobby__sub_801D6804((void *) (&sp8), (void *) (arg0));
    TFontSmallLobby__sub_801C01BC((void *) (&sp8));
    if (validate_6x3B_clear_temporary_photon_blast_state_flags((void *) (&sp8)) != 0) {
        temp_r3 = get_player_by_client_id((int) (sp8.b));
        if (temp_r3 != 0) {
            clear_photon_blast_state__10TObjPlayerFPv((void *) (temp_r3 + 0x4AC));
            if (is_locally_controlled__10TObjPlayerFPv((int) (temp_r3)) != 0) {
                update_photon_blast_state__10TObjPlayerFv();
            }
        }
    }
}

void TFontSmallLobby__sub_801D5F08(u16 *arg0) {
    struct { s16 a; u16 b; } sp8;
    clear_photon_blast_state__10TObjPlayerFPv(arg0);
    reset_fields__15TFontSmallLobbyFPv((u8 *)arg0 + 0x4C);
    init_pkt_cmd_3B__15TFontSmallLobbyFPv(&sp8);
    sp8.b = *arg0;
    update_and_send__15TFontSmallLobbyFPv(&sp8);
}

void handle_6x3A_clear_photon_blast_ready_flag(s32 arg0) {
    struct { s16 a; u16 b; } sp8;
    u8 *temp_r3;
    init_6x3A_packet__15TFontSmallLobbyFPv((void *) (&sp8));
    clear_photon_blast_ready_flag__15TFontSmallLobbyFPv((void *) (&sp8), (void *) (arg0));
    TFontSmallLobby__sub_801C01BC((void *) (&sp8));
    if (validate_6x3A_clear_photon_blast_ready_flag((void *) (&sp8)) != 0) {
        temp_r3 = (u8 *)get_player_by_client_id((int) (sp8.b));
        if (temp_r3 != 0) {
            set_bit1_at_40__15TFontSmallLobbyFPv((void *) (temp_r3 + 0x4AC));
        }
    }
}

void TFontSmallLobby__sub_801D5FC0(u16 *arg0) {
    struct Pkt_801D5FC0 pkt;
    if (((u8 *)get_player_by_client_id((int)(*arg0))) == NULL || obj_isState2_324() == 0) {
        init_6x3A_packet__15TFontSmallLobbyFPv(&pkt);
        pkt.id = *arg0;
        draw_and_send__15TFontSmallLobbyFPv(&pkt);
    }
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
        temp_r3 = get_player_by_client_id((int) (sp8.b));
        if ((temp_r3 != 0) && (reset_key_machine_state__10TObjPlayerFv() != 0)) {
            temp_r31 = get_field_3e4__10TObjPlayerFPv((int) (temp_r3));
            v = get_current_floor();
            if (v == temp_r31) {
                update_ready__15TFontSmallLobbyFPv((void *) (temp_r3 + 0x4AC));
                send_photon_blast_ready__15TFontSmallLobbyFv((void *) (temp_r3 + 0x4AC));
            }
        }
    }
}
typedef s32 M2C_UNK_801D60B4;
void TFontSmallLobby__sub_801D60B4(u16 *p) {
    Pkt_801D60B4 pk;
    init_6x39_packet__15TFontSmallLobbyFPv(&pk);
    pk.b = *p;
    update_and_send_60__15TFontSmallLobbyFPv(&pk);
}

}
