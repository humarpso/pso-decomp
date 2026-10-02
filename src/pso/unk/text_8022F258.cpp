#include "pso/effect/TechniqueChargeEmitter.h"
#include "types.h"
extern "C" {
extern u32 lbl_804CC740[];
void* spawn_particle_effect(float*,u32);
int check_flag_0x80__10TObjPlayerFPv(void*);
void queue_destruction__7TObjectFv(void*);
void updateDarkTechniqueCharge(TechniqueChargeEmitter* state);
s32 __construct_array(void *, void *, int, int, int);
void init_slots__14TItemEquipBaseFPv(void *);
extern s32 TItemEquipBase__sub_8010B73C[];
void *fn_8022F258(void *self);
}

extern "C" {

void *fn_8022F258(void *self) {
    __construct_array(self, (void *)TItemEquipBase__sub_8010B73C, 0, 8, 6);
    init_slots__14TItemEquipBaseFPv(self);
    return self;
}

void updateDarkTechniqueCharge(TechniqueChargeEmitter* state) {
    ++state->age;
    if(state->age%10==0) {
        for(int i=0;i<3;++i)spawn_particle_effect(state->position,lbl_804CC740[i]);
    }
    if(!check_flag_0x80__10TObjPlayerFPv(state->actor))queue_destruction__7TObjectFv(state);
    else if(state->age>=180)queue_destruction__7TObjectFv(state);
}

}
