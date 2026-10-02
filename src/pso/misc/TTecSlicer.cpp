#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

#include "pso/effect/TechniqueChargeEmitter.h"
extern "C" {
extern u32 lbl_804CCD00[];
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
s32 TBoss3Volopt__sub_8022675C(int, void *, int, int);
void TLobby__sub_80226294(void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, int);
M2C_UNK __ct__7TObjectFP7TObject(void *, void *);
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

extern M2C_UNK lbl_804CCD0C[];

void TTecSlicer__updateLightningTechniqueCharge(TechniqueChargeEmitter* state) {
    ++state->age;
    if(state->age%10==0) {
        for(int i=0;i<3;++i)spawn_particle_effect(state->position,lbl_804CCD00[i]);
    }
    if(!check_flag_0x80__10TObjPlayerFPv(state->actor))queue_destruction__7TObjectFv((void*)(state));
    else if(state->age>=180)queue_destruction__7TObjectFv((void*)(state));
}

void *dt__10TTecSlicerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CCD0C;
        TLobby__sub_80226294(M2C_FIELD(arg0, void **, 0x30));
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804CCD0C[];

u8 *init_from_owner__10TTecSlicerFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    __ct__7TObjectFP7TObject(arg0, (void *) (arg2));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CCD0C;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x20), (int) (M2C_FIELD(arg0, s32 *, 0x1C) + 0x2FC));
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = TBoss3Volopt__sub_8022675C((int) (0x4002B51E), (void *) (arg0 + 0x20), (int) (0), (int) (0));
    return arg0;
}

}
