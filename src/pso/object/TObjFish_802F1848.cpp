#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_802F1848 { char pad[0x18]; };
struct VObj_802F1848 : Base_802F1848 {
    virtual void m0();
    virtual void m1();
};

extern "C" {

void spawn_particle__8TObjFishFiif(s32 arg0, s32 arg1, f32 farg0);
void *initialize_with_flags__13TParticleCtrlFPvPviiiiiUs(void *, s32, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 get_particle_by_index__13TParticleCtrlFi(s32);
void *__nw__7TObjectFUl(M2C_UNK);
M2C_UNK fn_802F1960(void *, f32);

void spawn_particle__8TObjFishFiif(s32 arg0, s32 arg1, f32 farg0) {
    void *var_r31;

    var_r31 = __nw__7TObjectFUl(0x78);
    if (var_r31 != NULL) {
        var_r31 = initialize_with_flags__13TParticleCtrlFPvPviiiiiUs(var_r31, arg0, get_particle_by_index__13TParticleCtrlFi(arg1), 1, 0, 0, 1, 0x40);
    }
    if (var_r31 != NULL) {
        ((VObj_802F1848 *)var_r31)->m1();
        fn_802F1960(var_r31, farg0);
    }
}

}
