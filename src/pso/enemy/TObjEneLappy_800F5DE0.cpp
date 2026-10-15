#include "types.h"

struct VBase_18_2f517b { char pad[0x18]; };

struct VObj_18_2f517b : VBase_18_2f517b {
    virtual void m0();
    virtual void m1();
    virtual s32 m2();
};

extern "C" {
s32 obj_testFlags30(void *, s32);
void clear_shadow_flag__10TObjPlayerFPv(void *);
void set_shadow_flag__10TObjPlayerFPv(void *);
void set_shadow_material_state(void);
void set_chunk_material_override_pair(s32, s32);
extern s32 model_render_flags;
void render_actor_shadows_default(u8 *arg0);
}

extern "C" {

int initialize_enemy_photon_effect(void* p);
void set_param__12TObjEneLappyFPvi(void* p, s32 v);
s32 get_target_id__13TWindowLockOnFPv(void* p);
int reset_photon_effect__12TBoss3VoloptFPv(void*);

void set_param__12TObjEneLappyFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x370) = v; }

int initialize_enemy_photon_effect(void* p) { return reset_photon_effect__12TBoss3VoloptFPv(p); }
void render_actor_shadows_default(u8 *arg0) {
    if (obj_testFlags30(arg0, 0x800) == 0) {
        set_shadow_flag__10TObjPlayerFPv(arg0);
        model_render_flags |= 0xC10;
        set_chunk_material_override_pair(-1, 0x800);
        set_shadow_material_state();
        ((VObj_18_2f517b *)(arg0))->m2();
        clear_shadow_flag__10TObjPlayerFPv(arg0);
        model_render_flags &= ~0xC10;
    }
}

}
