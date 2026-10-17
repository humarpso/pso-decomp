#include "types.h"
#include "pso/object/obj_band.h"
#include "pso/system/vector.h"
#include "pso/enemy/TObjEneMe3Stelth.h"
#include "pso/TParticleCtrl.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

struct Stack_800F0B4C
{
  s32 sp8;
  f32 spC;
  u8 trailing_storage[0x4];
};

extern "C" {
int load_gvm_texture_file(void*);
    extern unsigned char lbl_8043D438[];
extern u32 blob_shadow_texture_list;
void load_ha_u032_kage(void);
s32 attach_particle_model(int, int, int, int, int, f32);
u8 *csnVectorUnder(s32 *, s32, s32);
s32 spawn_particle_effect(s32, s32);
s32 TObjEneGibbles__sub_800D8988(void *);
extern const f32 TObjEneMe3Stelth__data_805DA808;
extern const f32 TObjEneMe3Stelth__data_805DA80C;
s32 play_sound_effect(s32, s32, s32, s32);
extern const f32 lbl_805DA814;
extern const f32 lbl_805DA818;
void TObjEneMe3Stelth__sub_800F0C90(u8 *arg0);
s32 TLobby__sub_803DA16C(void*);

void TObjEneMe3Stelth::destroy_resources() {
    if ((u32) blob_shadow_texture_list != 0U) {
        TLobby__sub_803DA16C((void*)blob_shadow_texture_list);
        TAdSinglePlyChrSelectGC::safe_free(blob_shadow_texture_list);
        blob_shadow_texture_list = 0U;
    }
}
void load_ha_u032_kage(void) { (*(int *)&blob_shadow_texture_list) = load_gvm_texture_file(lbl_8043D438); }
s32 TObjEneMe3Stelth::try_spawn_ground_effect(s32 arg1) {
    s32 arg0 = (s32)this;
  Stack_800F0B4C stack;
  s32 temp_r31;
  s32 particle_effect;
  u8 *temp_r3;
  VecCopy((Vec *)(&stack.sp8), (const Vec *)arg1);
  stack.spC += TObjEneMe3Stelth__data_805DA808;
  temp_r3 = (u8 *) csnVectorUnder(&stack.sp8, arg0 + 0x120, 0x15);
  if ((temp_r3 != 0) && ((*((s32 *) (((s8 *) temp_r3) + 0))) & 4))
  {
    particle_effect = ((s32)spawn_particle_effect((s32)((int) ((*((s32 *) (((s8 *) temp_r3) + 4))) + 0x38)), (s32)((int) 0x49)));
    if (particle_effect != 0)
    {
      ;
      attach_particle_model((int) particle_effect, (int) TParticleCtrl::get_particle_model((int) 2), (int) TParticleCtrl::get_instance(), (int) 0, (int) 1, (f32) TObjEneMe3Stelth__data_805DA80C);
    }
    spawn_particle_effect((s32)((int) ((*((s32 *) (((s8 *) temp_r3) + 4))) + 0x38)), (s32)((int) 0xA4));
    TObjEneGibbles__sub_800D8988((void *) (arg0 + 0x38));
    return 1;
  }
  return 0;
}
void TObjEneMe3Stelth::play_hit_effect() {
    s32 arg0 = (s32)this;
    if (try_spawn_ground_effect((s32)(arg0 + 0x38)) != 0) {
        play_sound_effect(0x3A836, arg0 + 0x38, 0, 0);
        return;
    }
    spawn_particle_effect(arg0 + 0x38, 0xF3);
    play_sound_effect(0x3A836, arg0 + 0x38, 0, 0);
}
void TObjEneMe3Stelth__sub_800F0C90(u8 *arg0) {
    if ((objInBand((GameObj *)arg0, (f32)lbl_805DA814) != 0) || (objInBand((GameObj *)((GameObj *)arg0), (f32)((f32)lbl_805DA818)) != 0)) {
        ((TObjEneMe3Stelth *)arg0)->try_spawn_ground_effect((s32)((s32)((void *) (arg0 + 0x38))));
    }
}

typedef struct Stack_800F0B4C Stack_800F0B4C;

}
