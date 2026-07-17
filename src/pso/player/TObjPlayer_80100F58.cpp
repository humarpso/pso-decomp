#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_shield_particle__10TObjPlayerFPv(void *arg0);
M2C_UNK clear_flags__11TAdRicoRingFPvUi(M2C_UNK *, M2C_UNK);
s32 TObjPlayer__sub_8001BEF8(M2C_UNK *, M2C_UNK);
M2C_UNK notify_fish_if_valid__10TObjPlayerFUi(s32);
M2C_UNK disable_if_single_screen__13TParticleCtrlFv();

extern M2C_UNK lbl_805D53EC;

void draw_shield_particle__10TObjPlayerFPv(void *arg0) {
    if (TObjPlayer__sub_8001BEF8(&lbl_805D53EC, 8) != 0) {
        disable_if_single_screen__13TParticleCtrlFv();
        notify_fish_if_valid__10TObjPlayerFUi(M2C_FIELD(arg0, s32 *, 0x24));
        clear_flags__11TAdRicoRingFPvUi(&lbl_805D53EC, 8);
    }
}

}
