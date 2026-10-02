#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
bool TObjPlayer__sub_8000FF3C(u8 *arg0);
}

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

bool TObjPlayer__sub_8000FF3C(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x2A8) == 0;
}

}
