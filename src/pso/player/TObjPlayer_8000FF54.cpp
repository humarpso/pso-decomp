#include "types.h"

extern "C" {

s32 set_owner_id__13TParticleCtrlFPvUs(s32, s32);
s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
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

u16 get_field_2d4__10TObjPlayerFPv(void* p) { return *(u16*)((char*)p + 0x2d4); }

}
