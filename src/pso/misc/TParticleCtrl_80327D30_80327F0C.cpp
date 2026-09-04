#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__13TParticleCtrlFPvs(void *arg0, s16 arg1);
void set_tev_direct__13TParticleCtrlFi(s32 arg0);
int GXSetNumIndStages(int);
int GXSetTevDirect(int);
int TObjPlayer__sub_803DC83C(int);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
int fn_802A8260(void*);
int get_object__13TParticleCtrlFPv(void* p);
s32 play_particle_at_active_slot__10TObjPlayerFiiiiii(u8, u8, s32, s32, s32, s32);
void queue_destruction__7TObjectFv(void *);
void reset_ind_tev_stages__13TParticleCtrlFv(void);

extern M2C_UNK lbl_804ED598[];

void *__dt__13TParticleCtrlFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804ED598;
        if (M2C_FIELD(arg0, void **, 0x40) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x40)); M2C_FIELD(arg0, M2C_UNK *, 0x40) = 0; }
        M2C_FIELD(arg0, M2C_UNK *, 0x40) = 0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void set_tev_direct__13TParticleCtrlFi(s32 arg0) {
    if (arg0 != 0) {
        GXSetTevDirect(1);
    } else {
        GXSetTevDirect(0);
    }
    GXSetNumIndStages(0);
    TObjPlayer__sub_803DC83C(0);
}

}
