#include "types.h"

extern "C" {

s32 set_owner_id__13TParticleCtrlFPvUs(s32, s32);
s32 play_sound_effect(s32, s32, s32, s32);
s32 trigger_switch_attack__10TObjPlayerFPvi(s32, s32);
s32 spawn_particle_effect_with_flags(s32, s32, s32);
s32 is_locally_controlled__10TObjPlayerFPv(s32);
u16 obj_getField1c(void* a0 = 0);
int test_flag_1000__10TObjPlayerFPv(void* p);
int has_flag_0x800__10TObjPlayerFPv(void* p);
int test_flag30_512__10TObjPlayerFPv(void* p);
int test_flag_256__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_8000FF4C(void* p, s16 v);
u16 get_field_2d4__10TObjPlayerFPv(void* p);
int obj_testFlags30(void*, int);

void activate_switch_attacks__10TObjPlayerFii(s32 arg0, s32 arg1) {
    if (obj_testFlags30((void*)(arg0), 0x02000000) == 0) {
        spawn_particle_effect_with_flags(arg1, 0xB9, 0x40);
        spawn_particle_effect_with_flags(arg1, 0xBA, 0x40);
        trigger_switch_attack__10TObjPlayerFPvi(arg0, arg1);
    }
}

}
