#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void disable_if_single_screen__13TParticleCtrlFv(void);
M2C_UNK set_ginja_post_texgen_count(M2C_UNK);
M2C_UNK set_ginja_post_tev_stage_count(M2C_UNK);
s32 is_split_screen();

extern s32 some_id_805c6f74;

void disable_if_single_screen__13TParticleCtrlFv(void) {
    if (is_split_screen() == 0) {
        set_ginja_post_tev_stage_count(0);
        set_ginja_post_texgen_count(0);
        some_id_805c6f74 &= 0xFFF7FFFF;
    }
}

}
