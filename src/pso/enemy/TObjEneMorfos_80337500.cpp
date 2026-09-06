#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, int);
u8 *TBoss8Dragon__sub_8007A544(s32, M2C_UNK);
s32 TObjEneMorfos__sub_803375F0(M2C_UNK arg0, s32 arg1);
}

extern "C" {

void *__dt__13TObjEneMorfosFPvs(void *arg0, s16 arg1);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);
void __dl__7TObjectFPv(void *);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK lbl_804EF130[];

s32 TObjEneMorfos__sub_803375F0(M2C_UNK arg0, s32 arg1) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(TBoss8Dragon__sub_8007A544(arg1, 0x16EF));
    if (temp_r3 == NULL) {
        return 0;
    }
    VecCopy__FP3VecPC3Vec((void *) (arg1), (int) (M2C_FIELD(temp_r3, s32 *, 4)));
    return 1;
}

void *__dt__13TObjEneMorfosFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EF130;
        if (M2C_FIELD(arg0, void **, 0xE0) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xE0)); }
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
