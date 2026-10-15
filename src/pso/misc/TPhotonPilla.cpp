#include "types.h"

struct Base_801AE174 { char pad[0x18]; };
struct VObj_801AE174 : Base_801AE174 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
};

extern "C" {

void *destroy__12TPhotonPillaFPvs(void *arg0, s16 arg1);
s32 free_collision_body_parts(void *);
s32 unregister_object_by_id(void *);
s32 __dl__7TObjectFPv(void *);
s32 destroy_photon_motion_object(void *, s32);
s32 free_photon__10TObjPlayerFPv(void *);

extern s32 lbl_804C3ACC[];

void *destroy__12TPhotonPillaFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804C3ACC;
        ((VObj_801AE174 *)arg0)->m13();
        free_photon__10TObjPlayerFPv(arg0);
        unregister_object_by_id(arg0);
        free_collision_body_parts(arg0);
        destroy_photon_motion_object(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
