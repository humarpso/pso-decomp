#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Pkt_801B01AC {
    u8 hdr[2];
    u16 client;
    u16 target;
    s16 amount;
};

extern "C" {
u8 TFontSmallLobby__sub_801AFEE0(void);
extern s32 enable_v2_features;
extern s32 lbl_805D5550;
u8 TFontSmallLobby__sub_801AFEE0(void);
s8 TObjPlayer__sub_801AFDB0(u8 *arg0);
s8 TObjPlayer__sub_801AFDBC(s8 arg0);
s32 get_current_floor();
void TObjPlayer__sub_801AFF50(u8 *arg0);
void TObjPlayer__sub_801AFF80(u8 *arg0);
extern s32 lbl_805D49C0;
void TKeyBoardControl__sub_8000F950(void);
void TKeyBoardControl__sub_8000F95C(void);
extern s32 lbl_805D49BC;
void TKeyBoardControl__sub_8000F978(void);
void TKeyBoardControl__sub_8000F984(void);
extern s32 lbl_805D49B8;
void mark_area_change_pending(void);
void TKeyBoardControl__sub_8000F9A4(void);
s32 get_global_state__14TOKeyMachine01Fv(void);
extern M2C_UNK lbl_80515F70[];
extern s32 lbl_805D62B0;
    extern int lbl_805D49A0;
    extern int lbl_805D49A4;
    extern int lbl_805D49A8;
    extern int lbl_805D49B0;
    extern int lbl_805D5678;
    extern int lbl_805D5680;
int TObjPlayer__sub_801AFFB0(void* p);
s32 get_current_floor();
s32 get_field_3e4__10TObjPlayerFPv(s32);
u8 TObjPlayer__sub_801AFF0C(s32 arg0);
s32 obj_testFlags30(s32, s32);
s32 obj_getField1c(u8 *);
u8 *find_entity_by_id(u16);
u8 *get_player_by_client_id(u16);
void TFontSmallLobby__sub_801C02D0(Pkt_801B01AC *);
void TFontSmallLobby__sub_801C030C(Pkt_801B01AC *, s32);
void TFontSmallLobby__sub_801C0350(Pkt_801B01AC *);
s32 TOMineTrap__sub_801D6A44(s32, s32, s32);
s32 validate_6x8F_add_battle_damage_scores(Pkt_801B01AC *);
void handle_6x8F_add_battle_damage_scores(s32 arg0);
}

extern "C" {

void apply_camera_shake__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2);
s32 check_technique_castable__10TObjPlayerFi(s32 arg0);
s32 get_move_mode__10TObjPlayerFPv(void* p);
void handle_6x8E(void);
u8 is_key_machine_ready__10TObjPlayerFv(void);
u8 is_volopt_phase_final__10TObjPlayerFv(void);
s32 TOMineTrap__sub_801D6A44(s32, s32, s32);
s32 is_locally_controlled__10TObjPlayerFPv(s32);
s32 is_boss_area();
s32 check_technique_flag__10TObjPlayerFPv(s32);
s32 get_field_3e0__12TBoss3VoloptFPv();
s32 get_map_id__13TRaderMapCoreFPv(void* p);
s32 has_item_flag_4096__10TObjPlayerFPv(s32);
s32 is_camera_mode_active__10TObjPlayerFv();
s32 is_technique_ready__8TTecCtrlFv();
s32 obj_testFlags30(s32, s32);

s32 get_move_mode__10TObjPlayerFPv(void* p) { return *(s32*)((char*)p + 0x890); }

s8 TObjPlayer__sub_801AFDB0(u8 *arg0) {
    return (s8) M2C_FIELD(arg0, u8 *, 0x88D);
}

s8 TObjPlayer__sub_801AFDBC(s8 arg0) {
    if ((arg0 < 0) || (arg0 >= 0xC)) {
        return 0;
    }
    return arg0;
}

s32 check_technique_castable__10TObjPlayerFi(s32 arg0) {
    s32 temp_r3;

    if ((is_technique_ready__8TTecCtrlFv() != 0) || (is_camera_mode_active__10TObjPlayerFv() != 0) || (is_boss_area() != 0)) {
        check_technique_flag__10TObjPlayerFPv(arg0);
        return 0;
    }
    temp_r3 = get_global_state__14TOKeyMachine01Fv();
    switch (temp_r3) {
    case 0:
    case 15:
    case 18:
        check_technique_flag__10TObjPlayerFPv(arg0);
        return 0;
    default:
        has_item_flag_4096__10TObjPlayerFPv(arg0);
        return 1;
    }
}
u8 is_key_machine_ready__10TObjPlayerFv(void) {
    s32 temp_r3;
    s32 var_r0;

    temp_r3 = get_global_state__14TOKeyMachine01Fv();
    var_r0 = 0;
    if ((temp_r3 == 0) || (temp_r3 == 0x12)) {
        var_r0 = 1;
    }
    return (u8) var_r0;
}
u8 is_volopt_phase_final__10TObjPlayerFv(void) {
    return (u8) (get_field_3e0__12TBoss3VoloptFPv() == 0xF);
}

u8 TFontSmallLobby__sub_801AFEE0(void) {
    return (u8) (get_global_state__14TOKeyMachine01Fv() == 0xF);
}

u8 TObjPlayer__sub_801AFF0C(s32 arg0) {
    s32 temp_r31;
    s32 temp_r3;
    temp_r31 = get_current_floor();
    temp_r3 = get_field_3e4__10TObjPlayerFPv(arg0);
    return (u8) (temp_r3 == temp_r31);
}

void TObjPlayer__sub_801AFF50(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3E4) = get_current_floor();
}

void TObjPlayer__sub_801AFF80(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3E0) = TObjPlayer__sub_801AFFB0((void*)(arg0));
}

int TObjPlayer__sub_801AFFB0(void* p) { return ((int)get_global_state__14TOKeyMachine01Fv()); }

void handle_6x8F_add_battle_damage_scores(s32 arg0) {
    Pkt_801B01AC pkt;
    u8 *player;
    u8 *target;
    u8 *other;
    TFontSmallLobby__sub_801C0350(&pkt);
    TFontSmallLobby__sub_801C030C(&pkt, arg0);
    TFontSmallLobby__sub_801C02D0(&pkt);
    if (validate_6x8F_add_battle_damage_scores(&pkt) == 0) {
        return;
    }
    player = get_player_by_client_id(pkt.client);
    if (player == NULL) {
        return;
    }
    target = find_entity_by_id(pkt.target);
    if (target == NULL) {
        return;
    }
    if ((u16)obj_getField1c(target) != (u16)obj_getField1c(player)) {
        TOMineTrap__sub_801D6A44((s32)(player + 0x78C), (s32)target, pkt.amount);
    }
    if (obj_testFlags30((s32)target, 0x10000000) == 0) {
        return;
    }
    other = get_player_by_client_id((u16)obj_getField1c(target));
    if (other != NULL) {
        TOMineTrap__sub_801D6A44((s32)(other + 0x77C), (s32)player, pkt.amount);
    }
}

void apply_camera_shake__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2) {
    if ((is_technique_ready__8TTecCtrlFv() != 0) && (obj_testFlags30(arg1, 0x10000000) == 0) && (is_locally_controlled__10TObjPlayerFPv(arg0) != 0)) {
        TOMineTrap__sub_801D6A44(arg0 + 0x78C, arg1, arg2);
    }
}
void handle_6x8E(void) {  }

}
