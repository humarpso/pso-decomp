#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_parts__12TBoss8DragonFPv(void *arg0);
void update_particle_positions__12TBoss8DragonFPv(void *arg0);
void TParticleCtrl__sub_80088010(void *);
void copy_pos__11TNowLoadingFPvPv(void *, void *);
M2C_UNK queue_destruction__7TObjectFv(void *);

void free_parts__12TBoss8DragonFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x72C) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x72C));
        M2C_FIELD(arg0, u32 *, 0x72C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x728) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x728));
        M2C_FIELD(arg0, u32 *, 0x728) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x724) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x724));
        M2C_FIELD(arg0, u32 *, 0x724) = 0U;
    }
}

extern M2C_UNK lbl_804882BC[];

void update_particle_positions__12TBoss8DragonFPv(void *arg0) {
    if (M2C_FIELD(arg0, void **, 0x724) != NULL) {
        copy_pos__11TNowLoadingFPvPv(M2C_FIELD(arg0, void **, 0x724), lbl_804882BC);
        TParticleCtrl__sub_80088010(M2C_FIELD(arg0, void **, 0x724));
    }
    if (M2C_FIELD(arg0, void **, 0x728) != NULL) {
        copy_pos__11TNowLoadingFPvPv(M2C_FIELD(arg0, void **, 0x728), lbl_804882BC);
        TParticleCtrl__sub_80088010(M2C_FIELD(arg0, void **, 0x728));
    }
    if (M2C_FIELD(arg0, void **, 0x72C) != NULL) {
        copy_pos__11TNowLoadingFPvPv(M2C_FIELD(arg0, void **, 0x72C), lbl_804882BC);
        TParticleCtrl__sub_80088010(M2C_FIELD(arg0, void **, 0x72C));
    }
}

}
