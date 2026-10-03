#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 handle_6x4F_revived__10TObjPlayerFi(s32 arg0);
void update_lobby_display__10TObjPlayerFUi(u32 arg0);
void update_timer_state__10TObjPlayerFPv(void *arg0);
void update_timer_action__10TObjPlayerFPv(u8 *arg0);
M2C_UNK TFontSmallLobby__sub_801C0228();
M2C_UNK init__14TObjEnePanarmsFPvPv(void *, s32);
M2C_UNK refill_traps__10TObjPlayerFPv(u32);
s32 get_idle_animation__10TObjPlayerFPv();
M2C_UNK update_position_from_target__10TObjPlayerFPv(void *);
M2C_UNK run_action_state_phase__10TObjPlayerFisi(void *, M2C_UNK, M2C_UNK);
M2C_UNK set_revived_state__10TObjPlayerFPv(M2C_UNK *);
M2C_UNK broadcast_lobby_display__10TObjPlayerFPv(M2C_UNK *);
M2C_UNK set_action_flag_40__10TObjPlayerFPv(void *);
M2C_UNK clear_status_bit6__10TObjPlayerFPv();
s32 test_flags_any(s32, M2C_UNK);
M2C_UNK set_type__10TObjPlayerFPvi(void *, s32);
M2C_UNK TObjPlayer__sub_801B4430(u32);
s32 get_getup_protection_ticks__10TObjPlayerFPv(void *);
s32 is_alive_and_ready__10TObjPlayerFi(u32);
M2C_UNK send_code_49_1__10TObjPlayerFi(u32);
M2C_UNK update_if_ready__15TFontSmallLobbyFPv(s32);

s32 handle_6x4F_revived__10TObjPlayerFi(s32 arg0) {
    TFontSmallLobby__sub_801C0228();
    return arg0;
}

s32 obj_isState2_324(u32);
s16 obj_getField1c(u32);

struct Local801C9D3C {
    s16 field0;
    s16 fieldA;
};

void update_lobby_display__10TObjPlayerFUi(u32 arg0) {
    struct Local801C9D3C sp8;

    if (test_flags_any(arg0 + 0x858, 4) != 0) {
        send_code_49_1__10TObjPlayerFi(arg0);
        if (is_alive_and_ready__10TObjPlayerFi(arg0) != 0) {
            refill_traps__10TObjPlayerFPv(arg0);
        }
    } else {
        TObjPlayer__sub_801B4430(arg0);
    }
    update_if_ready__15TFontSmallLobbyFPv(arg0 + 0x4AC);
    if ((arg0 == 0U) || (obj_isState2_324(arg0) == 0)) {
        set_revived_state__10TObjPlayerFPv((M2C_UNK *)&sp8);
        sp8.fieldA = obj_getField1c(arg0);
        broadcast_lobby_display__10TObjPlayerFPv((M2C_UNK *)&sp8);
    }
}

extern const f32 TObjPlayer__data_805DC360;
extern const f32 TObjPlayer__data_805DC36C;
extern const f32 TObjPlayer__data_805DC378;

void update_timer_state__10TObjPlayerFPv(void *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x328);
    switch (temp_r0) {
    case 0:
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x2B4) - TObjPlayer__data_805DC360;
        M2C_FIELD(arg0, f32 *, 0x2B4) = temp_f1;
        if (temp_f1 < TObjPlayer__data_805DC36C) {
            M2C_FIELD(arg0, s16 *, 0x328) = 1;
            init__14TObjEnePanarmsFPvPv(arg0, get_idle_animation__10TObjPlayerFPv());
            set_action_flag_40__10TObjPlayerFPv(arg0);
            M2C_FIELD(arg0, f32 *, 0x2B4) = (f32) TObjPlayer__data_805DC378;
        }
        break;
    case 1:
        temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x2B4) - TObjPlayer__data_805DC360;
        M2C_FIELD(arg0, f32 *, 0x2B4) = temp_f1_2;
        if (temp_f1_2 < TObjPlayer__data_805DC36C) {
            clear_status_bit6__10TObjPlayerFPv();
            run_action_state_phase__10TObjPlayerFisi(arg0, 1, 0);
        }
        break;
    }
}

extern const f32 TObjPlayer__data_805DC360;
extern const f32 TObjPlayer__data_805DC36C;
extern const f32 TObjPlayer__data_805DC378;

void update_timer_action__10TObjPlayerFPv(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x328);
    switch (temp_r0) {
    case 0:
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x2B4) - TObjPlayer__data_805DC360;
        M2C_FIELD(arg0, f32 *, 0x2B4) = temp_f1;
        if (temp_f1 < TObjPlayer__data_805DC36C) {
            M2C_FIELD(arg0, s16 *, 0x328) = 1;
            init__14TObjEnePanarmsFPvPv(arg0, get_idle_animation__10TObjPlayerFPv());
            set_action_flag_40__10TObjPlayerFPv(arg0);
            M2C_FIELD(arg0, f32 *, 0x2B4) = (f32) TObjPlayer__data_805DC378;
        }
        break;
    case 1:
        temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x2B4) - TObjPlayer__data_805DC360;
        M2C_FIELD(arg0, f32 *, 0x2B4) = temp_f1_2;
        if (temp_f1_2 < TObjPlayer__data_805DC36C) {
            clear_status_bit6__10TObjPlayerFPv();
            set_type__10TObjPlayerFPvi(arg0 + 0x644, get_getup_protection_ticks__10TObjPlayerFPv(arg0));
            update_position_from_target__10TObjPlayerFPv(arg0);
        }
        break;
    }
}

}
