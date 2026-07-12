#include "types.h"

extern "C" {

s32 GXSetTexCoordGen2(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0, s32 a4 = 0, s32 a5 = 0);
f32 TObjPlayer__sub_80084800(void);
f64 fn_803A20A4();
void TObjPlayer__sub_800847FC(void);
int TObjPlayer__sub_80084854(void* p);

void set_tex_coord_gen__10TObjPlayerFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    GXSetTexCoordGen2(arg0, arg1, arg2, arg3, 0, 0x7D);
}
void TObjPlayer__sub_800847FC(void) {  }
f32 TObjPlayer__sub_80084800(void) {
    return (f32) fn_803A20A4();
}

}
