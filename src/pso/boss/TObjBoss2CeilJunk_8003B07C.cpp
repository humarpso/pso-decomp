#include "types.h"
#include "pso/boss/TObjBoss2CeilJunk.h"

extern "C" {

s32 create_particle_effect__15TObjBoss2TunnelFiif(f32);

extern const f32 lbl_805D85D8;

void TObjBoss2CeilJunk::create_particle() {
    create_particle_effect__15TObjBoss2TunnelFiif(lbl_805D85D8);
}

}
