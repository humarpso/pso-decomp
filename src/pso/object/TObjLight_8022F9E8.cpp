#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

#include "pso/effect/TechniqueChargeEmitter.h"
extern "C" {
extern u32 fire_technique_charge_effect_ids[];
void* spawn_particle_effect(float*,u32);
int check_flag_0x80__10TObjPlayerFPv(void*);
void queue_destruction__7TObjectFv(void*);
void TObjLight__updateFireTechniqueCharge(TechniqueChargeEmitter* state);
}

extern "C" {

void *__dt__9TObjLightFPvs(void *arg0, s16 arg1);
u8 *initialize__9TObjLightFPvii(u8 *arg0, s32 arg1, s32 arg2);
s32 play_sound_effect(int, void *, int, int);
void stop_sound_request(void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, int);
M2C_UNK __ct__7TObjectFP7TObject(void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK lbl_804CC794[];

void TObjLight__updateFireTechniqueCharge(TechniqueChargeEmitter* state) {
    ++state->age;
    if(state->age%10==0) {
        for(int i=0;i<3;++i)spawn_particle_effect(state->position,fire_technique_charge_effect_ids[i]);
    }
    if(!check_flag_0x80__10TObjPlayerFPv(state->actor))queue_destruction__7TObjectFv(state);
    else if(state->age>=180)queue_destruction__7TObjectFv(state);
}

void *__dt__9TObjLightFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CC794;
        stop_sound_request(M2C_FIELD(arg0, void **, 0x30));
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804CC794[];

u8 *initialize__9TObjLightFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    __ct__7TObjectFP7TObject(arg0, (void *) (arg2));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CC794;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x20), (int) (M2C_FIELD(arg0, s32 *, 0x1C) + 0x2FC));
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = play_sound_effect((int) (0x4002B21C), (void *) (arg0 + 0x20), (int) (0), (int) (0));
    return arg0;
}

}
