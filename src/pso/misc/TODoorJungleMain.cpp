#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TODoorJungleMain__vt4(void *arg0, s16 *arg1, s32 arg2);
s32 TODoorJungleMain__vt8(s32 arg0, f32 farg0, f32 farg1);
f32 fn_8013157C(s32, s32);
s32 fn_801A2340(s32, f32, f32);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK set_indexed_flags(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 lbl_805D4DF0;

s32 TODoorJungleMain__vt8(s32 arg0, f32 farg0, f32 farg1) {
    if (fn_8013157C(arg0 + 0x38, lbl_805D4DF0 + 0x178) < (farg1 * farg1)) {
        return 1;
    }
    return fn_801A2340(arg0, farg0, farg1);
}

extern const f64 lbl_80465410;

void TODoorJungleMain__vt4(void *arg0, s16 *arg1, s32 arg2) {
    if ((arg1 != NULL) && ((s16) *arg1 == 1)) {
        M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0) | 1);
        if (arg2 == 0) {
            M2C_FIELD(arg0, f32 *, 0xB4) = (f32) (M2C_FIELD(M2C_FIELD(arg0, void **, 0xBC), u32 *, 4) - 1);
            set_indexed_flags((M2C_UNK)arg0, 0, 8);
            if ((u32) M2C_FIELD(arg0, u32 *, 0xDC) != 0U) {
                queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xDC));
                M2C_FIELD(arg0, u32 *, 0xDC) = 0U;
            }
        }
    }
}

}
