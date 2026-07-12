#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneRecon__sub_8029EB08(void);
u32 TSceneSora__sub_8029F574(void*);
M2C_UNK TParticleCtrl__sub_803280E8();

extern u32 lbl_805D65F4;

void TObjEneRecon__sub_8029EB08(void) {
    if (((u32) lbl_805D65F4 != 0U) && (TSceneSora__sub_8029F574((void*)lbl_805D65F4) != 0U)) {
        TParticleCtrl__sub_803280E8();
    }
}

}
