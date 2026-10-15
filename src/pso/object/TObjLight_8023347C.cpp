#include "types.h"

extern "C" {

void *TObjLight__sub_8023347C(void *arg0, s16 arg1);
u8 *init__9TObjLightFPvii(u8 *arg0, s32 arg1, s32 arg2);
s32 play_sound_effect(int, void *, int, int);
void stop_sound_request(void *);
s32 VecCopy__FP3VecPC3Vec(void *, int);
s32 __ct__7TObjectFP7TObject(void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern s32 ice_technique_charge_vtable[];

void *TObjLight__sub_8023347C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = ice_technique_charge_vtable;
        stop_sound_request(*(void **)((s8 *)arg0 + 0x30));
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 ice_technique_charge_vtable[];

u8 *init__9TObjLightFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    __ct__7TObjectFP7TObject(arg0, (void *) (arg2));
    *(s32 **)((s8 *)arg0 + 0x18) = ice_technique_charge_vtable;
    *(s32 *)((s8 *)arg0 + 0x1C) = arg1;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x20), (int) (*(s32 *)((s8 *)arg0 + 0x1C) + 0x2FC));
    *(s32 *)((s8 *)arg0 + 0x2C) = 0;
    *(s32 *)((s8 *)arg0 + 0x30) = play_sound_effect((int) (0x4002B21D), (void *) (arg0 + 0x20), (int) (0), (int) (0));
    return arg0;
}

}
