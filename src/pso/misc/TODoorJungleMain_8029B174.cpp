#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TODoorJungleMain__vt4(void *arg0, s16 *arg1, s32 arg2);
M2C_UNK set_indexed_flags(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv(void *);

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
