#include "types.h"

extern "C" {

struct Base_80166024_80165F84 { char pad[0x18]; };
struct VObj_80166024_80165F84 : Base_80166024_80165F84 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(s32);
};

void *TOExplosiveMachine03__create(void *arg0);
void *TOExplosiveMachine03__ct(void *arg0, s32 arg1);
void *__dt__20TOExplosiveMachine03Fv(void *arg0, s16 arg1);
s32 TOExplosiveMachine__ct();
s32 TObjFish__sub_8001EDB0(s32, s32);
void *get_bml_model(s32, s32);
void __dl__7TObjectFPv(void *);
void __dt__18TOExplosiveMachineFv(void *, int);
void *__nw__7TObjectFUl(int);

void *TOExplosiveMachine03__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xAC);
    if (o != NULL) {
        o = TOExplosiveMachine03__ct((void *)(o), (s32)(arg0));
    }
    return o;
}

extern s32 __vt__20TOExplosiveMachine03[];

void *__dt__20TOExplosiveMachine03Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__20TOExplosiveMachine03;
        __dt__18TOExplosiveMachineFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 __vt__20TOExplosiveMachine03[];
extern s32 TOExplosiveMachine03__class_name;
extern s32 explosive_machine_model_archive;

void *TOExplosiveMachine03__ct(void *arg0, s32 arg1) {
    TOExplosiveMachine__ct();
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__20TOExplosiveMachine03;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TOExplosiveMachine03__class_name;
    ((VObj_80166024_80165F84 *)arg0)->m5(arg1);
    *(void **)((s8 *)arg0 + 0x34) = get_bml_model(explosive_machine_model_archive, 6);
    *(s32 *)((s8 *)arg0 + 0x24) = TObjFish__sub_8001EDB0(explosive_machine_model_archive, 6);
    *(f32 *)((s8 *)arg0 + 0x94) = (f32) *(f32 *)((s8 *)(*(void **)((s8 *)(*(void **)((s8 *)arg0 + 0x34)) + 4)) + 0x14);
    *(void **)((s8 *)arg0 + 0x9C) = get_bml_model(explosive_machine_model_archive, 7);
    *(s32 *)((s8 *)arg0 + 0xA4) = TObjFish__sub_8001EDB0(explosive_machine_model_archive, 7);
    *(void **)((s8 *)arg0 + 0xA0) = get_bml_model(explosive_machine_model_archive, 8);
    *(s32 *)((s8 *)arg0 + 0xA8) = TObjFish__sub_8001EDB0(explosive_machine_model_archive, 8);
    return arg0;
}

}
