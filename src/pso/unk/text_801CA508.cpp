#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
struct Cmd_801CA724 {
    u8 cmd;
    u8 size;
    u16 client;
    u8 data[0xC];
};

struct Cmd_801CA7BC {
    u8 cmd;
    u8 size;
    u16 client;
    s16 val;
    u16 pad;
};

struct Cmd2_801CA7BC {
    u8 cmd;
    u8 size;
    u16 client;
    u8 data[4];
};

extern "C" {
void obj_setFlags30(void *, u32);
extern const f32 lbl_805DC388;
void TObjPlayer__sub_801CA8F0(u8 *arg0);
s32 obj_testFlags30(void *, s32);
M2C_UNK run_action_state_phase__10TObjPlayerFisi(void *, int, int);
void request_revival_if_not_dead__10TObjPlayerFPv(u8 *arg0);
s32 get_main_phase();
s32 obj_getField1c(void *);
s32 check_value_equals__13TQuestColCtrlFPvi(int, void *);
s32 is_camera_mode_active__10TObjPlayerFv();
s32 is_technique_ready__8TTecCtrlFv();
s32 create_return_city_window__10TObjPlayerFPv(void *);
s32 check_flag_100__10TObjPlayerFPv(void *);
s32 check_camera_mode__10TObjPlayerFv();
s32 all_parents_unqueued_for_destruction__7TObjectFv(int);
s32 TObjPlayer__sub_8024ABDC(void *);
s32 check_action_usable__10TObjPlayerFPvi(void *, int);
extern s32 lbl_805D39B8;
void TObjPlayer__sub_801CA988(u8 *arg0);
M2C_UNK get_field_2d4__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_8001053C(void *);
s32 is_locally_controlled__10TObjPlayerFPv(void *);
s32 obj_getField1c(void *);
s32 TObjPlayer__sub_8001BEF8(void *, int);
s32 check_value_equals__13TQuestColCtrlFPvi(int, void *);
u8 *find_entity_by_id(s32);
s32 get_trap_type__10TOMineTrapFPv(int);
s32 is_camera_mode_active__10TObjPlayerFv();
s32 is_single_screen__10TObjPlayerFv();
M2C_UNK update_trap_sub__10TOMineTrapFPv(void *, int, int);
M2C_UNK fn_801B0480(int, void *, int);
M2C_UNK draw_player_status(void *, void *, void *);
s32 is_technique_ready__8TTecCtrlFv();
M2C_UNK set_action_state__10TObjPlayerFPvss(void *, int, void *);
s32 get_model_field_m25__10TObjPlayerFPv(void *);
M2C_UNK send_neg50__6TLobbyFPvPv(void *, int);
M2C_UNK restart_death_pose__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_801CA3E4(void *);
M2C_UNK run_action_state_phase__10TObjPlayerFisi(void *, int, int);
s16 ret_801D26AC();
M2C_UNK clear_photon_blast_state__10TObjPlayerFPv(void *);
u8 *get_card_window__17TWindowSubComCardFUi(u16);
extern u8 lbl_80447138[0x20];
extern s32 TOMineTrap__data_805D3080;
extern u8 *lbl_805D3530;
extern M2C_UNK lbl_805DC380;
extern M2C_UNK lbl_805DC384;
M2C_UNK get_field_2d4__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_8001053C(void *);
s32 is_locally_controlled__10TObjPlayerFPv(void *);
s32 obj_getField1c(void *);
s32 TObjPlayer__sub_8001BEF8(void *, int);
s32 check_value_equals__13TQuestColCtrlFPvi(int, void *);
u8 *find_entity_by_id(s32);
s32 get_trap_type__10TOMineTrapFPv(int);
s32 is_camera_mode_active__10TObjPlayerFv();
s32 is_single_screen__10TObjPlayerFv();
M2C_UNK update_trap_sub__10TOMineTrapFPv(void *, int, int);
M2C_UNK fn_801B0480(int, void *, int);
M2C_UNK draw_player_status(void *, void *, void *);
s32 is_technique_ready__8TTecCtrlFv();
M2C_UNK set_action_state__10TObjPlayerFPvss(void *, int, void *);
s32 get_model_field_m25__10TObjPlayerFPv(void *);
M2C_UNK send_neg50__6TLobbyFPvPv(void *, int);
M2C_UNK restart_death_pose__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_801CA3E4(void *);
M2C_UNK run_action_state_phase__10TObjPlayerFisi(void *, int, int);
s16 ret_801D26AC();
M2C_UNK clear_photon_blast_state__10TObjPlayerFPv(void *);
u8 *get_card_window__17TWindowSubComCardFUi(u16);
extern u8 lbl_80447138[0x20];
extern s32 TOMineTrap__data_805D3080;
extern u8 *lbl_805D3530;
extern M2C_UNK lbl_805DC380;
extern M2C_UNK lbl_805DC384;
void enter_death_state__10TObjPlayerFPv(u8 *arg0);
s32 is_in_tl03_state__10TObjPlayerFPv(void *);
u8 *get_player_by_client_id(s32);
M2C_UNK TObjPlayer__sub_801BEEE0(void *, void *);
M2C_UNK TObjPlayer__sub_801CA3E4(void *);
M2C_UNK run_action_state_phase__10TObjPlayerFisi(void *, int, int);
M2C_UNK init_field_4__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_801D192C(void *);
M2C_UNK TObjPlayer__sub_801D28A0(void *, void *);
s32 validate_6x4D_player_died(void *);
void handle_6x4D_player_died(void *arg0);
M2C_UNK get_field_2d4__10TObjPlayerFPv(void *);
s32 is_locally_controlled__10TObjPlayerFPv(void *);
s32 obj_isState2_324(void *);
s32 obj_getField1c(void *);
M2C_UNK set_flags__10TObjPlayerFPvUi(void *, u32);
M2C_UNK clear_flags__11TAdRicoRingFPvUi(void *, u32);
s32 TObjPlayer__sub_8001BEF8(void *, int);
s32 is_cursor_clear__11TMainCursorFPv(void *);
u32 find_revival_item__10TObjPlayerFv(void *);
s32 is_flag_400_set__10TObjPlayerFPv(void *);
M2C_UNK enable_action_input__10TObjPlayerFPv(void *);
M2C_UNK drop_items_on_death__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_801BEEE0(void *, void *);
M2C_UNK TObjPlayer__sub_801C1B60(void *);
M2C_UNK TObjPlayer__sub_801D1888(void *);
M2C_UNK TObjPlayer__sub_801D192C(void *);
M2C_UNK init_and_send__10TObjPlayerFPv(void *);
M2C_UNK update_and_send3__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_8024ABDC(void *);
void prepare_death__10TObjPlayerFPv(u8 *arg0);
}

extern "C" {

void enter_death_state__10TObjPlayerFPv(u8 *arg0) {
    u32 temp_r31;
    u32 other;
    s32 killer;
    u8 *culprit;
    u8 *temp_r3;
    u8 *temp_r3_2;
    u8 *temp_r3_3;
    M2C_FIELD(arg0, s32 *, 0x33C) = 0xF;
    run_action_state_phase__10TObjPlayerFisi((void *)(arg0), (int) (M2C_FIELD(arg0, s16 *, 0x326)), (int) (6));
    TObjPlayer__sub_801CA3E4((void *) (arg0));
    TObjPlayer__sub_8001053C((void *) (arg0));
    M2C_FIELD(arg0, s16 *, 0x328) = 0;
    if (TObjPlayer__sub_8001BEF8((void *) (arg0 + 0x858), (int) (1)) != 0) {
        set_action_state__10TObjPlayerFPvss((void *) (arg0), (int) (0xF), (void *) (ret_801D26AC()));
        restart_death_pose__10TObjPlayerFPv((void *) (arg0));
    } else {
        set_action_state__10TObjPlayerFPvss((void *) (arg0), (int) (0xF), (void *) (get_model_field_m25__10TObjPlayerFPv((void *) (arg0))));
    }
    clear_photon_blast_state__10TObjPlayerFPv((void *) (arg0 + 0x4AC));
    if (is_technique_ready__8TTecCtrlFv() != 0) {
        temp_r3 = find_entity_by_id(get_field_2d4__10TObjPlayerFPv(arg0));
        if (temp_r3 != NULL) {
            if (check_value_equals__13TQuestColCtrlFPvi((int)temp_r3, lbl_805D3530) != 0) {
                temp_r31 = (u16)obj_getField1c(arg0);
                other = (u16)obj_getField1c(temp_r3);
                if (other != temp_r31) {
                    fn_801B0480((int) (temp_r3), (void *) (arg0), (int) (1));
                }
            }
            if (check_value_equals__13TQuestColCtrlFPvi((int) (temp_r3), (void *) (TOMineTrap__data_805D3080)) == 0) {
                update_trap_sub__10TOMineTrapFPv((void *) (arg0), (int) (temp_r3), (int) (1));
            } else if ((u16)(killer = get_trap_type__10TOMineTrapFPv((int)temp_r3)) == 0xffffU) {
                update_trap_sub__10TOMineTrapFPv((void *) (arg0), (int) (temp_r3), (int) (1));
            } else {
                culprit = find_entity_by_id(killer);
                update_trap_sub__10TOMineTrapFPv(arg0, (s32)culprit, 1);
            }
            draw_player_status((void *) (arg0), (void *) (temp_r3), (void *) (&lbl_805DC380));
        }
        draw_player_status((void *) (arg0), (void *) (arg0), (void *) (&lbl_805DC384));
        if (is_locally_controlled__10TObjPlayerFPv((void *) (arg0)) != 0) {
            send_neg50__6TLobbyFPvPv((void *) (&lbl_80447138), (int) (0x96));
        }
    }
    if ((is_locally_controlled__10TObjPlayerFPv((void *) (arg0)) != 0) && (is_camera_mode_active__10TObjPlayerFv() == 0) && (is_technique_ready__8TTecCtrlFv() == 0)) {
        if (is_single_screen__10TObjPlayerFv() != 0) {
            temp_r3_2 = get_card_window__17TWindowSubComCardFUi(obj_getField1c((void *) (arg0)));
            M2C_FIELD(temp_r3_2, s32 *, 0x244) = (s32) (M2C_FIELD(temp_r3_2, s32 *, 0x244) + 1);
            return;
        }
        temp_r3_3 = get_card_window__17TWindowSubComCardFUi(0xFFFFU);
        M2C_FIELD(temp_r3_3, s32 *, 0x244) = (s32) (M2C_FIELD(temp_r3_3, s32 *, 0x244) + 1);
    }
}

void handle_6x4D_player_died(void *arg0) {
    Cmd_801CA724 cmd;
    u8 *p;
    TObjPlayer__sub_801D192C(&cmd);
    TObjPlayer__sub_801D28A0(&cmd, arg0);
    init_field_4__10TObjPlayerFPv(&cmd);
    if (validate_6x4D_player_died(&cmd) != 0) {
        p = get_player_by_client_id(cmd.client);
        if (p != NULL) {
            TObjPlayer__sub_801BEEE0(p + 0x858, cmd.data);
            TObjPlayer__sub_801CA3E4(p);
            if (is_in_tl03_state__10TObjPlayerFPv(p) != 0) {
                run_action_state_phase__10TObjPlayerFisi(p, 0xF, 0);
            }
        }
    }
}

void prepare_death__10TObjPlayerFPv(u8 *arg0) {
    Cmd_801CA7BC c1;
    Cmd2_801CA7BC c2;
    if (is_locally_controlled__10TObjPlayerFPv(arg0) != 0) {
        TObjPlayer__sub_8024ABDC((void *)(u16)obj_getField1c(arg0));
        *(s32 *)(arg0 + 0x36C) = 0;
        *(s32 *)(arg0 + 0x548) = 0;
        clear_flags__11TAdRicoRingFPvUi(arg0 + 0x858, 4);
        if (find_revival_item__10TObjPlayerFv(arg0) == 0) {
            set_flags__10TObjPlayerFPvUi(arg0 + 0x858, 2);
        }
    }
    if (TObjPlayer__sub_8001BEF8(arg0 + 0x858, 1) == 0) {
        drop_items_on_death__10TObjPlayerFPv(arg0);
    }
    if (is_flag_400_set__10TObjPlayerFPv(arg0) != 0) {
        enable_action_input__10TObjPlayerFPv(arg0);
    }
    if (*(void **)(arg0 + 0x424) != NULL && is_cursor_clear__11TMainCursorFPv(*(void **)(arg0 + 0x424)) == 0) {
        TObjPlayer__sub_801C1B60(*(void **)(arg0 + 0x424));
    }
    if (arg0 == NULL || obj_isState2_324(arg0) == 0) {
        TObjPlayer__sub_801D1888(&c1);
        c1.client = obj_getField1c(arg0);
        c1.val = get_field_2d4__10TObjPlayerFPv(arg0);
        update_and_send3__10TObjPlayerFPv(&c1);
        TObjPlayer__sub_801D192C(&c2);
        c2.client = obj_getField1c(arg0);
        TObjPlayer__sub_801BEEE0(c2.data, arg0 + 0x858);
        init_and_send__10TObjPlayerFPv(&c2);
    }
}

void TObjPlayer__sub_801CA8F0(u8 *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), f32 *, 0x1C) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), f32 *, 0x20) = (f32) (lbl_805DC388 + M2C_FIELD(arg0, f32 *, 0x3C));
    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), f32 *, 0x24) = (f32) M2C_FIELD(arg0, f32 *, 0x40);
    obj_setFlags30(arg0, 0x800U);
}
void request_revival_if_not_dead__10TObjPlayerFPv(u8 *arg0) {
    if (obj_testFlags30(arg0, 0x800) == 0) {
        run_action_state_phase__10TObjPlayerFisi((void *) (arg0), (int) (0x12), (int) (5));
    }
}
void TObjPlayer__sub_801CA988(u8 *arg0) {
  unsigned short new_var;
  u32 temp_r3;
  new_var = (s32) obj_getField1c((void *) arg0);
  TObjPlayer__sub_8024ABDC((void *) new_var);
  temp_r3 = *((u32 *) (((s8 *) arg0) + 0x36C));
  new_var = 0U;
  if ((temp_r3 != new_var) && ((all_parents_unqueued_for_destruction__7TObjectFv((int) temp_r3) == 0) || (check_value_equals__13TQuestColCtrlFPvi((int) (*((u32 *) (((s8 *) arg0) + 0x36C))), (void *) lbl_805D39B8) == 0)))
  {
    *((u32 *) (((s8 *) arg0) + 0x36C)) = 0U;
  }
  if (((((check_action_usable__10TObjPlayerFPvi((void *) (arg0 + 0x550), (int) 4) != 0) && (is_camera_mode_active__10TObjPlayerFv() == 0)) && (is_technique_ready__8TTecCtrlFv() == 0)) && ((check_camera_mode__10TObjPlayerFv() == 0) || ((check_camera_mode__10TObjPlayerFv() != 0) && (get_main_phase() == 0xF)))) && (check_flag_100__10TObjPlayerFPv((void *) arg0) == 0))
  {
    create_return_city_window__10TObjPlayerFPv((void *) arg0);
  }
}

}
