#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void send_6x61_activate_mag_effect(void *, s32);
s32 rand(void);
extern const f32 lbl_805DAC8C;
void TObjPlayer__sub_8011E618(u8 *arg0);
s8 TObjPlayer__sub_80102C30(void *);
M2C_UNK set_flag_8__10TObjPlayerFPv(int);
void TObjPlayer__sub_8011E6A4(u8 *arg0);
}

extern "C" {

void TObjPlayer__sub_8011E618(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1C0) = (s32) M2C_FIELD(arg0, s32 *, 0x1BC);
    send_6x61_activate_mag_effect(arg0, (s32) ((f32) M2C_FIELD(arg0, s32 *, 0x1C4) * (lbl_805DAC8C * (f32) rand())));
}
void TObjPlayer__sub_8011E6A4(u8 *arg0) {
    u8 *var_r31;
    u8 *var_r3;
    if (arg0 != NULL) {
        var_r31 = (u8 *)(arg0);
        if (TObjPlayer__sub_80102C30(arg0) != 0) {
            var_r3 = (u8 *)(var_r31);
            set_flag_8__10TObjPlayerFPv((int) (var_r3));
        }
    }
}

}
