#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_hit_reaction__12TBoss3VoloptFPvf(void *arg0, f32 farg0);
M2C_UNK check_and_notify__12TBoss3VoloptFv(void *);
M2C_UNK fn_80040B3C(void *, M2C_UNK);

s32 obj_testFlags30(void*, M2C_UNK);
extern f32 lbl_805D87B8;

void apply_hit_reaction__12TBoss3VoloptFPvf(void *arg0, f32 farg0) {
    if ((obj_testFlags30(arg0, 0x800) == 0) && !(M2C_FIELD(arg0, s32 *, 0x388) & 0x20000) && ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 0xC)) {
        check_and_notify__12TBoss3VoloptFv(arg0);
        M2C_FIELD(arg0, f32 *, 0x508) = (f32) (lbl_805D87B8 + farg0);
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
        fn_80040B3C(arg0, 0xC);
    }
}

}
