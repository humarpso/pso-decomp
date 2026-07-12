#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void setup_particle_once__10TObjPlayerFPv(void *arg0);
M2C_UNK TObjPlayer__sub_8001BED8(M2C_UNK *, M2C_UNK);
s32 TObjPlayer__sub_8001BEF8(M2C_UNK *, M2C_UNK);
M2C_UNK play_particle_effect_once__10TObjPlayerFv();
M2C_UNK notify_fish_if_valid__10TObjPlayerFUi(s32);
M2C_UNK setup_particle_tev(M2C_UNK);

extern M2C_UNK lbl_805D53EC;

void setup_particle_once__10TObjPlayerFPv(void *arg0) {
    play_particle_effect_once__10TObjPlayerFv();
    if (TObjPlayer__sub_8001BEF8(&lbl_805D53EC, 8) == 0) {
        setup_particle_tev(0);
        notify_fish_if_valid__10TObjPlayerFUi(M2C_FIELD(arg0, s32 *, 0x24));
        TObjPlayer__sub_8001BED8(&lbl_805D53EC, 8);
    }
}

}
