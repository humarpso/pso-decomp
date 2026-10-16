#include "types.h"

#include "pso/effect/TechniqueChargeEmitter.h"
#include "pso/player/TObjPlayer.h"
extern "C" {
extern u32 TObjLight__support_charge_effect_ids[];
void* spawn_particle_effect(float*,u32);
void queue_destruction__7TObjectFv(void*);
void TObjLight__updateSupportTechniqueCharge(TechniqueChargeEmitter* state);
}

extern "C" {

void *destroy_support_technique_charge_effect(void *arg0, s16 arg1);
u8 *init_6e6c__9TObjLightFPvii(u8 *arg0, s32 arg1, s32 arg2);
s32 play_sound_effect(int, void *, int, int);
void stop_sound_request(void *);
s32 VecCopy__FP3VecPC3Vec(void *, int);
s32 __ct__7TObjectFP7TObject(void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern s32 lbl_804CCAC8[];

void TObjLight__updateSupportTechniqueCharge(TechniqueChargeEmitter* state) {
    ++state->age;
    if(state->age%10==0) {
        for(int i=0;i<2;++i)spawn_particle_effect(state->position,TObjLight__support_charge_effect_ids[i]);
    }
    if(!((TObjPlayer *)(state->actor))->check_flag_0x80())queue_destruction__7TObjectFv(state);
    else if(state->age>=180)queue_destruction__7TObjectFv(state);
}

void *destroy_support_technique_charge_effect(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804CCAC8;
        stop_sound_request(*(void **)((s8 *)arg0 + 0x30));
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_804CCAC8[];

u8 *init_6e6c__9TObjLightFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    __ct__7TObjectFP7TObject(arg0, (void *) (arg2));
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804CCAC8;
    *(s32 *)((s8 *)arg0 + 0x1C) = arg1;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x20), (int) (*(s32 *)((s8 *)arg0 + 0x1C) + 0x2FC));
    *(s32 *)((s8 *)arg0 + 0x2C) = 0;
    *(s32 *)((s8 *)arg0 + 0x30) = play_sound_effect((int) (0x4002B71B), (void *) (arg0 + 0x20), (int) (0), (int) (0));
    return arg0;
}

}
