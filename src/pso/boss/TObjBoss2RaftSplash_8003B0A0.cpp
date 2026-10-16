#include "types.h"
#include "pso/TObjBoss2RaftSplash.h"

struct Base_8003B0A0 { char pad[0x18]; };
struct VObj_8003B0A0 : Base_8003B0A0 {
    virtual void m0();
    virtual void m1();
};

extern "C" {

s32 detach_children__15TObjBoss2TunnelFPv(void *, s32);
void *initialize_with_flags__13TParticleCtrlFPCvlllllUs(void *, s32, s32, s32, s32, s32, s32, s32);
s32 get_particle_by_index__13TParticleCtrlFl(s32);
void *__nw__7TObjectFUl(s32);

void TObjBoss2RaftSplash::spawn_splash(s32 arg0, s32 arg1, s32 arg2) {
    void *var_r31;

    var_r31 = __nw__7TObjectFUl(0x78);
    if (var_r31 != NULL) {
        var_r31 = initialize_with_flags__13TParticleCtrlFPCvlllllUs(var_r31, arg0, get_particle_by_index__13TParticleCtrlFl(arg1), 1, 0, 0, 1, 0x40);
    }
    if (var_r31 != NULL) {
        ((VObj_8003B0A0 *)var_r31)->m1();
        detach_children__15TObjBoss2TunnelFPv(var_r31, arg2);
    }
}

}
