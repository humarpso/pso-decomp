#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_indirect_tev__6TSceneFii(M2C_UNK ignored, s32 arg1);
void draw_field_1c__6TSceneFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3);
M2C_UNK GXSetNumIndStages(M2C_UNK);
M2C_UNK GXSetTevDirect(M2C_UNK);
M2C_UNK play_particle_at_active_slot__10TObjPlayerFiiiiii(u8, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TObjPlayer__sub_803DC83C(M2C_UNK);

void set_indirect_tev__6TSceneFii(M2C_UNK ignored, s32 arg1) {
    if (arg1 != 0) {
        GXSetTevDirect(1);
    } else {
        GXSetTevDirect(0);
    }
    GXSetNumIndStages(0);
    TObjPlayer__sub_803DC83C(0);
}

void draw_field_1c__6TSceneFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    play_particle_at_active_slot__10TObjPlayerFiiiiii(M2C_FIELD(arg0, u8 *, 0x1C), arg1, arg2, 0, arg3, 0);
}

}
