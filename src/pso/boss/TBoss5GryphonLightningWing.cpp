#ifndef PSO_CLASS_PACKAGE
#include "pso/TBoss5GryphonLightningWing.h"

TBoss5GryphonLightningWing::~TBoss5GryphonLightningWing() {}
#else
#if PSO_CLASS_PACKAGE == 0x80324CEC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 TBoss5GryphonLightningWing__sub_80324CEC(void);
f64 get_end_value();

f32 TBoss5GryphonLightningWing__sub_80324CEC(void) {
    return (f32) get_end_value();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80324D10
#include "types.h"

extern "C" {

void get_wing_position__26TBoss5GryphonLightningWingFii(s32 arg0, s32 arg1);
int VecCopy__FP3VecPC3Vec(s32, s32, s32);

void get_wing_position__26TBoss5GryphonLightningWingFii(s32 arg0, s32 arg1) {
    VecCopy__FP3VecPC3Vec(arg1, arg0 + 0x2C, arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80351A2C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_lightning_effect__26TBoss5GryphonLightningWingFi(s32 arg0);
M2C_UNK get_wing_position__26TBoss5GryphonLightningWingFii(s32, M2C_UNK *);
M2C_UNK TBoss8Dragon__sub_80063FB8(s32, M2C_UNK *, f32);
s32 get_instance_count__12TBoss8DragonFv();

extern f32 lbl_805DFED0;

void apply_lightning_effect__26TBoss5GryphonLightningWingFi(s32 arg0) {
    M2C_UNK sp8;
    s32 temp_r3;

    temp_r3 = get_instance_count__12TBoss8DragonFv();
    if (temp_r3 != 0) {
        get_wing_position__26TBoss5GryphonLightningWingFii(arg0, &sp8);
        TBoss8Dragon__sub_80063FB8(temp_r3, &sp8, lbl_805DFED0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80351A7C
#include "types.h"

extern "C" {

void render__26TBoss5GryphonLightningWingFv(void);

void render__26TBoss5GryphonLightningWingFv(void) {  }

}
#endif
#endif
