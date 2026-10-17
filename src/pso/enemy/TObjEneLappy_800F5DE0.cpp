#include "types.h"
#include "pso/enemy/TObjEneLappy_800F5DE0.h"
#include "pso/system/ChunkMaterialState.h"
#include "pso/unk/text_80141550.h"
#include "pso/enemy/TObjEnemy.h"
#include "pso/object/TObjMotion.h"
#include "pso/enemy/TObjEneLappy.h"
#include "pso/boss/TBoss3Volopt.h"
#include "pso/misc/TWindowLockOn.h"
#include "pso/player/TObjPlayer.h"

extern "C" {
s32 obj_testFlags30(void *, s32);
extern s32 model_render_flags;

void TObjEneLappy::set_param(s32 v) { *(s32 *)&this->control = v; }

int initialize_enemy_photon_effect(void* p) { return ((TBoss3Volopt *)p)->reset_photon_effect(); }
void render_actor_shadows_default(u8 *arg0) {
    if (obj_testFlags30(arg0, 0x800) == 0) {
        ((TUnk_804AF8A0 *)arg0)->set_shadow_flag();
        model_render_flags |= 0xC10;
        set_chunk_material_override_pair(-1, 0x800);
        set_shadow_material_state();
        ((TObjEnemy *)(arg0))->render();
        ((TUnk_804AF8A0 *)arg0)->clear_shadow_flag();
        model_render_flags &= ~0xC10;
    }
}

}
