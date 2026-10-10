#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TScene__sub_802A81B8(void *arg0, s16 arg1);
void draw_field_1c__6TSceneFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void set_indirect_tev__6TSceneFii(M2C_UNK ignored, s32 arg1);
M2C_UNK GXSetNumIndStages(M2C_UNK);
M2C_UNK GXSetTevDirect(M2C_UNK);
M2C_UNK set_ginja_post_texgen_count(M2C_UNK);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
M2C_UNK play_particle_at_active_slot__10TObjPlayerFiiiiii(u8, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void set_indirect_tev__6TSceneFii(M2C_UNK ignored, s32 arg1) {
    if (arg1 != 0) {
        GXSetTevDirect(1);
    } else {
        GXSetTevDirect(0);
    }
    GXSetNumIndStages(0);
    set_ginja_post_texgen_count(0);
}

void draw_field_1c__6TSceneFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    play_particle_at_active_slot__10TObjPlayerFiiiiii(M2C_FIELD(arg0, u8 *, 0x1C), arg1, arg2, 0, arg3, 0);
}

extern M2C_UNK lbl_804DDF04[];

void *TScene__sub_802A81B8(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804DDF04;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
