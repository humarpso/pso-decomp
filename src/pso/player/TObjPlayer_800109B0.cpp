#include "types.h"

extern "C" {

s32 obj_setArrS16_FC(s32, s32, u16);
u16 obj_getArrU16_FC(s32, s32);
s32 obj_getField1c(s32);
s32 spawn_particle_effect_with_flags(s32, s32, s32);
s32 set_owner_id__13TParticleCtrlFPvUs(s32, s32);
int obj_clearArrS16_FC(void*, void*);
void clear_s16_arrays__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_80010A78(void);
void TObjPlayer__sub_80010A80(void);

void add_id_to_slots__10TObjPlayerFiUs(s32 arg0, u16 arg1) {
    s32 var_r30;

    var_r30 = 0;
loop_1:
    if (arg1 != obj_getArrU16_FC(arg0, var_r30)) {
        if (obj_getArrU16_FC(arg0, var_r30) == 0xFFFF) {
            obj_setArrS16_FC(arg0, var_r30, arg1);
            return;
        }
        var_r30 += 1;
        if (var_r30 >= 4) {

        } else {
            goto loop_1;
        }
    }
}
void clear_s16_arrays__10TObjPlayerFPv(void* p) { { int i; for (i = 0; i < 4; i++) { obj_clearArrS16_FC(p, (void*)i); } } }
int TObjPlayer__sub_80010A78(void) { return 0; }
void TObjPlayer__sub_80010A80(void) {  }

}
