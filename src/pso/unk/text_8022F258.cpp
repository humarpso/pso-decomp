#include "pso/effect/TechniqueChargeEmitter.h"
extern "C" {
extern u32 lbl_804CC740[];
void* TObjEneDellBiter__sub_80087350(float*,u32);
int check_flag_0x80__10TObjPlayerFPv(void*);
void queue_destruction__7TObjectFv(void*);
void updateDarkTechniqueCharge(TechniqueChargeEmitter* state);
}

extern "C" {

void updateDarkTechniqueCharge(TechniqueChargeEmitter* state) {
    ++state->age;
    if(state->age%10==0) {
        for(int i=0;i<3;++i)TObjEneDellBiter__sub_80087350(state->position,lbl_804CC740[i]);
    }
    if(!check_flag_0x80__10TObjPlayerFPv(state->actor))queue_destruction__7TObjectFv(state);
    else if(state->age>=180)queue_destruction__7TObjectFv(state);
}

}
