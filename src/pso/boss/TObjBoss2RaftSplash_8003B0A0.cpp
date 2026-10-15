#include "types.h"

struct Base_8003B0A0 { char pad[0x18]; };
struct VObj_8003B0A0 : Base_8003B0A0 {
    virtual void m0();
    virtual void m1();
};

extern "C" {

void spawn_splash__19TObjBoss2RaftSplashFiii(s32 arg0, s32 arg1, s32 arg2);
s32 detach_children__15TObjBoss2TunnelFPvPv(void *, s32);
void *initialize_with_flags__13TParticleCtrlFPvPviiiiiUs(void *, s32, s32, s32, s32, s32, s32, s32);
s32 get_particle_by_index__13TParticleCtrlFi(s32);
void *__nw__7TObjectFUl(s32);

void spawn_splash__19TObjBoss2RaftSplashFiii(s32 arg0, s32 arg1, s32 arg2) {
    void *var_r31;

    var_r31 = __nw__7TObjectFUl(0x78);
    if (var_r31 != NULL) {
        var_r31 = initialize_with_flags__13TParticleCtrlFPvPviiiiiUs(var_r31, arg0, get_particle_by_index__13TParticleCtrlFi(arg1), 1, 0, 0, 1, 0x40);
    }
    if (var_r31 != NULL) {
        ((VObj_8003B0A0 *)var_r31)->m1();
        detach_children__15TObjBoss2TunnelFPvPv(var_r31, arg2);
    }
}

}
