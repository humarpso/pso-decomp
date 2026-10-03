#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK add_flags_2e4__10TObjPlayerFPvUi(void *, int);
s32 get_move_mode__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801B5450(u8 *arg0);
s8 TObjPlayer__sub_801AFDB0(void *);
s32 forward_801C210C__10TObjPlayerFPv(int, int);
void select_class_action_provider__10TObjPlayerFPv(u8 *arg0);
}

extern "C" {

void apply_input_mode__10TObjPlayerFi(s32 arg0);
s32 get_clamped_index__10TObjPlayerFPv(void *arg0);
void play_effect_default__10TObjPlayerFii(s32 arg0, s32 arg1);
void set_move_mode__10TObjPlayerFi(s32 arg0);
M2C_UNK send_6x2C_impose_hold(s32, s32, s32, M2C_UNK, f32);
s32 get_position_ptr__10TObjPlayerFPv();
M2C_UNK set_input_mode__10TObjPlayerFPvi(s32, M2C_UNK);
M2C_UNK set_move_mode__10TObjPlayerFPvi(s32, M2C_UNK);

extern f32 TObjPlayer__data_805DC278;

void play_effect_default__10TObjPlayerFii(s32 arg0, s32 arg1) {
    send_6x2C_impose_hold(arg0, get_position_ptr__10TObjPlayerFPv(), arg1, 0, TObjPlayer__data_805DC278);
}

void TObjPlayer__sub_801B5450(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x2E4) = 0;
    if (get_move_mode__10TObjPlayerFPv((void *)((void *) (arg0))) & 0x10) {
        add_flags_2e4__10TObjPlayerFPvUi((void *) (arg0), (int) (4));
    } else {
        add_flags_2e4__10TObjPlayerFPvUi((void *) (arg0), (int) (1));
    }
    if (get_move_mode__10TObjPlayerFPv((void *)((void *) (arg0))) & 0x40) {
        add_flags_2e4__10TObjPlayerFPvUi((void *) (arg0), (int) (0x20));
    }
}

s32 get_clamped_index__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0x3D8);
    if ((temp_r3 < 0) || (temp_r3 >= 3)) {
        return 0;
    }
    return temp_r3;
}

void set_move_mode__10TObjPlayerFi(s32 arg0) {
    s32 temp_r3;

    temp_r3 = get_move_mode__10TObjPlayerFPv((void *)(arg0));
    if (temp_r3 & 0x10) {
        set_move_mode__10TObjPlayerFPvi(arg0, 2);
        return;
    }
    if (temp_r3 & 8) {
        set_move_mode__10TObjPlayerFPvi(arg0, 1);
        return;
    }
    set_move_mode__10TObjPlayerFPvi(arg0, 0);
}

void apply_input_mode__10TObjPlayerFi(s32 arg0) {
    s32 temp_r3;

    temp_r3 = get_move_mode__10TObjPlayerFPv((void *)(arg0));
    if (temp_r3 & 0x20) {
        set_input_mode__10TObjPlayerFPvi(arg0, 0);
        return;
    }
    if (temp_r3 & 0x40) {
        set_input_mode__10TObjPlayerFPvi(arg0, 1);
        return;
    }
    set_input_mode__10TObjPlayerFPvi(arg0, 2);
}
void select_class_action_provider__10TObjPlayerFPv(u8 *arg0) {
  s8 temp_r3;
  temp_r3 = TObjPlayer__sub_801AFDB0((void *) arg0);
  {
    switch (temp_r3)
    {
      case 0:
      case 2:
      case 3:
      case 4:
      case 7:
        forward_801C210C__10TObjPlayerFPv((int) (*((s32 *) (((s8 *) arg0) + 0x380))), (int) 0);
        return;
      case 1:
      case 5:
      case 8:
        forward_801C210C__10TObjPlayerFPv((int) (*((s32 *) (((s8 *) arg0) + 0x380))), (int) 1);
        return;
      case 6:
        forward_801C210C__10TObjPlayerFPv((int) (*((s32 *) (((s8 *) arg0) + 0x380))), (int) 2);
        return;
      case 9:
        forward_801C210C__10TObjPlayerFPv((int) (*((s32 *) (((s8 *) arg0) + 0x380))), (int) 4);
        return;
      case 10:
        forward_801C210C__10TObjPlayerFPv((int) (*((s32 *) (((s8 *) arg0) + 0x380))), (int) 3);
        return;
      case 11:
        forward_801C210C__10TObjPlayerFPv((int) (*((s32 *) (((s8 *) arg0) + 0x380))), (int) 5);
        break;
    }
  }
}

}
