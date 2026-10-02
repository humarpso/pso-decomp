#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_800F0B4C
{
  M2C_UNK sp8;
  f32 spC;
  u8 trailing_storage[0x4];
};

extern "C" {
int TLanguage__sub_801E4874(void*);
    extern unsigned char lbl_8043D438[];
extern u32 lbl_805D52F8;
void load_ha_u032_kage(void);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 TObjFish__sub_800660D4(int, int, int, int, int, f32);
u8 *csnVectorUnder(M2C_UNK *, s32, s32);
s32 TParticleCtrl__sub_80086884(int);
s32 get_instance__13TParticleCtrlFv();
M2C_UNK spawn_particle_effect(s32, M2C_UNK);
s32 TObjEneGibbles__sub_800D8988(void *);
extern const f32 TObjEneMe3Stelth__data_805DA808;
extern const f32 TObjEneMe3Stelth__data_805DA80C;
s32 TObjEneMe3Stelth__sub_800F0B4C(s32 arg0, s32 arg1);
M2C_UNK spawn_particle_effect(s32, M2C_UNK);
s32 TObjEneMe3Stelth__sub_800F0B4C(s32 arg0, s32 arg1);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, s32, M2C_UNK, M2C_UNK);
void play_hit_effect__16TObjEneMe3StelthFi(s32 arg0);
s32 objInBand__FP7GameObjf(void *, f32);
extern const f32 lbl_805DA814;
extern const f32 lbl_805DA818;
s32 TObjEneMe3Stelth__sub_800F0B4C(s32 arg0, s32 arg1);
void TObjEneMe3Stelth__sub_800F0C90(u8 *arg0);
}

extern "C" {

void destroy_resources__16TObjEneMe3StelthFv(void);
M2C_UNK TLobby__sub_803DA16C(void*);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern u32 lbl_805D52F8;

void destroy_resources__16TObjEneMe3StelthFv(void) {
    if ((u32) lbl_805D52F8 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D52F8);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D52F8);
        lbl_805D52F8 = 0U;
    }
}
void load_ha_u032_kage(void) { (*(int *)&lbl_805D52F8) = TLanguage__sub_801E4874(lbl_8043D438); }
s32 TObjEneMe3Stelth__sub_800F0B4C(s32 arg0, s32 arg1) {
  Stack_800F0B4C stack;
  s32 temp_r31;
  s32 temp_r3_2;
  u8 *temp_r3;
  VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) arg1);
  stack.spC += TObjEneMe3Stelth__data_805DA808;
  temp_r3 = (u8 *) csnVectorUnder(&stack.sp8, arg0 + 0x120, 0x15);
  if ((temp_r3 != 0) && ((*((s32 *) (((s8 *) temp_r3) + 0))) & 4))
  {
    temp_r3_2 = ((s32)spawn_particle_effect((s32)((int) ((*((s32 *) (((s8 *) temp_r3) + 4))) + 0x38)), (M2C_UNK)((int) 0x49)));
    if (temp_r3_2 != 0)
    {
      ;
      TObjFish__sub_800660D4((int) temp_r3_2, (int) TParticleCtrl__sub_80086884((int) 2), (int) get_instance__13TParticleCtrlFv(), (int) 0, (int) 1, (f32) TObjEneMe3Stelth__data_805DA80C);
    }
    spawn_particle_effect((s32)((int) ((*((s32 *) (((s8 *) temp_r3) + 4))) + 0x38)), (M2C_UNK)((int) 0xA4));
    TObjEneGibbles__sub_800D8988((void *) (arg0 + 0x38));
    return 1;
  }
  return 0;
}
void play_hit_effect__16TObjEneMe3StelthFi(s32 arg0) {
    if (TObjEneMe3Stelth__sub_800F0B4C((s32)(arg0), (s32)(arg0 + 0x38)) != 0) {
        TBoss3Volopt__sub_8022675C(0x3A836, arg0 + 0x38, 0, 0);
        return;
    }
    spawn_particle_effect(arg0 + 0x38, 0xF3);
    TBoss3Volopt__sub_8022675C(0x3A836, arg0 + 0x38, 0, 0);
}
void TObjEneMe3Stelth__sub_800F0C90(u8 *arg0) {
    if ((objInBand__FP7GameObjf(arg0, lbl_805DA814) != 0) || (objInBand__FP7GameObjf(arg0, lbl_805DA818) != 0)) {
        TObjEneMe3Stelth__sub_800F0B4C((s32)((s32)((void *) (arg0))), (s32)((s32)((void *) (arg0 + 0x38))));
    }
}

typedef struct Stack_800F0B4C Stack_800F0B4C;

}
