#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void play_proximity_effect__14TObjEneBm5WolfFi(s32 arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(void *, void *, int, int);
void *copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
s32 objInBand__FP7GameObjf(f32);
M2C_UNK play_effect_if_v2__10TObjPlayerFi(int);

extern const f32 lbl_805D9E48;

void play_proximity_effect__14TObjEneBm5WolfFi(s32 arg0) {
    if (objInBand__FP7GameObjf((f32) (lbl_805D9E48)) != 0) {
        TBoss3Volopt__sub_8022675C(copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x3C618)), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        play_effect_if_v2__10TObjPlayerFi((int) (-0x1000));
    }
}

}
