#include "types.h"

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
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 attach_particle_model(int, int, int, int, int, f32);
u8 *csnVectorUnder(s32 *, s32, s32);
s32 get_particle_model__13TParticleCtrlFi(int);
s32 get_instance__13TParticleCtrlFv();
s32 spawn_particle_effect(s32, s32);
s32 TObjEneGibbles__sub_800D8988(void *);
extern const f32 TObjEneMe3Stelth__data_805DA808;
extern const f32 TObjEneMe3Stelth__data_805DA80C;
s32 try_spawn_ground_effect__16TObjEneMe3StelthFii(s32 arg0, s32 arg1);
s32 spawn_particle_effect(s32, s32);
s32 try_spawn_ground_effect__16TObjEneMe3StelthFii(s32 arg0, s32 arg1);
s32 play_sound_effect(s32, s32, s32, s32);
void play_hit_effect__16TObjEneMe3StelthFi(s32 arg0);
s32 objInBand__FP7GameObjf(void *, f32);
extern const f32 lbl_805DA814;
extern const f32 lbl_805DA818;
s32 try_spawn_ground_effect__16TObjEneMe3StelthFii(s32 arg0, s32 arg1);
void TObjEneMe3Stelth__sub_800F0C90(u8 *arg0);
}

extern "C" {

void destroy_resources__16TObjEneMe3StelthFv(void);
s32 TLobby__sub_803DA16C(void*);
s32 safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern u32 blob_shadow_texture_list;

void destroy_resources__16TObjEneMe3StelthFv(void) {
    if ((u32) blob_shadow_texture_list != 0U) {
        TLobby__sub_803DA16C((void*)blob_shadow_texture_list);
        safe_free__23TAdSinglePlyChrSelectGCFUi(blob_shadow_texture_list);
        blob_shadow_texture_list = 0U;
    }
}
void load_ha_u032_kage(void) { (*(int *)&blob_shadow_texture_list) = load_gvm_texture_file(lbl_8043D438); }
s32 try_spawn_ground_effect__16TObjEneMe3StelthFii(s32 arg0, s32 arg1) {
  Stack_800F0B4C stack;
  s32 temp_r31;
  s32 temp_r3_2;
  u8 *temp_r3;
  VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) arg1);
  stack.spC += TObjEneMe3Stelth__data_805DA808;
  temp_r3 = (u8 *) csnVectorUnder(&stack.sp8, arg0 + 0x120, 0x15);
  if ((temp_r3 != 0) && ((*((s32 *) (((s8 *) temp_r3) + 0))) & 4))
  {
    temp_r3_2 = ((s32)spawn_particle_effect((s32)((int) ((*((s32 *) (((s8 *) temp_r3) + 4))) + 0x38)), (s32)((int) 0x49)));
    if (temp_r3_2 != 0)
    {
      ;
      attach_particle_model((int) temp_r3_2, (int) get_particle_model__13TParticleCtrlFi((int) 2), (int) get_instance__13TParticleCtrlFv(), (int) 0, (int) 1, (f32) TObjEneMe3Stelth__data_805DA80C);
    }
    spawn_particle_effect((s32)((int) ((*((s32 *) (((s8 *) temp_r3) + 4))) + 0x38)), (s32)((int) 0xA4));
    TObjEneGibbles__sub_800D8988((void *) (arg0 + 0x38));
    return 1;
  }
  return 0;
}
void play_hit_effect__16TObjEneMe3StelthFi(s32 arg0) {
    if (try_spawn_ground_effect__16TObjEneMe3StelthFii((s32)(arg0), (s32)(arg0 + 0x38)) != 0) {
        play_sound_effect(0x3A836, arg0 + 0x38, 0, 0);
        return;
    }
    spawn_particle_effect(arg0 + 0x38, 0xF3);
    play_sound_effect(0x3A836, arg0 + 0x38, 0, 0);
}
void TObjEneMe3Stelth__sub_800F0C90(u8 *arg0) {
    if ((objInBand__FP7GameObjf(arg0, lbl_805DA814) != 0) || (objInBand__FP7GameObjf(arg0, lbl_805DA818) != 0)) {
        try_spawn_ground_effect__16TObjEneMe3StelthFii((s32)((s32)((void *) (arg0))), (s32)((s32)((void *) (arg0 + 0x38))));
    }
}

typedef struct Stack_800F0B4C Stack_800F0B4C;

}
