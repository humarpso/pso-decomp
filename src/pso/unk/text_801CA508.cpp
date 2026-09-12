#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void obj_setFlags30(void *, u32);
extern const f32 lbl_805DC388;
void TObjPlayer__sub_801CA8F0(u8 *arg0);
s32 obj_testFlags30(void *, s32);
M2C_UNK TObjPlayer__sub_801D0BC0(void *, int, int);
void TObjPlayer__sub_801CA940(u8 *arg0);
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
s32 TObjPlayer__sub_80019248(void *);
s32 obj_getField1c(void *);
s32 TObjPlayer__sub_8001BEF8(void *, int);
s32 check_value_equals__13TQuestColCtrlFPvi(int, void *);
u8 *TPhotonMylla__sub_80154CB4(s32);
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
M2C_UNK TObjPlayer__sub_801CA35C(void *);
M2C_UNK TObjPlayer__sub_801CA3E4(void *);
M2C_UNK TObjPlayer__sub_801D0BC0(void *, int, int);
s16 ret_801D26AC();
M2C_UNK clear_photon_blast_state__10TObjPlayerFPv(void *);
u8 *get_card_window__17TWindowSubComCardFUi(u16);
extern u8 lbl_80447138[0x20];
extern s32 TOMineTrap__data_805D3080;
extern u8 *lbl_805D3530;
extern M2C_UNK lbl_805DC380;
extern M2C_UNK lbl_805DC384;
void TOMineTrap__sub_801CA508(u8 *arg0);
}

extern "C" {

void TOMineTrap__sub_801CA508(u8 *arg0) {
    u32 temp_r31;
    s32 killer;
    u8 *culprit;
    u8 *temp_r3;
    u8 *temp_r3_2;
    u8 *temp_r3_3;
    M2C_FIELD(arg0, s32 *, 0x33C) = 0xF;
    TObjPlayer__sub_801D0BC0((void *)(arg0), (int) (M2C_FIELD(arg0, s16 *, 0x326)), (int) (6));
    TObjPlayer__sub_801CA3E4((void *) (arg0));
    TObjPlayer__sub_8001053C((void *) (arg0));
    M2C_FIELD(arg0, s16 *, 0x328) = 0;
    if (TObjPlayer__sub_8001BEF8((void *) (arg0 + 0x858), (int) (1)) != 0) {
        set_action_state__10TObjPlayerFPvss((void *) (arg0), (int) (0xF), (void *) (ret_801D26AC()));
        TObjPlayer__sub_801CA35C((void *) (arg0));
    } else {
        set_action_state__10TObjPlayerFPvss((void *) (arg0), (int) (0xF), (void *) (get_model_field_m25__10TObjPlayerFPv((void *) (arg0))));
    }
    clear_photon_blast_state__10TObjPlayerFPv((void *) (arg0 + 0x4AC));
    if (is_technique_ready__8TTecCtrlFv() != 0) {
        temp_r3 = TPhotonMylla__sub_80154CB4(get_field_2d4__10TObjPlayerFPv(arg0));
        if (temp_r3 != NULL) {
            if (check_value_equals__13TQuestColCtrlFPvi((int)(temp_r3), (void *)((s32)lbl_805D3530)) != 0) {
                temp_r31 = (u16)obj_getField1c(arg0);
                if (temp_r31 != (u16)obj_getField1c(temp_r3)) {
                    fn_801B0480((int) (temp_r3), (void *) (arg0), (int) (1));
                }
            }
            if (check_value_equals__13TQuestColCtrlFPvi((int)((void *) (temp_r3)), (void *)((int) (TOMineTrap__data_805D3080))) == 0) {
                update_trap_sub__10TOMineTrapFPv((void *) (arg0), (int) (temp_r3), (int) (1));
            } else if ((u16)(killer = get_trap_type__10TOMineTrapFPv((int)temp_r3)) == 0xffffU) {
                update_trap_sub__10TOMineTrapFPv((void *) (arg0), (int) (temp_r3), (int) (1));
            } else {
                culprit = TPhotonMylla__sub_80154CB4(killer);
                update_trap_sub__10TOMineTrapFPv(arg0, (s32)culprit, 1);
            }
            draw_player_status((void *) (arg0), (void *) (temp_r3), (void *) (&lbl_805DC380));
        }
        draw_player_status((void *) (arg0), (void *) (arg0), (void *) (&lbl_805DC384));
        if (TObjPlayer__sub_80019248((void *) (arg0)) != 0) {
            send_neg50__6TLobbyFPvPv((void *) (&lbl_80447138), (int) (0x96));
        }
    }
    if ((TObjPlayer__sub_80019248((void *) (arg0)) != 0) && (is_camera_mode_active__10TObjPlayerFv() == 0) && (is_technique_ready__8TTecCtrlFv() == 0)) {
        if (is_single_screen__10TObjPlayerFv() != 0) {
            temp_r3_2 = get_card_window__17TWindowSubComCardFUi(obj_getField1c((void *) (arg0)));
            M2C_FIELD(temp_r3_2, s32 *, 0x244) = (s32) (M2C_FIELD(temp_r3_2, s32 *, 0x244) + 1);
            return;
        }
        temp_r3_3 = get_card_window__17TWindowSubComCardFUi(0xFFFFU);
        M2C_FIELD(temp_r3_3, s32 *, 0x244) = (s32) (M2C_FIELD(temp_r3_3, s32 *, 0x244) + 1);
    }
}

void TObjPlayer__sub_801CA8F0(u8 *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), f32 *, 0x1C) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), f32 *, 0x20) = (f32) (lbl_805DC388 + M2C_FIELD(arg0, f32 *, 0x3C));
    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), f32 *, 0x24) = (f32) M2C_FIELD(arg0, f32 *, 0x40);
    obj_setFlags30(arg0, 0x800U);
}
void TObjPlayer__sub_801CA940(u8 *arg0) {
    if (obj_testFlags30(arg0, 0x800) == 0) {
        TObjPlayer__sub_801D0BC0((void *) (arg0), (int) (0x12), (int) (5));
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
