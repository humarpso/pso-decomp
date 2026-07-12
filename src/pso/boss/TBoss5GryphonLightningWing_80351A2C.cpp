#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_lightning_effect__26TBoss5GryphonLightningWingFi(s32 arg0);
M2C_UNK TBoss5GryphonLightningWing__sub_80324D10(s32, M2C_UNK *);
M2C_UNK TBoss8Dragon__sub_80063FB8(s32, M2C_UNK *, f32);
s32 TBoss8Dragon__sub_80065F14();

extern f32 lbl_805DFED0;

void apply_lightning_effect__26TBoss5GryphonLightningWingFi(s32 arg0) {
    M2C_UNK sp8;
    s32 temp_r3;

    temp_r3 = TBoss8Dragon__sub_80065F14();
    if (temp_r3 != 0) {
        TBoss5GryphonLightningWing__sub_80324D10(arg0, &sp8);
        TBoss8Dragon__sub_80063FB8(temp_r3, &sp8, lbl_805DFED0);
    }
}

}
