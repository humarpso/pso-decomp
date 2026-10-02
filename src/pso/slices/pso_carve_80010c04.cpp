#include "types.h"

extern "C" {
void *find_entity_by_id(s32 id);
s32 is_locally_controlled__10TObjPlayerFPv(void *p);
s32 TObjPlayer__sub_80010C04(s32 id);
}

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

s32 TObjPlayer__sub_80010C04(s32 id) {
    void *p;
    if ((u16)id == 0xFFFF || (u16)id >= 0x1000) {
        return 0;
    }
    p = find_entity_by_id(id);
    if (p == 0) {
        return 0;
    }
    return is_locally_controlled__10TObjPlayerFPv(p);
}

}
