#include "types.h"

extern "C" {

f32 TBoss5GryphonLightningWing__sub_80324CEC(void);
void get_wing_position__26TBoss5GryphonLightningWingFii(s32 arg0, s32 arg1);
int VecCopy__FP3VecPC3Vec(s32, s32, s32);
f64 asin();

f32 TBoss5GryphonLightningWing__sub_80324CEC(void) {
    return (f32) asin();
}

void get_wing_position__26TBoss5GryphonLightningWingFii(s32 arg0, s32 arg1) {
    VecCopy__FP3VecPC3Vec(arg1, arg0 + 0x2C, arg0);
}

}
