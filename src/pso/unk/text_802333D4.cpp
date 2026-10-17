#include "pso/effect/TechniqueChargeEmitter.h"
#include "pso/player/TObjPlayer.h"
extern "C" {
extern u32 ice_technique_charge_particle_ids[];
void* spawn_particle_effect(float*,u32);
void queue_destruction__7TObjectFv(void*);
void updateIceTechniqueCharge(TechniqueChargeEmitter* state);
void updateIceTechniqueCharge(TechniqueChargeEmitter* state) {
    ++state->age;
    if(state->age%10==0) {
        for(int i=0;i<2;++i)spawn_particle_effect(state->position,ice_technique_charge_particle_ids[i]);
    }
    if(!((TObjPlayer *)(state->actor))->check_flag_0x80())queue_destruction__7TObjectFv(state);
    else if(state->age>=180)queue_destruction__7TObjectFv(state);
}

}
