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
}

extern "C" {

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
