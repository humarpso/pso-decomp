#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TObjPlayer__sub_800DC478(u8 *arg0, s32 arg1, f32 farg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, int);
u8 *TBoss8Dragon__sub_8007A544(s32, M2C_UNK);
s32 TObjPlayer__sub_800DC5F4(M2C_UNK arg0, s32 arg1);
}

extern "C" {

void TObjPlayer__sub_800DC444(void);
void *TObjPlayer__sub_800DC7B0(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);
void queue_destruction__7TObjectFv(void *);

void TObjPlayer__sub_800DC444(void) {  }

extern M2C_UNK lbl_80494E10[];

s32 TObjPlayer__sub_800DC478(u8 *arg0, s32 arg1, f32 farg0) {
    f32 temp_f2;
    if ((s16) M2C_FIELD(arg0, s16 *, 0xB8) == arg1) {
        temp_f2 = M2C_FIELD(arg0, f32 *, 0xC0);
        if ((temp_f2 >= farg0) && (temp_f2 < (farg0 + M2C_FIELD(arg0, f32 *, 0xC8)))) {
            return 1;
        }
    }
    return 0;
}

s32 TObjPlayer__sub_800DC5F4(M2C_UNK arg0, s32 arg1) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(TBoss8Dragon__sub_8007A544(arg1, 0x16EF));
    if (temp_r3 == NULL) {
        return 0;
    }
    VecCopy__FP3VecPC3Vec((void *) (arg1), (int) (M2C_FIELD(temp_r3, s32 *, 4)));
    return 1;
}

void *TObjPlayer__sub_800DC7B0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80494E10;
        if (M2C_FIELD(arg0, void **, 0xE0) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xE0)); M2C_FIELD(arg0, M2C_UNK *, 0xE0) = 0; }
        if (M2C_FIELD(arg0, void **, 0xE4) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xE4)); M2C_FIELD(arg0, M2C_UNK *, 0xE4) = 0; }
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
