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

void trigger_switch_attack__10TObjPlayerFi(s32 arg0) {
    s32 temp_r3;

    temp_r3 = spawn_particle_effect_with_flags(arg0 + 0x2FC, 0x1FE, 0x50);
    if (temp_r3 != 0) {
        set_owner_id__13TParticleCtrlFPvUs(temp_r3, obj_getField1c(arg0));
    }
}

}
