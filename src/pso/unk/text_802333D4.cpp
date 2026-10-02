#include "pso/effect/TechniqueChargeEmitter.h"
extern "C" {
extern u32 lbl_804CC940[];
void* spawn_particle_effect(float*,u32);
int check_flag_0x80__10TObjPlayerFPv(void*);
void queue_destruction__7TObjectFv(void*);
void updateIceTechniqueCharge(TechniqueChargeEmitter* state);
}

extern "C" {

void updateIceTechniqueCharge(TechniqueChargeEmitter* state) {
    ++state->age;
    if(state->age%10==0) {
        for(int i=0;i<2;++i)spawn_particle_effect(state->position,lbl_804CC940[i]);
    }
    if(!check_flag_0x80__10TObjPlayerFPv(state->actor))queue_destruction__7TObjectFv(state);
    else if(state->age>=180)queue_destruction__7TObjectFv(state);
}

}
