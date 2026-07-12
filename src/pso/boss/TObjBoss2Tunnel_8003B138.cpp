#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8003B138 { char pad[0x18]; };
struct VObj_8003B138 : Base_8003B138 {
    virtual void m0();
    virtual void m1();
};

extern "C" {

void create_particle_effect__15TObjBoss2TunnelFiif(s32 arg0, s32 arg1, f32 farg0);
M2C_UNK TObjBoss2Tunnel__sub_8003B250(void *, f32);
void *initialize_with_flags__13TParticleCtrlFPvPviiiiiUs(void *, s32, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void *__nw__7TObjectFUl(M2C_UNK);
s32 get_particle_by_index__13TParticleCtrlFi(s32);

void create_particle_effect__15TObjBoss2TunnelFiif(s32 arg0, s32 arg1, f32 farg0) {
    void *var_r31;

    var_r31 = __nw__7TObjectFUl(0x78);
    if (var_r31 != NULL) {
        var_r31 = initialize_with_flags__13TParticleCtrlFPvPviiiiiUs(var_r31, arg0, get_particle_by_index__13TParticleCtrlFi(arg1), 1, 0, 0, 1, 0x40);
    }
    if (var_r31 != NULL) {
        ((VObj_8003B138 *)var_r31)->m1();
        TObjBoss2Tunnel__sub_8003B250(var_r31, farg0);
    }
}

}
