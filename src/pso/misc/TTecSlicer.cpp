#include "types.h"

#include "pso/effect/TechniqueChargeEmitter.h"
extern "C" {
extern u32 lightning_charge_particle_ids[];
void* spawn_particle_effect(float*,u32);
int check_flag_0x80__10TObjPlayerFPv(void*);
int queue_destruction__7TObjectFv(void*);
void TTecSlicer__updateLightningTechniqueCharge(TechniqueChargeEmitter* state);
}

extern "C" {

void destroy_if_set__10TTecSlicerFUi(u32 arg0);
void *dt__10TTecSlicerFPvs(void *arg0, s16 arg1);
s32 dt__10TTecSlicerFis(s32 arg0, s16 arg1);
s32 get_field_110__10TTecSlicerFPv(void* p);
s16 get_remain_count__10TTecSlicerFPv(void* p);
u8 *init_from_owner__10TTecSlicerFPvii(u8 *arg0, s32 arg1, s32 arg2);
s32 play_sound_effect(int, void *, int, int);
void stop_sound_request(void *);
s32 VecCopy__FP3VecPC3Vec(void *, int);
s32 __ct__7TObjectFP7TObject(void *, void *);
void __dl__7TObjectFPv(void *);
int __dl__FPv();
void __dt__7TObjectFv(void *, int);

s32 get_field_110__10TTecSlicerFPv(void* p) { return *(s32*)((char*)p + 0x110); }
s16 get_remain_count__10TTecSlicerFPv(void* p) { return *(s16*)((char*)p + 0x11e); }
void destroy_if_set__10TTecSlicerFUi(u32 arg0) {
    if (arg0 != 0U) {
        queue_destruction__7TObjectFv((void*)(arg0));
    }
}
s32 dt__10TTecSlicerFis(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}

extern s32 lbl_804CCD0C[];

void TTecSlicer__updateLightningTechniqueCharge(TechniqueChargeEmitter* state) {
    ++state->age;
    if(state->age%10==0) {
        for(int i=0;i<3;++i)spawn_particle_effect(state->position,lightning_charge_particle_ids[i]);
    }
    if(!check_flag_0x80__10TObjPlayerFPv(state->actor))queue_destruction__7TObjectFv((void*)(state));
    else if(state->age>=180)queue_destruction__7TObjectFv((void*)(state));
}

void *dt__10TTecSlicerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804CCD0C;
        stop_sound_request(*(void **)((s8 *)arg0 + 0x30));
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_804CCD0C[];

u8 *init_from_owner__10TTecSlicerFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    __ct__7TObjectFP7TObject(arg0, (void *) (arg2));
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804CCD0C;
    *(s32 *)((s8 *)arg0 + 0x1C) = arg1;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x20), (int) (*(s32 *)((s8 *)arg0 + 0x1C) + 0x2FC));
    *(s32 *)((s8 *)arg0 + 0x2C) = 0;
    *(s32 *)((s8 *)arg0 + 0x30) = play_sound_effect((int) (0x4002B51E), (void *) (arg0 + 0x20), (int) (0), (int) (0));
    return arg0;
}

}
