#include "types.h"

extern "C" {

void *__dt__13TPhotonEstllaFv(void *arg0, s16 arg1);
s32 __dl__7TObjectFPv(void *);
s32 free_photon__13TUnk_804C3248Fv(void *);
s32 destroy_photon_motion_object(void *, s32);

extern s32 __vt__13TPhotonEstlla[];

struct Base_801AAB00 { char pad[0x18]; };
struct VObj_801AAB00 : Base_801AAB00 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13();
};

void *__dt__13TPhotonEstllaFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        struct VObj_801AAB00 *o = (struct VObj_801AAB00 *)arg0;
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__13TPhotonEstlla;
        o->m13();
        free_photon__13TUnk_804C3248Fv(arg0);
        destroy_photon_motion_object(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
