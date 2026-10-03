#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Pkt_801C9838 {
    u8 hdr[2];
    u16 client;
    s16 c;
    s16 e;
    s32 g;
};

extern "C" {
M2C_UNK set_action_state__10TObjPlayerFPvss(void *, int, int);
M2C_UNK run_action_state_phase__10TObjPlayerFisi(void *, int, int);
s16 ret_801D26AC();
s32 get_field_4__10TObjPlayerFPv(void *);
s16 TObjPlayer__sub_801D2824(void *);
void enter_service_hold_action__10TObjPlayerFPv(u8 *arg0);
s32 obj_isState2_324(int);
s32 check_flag__10TObjPlayerFPvi(int, int);
s32 test_action_mask__10TObjPlayerFPvi(int, int);
s32 TFontSmallLobby__sub_801AFEE0();
s32 is_in_tl03_state__10TObjPlayerFPv();
s32 get_player_by_client_id(int);
M2C_UNK set_anim_state__10TObjPlayerFPvi(void *, int);
M2C_UNK set_state__10TObjPlayerFPvs(void *, int);
M2C_UNK set_anim_state__10TObjPlayerFPvs(void *, int);
M2C_UNK run_action_state_phase__10TObjPlayerFisi(void *, int, int);
M2C_UNK swap_stats_bytes__10TObjPlayerFPv(void *);
M2C_UNK copy_font_state__10TObjPlayerFPvPv(void *, void *);
M2C_UNK init_6x52_packet__10TObjPlayerFPv(void *);
s32 validate_6x52_set_animation_state(void *);
void handle_6x52_set_animation_state(s32 arg0);
}

extern "C" {

void enter_service_hold_action__10TObjPlayerFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x33C) = 0x10;
    run_action_state_phase__10TObjPlayerFisi((void *)(arg0), (int) (M2C_FIELD(arg0, s16 *, 0x326)), (int) (6));
    M2C_FIELD(arg0, s16 *, 0xB8) = TObjPlayer__sub_801D2824((void *) (arg0 + 0x5F0));
    M2C_FIELD(arg0, s32 *, 0x60) = get_field_4__10TObjPlayerFPv((void *) (arg0 + 0x5F0));
    set_action_state__10TObjPlayerFPvss((void *) (arg0), (int) (0x10), (int) (ret_801D26AC()));
}
void handle_6x52_set_animation_state(s32 arg0) {
    Pkt_801C9838 pkt;
    s32 temp_r3;
    init_6x52_packet__10TObjPlayerFPv((void *) (&pkt));
    copy_font_state__10TObjPlayerFPvPv((void *) (&pkt), (void *) (arg0));
    swap_stats_bytes__10TObjPlayerFPv((void *) (&pkt));
    if (validate_6x52_set_animation_state((void *) (&pkt)) != 0) {
        temp_r3 = get_player_by_client_id((int) (pkt.client));
        if ((temp_r3 != 0) && (is_in_tl03_state__10TObjPlayerFPv() != 0) && (test_action_mask__10TObjPlayerFPvi((int) (temp_r3), (int) (0x8000)) == 0) && ((TFontSmallLobby__sub_801AFEE0() == 0) || (obj_isState2_324((int) (temp_r3)) == 0) || (check_flag__10TObjPlayerFPvi((int) (temp_r3), (int) (0x04000000)) == 0))) {
            set_anim_state__10TObjPlayerFPvs((void *) (temp_r3 + 0x5F0), (int) (pkt.c));
            set_anim_state__10TObjPlayerFPvi((void *) (temp_r3 + 0x5F0), (int) (pkt.g));
            set_state__10TObjPlayerFPvs((void *) (temp_r3 + 0x5F0), (int) (pkt.e));
            run_action_state_phase__10TObjPlayerFisi((void *) (temp_r3), (int) (0x10), (int) (0));
        }
    }
}

}
