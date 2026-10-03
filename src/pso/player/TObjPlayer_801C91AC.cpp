#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_lobby_state__10TObjPlayerFPv(u8 *arg0);
void try_use_mag__10TObjPlayerFPv(u8 *arg0);
s32 is_active__8TItemMagFPv();
s32 is_locally_controlled__10TObjPlayerFPv(void *);
M2C_UNK add_status_effect_timer__10TObjPlayerFPvii(void *, M2C_UNK, s32);
M2C_UNK clear_status_bit6__10TObjPlayerFPv();
M2C_UNK TObjPlayer__sub_8001053C(void *);
M2C_UNK reset_lobby_model__10TObjPlayerFPv(void *);
s32 check_input_angle__16TKeyBoardControlFPv(void *);

M2C_UNK obj_clearFlags30(void *, M2C_UNK);

void reset_lobby_state__10TObjPlayerFPv(u8 *arg0) {
    clear_status_bit6__10TObjPlayerFPv();
    TObjPlayer__sub_8001053C(arg0);
    obj_clearFlags30(arg0, 0x20);
    if (((s16) M2C_FIELD(arg0, s16 *, 0x328) == 1) && (is_locally_controlled__10TObjPlayerFPv(arg0) != 0)) {
        reset_lobby_model__10TObjPlayerFPv(arg0 + 0x644);
    }
}

void try_use_mag__10TObjPlayerFPv(u8 *arg0) {
    if ((is_active__8TItemMagFPv() == 0) && (is_locally_controlled__10TObjPlayerFPv(arg0) != 0) && (check_input_angle__16TKeyBoardControlFPv(arg0 + 0x64C) != 0)) {
        add_status_effect_timer__10TObjPlayerFPvii(arg0, 1, M2C_FIELD(arg0, s32 *, 0x3D4));
    }
}

}
