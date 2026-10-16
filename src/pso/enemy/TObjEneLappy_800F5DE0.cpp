#include "types.h"
#include "pso/enemy/TObjEneLappy.h"
#include "pso/boss/TBoss3Volopt.h"
#include "pso/misc/TWindowLockOn.h"
#include "pso/player/TObjPlayer.h"

struct VBase_18_2f517b { char pad[0x18]; };

struct VObj_18_2f517b : VBase_18_2f517b {
    virtual void m0();
    virtual void m1();
    virtual s32 m2();
};

extern "C" {
s32 obj_testFlags30(void *, s32);
void set_shadow_material_state(void);
void set_chunk_material_override_pair(s32, s32);
extern s32 model_render_flags;
void render_actor_shadows_default(u8 *arg0);
}

extern "C" {

int initialize_enemy_photon_effect(void* p);

void TObjEneLappy::set_param(s32 v) { *(s32*)((char*)this + 0x370) = v; }

int initialize_enemy_photon_effect(void* p) { return ((TBoss3Volopt *)p)->reset_photon_effect(); }
void render_actor_shadows_default(u8 *arg0) {
    if (obj_testFlags30(arg0, 0x800) == 0) {
        ((TObjPlayer *)arg0)->set_shadow_flag();
        model_render_flags |= 0xC10;
        set_chunk_material_override_pair(-1, 0x800);
        set_shadow_material_state();
        ((VObj_18_2f517b *)(arg0))->m2();
        ((TObjPlayer *)arg0)->clear_shadow_flag();
        model_render_flags &= ~0xC10;
    }
}

}
