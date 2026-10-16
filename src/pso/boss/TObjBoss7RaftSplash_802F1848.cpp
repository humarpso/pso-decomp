#include "types.h"
#include "pso/object/TObjFish.h"

struct Base_802F1848 { char pad[0x18]; };
struct VObj_802F1848 : Base_802F1848 {
    virtual void m0();
    virtual void m1();
};

extern "C" {

void *initialize_with_flags__13TParticleCtrlFPCvlllllUs(void *, s32, s32, s32, s32, s32, s32, s32);
s32 get_particle_by_index__13TParticleCtrlFl(s32);
void *__nw__7TObjectFUl(s32);
s32 fn_802F1960(void *, f32);

void TObjFish::spawn_particle(s32 arg0, s32 arg1, f32 farg0) {
    void *var_r31;

    var_r31 = __nw__7TObjectFUl(0x78);
    if (var_r31 != NULL) {
        var_r31 = initialize_with_flags__13TParticleCtrlFPCvlllllUs(var_r31, arg0, get_particle_by_index__13TParticleCtrlFl(arg1), 1, 0, 0, 1, 0x40);
    }
    if (var_r31 != NULL) {
        ((VObj_802F1848 *)var_r31)->m1();
        fn_802F1960(var_r31, farg0);
    }
}

}
