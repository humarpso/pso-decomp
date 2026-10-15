#include "types.h"

extern "C" {

s16 TAdSinglePlyChrSelectGC__sub_801D5DDC(void *arg0);
s16 get_valid_index__15TFontSmallLobbyFPv(void *arg0);
s32 is_valid_index__15TFontSmallLobbyFs(s16);
void set_section_index__15TFontSmallLobbyFPvs(void *arg0, s16 arg1);

s16 TAdSinglePlyChrSelectGC__sub_801D5DDC(void *arg0) {
    s16 temp_r3;

    temp_r3 = *(s16 *)((s8 *)arg0 + 4);
    if ((temp_r3 < 0) || (temp_r3 > 0xA)) {
        set_section_index__15TFontSmallLobbyFPvs(arg0, 0);
    }
    return *(s16 *)((s8 *)arg0 + 4);
}

s16 get_valid_index__15TFontSmallLobbyFPv(void *arg0) {
    s16 var_r31;

    var_r31 = *(s16 *)((s8 *)arg0 + 2);
    if (is_valid_index__15TFontSmallLobbyFs(var_r31) == 0) {
        var_r31 = 0;
    }
    return var_r31;
}

}

struct Pkt_801D60B4 { s16 a; u16 b; };

struct Pkt_801D5FC0 { u16 hdr; u16 id; };

extern "C" {
s32 get_current_floor();
s32 get_field_3e4__10TObjPlayerFPv(int);
s32 get_player_by_client_id(int);
s32 TFontSmallLobby__sub_801C01BC(void *);
s32 send_photon_blast_ready__15TFontSmallLobbyFv(void *);
s32 update_ready__15TFontSmallLobbyFPv(void *);
s32 init_6x39_packet__15TFontSmallLobbyFPv(void *);
s32 handle_photon_blast_ready__15TFontSmallLobbyFPv(void *, void *);
s32 reset_key_machine_state__10TObjPlayerFv();
s32 validate_6x39_set_photon_blast_ready_flag(void *);
void handle_6x39_set_photon_blast_ready_flag(s32 arg0);
s32 init_6x39_packet__15TFontSmallLobbyFPv(void *);
void update_and_send_60__15TFontSmallLobbyFPv(void *p);
void send_6x39_photon_blast_ready(u16 *p);
s32 obj_isState2_324();
s32 get_player_by_client_id(int);
void init_6x3A_packet__15TFontSmallLobbyFPv(void *);
void draw_and_send__15TFontSmallLobbyFPv(void *);
void send_6x3A_clear_photon_blast_ready_flag(u16 *arg0);
s32 is_locally_controlled__10TObjPlayerFPv(int);
s32 get_player_by_client_id(int);
s32 TFontSmallLobby__sub_801C01BC(void *);
s32 update_photon_blast_state__10TObjPlayerFv();
s32 clear_photon_blast_state__10TObjPlayerFPv(void *);
s32 TFontSmallLobby__sub_801D6804(void *, void *);
s32 init_pkt_cmd_3B__15TFontSmallLobbyFPv(void *);
s32 validate_6x3B_clear_temporary_photon_blast_state_flags(void *);
void handle_6x3B_clear_temporary_photon_blast_state_flags(s32 arg0);
s32 clear_photon_blast_state__10TObjPlayerFPv(void *);
s32 reset_fields__15TFontSmallLobbyFPv(void *);
s32 init_pkt_cmd_3B__15TFontSmallLobbyFPv(void *);
s32 update_and_send__15TFontSmallLobbyFPv(void *);
void reinit_photon_blast_gauge(u16 *arg0);
s32 get_player_by_client_id(int);
s32 TFontSmallLobby__sub_801C01BC(void *);
s32 set_bit1_at_40__15TFontSmallLobbyFPv(void *);
s32 clear_photon_blast_ready_flag__15TFontSmallLobbyFPv(void *, void *);
void init_6x3A_packet__15TFontSmallLobbyFPv(void *);
s32 validate_6x3A_clear_photon_blast_ready_flag(void *);
void handle_6x3A_clear_photon_blast_ready_flag(s32 arg0);
}

extern "C" {

void set_section_index__15TFontSmallLobbyFPvs(void *arg0, s16 arg1) {
    s16 var_r4;

    var_r4 = arg1;
    if ((var_r4 < 0) || (var_r4 > 0xA)) {
        var_r4 = 0;
    }
    *(s16 *)((s8 *)arg0 + 4) = var_r4;
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

void reinit_photon_blast_gauge(u16 *arg0) {
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

void send_6x3A_clear_photon_blast_ready_flag(u16 *arg0) {
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

void send_6x39_photon_blast_ready(u16 *p) {
    Pkt_801D60B4 pk;
    init_6x39_packet__15TFontSmallLobbyFPv(&pk);
    pk.b = *p;
    update_and_send_60__15TFontSmallLobbyFPv(&pk);
}

}

struct Cmd_801D61A0 { u8 hdr[2]; u16 client; u8 body[8]; };

extern "C" {
s32 get_current_floor();
s32 get_field_3e4__10TObjPlayerFPv(int);
s32 get_player_by_client_id(int);
s32 create_photon_blast_party_effects__10TObjPlayerFi(int);
s32 bswap_fields__15TFontSmallLobbyFPv(void *);
s32 copy_packet_header_6x38__15TFontSmallLobbyFPvPv(void *, void *);
s32 TFontSmallLobby__sub_801D698C(void *);
s32 reset_key_machine_state__10TObjPlayerFv();
s32 validate_6x38_donate_to_photon_blast(void *);
void handle_6x38_donate_to_photon_blast(s32 arg0);
}

extern "C" {

s32 is_ready__15TFontSmallLobbyFPv(u8 *arg0);
void reset_targets__15TFontSmallLobbyFi(s32 arg0);
s32 get_state__15TFontSmallLobbyFPv(void *);
s32 get_field_04__15TFontSmallLobbyFPv(void *);
s32 check_flag_at_40__15TFontSmallLobbyFPv(s32);
s32 set_target_count__15TFontSmallLobbyFPvi(s32, s32);
s32 set_target_index__15TFontSmallLobbyFPvi(s32, s32);

extern const f32 lbl_805DC3D8;

s32 is_ready__15TFontSmallLobbyFPv(u8 *arg0) {
    if ((get_field_04__15TFontSmallLobbyFPv(arg0 + 0x4C) < 3) && (*(f32 *)((s8 *)arg0 + 0x3C) > lbl_805DC3D8) && (get_state__15TFontSmallLobbyFPv(arg0 + 0x4C) < 0)) {
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

extern "C" {

void draw_party_label__15TFontSmallLobbyFiUis(s32 arg0, u32 arg1, s16 arg2);
s32 subtract_photon_blast_charge(s32, f32);
s32 set_target_index__15TFontSmallLobbyFPvi(s32, s32);
s32 TFontSmallLobby__sub_801D671C(s32, s32);
s32 set_flag_40_bit5__15TFontSmallLobbyFPv();
s32 send_state__15TFontSmallLobbyFPv(s32 *);
s32 create_party_effect__11TWindowCtrlFPvPv(s16, s16);
s16 obj_getField1c(u32);

struct Sp801D6230_801d6230 { s16 f0; s16 fA; s16 fC; };

void draw_party_label__15TFontSmallLobbyFiUis(s32 arg0, u32 arg1, s16 arg2) {
    Sp801D6230_801d6230 sp8;

    set_flag_40_bit5__15TFontSmallLobbyFPv();
    subtract_photon_blast_charge(arg0, lbl_805DC3D8);
    set_target_index__15TFontSmallLobbyFPvi(arg0 + 0x4C, 8);
    TFontSmallLobby__sub_801D671C(arg0 + 0x4C, 1);
    create_party_effect__11TWindowCtrlFPvPv(obj_getField1c(arg1), arg2);
    if ((arg1 == 0U) || (((s32 (*)(u32)) obj_isState2_324)(arg1) == 0)) {
        TFontSmallLobby__sub_801D698C((void *) &sp8);
        sp8.fA = obj_getField1c(arg1);
        sp8.fC = arg2;
        send_state__15TFontSmallLobbyFPv((s32 *) &sp8);
    }
}

}
