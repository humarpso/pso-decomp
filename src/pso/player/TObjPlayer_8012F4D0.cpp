#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_8012F4D0(u8 *arg0);
s32 TObjPlayer__sub_8011F63C();
M2C_UNK create_ex__9TTecBartaFPvPvPvPv(int, void *, int, int);
M2C_UNK draw_icon__10TObjPlayerFPvii(void *, int, void *);
s32 is_mode_two_and_ready__10TObjPlayerFPv(void *);
M2C_UNK spawn_cane_effects__10TObjPlayerFiUiii(void *, void *, int, int);
M2C_UNK update_active_game_effect__10TObjPlayerFPv(void *);

extern s32 tl_05;

void TObjPlayer__sub_8012F4D0(u8 *arg0) {
    M2C_UNK sp8;
    u8 *temp_r3;

    if (TObjPlayer__sub_8011F63C() == 0) {
        spawn_cane_effects__10TObjPlayerFiUiii((void *) (tl_05), (void *) (arg0), (int) (3), (int) (2));
    }
    draw_icon__10TObjPlayerFPvii((void *) (arg0), (int) (0), (void *) (&sp8));
    if (is_mode_two_and_ready__10TObjPlayerFPv((void *) (arg0)) != 0) {
        temp_r3 = (unsigned char *) (M2C_FIELD(arg0, void **, 0xF0));
        create_ex__9TTecBartaFPvPvPvPv((int) (temp_r3), (void *) (temp_r3 + 0x38), (int) (M2C_FIELD(temp_r3, s32 *, 0x60)), (int) (3));
        return;
    }
    update_active_game_effect__10TObjPlayerFPv((void *) (arg0));
}

}
