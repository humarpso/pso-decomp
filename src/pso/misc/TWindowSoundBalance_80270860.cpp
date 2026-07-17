#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_balance__19TWindowSoundBalanceFPvPv(void *arg0, void *arg1);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, s32);
M2C_UNK TWindowSubComCard__sub_8024503C(void *, s32, s32);
s32 is_active__17TWindowOptionCtrlFPv(void *);

void apply_balance__19TWindowSoundBalanceFPvPv(void *arg0, void *arg1) {
    s32 temp;

    temp = get_array_entry__20TWindowSubStatusDispFPvi(arg0, (s32) ((s8 *) arg0)[0x61]);
    TWindowSubComCard__sub_8024503C(arg1, temp, is_active__17TWindowOptionCtrlFPv(arg0));
}

}
