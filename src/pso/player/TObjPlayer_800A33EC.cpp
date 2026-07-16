#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_projectile_lifetime__10TObjPlayerFPv(u8 *arg0);
M2C_UNK TBoss4Zako__sub_803D8910(void *, void *);
s32 TObjPlayer__sub_800A3290(void *, int);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK copy_pos__11TNowLoadingFPvPv(void *, void *);
M2C_UNK queue_destruction__7TObjectFv(void *);

void update_projectile_lifetime__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_r0;

    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x44), (void *) (arg0 + 0x38));
    TBoss4Zako__sub_803D8910((void *) (arg0 + 0x38), (void *) (arg0 + 0xAC));
    {
        void *p = (void *) M2C_FIELD(arg0, void **, 0xD0);
        if (p != NULL) {
            copy_pos__11TNowLoadingFPvPv(p, (void *) (arg0 + 0x38));
        }
    }
    if (TObjPlayer__sub_800A3290((void *) (arg0), (int) (M2C_FIELD(arg0, u16 *, 0xC8))) != 0) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xC4) - 1;
    M2C_FIELD(arg0, s32 *, 0xC4) = temp_r0;
    if (temp_r0 <= 0) {
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}

}
