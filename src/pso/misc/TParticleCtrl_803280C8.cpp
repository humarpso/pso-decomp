#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 play_particle_at_active_slot__10TObjPlayerFiiiiii(u8, u8, s32, s32, s32, s32);
int TParticleCtrl__sub_803280C8(void* p);
void reset_ind_tev_stages__13TParticleCtrlFv(void);
int GXSetNumIndStages(int);
int GXSetTevDirect(int);
int fn_802A8260(void*);
int TObjPlayer__sub_803DC83C(int);

int TParticleCtrl__sub_803280C8(void* p) { return fn_802A8260(p); }

}
