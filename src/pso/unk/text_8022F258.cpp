#include "pso/effect/TechniqueChargeEmitter.h"
#include "types.h"
#include "pso/item/TItemEquipBase.h"
#include "pso/player/TObjPlayer.h"
extern "C" {
extern u32 dark_technique_charge_effect_ids[];
void* spawn_particle_effect(float*,u32);
void queue_destruction__7TObjectFv(void*);
void updateDarkTechniqueCharge(TechniqueChargeEmitter* state);
s32 __construct_array(void *, void *, int, int, int);
extern s32 TItemEquipBase__sub_8010B73C[];
void *fn_8022F258(void *self);
}

extern "C" {

void *fn_8022F258(void *self) {
    __construct_array(self, (void *)TItemEquipBase__sub_8010B73C, 0, 8, 6);
    ((TItemEquipBase *)self)->init_slots();
    return self;
}

void updateDarkTechniqueCharge(TechniqueChargeEmitter* state) {
    ++state->age;
    if(state->age%10==0) {
        for(int i=0;i<3;++i)spawn_particle_effect(state->position,dark_technique_charge_effect_ids[i]);
    }
    if(!((TObjPlayer *)(state->actor))->check_flag_0x80())queue_destruction__7TObjectFv(state);
    else if(state->age>=180)queue_destruction__7TObjectFv(state);
}

}
